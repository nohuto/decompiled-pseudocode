__int64 __fastcall CmpGetSecurityCacheEntryForKcbStack(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rbp
  __int16 v4; // bx
  __int64 KcbAtLayerHeight; // rax
  __int64 v9; // rdi
  __int16 v10; // ax

  v3 = 0LL;
  v4 = *(_WORD *)(a1 + 2);
  if ( v4 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
      v9 = KcbAtLayerHeight;
      if ( *(_WORD *)(KcbAtLayerHeight + 66) )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          break;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) == -1 || !CmRmIsKCBVisible(KcbAtLayerHeight, a2) )
      {
        v10 = v4;
      }
      else
      {
        v3 = v9;
        if ( *(_WORD *)(v9 + 66) && *(_BYTE *)(v9 + 65) )
          break;
        v10 = v4;
      }
      v4 = v10 - 1;
    }
    while ( (__int16)(v10 - 1) >= 0 );
  }
  if ( a3 )
    *a3 = *(_WORD *)(v3 + 66);
  return CmGetKCBCacheSecurity(v3, a2);
}
