__int64 __fastcall PopPowerAggregatorNotifyCsStateExited(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-30h] BYREF
  __int128 v5; // [rsp+30h] [rbp-20h]
  __int64 v6; // [rsp+40h] [rbp-10h]
  unsigned int v7; // [rsp+60h] [rbp+10h] BYREF

  v7 = -1;
  LOBYTE(a1) = 1;
  v6 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  PopBlockSessionSwitch(a1, &v7);
  if ( TtmIsEnabled(v2, v1) )
  {
    TtmNotifyLowPowerStateExited(v7);
  }
  else
  {
    v4 = 5uLL;
    v5 = 0uLL;
    v6 = 0LL;
    PopInvokeWin32Callout(5u, (__int64)&v4, 1u, (int *)&v7);
  }
  return PopBlockSessionSwitch(0LL, &v7);
}
