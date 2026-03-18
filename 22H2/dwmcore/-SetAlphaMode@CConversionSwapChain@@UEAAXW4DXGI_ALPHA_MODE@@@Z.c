/*
 * XREFs of ?SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802A2D20
 * Callers:
 *     ?SetAlphaMode@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180121300 (-SetAlphaMode@CConversionSwapChain@@$4PPPPPPPM@DFI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801357E0 (-SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 */

void __fastcall CConversionSwapChain::SetAlphaMode(CConversionSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx

  CLegacySwapChain::SetAlphaMode(this, a2);
  if ( *((_DWORD *)this + 97) != a2 )
  {
    v4 = *((_QWORD *)this + 47);
    *((_DWORD *)this + 97) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, (unsigned int)a2);
  }
}
