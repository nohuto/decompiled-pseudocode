/*
 * XREFs of ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800EF8B4
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x180099600 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x18023B93C (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x1800BC868 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 */

__int64 __fastcall CResource::GetSourceAnimationsForProperty(__int64 a1, int a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx
  PVOID Element; // rax

  v2 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
  Element = 0LL;
  if ( v2 )
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v2, a2);
  return ((unsigned __int64)Element + 8) & -(__int64)(Element != 0LL);
}
