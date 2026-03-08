/*
 * XREFs of IrqArbGsivFromIrq @ 0x1C009D69C
 * Callers:
 *     IrqTransGetInterruptVector @ 0x1C009A410 (IrqTransGetInterruptVector.c)
 *     IrqTranslateResources @ 0x1C009A520 (IrqTranslateResources.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbBacktrackAllocation @ 0x1C009CE20 (IrqArbBacktrackAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C009D9B4 (IrqArbUpdateInterruptProperties.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDC0 (IrqArbpFindSuitableRangeIsa.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C009E1A4 (IrqArbpFindSuitableRangePci.c)
 *     IrqArbpSetDeviceProperties @ 0x1C009E5F4 (IrqArbpSetDeviceProperties.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009E890 (IrqArbpUnreferenceArbitrationList.c)
 *     IcCopyInputStateToDeviceState @ 0x1C009F1D0 (IcCopyInputStateToDeviceState.c)
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
