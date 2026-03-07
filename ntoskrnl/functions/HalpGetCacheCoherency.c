char __fastcall HalpGetCacheCoherency(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rcx
  char result; // al
  __int128 v6; // [rsp+40h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+60h] [rbp-18h]

  *a3 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( a1 )
  {
    result = *(_BYTE *)(a1 + 72);
    *a3 = result;
  }
  else if ( a2 && (int)IoQueryInterface(a2, 1, (int)&GUID_DMA_CACHE_COHERENCY_INTERFACE, 40, 1, 0LL, &v6) >= 0 )
  {
    v4 = *((_QWORD *)&v6 + 1);
    *a3 = v8;
    return (*((__int64 (__fastcall **)(__int64))&v7 + 1))(v4);
  }
  else
  {
    *a3 = 1;
    result = KeSystemFullyCacheCoherent();
    if ( !result )
      *a3 = 0;
  }
  return result;
}
