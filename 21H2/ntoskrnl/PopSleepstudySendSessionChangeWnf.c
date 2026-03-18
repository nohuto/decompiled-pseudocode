/*
 * XREFs of PopSleepstudySendSessionChangeWnf @ 0x140811C98
 * Callers:
 *     PopSleepstudySendSessionChangeEvent @ 0x140809E5C (PopSleepstudySendSessionChangeEvent.c)
 *     PopSleepstudyInitialize @ 0x140B02344 (PopSleepstudyInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSleepstudySendSessionChangeWnf(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData((__int64)WNF_PO_SLEEPSTUDY_SESSION_CHANGE, (__int64)&v4);
}
