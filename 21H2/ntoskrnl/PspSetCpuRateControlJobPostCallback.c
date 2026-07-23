/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x14060A300
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14060A5F0 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v2 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = (a2 + 128) & -(__int64)(a2 != 0);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
           a1,
           CurrentThread,
           &v9,
           v5);
    v7 = v6;
    if ( !v6 )
      break;
    PspSetProcessSchedulingGroup(v6, v4);
    v5 = v7;
    a1 = v2;
  }
  return 0LL;
}
