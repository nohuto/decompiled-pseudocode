/*
 * XREFs of XmStoreResult @ 0x1403B42E8
 * Callers:
 *     XmLoopOp @ 0x140394880 (XmLoopOp.c)
 *     XmRolOp @ 0x140394F40 (XmRolOp.c)
 *     XmStosOp @ 0x1403954B0 (XmStosOp.c)
 *     XmRorOp @ 0x1403957A0 (XmRorOp.c)
 *     XmMulOp @ 0x14039A370 (XmMulOp.c)
 *     XmPopaOp @ 0x14039A450 (XmPopaOp.c)
 *     XmNotOp @ 0x14039D4A0 (XmNotOp.c)
 *     XmDivOp @ 0x1403A0290 (XmDivOp.c)
 *     XmShlOp @ 0x1403B1970 (XmShlOp.c)
 *     XmShrOp @ 0x1403B1A90 (XmShrOp.c)
 *     XmXchgOp @ 0x1403B3700 (XmXchgOp.c)
 *     XmInOp @ 0x1403B38C0 (XmInOp.c)
 *     XmAddOperands @ 0x1403B3968 (XmAddOperands.c)
 *     XmSetLogicalResult @ 0x1403B3AD0 (XmSetLogicalResult.c)
 *     XmSubOperands @ 0x1403B3B58 (XmSubOperands.c)
 *     XmPopOp @ 0x1403B3D30 (XmPopOp.c)
 *     XmPushStack @ 0x1403B4270 (XmPushStack.c)
 *     XmMovOp @ 0x1403B42D0 (XmMovOp.c)
 *     XmCmpxchgOp @ 0x140530EA0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x140530F60 (XmXaddOp.c)
 *     XmRclOp @ 0x140531220 (XmRclOp.c)
 *     XmRcrOp @ 0x1405312E0 (XmRcrOp.c)
 *     XmSarOp @ 0x140531380 (XmSarOp.c)
 *     XmShldOp @ 0x140531460 (XmShldOp.c)
 *     XmShrdOp @ 0x1405315A0 (XmShrdOp.c)
 *     XmLahfOp @ 0x140531700 (XmLahfOp.c)
 *     XmInsOp @ 0x140531730 (XmInsOp.c)
 *     XmLodsOp @ 0x140531C40 (XmLodsOp.c)
 *     XmMovsOp @ 0x140531CC0 (XmMovsOp.c)
 *     XmBsfOp @ 0x140531DF0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140531E30 (XmBsrOp.c)
 *     XmBtcOp @ 0x140531E80 (XmBtcOp.c)
 *     XmBtrOp @ 0x140531EC0 (XmBtrOp.c)
 *     XmBtsOp @ 0x140531F10 (XmBtsOp.c)
 *     XmCbwOp @ 0x140531F50 (XmCbwOp.c)
 *     XmCwdOp @ 0x140531F90 (XmCwdOp.c)
 *     XmBswapOp @ 0x140532090 (XmBswapOp.c)
 *     XmSmswOp @ 0x140532100 (XmSmswOp.c)
 *     XmImulOp @ 0x140532120 (XmImulOp.c)
 *     XmImulxOp @ 0x1405321D0 (XmImulxOp.c)
 *     XmIdivOp @ 0x1405322D0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140532400 (XmSxxOp.c)
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
