/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C004857C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x1C001E3F8 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(__int64 a1, _DWORD *a2)
{
  char result; // al
  char *v4; // rbx
  int v5; // edx

  result = *a2 & 0xF0;
  if ( result == 16 )
  {
    v4 = (char *)a2 + 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(unsigned __int8 *)(a1 + 135);
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v5,
        12,
        68,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        *(_BYTE *)(a1 + 135),
        *(_QWORD *)a1,
        *v4);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C0064828)(
             UcxDriverGlobals,
             *(_QWORD *)a1,
             (unsigned __int8)*v4);
  }
  return result;
}
