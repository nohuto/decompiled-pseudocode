__int64 __fastcall ST_STORE<SM_TRAITS>::StDmSinglePageTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // r9
  char v12; // bl
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  int v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0;
  if ( a4 )
  {
    v12 = 4;
    v11 = SmMapPage(a5, &v16);
    if ( (*(_DWORD *)(a4 + 8) & 0x8000000) != 0 )
      v12 = 16;
  }
  else
  {
    v11 = a5;
    v12 = 0;
  }
  if ( !v11 )
    return 3221225626LL;
  v14 = v11 + ((unsigned __int64)*(unsigned __int16 *)(a6 + 6) << 12);
  v15 = v14 | 1;
  if ( (v12 & 0x10) == 0 )
    v15 = v14;
  return ST_STORE<SM_TRAITS>::StDmSinglePageCopy(a1, a2, a3, v15, a6, a7);
}
