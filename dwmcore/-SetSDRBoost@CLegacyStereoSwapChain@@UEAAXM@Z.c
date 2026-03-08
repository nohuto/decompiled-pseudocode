/*
 * XREFs of ?SetSDRBoost@CLegacyStereoSwapChain@@UEAAXM@Z @ 0x18029D034
 * Callers:
 *     ?SetSDRBoost@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXM@Z @ 0x18011CB50 (-SetSDRBoost@CLegacyStereoSwapChain@@$4PPPPPPPM@A@EAAXM@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSDRBoost@CLegacySwapChain@@UEAAXM@Z @ 0x180298320 (-SetSDRBoost@CLegacySwapChain@@UEAAXM@Z.c)
 */

void __fastcall CLegacyStereoSwapChain::SetSDRBoost(CLegacyStereoSwapChain *this, float a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( *((float *)this - 84) != a2 )
  {
    v3 = *((_QWORD *)this - 10);
    *((float *)this - 84) = a2;
    if ( v3 )
    {
      v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    }
    CLegacySwapChain::SetSDRBoost((CLegacyStereoSwapChain *)((char *)this - 8), a2);
  }
}
