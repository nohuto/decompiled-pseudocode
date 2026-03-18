/*
 * XREFs of ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x1800F3150
 * Callers:
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18008C5D0 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x1801DA564 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( (void (__fastcall ***)(_QWORD))*a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v5 = (void (__fastcall ***)(_QWORD))*a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v5);
  }
  return a1;
}
