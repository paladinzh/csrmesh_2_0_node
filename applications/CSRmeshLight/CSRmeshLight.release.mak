###########################################################
# Makefile generated by xIDE for uEnergy                   
#                                                          
# Project: CSRmeshLight
# Configuration: Release
# Generated: ���� ���� 4 12:11:30 2016
#                                                          
# WARNING: Do not edit this file. Any changes will be lost 
#          when the project is rebuilt.                    
#                                                          
###########################################################

XIDE_PROJECT=CSRmeshLight
XIDE_CONFIG=Release
OUTPUT=CSRmeshLight
OUTDIR=C:/csrmesh_2_0_node/applications/CSRmeshLight
DEFS=

OUTPUT_TYPE=0
USE_FLASH=0
ERASE_NVM=1
CSFILE_CSR101x_A05=CSRmesh_light_csr101x_A05.keyr
MASTER_DB=app_gatt_db.db
LIBPATHS=..\..\libraries
INCPATHS=..\..\include
STRIP_SYMBOLS=0
OTAU_BOOTLOADER=1
OTAU_CSFILE=otau_bootloader.keyr
OTAU_NAME=CSRmesh-OTA
OTAU_SECRET=00112233445566778899aabbccddeeff
OTAU_VERSION=7
OTAU_SLOT_1=0x4300
OTAU_SLOT_END=0x10000

LIBS=csrmesh light_server power_server attention_server data_server data_client battery_server 
DBS=\
\
      app_gatt_db.db\
      csr_ota_db.db\
      gap_service_db.db\
      gatt_service_db.db\
      mesh_control_service_db.db

INPUTS=\
      csr_mesh_light_hw.c\
      csr_mesh_light.c\
      csr_mesh_light_gatt.c\
      csr_mesh_light_util.c\
      csr_ota_service.c\
      fast_pwm.c\
      gap_service.c\
      gatt_service.c\
      iot_hw.c\
      mesh_control_service.c\
      nvm_access.c\
      app_data_stream.c\
      battery_hw.c\
      app_fw_event_handler.c\
      app_mesh_event_handler.c\
      pio_ctrlr_code.asm\
      $(DBS)

KEYR=\
      CSRmesh_light_csr101x_A05.keyr\
      otau_bootloader.keyr

# Project-specific options
hw_version=v1

-include CSRmeshLight.mak
include $(SDK)/genmakefile.uenergy
