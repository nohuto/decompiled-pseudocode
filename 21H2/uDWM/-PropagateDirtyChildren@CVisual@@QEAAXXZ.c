/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180026D78
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180011D80 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180014230 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z @ 0x1800257B8 (-SetVisualStates@CButton@@QEAAJAEBVCBitmapSourceArray@@0PEAVCBitmapSource@@M@Z.c)
 *     ?SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z @ 0x1800BB240 (-SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 3); i && (*(_BYTE *)(i + 80) & 1) == 0; i = *(_QWORD *)(i + 24) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
}
