/*
 * XREFs of DeviceSlot_D0EntryCleanupState @ 0x1C000FF08
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     DeviceSlot_DisableAllDeviceSlots @ 0x1C000FCF8 (DeviceSlot_DisableAllDeviceSlots.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00141F4 (WPP_RECORDER_SF_qd.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     XilDeviceSlot_InitializeSecureScratchpadBuffers @ 0x1C0038394 (XilDeviceSlot_InitializeSecureScratchpadBuffers.c)
 */

__int64 __fastcall DeviceSlot_D0EntryCleanupState(__int64 a1, int a2)
{
  __int64 *i; // rbx
  char v5; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      10,
      14,
      (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids,
      a1,
      v5);
  }
  if ( *(_BYTE *)(a1 + 80) )
  {
    XilDeviceSlot_InitializeSecureScratchpadBuffers(a1 + 16);
  }
  else
  {
    for ( i = *(__int64 **)(a1 + 56); i != (__int64 *)(a1 + 56); i = (__int64 *)*i )
      memset((void *)i[2], 0, *((unsigned int *)i + 10));
  }
  return DeviceSlot_DisableAllDeviceSlots(a1);
}
