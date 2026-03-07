__int64 __fastcall PopWin32kPowerSettingCallback(__int128 *a1, int *a2, int a3)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v5 = 0uLL;
  if ( a3 != 4 || !a2 )
    return 3221225485LL;
  v3 = *a1;
  v6 = *a2;
  v5 = v3;
  PopBroadcastSessionInfo(0LL, 20LL, &v5);
  return 0LL;
}
