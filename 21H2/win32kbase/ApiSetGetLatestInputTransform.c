/*
 * XREFs of ApiSetGetLatestInputTransform @ 0x1C020D1AC
 * Callers:
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BFDA0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01FC7A8 (-StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetGetLatestInputTransform(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( qword_1C029D310 && (int)qword_1C029D310() >= 0 && qword_1C029D318 )
    return (unsigned int)qword_1C029D318(a1, a2) != 0;
  return v2;
}
