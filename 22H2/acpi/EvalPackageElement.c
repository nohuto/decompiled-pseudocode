/*
 * XREFs of EvalPackageElement @ 0x1C004F704
 * Callers:
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     Match_32 @ 0x1C0057908 (Match_32.c)
 *     Match_64 @ 0x1C0057A20 (Match_64.c)
 * Callees:
 *     DupObjData @ 0x1C004AF24 (DupObjData.c)
 */

__int64 __fastcall EvalPackageElement(unsigned int *a1, unsigned int a2, __int64 a3)
{
  if ( a2 < *a1 )
    return DupObjData(gpheapGlobal, a3, (__int64)&a1[8 * a2 + 2 + 2 * a2]);
  else
    return 3222536196LL;
}
