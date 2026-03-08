/*
 * XREFs of ?vFlushCache@RFONTOBJ@@QEAAXXZ @ 0x1C02FFD48
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C011DE48 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C011E244 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02FF7F8 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFlushCache(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  int v3; // r11d
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  unsigned __int64 v7; // r9
  _QWORD *v8; // r8

  v1 = *(_QWORD *)this + 512LL;
  v2 = *(_QWORD *)(*(_QWORD *)this + 568LL);
  if ( v2 && *(_DWORD *)(*(_QWORD *)this + 560LL) == *(_DWORD *)(*(_QWORD *)this + 556LL) )
  {
    *(_QWORD *)(*(_QWORD *)this + 576LL) = v2;
    *(_QWORD *)(v1 + 72) = v2 + 8;
    *(_QWORD *)(v1 + 80) = *(unsigned int *)(v1 + 36) + v2 - 8;
  }
  v3 = *(_DWORD *)(*(_QWORD *)this + 640LL);
  v4 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)this + 480LL) + 8LL);
  if ( v4 )
    *v4 = 0LL;
  v5 = *(_QWORD **)(v1 + 24);
  if ( v5 )
  {
    v6 = *(_QWORD **)(v1 + 24);
    do
    {
      if ( v5 == v6 )
      {
        v7 = *(_QWORD *)v1;
      }
      else if ( *v5 )
      {
        v7 = (unsigned __int64)(v5 + 228);
      }
      else
      {
        v7 = *(_QWORD *)(v1 + 16);
      }
      v8 = v5 + 2;
      if ( (unsigned __int64)(v5 + 2) < v7 )
      {
        do
        {
          *v8 = 0LL;
          v8 = (_QWORD *)((char *)v8 + (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64);
        }
        while ( (unsigned __int64)v8 < v7 );
        v6 = *(_QWORD **)(v1 + 24);
      }
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
}
