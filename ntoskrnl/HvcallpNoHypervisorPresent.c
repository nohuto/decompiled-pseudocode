/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x1402C0AC0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403C6D90 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     HvcallpExtendedFastHypercall @ 0x140422600 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140730B54 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140730DF8 (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14074C624 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140A1A654 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
