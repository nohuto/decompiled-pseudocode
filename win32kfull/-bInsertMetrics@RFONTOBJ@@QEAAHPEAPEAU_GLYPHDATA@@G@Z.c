/*
 * XREFs of ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02B6C7C
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C011DA70 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C02B720C (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C01234E4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0151CF0 (xInsertMetricsRFONTOBJ.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetrics(RFONTOBJ *this, struct _GLYPHDATA **a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  __int64 result; // rax

  v4 = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) )
    return xInsertMetricsRFONTOBJ(this, a2, v4);
  result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2, a3, a4);
  if ( (_DWORD)result )
    return xInsertMetricsRFONTOBJ(this, a2, v4);
  return result;
}
