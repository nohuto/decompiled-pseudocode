/*
 * XREFs of XmStoreResult @ 0x140396F10
 * Callers:
 *     XmXchgOp @ 0x1403966E0 (XmXchgOp.c)
 *     XmInOp @ 0x140396720 (XmInOp.c)
 *     XmPopOp @ 0x140396AC0 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140396AE8 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x140396B70 (XmAddOperands.c)
 *     XmSubOperands @ 0x140396CF8 (XmSubOperands.c)
 *     XmMovOp @ 0x140396EA0 (XmMovOp.c)
 *     XmPushStack @ 0x140396EB8 (XmPushStack.c)
 *     XmShlOp @ 0x1403B1760 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1880 (XmShrOp.c)
 *     XmRolOp @ 0x1403C0660 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C0980 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C1140 (XmStosOp.c)
 *     XmPopaOp @ 0x1403C3A70 (XmPopaOp.c)
 *     XmMulOp @ 0x1403C3BD0 (XmMulOp.c)
 *     XmDivOp @ 0x1403C95C0 (XmDivOp.c)
 *     XmNotOp @ 0x1403C99B0 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E5C50 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E5D10 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E5FC0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E6090 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E6130 (XmRorOp.c)
 *     XmSarOp @ 0x1404E61B0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E6290 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E63D0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E6530 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6560 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E6A70 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E6AF0 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E6C20 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6C60 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E6CB0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E6CF0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6D40 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6D80 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6DC0 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E6EC0 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E6F30 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6F50 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E7000 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E7100 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E7210 (XmSxxOp.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall XmStoreResult(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *result; // rax

  v2 = *(_DWORD *)(a1 + 120);
  result = *(_WORD **)(a1 + 88);
  if ( v2 )
  {
    if ( v2 == 1 )
      *result = a2;
    else
      *(_DWORD *)result = a2;
  }
  else
  {
    *(_BYTE *)result = a2;
  }
  return result;
}
