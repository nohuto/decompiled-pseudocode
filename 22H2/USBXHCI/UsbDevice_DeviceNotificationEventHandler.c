/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C0045B0C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0006130 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x1C0019504 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char result; // al
  char v5; // al

  v2 = a2;
  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_BYTE *)(a2 + 1);
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        a2,
        12,
        68,
        (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1,
        v5);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C00617C8)(
             UcxDriverGlobals,
             *(_QWORD *)a1,
             *(unsigned __int8 *)(v2 + 1));
  }
  return result;
}
