/*
 * XREFs of XmStoreResult @ 0x1403966C0
 * Callers:
 *     XmXchgOp @ 0x140395E90 (XmXchgOp.c)
 *     XmInOp @ 0x140395ED0 (XmInOp.c)
 *     XmPopOp @ 0x140396270 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x140396298 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x140396320 (XmAddOperands.c)
 *     XmSubOperands @ 0x1403964A8 (XmSubOperands.c)
 *     XmMovOp @ 0x140396650 (XmMovOp.c)
 *     XmPushStack @ 0x140396668 (XmPushStack.c)
 *     XmShlOp @ 0x1403AC410 (XmShlOp.c)
 *     XmShrOp @ 0x1403AC530 (XmShrOp.c)
 *     XmRolOp @ 0x1403BFE90 (XmRolOp.c)
 *     XmLoopOp @ 0x1403C01B0 (XmLoopOp.c)
 *     XmStosOp @ 0x1403C0970 (XmStosOp.c)
 *     XmPopaOp @ 0x1403C32A0 (XmPopaOp.c)
 *     XmMulOp @ 0x1403C3400 (XmMulOp.c)
 *     XmDivOp @ 0x1403C8D50 (XmDivOp.c)
 *     XmNotOp @ 0x1403C9140 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1404E5950 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1404E5A10 (XmXaddOp.c)
 *     XmRclOp @ 0x1404E5CC0 (XmRclOp.c)
 *     XmRcrOp @ 0x1404E5D90 (XmRcrOp.c)
 *     XmRorOp @ 0x1404E5E30 (XmRorOp.c)
 *     XmSarOp @ 0x1404E5EB0 (XmSarOp.c)
 *     XmShldOp @ 0x1404E5F90 (XmShldOp.c)
 *     XmShrdOp @ 0x1404E60D0 (XmShrdOp.c)
 *     XmLahfOp @ 0x1404E6230 (XmLahfOp.c)
 *     XmInsOp @ 0x1404E6260 (XmInsOp.c)
 *     XmLodsOp @ 0x1404E6770 (XmLodsOp.c)
 *     XmMovsOp @ 0x1404E67F0 (XmMovsOp.c)
 *     XmBsfOp @ 0x1404E6920 (XmBsfOp.c)
 *     XmBsrOp @ 0x1404E6960 (XmBsrOp.c)
 *     XmBtcOp @ 0x1404E69B0 (XmBtcOp.c)
 *     XmBtrOp @ 0x1404E69F0 (XmBtrOp.c)
 *     XmBtsOp @ 0x1404E6A40 (XmBtsOp.c)
 *     XmCbwOp @ 0x1404E6A80 (XmCbwOp.c)
 *     XmCwdOp @ 0x1404E6AC0 (XmCwdOp.c)
 *     XmBswapOp @ 0x1404E6BC0 (XmBswapOp.c)
 *     XmSmswOp @ 0x1404E6C30 (XmSmswOp.c)
 *     XmImulOp @ 0x1404E6C50 (XmImulOp.c)
 *     XmImulxOp @ 0x1404E6D00 (XmImulxOp.c)
 *     XmIdivOp @ 0x1404E6E00 (XmIdivOp.c)
 *     XmSxxOp @ 0x1404E6F10 (XmSxxOp.c)
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
