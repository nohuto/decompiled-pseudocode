/*
 * XREFs of PopSleepstudySendWnfNotification @ 0x140879B54
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopSleepstudySendWnfNotification(__int64 a1, __int128 *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]

  v3 = *a2;
  v6 = a3;
  v5 = v3;
  return ZwUpdateWnfStateData(a1, (__int64)&v5);
}
