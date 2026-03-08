/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1402B2DDC
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140730B54 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
