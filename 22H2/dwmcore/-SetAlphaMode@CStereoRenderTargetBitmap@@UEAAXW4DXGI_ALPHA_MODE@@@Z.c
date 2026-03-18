/*
 * XREFs of ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802B5EE0
 * Callers:
 *     ?SetAlphaMode@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180123B80 (-SetAlphaMode@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetAlphaMode(CStereoRenderTargetBitmap *this, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetAlphaMode(this, a2);
}
