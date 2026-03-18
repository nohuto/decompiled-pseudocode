/*
 * XREFs of ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800F2BE0
 * Callers:
 *     ??1CSubDrawingContext@@QEAA@XZ @ 0x180021388 (--1CSubDrawingContext@@QEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800437F0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058A10 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18009B7E8 (--1CTreeData@@UEAA@XZ.c)
 *     ??$?4U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F3D94 (--$-4U-$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@$0A@@-$unique_ptr@UCpuClipRea.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DB6C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DC518 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::CpuClipRealization::~CpuClipRealization(CCpuClippingData::CpuClipRealization *this)
{
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)this + 15);
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 96));
  CShapePtr::Release((CCpuClippingData::CpuClipRealization *)((char *)this + 72));
}
