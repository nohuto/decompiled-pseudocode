/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C009D6AC
 * Callers:
 *     IrqTransGetInterruptVector @ 0x1C009A420 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C009A530 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C009CE30 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C009D9C4 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDD0 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1B4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpSetDeviceProperties @ 0x1C009E604 (IrqArbpSetDeviceProperties.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E8A0 (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyInputStateToDeviceState @ 0x1C009F1E0 (IcCopyInputStateToDeviceState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbGsivFromIrq(unsigned __int64 a1)
{
  if ( a1 >= 0x10 )
    return (unsigned int)a1;
  else
    return *((unsigned int *)&IsaVectorOverrides + 2 * (unsigned __int8)a1);
}
