/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406C7AC0
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x14067E994 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetDeviceStatus @ 0x1406C3FD8 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406C6068 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x1406C78A0 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x14076C7C4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x140869E8C (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086B97C (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x140965C20 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140965DBC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140966230 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140966320 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096656C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140966FB0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x1409670A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x140967D60 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
