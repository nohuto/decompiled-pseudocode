/*
 * XREFs of ?SetAlphaMode@CLegacyStereoSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18029CF00
 * Callers:
 *     ?SetAlphaMode@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18011CA90 (-SetAlphaMode@CLegacyStereoSwapChain@@$4PPPPPPPM@BLI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180131630 (-SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 */

void __fastcall CLegacyStereoSwapChain::SetAlphaMode(CLegacyStereoSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( *((_DWORD *)this + 70) != a2 )
  {
    v4 = *((_QWORD *)this + 45);
    if ( v4 )
    {
      v5 = *(int *)(*(_QWORD *)(v4 + 8) + 24LL) + v4 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    CLegacySwapChain::SetAlphaMode(this, a2);
  }
}
