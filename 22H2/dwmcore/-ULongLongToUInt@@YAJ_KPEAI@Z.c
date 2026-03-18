/*
 * XREFs of ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800DF5F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ULongLongToUInt(unsigned __int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d

  v2 = -1;
  if ( a1 <= 0xFFFFFFFF )
    v2 = a1;
  *a2 = v2;
  return a1 > 0xFFFFFFFF ? 0x80070216 : 0;
}
