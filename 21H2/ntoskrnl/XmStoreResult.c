/*
 * XREFs of XmStoreResult @ 0x1403A2E60
 * Callers:
 *     XmXchgOp @ 0x1403A2630 (XmXchgOp.c)
 *     XmInOp @ 0x1403A2670 (XmInOp.c)
 *     XmPopOp @ 0x1403A2A10 (XmPopOp.c)
 *     XmSetLogicalResult @ 0x1403A2A38 (XmSetLogicalResult.c)
 *     XmAddOperands @ 0x1403A2AC0 (XmAddOperands.c)
 *     XmSubOperands @ 0x1403A2C48 (XmSubOperands.c)
 *     XmMovOp @ 0x1403A2DF0 (XmMovOp.c)
 *     XmPushStack @ 0x1403A2E08 (XmPushStack.c)
 *     XmShlOp @ 0x1403B7EC0 (XmShlOp.c)
 *     XmShrOp @ 0x1403B7FE0 (XmShrOp.c)
 *     XmRolOp @ 0x1403CBEE0 (XmRolOp.c)
 *     XmLoopOp @ 0x1403CC080 (XmLoopOp.c)
 *     XmStosOp @ 0x1403CC230 (XmStosOp.c)
 *     XmPopaOp @ 0x1403CFB60 (XmPopaOp.c)
 *     XmMulOp @ 0x1403D05B0 (XmMulOp.c)
 *     XmDivOp @ 0x1403D8160 (XmDivOp.c)
 *     XmNotOp @ 0x1403D90D0 (XmNotOp.c)
 *     XmCmpxchgOp @ 0x1405356F0 (XmCmpxchgOp.c)
 *     XmXaddOp @ 0x1405357B0 (XmXaddOp.c)
 *     XmRclOp @ 0x140535A60 (XmRclOp.c)
 *     XmRcrOp @ 0x140535B30 (XmRcrOp.c)
 *     XmRorOp @ 0x140535BD0 (XmRorOp.c)
 *     XmSarOp @ 0x140535C50 (XmSarOp.c)
 *     XmShldOp @ 0x140535D30 (XmShldOp.c)
 *     XmShrdOp @ 0x140535E70 (XmShrdOp.c)
 *     XmLahfOp @ 0x140535FD0 (XmLahfOp.c)
 *     XmInsOp @ 0x140536000 (XmInsOp.c)
 *     XmLodsOp @ 0x140536510 (XmLodsOp.c)
 *     XmMovsOp @ 0x140536590 (XmMovsOp.c)
 *     XmBsfOp @ 0x1405366C0 (XmBsfOp.c)
 *     XmBsrOp @ 0x140536700 (XmBsrOp.c)
 *     XmBtcOp @ 0x140536750 (XmBtcOp.c)
 *     XmBtrOp @ 0x140536790 (XmBtrOp.c)
 *     XmBtsOp @ 0x1405367E0 (XmBtsOp.c)
 *     XmCbwOp @ 0x140536820 (XmCbwOp.c)
 *     XmCwdOp @ 0x140536860 (XmCwdOp.c)
 *     XmBswapOp @ 0x140536960 (XmBswapOp.c)
 *     XmSmswOp @ 0x1405369D0 (XmSmswOp.c)
 *     XmImulOp @ 0x1405369F0 (XmImulOp.c)
 *     XmImulxOp @ 0x140536AA0 (XmImulxOp.c)
 *     XmIdivOp @ 0x140536BA0 (XmIdivOp.c)
 *     XmSxxOp @ 0x140536CB0 (XmSxxOp.c)
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
