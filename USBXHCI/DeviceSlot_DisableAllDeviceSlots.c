/*
 * XREFs of DeviceSlot_DisableAllDeviceSlots @ 0x1C000FCF8
 * Callers:
 *     DeviceSlot_D0EntryCleanupState @ 0x1C000FF08 (DeviceSlot_D0EntryCleanupState.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     DeviceSlot_ControllerResetPostReset @ 0x1C0037BD0 (DeviceSlot_ControllerResetPostReset.c)
 * Callees:
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 */

__int64 __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    result = i;
    if ( *(_QWORD *)(v3 + 8LL * i) )
      result = UsbDevice_SetDeviceDisabled();
  }
  return result;
}
