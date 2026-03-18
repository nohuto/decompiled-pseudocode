/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003C1A0
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C003BCDC (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003C040 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C003C5D0 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z @ 0x1C006D400 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N1PEAU2@@Z.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00A0A60 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00B25A4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00B2624 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1C0153B90 (NtInputSpaceRegionFromPoint.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01979CC (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C0198928 (RIMSetPointerDeviceInputSpace.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C01E3CC0 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 * Callees:
 *     <none>
 */

CLockedInputSpace *__fastcall CLockedInputSpace::CLockedInputSpace(CLockedInputSpace *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  return this;
}
