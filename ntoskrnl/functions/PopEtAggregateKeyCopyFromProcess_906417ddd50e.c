void __fastcall PopEtAggregateKeyCopyFromProcess(__int64 *a1, struct _KPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v3 = a2[2].Affinity.StaticBitmap[4];
  v7 = 0LL;
  v8 = 0LL;
  v6 = *(_OWORD *)(v3 + 448);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v8) = (unsigned int)PsGetProcessId(a2);
    v7 = a2[2].Affinity.StaticBitmap[6];
  }
  PopEtAggregateKeyCopy(a1, &v6);
}
