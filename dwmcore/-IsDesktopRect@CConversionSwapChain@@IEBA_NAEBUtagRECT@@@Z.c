/*
 * XREFs of ?IsDesktopRect@CConversionSwapChain@@IEBA_NAEBUtagRECT@@@Z @ 0x18029EE48
 * Callers:
 *     ?CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x18029D6B0 (-CheckMultiplaneOverlaySupport@CConversionSwapChain@@UEBA_NPEBUDXGI_CHECK_MULTIPLANEOVERLAYSUPPO.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CConversionSwapChain::IsDesktopRect(CConversionSwapChain *this, const struct tagRECT *a2)
{
  void (__fastcall ***v3)(_QWORD, int *); // rcx
  char v4; // cl
  int v6; // [rsp+30h] [rbp+8h] BYREF
  int v7; // [rsp+34h] [rbp+Ch]

  v3 = (void (__fastcall ***)(_QWORD, int *))(*((_QWORD *)this + 16)
                                            + 8LL
                                            + *(int *)(*(_QWORD *)(*((_QWORD *)this + 16) + 8LL) + 16LL));
  (**v3)(v3, &v6);
  v4 = 0;
  if ( !*(_QWORD *)&a2->left && a2->right == v6 )
    return a2->bottom == v7;
  return v4;
}
