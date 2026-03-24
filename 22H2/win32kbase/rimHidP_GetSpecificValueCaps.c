/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0163548
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C015B190 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C015BAF8 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C015BCAC (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C015D200 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DDA8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C015E1E0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C015E824 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C015EF40 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F59C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C015F860 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C01613B4 (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C0161B64 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C0161CFC (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C01671F0 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificValueCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificValueCaps )
    return gpfnHidP_GetSpecificValueCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
