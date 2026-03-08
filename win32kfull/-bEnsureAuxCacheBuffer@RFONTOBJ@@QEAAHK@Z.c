/*
 * XREFs of ?bEnsureAuxCacheBuffer@RFONTOBJ@@QEAAHK@Z @ 0x1C02FF5AC
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C011DE48 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02FFB54 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bEnsureAuxCacheBuffer(RFONTOBJ *this, unsigned int a2)
{
  __int64 v4; // rbx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax

  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 624LL) < (unsigned __int64)a2 )
  {
    v5 = *(void **)(*(_QWORD *)this + 616LL);
    if ( v5 )
      Win32FreePool(v5);
    if ( a2 )
      v6 = Win32AllocPoolZInit(v4, 1667326791LL);
    else
      v6 = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 616LL) = v6;
    v7 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 616LL) )
    {
      *(_QWORD *)(v7 + 624) = 0LL;
      return 0LL;
    }
    *(_QWORD *)(v7 + 624) = v4;
  }
  return 1LL;
}
