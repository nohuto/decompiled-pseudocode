/*
 * XREFs of ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x180298320
 * Callers:
 *     ?SetSDRBoost@CLegacySwapChain@@$4PPPPPPPM@A@EAAXM@Z @ 0x18011BAB0 (-SetSDRBoost@CLegacySwapChain@@$4PPPPPPPM@A@EAAXM@Z.c)
 *     ?SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z @ 0x18029D034 (-SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z.c)
 *     ?SetSDRBoost@CConversionSwapChain@@UEAAXM@Z @ 0x18029F738 (-SetSDRBoost@CConversionSwapChain@@UEAAXM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CLegacySwapChain::SetSDRBoost(CLegacySwapChain *this, float a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( *((float *)this - 82) != a2 )
  {
    v2 = *((_QWORD *)this - 38);
    *((float *)this - 82) = a2;
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    }
  }
}
