/*
 * XREFs of ?SetSDRBoost@CConversionSwapChain@@UEAAXM@Z @ 0x18029F738
 * Callers:
 *     ?SetSDRBoost@CConversionSwapChain@@$4PPPPPPPM@A@EAAXM@Z @ 0x18011D210 (-SetSDRBoost@CConversionSwapChain@@$4PPPPPPPM@A@EAAXM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x180298320 (-SetSDRBoost@CLegacySwapChain@@UEAAXM@Z.c)
 */

void __fastcall CConversionSwapChain::SetSDRBoost(CConversionSwapChain *this, float a2)
{
  __int64 v3; // rcx

  CLegacySwapChain::SetSDRBoost((CConversionSwapChain *)((char *)this - 424), a2);
  v3 = *((_QWORD *)this - 60);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
}
