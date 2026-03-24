/*
 * XREFs of CmSiGetMemoryAllocationGranularity @ 0x1403620EC
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140722968 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140723F20 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     <none>
 */

__int64 CmSiGetMemoryAllocationGranularity()
{
  return 0x10000LL;
}
