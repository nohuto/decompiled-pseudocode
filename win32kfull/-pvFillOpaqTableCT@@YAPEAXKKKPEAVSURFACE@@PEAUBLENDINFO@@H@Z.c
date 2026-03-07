__int64 __fastcall pvFillOpaqTableCT(
        __int64 a1,
        int a2,
        unsigned int a3,
        struct SURFACE *a4,
        struct BLENDINFO *a5,
        int a6)
{
  unsigned int v9; // r15d
  __int64 v10; // rbx
  char v11; // di

  v9 = a1;
  v10 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  if ( *(_QWORD *)a4 == *(_QWORD *)(v10 + 464)
    && a3 == *(_DWORD *)(v10 + 476)
    && a2 == *(_DWORD *)(v10 + 472)
    && *(_DWORD *)(v10 + 8584) == *(_DWORD *)(v10 + 484) )
  {
    v11 = 1;
    if ( !a6 )
      return v10;
  }
  else
  {
    v11 = 0;
  }
  vGetBlendInfo(v9, a4, a2, a5);
  if ( !v11 )
    vClearTypeLookupTableLoop(v9, a4, a5, a2, a3);
  return v10;
}
