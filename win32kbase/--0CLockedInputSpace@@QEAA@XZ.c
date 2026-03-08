/*
 * XREFs of ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C0012D54 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?GetUnionRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C0012F10 (-GetUnionRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ @ 0x1C0013B64 (-RefreshRegions@DeadzoneJumping@CCursorClip@@QEAA_NXZ.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0015640 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00159F0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C007CF1C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C007E54C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1C0169950 (NtInputSpaceRegionFromPoint.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01BCC8C (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMSetDeviceOutputConfig @ 0x1C01BDB78 (RIMSetDeviceOutputConfig.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1C01BDD0C (RIMSetPointerDeviceInputSpace.c)
 *     ?GetPrimaryRegion@Mouse@InputConfig@@SA?AUCInputSpaceRegion@@XZ @ 0x1C02138D0 (-GetPrimaryRegion@Mouse@InputConfig@@SA-AUCInputSpaceRegion@@XZ.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0232E18 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
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
