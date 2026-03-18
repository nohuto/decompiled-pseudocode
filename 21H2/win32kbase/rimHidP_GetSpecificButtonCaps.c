/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C018E844
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C018AB6C (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C018C954 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAssignTouchType @ 0x1C018FAFC (RIMAssignTouchType.c)
 *     RIMGetDeviceButtons @ 0x1C0192130 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0193110 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0194F6C (RIMRetrieveAllLinkIndexUsages.c)
 *     rimIDECheckConfidenceSupport @ 0x1C019AB98 (rimIDECheckConfidenceSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificButtonCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_BUTTON_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificButtonCaps )
    return gpfnHidP_GetSpecificButtonCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
