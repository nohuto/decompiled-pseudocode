/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ccccc @ 0x1C0221F40
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C00982F4 (ShouldEnableInputVirtualization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall WPP_RECORDER_AND_TRACE_SF_ccccc(__int64 a1, char a2, char a3)
{
  struct _LIST_ENTRY *Flink; // rdi
  char result; // al
  int v6; // [rsp+28h] [rbp-81h]
  char v7[8]; // [rsp+88h] [rbp-21h] BYREF
  char v8[8]; // [rsp+90h] [rbp-19h] BYREF
  char v9[8]; // [rsp+98h] [rbp-11h] BYREF
  char v10[8]; // [rsp+A0h] [rbp-9h] BYREF
  _BYTE v11[16]; // [rsp+A8h] [rbp-1h] BYREF

  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v7[0] = byte_1C02D86F2;
  v8[0] = byte_1C02D86F3;
  v9[0] = byte_1C02D86F0;
  v10[0] = byte_1C02D86F1;
  result = byte_1C02D8708;
  v11[0] = byte_1C02D8708;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, _BYTE *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
               17LL,
               v11,
               1LL,
               v10,
               1LL,
               v9,
               1LL,
               v8,
               1LL,
               v7,
               1LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v6) = 17;
    return WppAutoLogTrace(
             Flink,
             4LL,
             12LL,
             &WPP_6faef5775b8438fac85e142323c35be9_Traceguids,
             v6,
             v11,
             1LL,
             v10,
             1LL,
             v9,
             1LL,
             v8,
             1LL,
             v7,
             1LL,
             0LL);
  }
  return result;
}
