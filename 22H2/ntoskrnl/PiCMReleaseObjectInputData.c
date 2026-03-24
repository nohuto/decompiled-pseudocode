/*
 * XREFs of PiCMReleaseObjectInputData @ 0x1406B1920
 * Callers:
 *     PiCMGetDeviceStatus @ 0x140684648 (PiCMGetDeviceStatus.c)
 *     PiCMValidateDeviceInstance @ 0x140684800 (PiCMValidateDeviceInstance.c)
 *     PiCMGetObjectList @ 0x1406B1750 (PiCMGetObjectList.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072F1D0 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072F428 (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140734148 (PiCMGetDeviceDepth.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140767E04 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCreateObject @ 0x1408AFBF4 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x1408AFDAC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1408AFEC8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x1408AFFB8 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x1408B01F4 (PiCMDeleteObject.c)
 *     PiCMGetObjectPropertyKeys @ 0x1408B093C (PiCMGetObjectPropertyKeys.c)
 *     PiCMUnregisterDeviceInterface @ 0x1408B1148 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14032D940 (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
