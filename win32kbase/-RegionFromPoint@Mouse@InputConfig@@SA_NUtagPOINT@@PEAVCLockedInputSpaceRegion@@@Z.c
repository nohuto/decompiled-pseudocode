/*
 * XREFs of ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00159F0
 * Callers:
 *     ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z @ 0x1C0015640 (-BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@_N11PEAU2@@Z.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C007CF1C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C0232E18 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0013AA8 (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00157DC (--0CLockedInputSpace@@QEAA@XZ.c)
 */

char __fastcall InputConfig::Mouse::RegionFromPoint(struct tagPOINT a1, struct CLockedInputSpaceRegion *a2)
{
  char *v4; // rax
  char v5; // bl
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v7);
  v4 = (char *)*((_QWORD *)gpInputConfig + 3);
  if ( !v4 )
    v4 = (char *)gpInputConfig + 32;
  v7[0] = v4;
  v5 = InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v7, a1, a2);
  ExReleaseResourceLite(*(PERESOURCE *)v7[1]);
  KeLeaveCriticalRegion();
  return v5;
}
