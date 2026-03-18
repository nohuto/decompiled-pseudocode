/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x14036E000
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403CBC40 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x1403CCD00 (HvcallInitiateHypercall.c)
 *     HvcallpExtendedFastHypercall @ 0x14042A990 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14068F7D4 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FF80 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140A1D3A8 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
