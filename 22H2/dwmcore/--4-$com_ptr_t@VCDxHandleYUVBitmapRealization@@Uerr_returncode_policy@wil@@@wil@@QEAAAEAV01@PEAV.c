/*
 * XREFs of ??4?$com_ptr_t@VCDxHandleYUVBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDxHandleYUVBitmapRealization@@@Z @ 0x180135B96
 * Callers:
 *     ?Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B3C3C (-Create@CDxHandleYUVBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIB.c)
 *     ?CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x1802B3D4C (-CreateSubResource@CDxHandleYUVBitmapRealization@@SAJPEAVIYUVSwapChainRealization@@U_LUID@@AEBUC.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18008F334 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

volatile signed __int32 **__fastcall wil::com_ptr_t<CDxHandleYUVBitmapRealization,wil::err_returncode_policy>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a2 + 2));
  if ( v2 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v2);
  return a1;
}
