/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18029C480
 * Callers:
 *     ?SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18029C6C0 (-SetAlphaMode@CDeviceTextureTarget@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((_DWORD *)this + 31) != a2 )
  {
    *((_DWORD *)this + 31) = a2;
    v3 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
