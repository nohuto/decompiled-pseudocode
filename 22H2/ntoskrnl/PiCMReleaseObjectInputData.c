/*
 * XREFs of PiCMReleaseObjectInputData @ 0x14079A5E8
 * Callers:
 *     PiCMOpenDeviceInterfaceKey @ 0x140681D74 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMGetDeviceStatus @ 0x140799E78 (PiCMGetDeviceStatus.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14079A200 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMValidateDeviceInstance @ 0x14079A3C8 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x1407BEE44 (PiCMOpenDeviceKey.c)
 *     PiCMOpenClassKey @ 0x140860768 (PiCMOpenClassKey.c)
 *     PiCMGetObjectList @ 0x14086CABC (PiCMGetObjectList.c)
 *     PiCMOpenObjectKey @ 0x14086DE9C (PiCMOpenObjectKey.c)
 *     PiCMCreateObject @ 0x140968C40 (PiCMCreateObject.c)
 *     PiCMDeleteClassKey @ 0x140968DDC (PiCMDeleteClassKey.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x140969250 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140969340 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x14096958C (PiCMDeleteObject.c)
 *     PiCMDeviceAction @ 0x14096973C (PiCMDeviceAction.c)
 *     PiCMGetDeviceDepth @ 0x140969FD0 (PiCMGetDeviceDepth.c)
 *     PiCMGetObjectPropertyKeys @ 0x14096A0C8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14096A324 (PiCMQueryRemove.c)
 *     PiCMUnregisterDeviceInterface @ 0x14096AD80 (PiCMUnregisterDeviceInterface.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14022BC8C (PiControlFreeUserModeCallersBuffer.c)
 */

__int64 __fastcall PiCMReleaseObjectInputData(__int64 a1)
{
  void *v1; // rdx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, v1);
  return 0LL;
}
