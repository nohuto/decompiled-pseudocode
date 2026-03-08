/*
 * XREFs of IcIsInterruptTypeSecondary @ 0x1C009F45C
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C0084160 (AcpiUpdateInterruptProperties.c)
 *     ProcessorpFindAffinitizedIdtEntries @ 0x1C009B1A8 (ProcessorpFindAffinitizedIdtEntries.c)
 *     ProcessorpFindIdtEntriesApic @ 0x1C009B5F0 (ProcessorpFindIdtEntriesApic.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDC0 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IcIsInterruptTypeSecondary(unsigned int a1)
{
  char result; // al

  result = 0;
  if ( a1 < 0xFFF00000 )
    return HalPrivateDispatchTable[62](0LL, a1);
  return result;
}
