/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C018E898
 * Callers:
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C00DC348 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMDeliverConfigRequest @ 0x1C018AB6C (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C018C168 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C018C3A8 (RIMPopulatePointerDevice.c)
 *     _PopulatePropertyUsageValues @ 0x1C018EE7C (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C018FAFC (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C018FDAC (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C01918C0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0192AA4 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0193110 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C0193C60 (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C0194800 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0194F6C (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C0195468 (RIMRetrieveLinkCollection.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C019B04C (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
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
