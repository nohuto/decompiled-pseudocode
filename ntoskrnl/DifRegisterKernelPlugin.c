/*
 * XREFs of DifRegisterKernelPlugin @ 0x1405D2B20
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 *     VfInitBootDriversLoaded @ 0x140B4EE44 (VfInitBootDriversLoaded.c)
 * Callees:
 *     VfSecurityEntry @ 0x1405CDC54 (VfSecurityEntry.c)
 *     VfIovPluginEntry @ 0x1405CF810 (VfIovPluginEntry.c)
 *     VfDmaPluginEntry @ 0x1405CFB70 (VfDmaPluginEntry.c)
 *     VfPoolTrackingEntry @ 0x1405CFD08 (VfPoolTrackingEntry.c)
 *     CarRegisterDefaultRuleClassConfiguration @ 0x1405D1C20 (CarRegisterDefaultRuleClassConfiguration.c)
 *     CarSetCustomRuleIdRange @ 0x1405D2240 (CarSetCustomRuleIdRange.c)
 *     DifUtilDbgPrint @ 0x1405D2720 (DifUtilDbgPrint.c)
 *     VfLwSPEntry @ 0x1405F6278 (VfLwSPEntry.c)
 *     VfIrqlPluginEntry @ 0x140679A04 (VfIrqlPluginEntry.c)
 *     VfSpecialPoolEntry @ 0x140679C24 (VfSpecialPoolEntry.c)
 *     VfDeadlockPluginEntry @ 0x140AD48C8 (VfDeadlockPluginEntry.c)
 *     VfMiscPluginEntry @ 0x140ADD684 (VfMiscPluginEntry.c)
 */

__int64 DifRegisterKernelPlugin()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx

  v0 = (unsigned int *)&unk_140C0DDCC;
  v1 = 4LL;
  do
  {
    v2 = CarRegisterDefaultRuleClassConfiguration(*(v0 - 2), *(v0 - 3));
    v3 = v2;
    if ( v2 < 0 )
      DifUtilDbgPrint(
        "Failed to register kernel DIF plugin %d for reporting. NTSTATUS code: 0x%x",
        DifKernelPluginRules,
        v2);
    else
      CarSetCustomRuleIdRange(*(v0 - 3));
    v0 += 4;
    --v1;
  }
  while ( v1 );
  if ( (VfRuleClasses & 0x8000000000LL) != 0 )
    v3 = VfLwSPEntry();
  if ( (VfRuleClasses & 1) != 0 )
    v3 = VfSpecialPoolEntry();
  if ( (VfRuleClasses & 8) != 0 )
    v3 = VfPoolTrackingEntry();
  if ( (VfRuleClasses & 0x100) != 0 )
    v3 = VfSecurityEntry();
  if ( (VfRuleClasses & 0x800) != 0 )
    v3 = VfMiscPluginEntry();
  if ( (VfRuleClasses & 0x10) != 0 )
    v3 = VfIovPluginEntry();
  if ( (VfRuleClasses & 0x10) != 0 )
    v3 = VfIovPluginEntry();
  if ( (VfRuleClasses & 2) != 0 )
    v3 = VfIrqlPluginEntry();
  if ( (VfRuleClasses & 0x20) != 0 )
    v3 = VfDeadlockPluginEntry();
  if ( (VfRuleClasses & 0x80u) != 0LL )
    return (unsigned int)VfDmaPluginEntry();
  return v3;
}
