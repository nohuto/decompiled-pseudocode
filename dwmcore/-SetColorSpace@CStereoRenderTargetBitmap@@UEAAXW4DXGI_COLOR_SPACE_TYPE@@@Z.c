/*
 * XREFs of ?SetColorSpace@CStereoRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B27B0
 * Callers:
 *     ?SetColorSpace@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18011F9F0 (-SetColorSpace@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetColorSpace(CStereoRenderTargetBitmap *this, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 16LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetColorSpace(this, a2);
}
