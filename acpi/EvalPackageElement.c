/*
 * XREFs of EvalPackageElement @ 0x1C004F6E4
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     Match_32 @ 0x1C00578E8 (Match_32.c)
 *     Match_64 @ 0x1C0057A00 (Match_64.c)
 * Callees:
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 */

__int64 __fastcall EvalPackageElement(unsigned int *a1, unsigned int a2, __int64 a3)
{
  if ( a2 < *a1 )
    return DupObjData(gpheapGlobal, a3, (__int64)&a1[8 * a2 + 2 + 2 * a2]);
  else
    return 3222536196LL;
}
