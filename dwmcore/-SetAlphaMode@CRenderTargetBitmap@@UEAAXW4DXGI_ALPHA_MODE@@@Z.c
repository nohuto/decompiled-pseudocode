/*
 * XREFs of ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800356D0
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034D74 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B16CC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802B2760 (-SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18003424C (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::SetAlphaMode(CRenderTargetBitmap *this, unsigned int a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _BYTE *); // rcx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 8LL) + 12LL)
                                                 + *((_QWORD *)this + 2)
                                                 + 8LL);
  if ( a2 != *(_DWORD *)((**v4)(v4, v5) + 4) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 16LL))(*((_QWORD *)this + 2), a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 120));
  }
}
