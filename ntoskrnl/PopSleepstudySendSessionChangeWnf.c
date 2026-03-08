/*
 * XREFs of PopSleepstudySendSessionChangeWnf @ 0x140872FAC
 * Callers:
 *     PopSleepstudySendSessionChangeEvent @ 0x14087A160 (PopSleepstudySendSessionChangeEvent.c)
 *     PopSleepstudyInitialize @ 0x140B470D0 (PopSleepstudyInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSleepstudySendSessionChangeWnf(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData((__int64)&WNF_PO_SLEEPSTUDY_SESSION_CHANGE, (__int64)&v4);
}
