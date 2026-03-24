/*
 * XREFs of XmStoreResult @ 0x140396DC0
 * Callers:
 *     XmXchgOp @ 0x140396590 (XmXchgOp.c)
 *     XmInOp @ 0x1403965D0 (XmInOp.c)
 *     XmPopOp @ 0x140396970 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140396998 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x140396A20 (XmAddOperands.c)
 *     XmSubOperands @ 0x140396BA8 (XmSubOperands.c)
 *     XmMovOp @ 0x140396D50 (XmMovOp.c)
 *     XmPushStack @ 0x140396D68 (XmPushStack.c)
 *     XmShlOp @ 0x1403B15F0 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1710 (XmShrOp.c)
 *     XmRolOp @ 0x1403C0230 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C0550 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C0D10 (XmStosOp.c)
 *     XmPopaOp @ 0x1403C3640 (XmPopaOp.c)
 *     XmMulOp @ 0x1403C37A0 (XmMulOp.c)
 *     XmDivOp @ 0x1403C9420 (XmDivOp.c)
 *     XmNotOp @ 0x1403C9810 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E5A10 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E5AD0 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E5D80 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E5E50 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E5EF0 (XmRorOp.c)
 *     XmSarOp @ 0x1404E5F70 (XmSarOp.c)
 *     XmShldOp @ 0x1404E6050 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E6190 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E62F0 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6320 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E6830 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E68B0 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E69E0 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6A20 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E6A70 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E6AB0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6B00 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6B40 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6B80 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E6C80 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E6CF0 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6D10 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E6DC0 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E6EC0 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E6FD0 (XmSxxOp.c)
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
