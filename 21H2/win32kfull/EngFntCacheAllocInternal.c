/*
 * XREFs of EngFntCacheAllocInternal @ 0x1C028603C
 * Callers:
 *     EngFntCacheAlloc @ 0x1C0286020 (EngFntCacheAlloc.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DC6E8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     EngCloseFNTCache @ 0x1C00EF2AC (EngCloseFNTCache.c)
 *     SearchFntCacheNewLink @ 0x1C0285C74 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0x1C0285EFC (bReAllocCacheFile.c)
 */

__int64 __fastcall EngFntCacheAllocInternal(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v8; // rsi
  _DWORD *v9; // rax

  v3 = qword_1C0335DA8;
  v4 = 0LL;
  *a3 = 0;
  if ( !v3 || !a1 )
    return 0LL;
  if ( (dword_1C0335DA0 & 2) != 0 )
  {
    v8 = (a2 + 7) & 0xFFFFFFF8;
    if ( ((unsigned __int64)(v8 + *(_QWORD *)(v3 + 32)) < *(_QWORD *)(v3 + 40) || (unsigned int)bReAllocCacheFile(a2))
      && (v9 = (_DWORD *)SearchFntCacheNewLink(a1)) != 0LL )
    {
      v3 = qword_1C0335DA8;
      if ( v9[4] || v9[5] )
      {
        v9[6] |= 1u;
      }
      else
      {
        v4 = *(_QWORD *)(qword_1C0335DA8 + 32);
        *(_QWORD *)(qword_1C0335DA8 + 32) = v4 + v8;
        v9[4] = a2;
        v9[5] = v4 - *(_DWORD *)(v3 + 24);
      }
      *(_DWORD *)(v3 + 20) = 1;
    }
    else
    {
      v3 = qword_1C0335DA8;
    }
  }
  else
  {
    *(_DWORD *)(v3 + 16) |= 2u;
  }
  if ( (*(_DWORD *)(v3 + 16) & 1) != 0 )
  {
    EngCloseFNTCache();
    v4 = 0LL;
    *a3 = 1;
  }
  return v4;
}
