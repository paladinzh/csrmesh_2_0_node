/******************************************************************************
 *  Copyright 2015 Qualcomm Technologies International, Ltd.
 *  Bluetooth Low Energy CSRmesh 2.0
 *  CSRmesh is a product of Qualcomm Technologies International Ltd.
 */
/*! \file battery_server.h
 *
 *  \brief This file provides the prototypes of the server functions defined
 *         in the CSRmesh Battery model
 */
/******************************************************************************/

#ifndef __BATTERY_SERVER_H__
#define __BATTERY_SERVER_H__

/*! \addtogroup Battery_Server
 * @{
 */
#include "battery_model.h"

/*============================================================================*
    Public Function Definitions
 *============================================================================*/

/*----------------------------------------------------------------------------*
 * BatteryModelInit
 */
/*! \brief Model Initialisation
 *  
 *   Registers the model handler with the CSRmesh. Sets the CSRmesh to report
 *   num_groups as the maximum number of groups supported for the model
 *
 *  \param nw_id Identifier of the network to which the model has to be
                 registered.
 *  \param group_id_list Pointer to a uint16 array to hold assigned group_ids. 
 *                       This must be NULL if no groups are supported
 *  \param num_groups Size of the group_id_list. This must be 0 if no groups
 *                    are supported.
 *  \param app_callback Pointer to the application callback function. This
 *                    function will be called to notify all model specific messages
 *
 *  \returns CSRmeshResult. Refer to \ref CSRmeshResult.
 */
/*----------------------------------------------------------------------------*/
extern CSRmeshResult BatteryModelInit(CsrUint8 nw_id, CsrUint16 *group_id_list, CsrUint16 num_groups,
                                         CSRMESH_MODEL_CALLBACK_T app_callback);


/*----------------------------------------------------------------------------*
 * BatteryState
 */
/*! \brief Current battery state
 * 
 * This function packs the given parameters into a CSRmesh message and sends
 * it over the network. 
 * 
 *
 * \param nw_id Network identifier over which the message has to be sent.
 * \param dest_id 16-bit identifier of the destination device/group
 * \param p_params Pointer to the message parameters of type
              \ref CSRMESH_BATTERY_STATE_T
 *
 * \returns CSRmeshResult. Refer to \ref CSRmeshResult.
 */
/*----------------------------------------------------------------------------*/
extern CSRmeshResult BatteryState(
                                  CsrUint8 nw_id,
                                  CsrUint16 dest_id,
                                  CSRMESH_BATTERY_STATE_T *p_params);

/*!@} */
#endif /* __BATTERY_SERVER_H__ */

