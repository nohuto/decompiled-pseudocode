/*
 * XREFs of ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180272F98
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180262038 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 *     ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x18026BED8 (-UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Bound.c)
 *     _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x180272DA0 (_lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        char a5)
{
  __int64 result; // rax
  __int64 v7; // rcx

  if ( a3 && a4 )
    return CChainingHelper::ChainToParent(a1, a2, a3, a5);
  result = a2;
  v7 = 3LL * a2;
  *(_BYTE *)(a1 + 4 * v7) &= 0xFCu;
  *(_DWORD *)(a1 + 4 * v7 + 4) = 0;
  *(_BYTE *)(a1 + 36) |= 1u;
  return result;
}
