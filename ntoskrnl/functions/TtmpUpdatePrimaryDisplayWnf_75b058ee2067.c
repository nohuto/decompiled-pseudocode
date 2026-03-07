char __fastcall TtmpUpdatePrimaryDisplayWnf(int *a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  _OWORD v5[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]
  unsigned int v7; // [rsp+90h] [rbp+18h] BYREF

  v7 = a3;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    v3 = *(_DWORD *)(a2 + 72);
    if ( (v3 & 1) != 0 )
    {
      memset(v5, 0, sizeof(v5));
      v6 = 0LL;
      TtmpStartCallout((__int64)v5, a1, a2, 6, (__int64)ZwUpdateWnfStateData, a3);
      ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v7);
      LOBYTE(v3) = TtmpStopCallout((__int64)v5, 0);
    }
  }
  return v3;
}
