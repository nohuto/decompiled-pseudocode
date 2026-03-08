/*
 * XREFs of ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C00DE014
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreValidateVisrgn @ 0x1C004145C (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0041580 (GreSetDCOwnerEx.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00D5DA4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 *     GreIntersectVisRect @ 0x1C0197D20 (GreIntersectVisRect.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0199130 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     Feature_3160330556__private_IsEnabledDeviceUsage @ 0x1C00DE090 (Feature_3160330556__private_IsEnabledDeviceUsage.c)
 */

void __fastcall GreInnermostPushLockMSRC85333::ReleaseLock(GreInnermostPushLockMSRC85333 *this)
{
  if ( (unsigned int)Feature_3160330556__private_IsEnabledDeviceUsage() )
    CPushLock::ReleaseLock(this);
}
