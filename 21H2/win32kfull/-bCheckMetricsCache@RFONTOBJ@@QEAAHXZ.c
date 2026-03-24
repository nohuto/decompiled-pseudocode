/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1C009CB9C
 * Callers:
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z @ 0x1C009AF78 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QEAAHKPEAPEAU_GLYPHDATA@@PEA_KPEAPEAU_GLYPHBITS@@@Z.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C009CA18 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C009D6B0 (xInsertMetricsRFONTOBJ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 */

__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 512LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 520LL) )
    return 1LL;
  result = PALLOCMEM2(0x720uLL);
  if ( result )
  {
    *(_QWORD *)result = v1[67];
    v1[65] = result + 1824;
    v1[64] = result + 16;
    v1[67] = result;
    return 1LL;
  }
  return result;
}
