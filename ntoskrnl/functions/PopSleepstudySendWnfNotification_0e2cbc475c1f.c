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
