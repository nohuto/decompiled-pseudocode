/*
 * XREFs of ??4?$com_ptr_t@VCCursorVisual@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCursorVisual@@@Z @ 0x1801DB674
 * Callers:
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DE758 (-TryEnableHardwareCursor@COverlayContext@@QEAAXPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRect.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078A28 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CResource **__fastcall wil::com_ptr_t<CCursorVisual,wil::err_returncode_policy>::operator=(CResource **a1, __int64 a2)
{
  CResource *v2; // rdi

  v2 = *a1;
  *a1 = (CResource *)a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 8));
  if ( v2 )
    CResource::InternalRelease(v2);
  return a1;
}
