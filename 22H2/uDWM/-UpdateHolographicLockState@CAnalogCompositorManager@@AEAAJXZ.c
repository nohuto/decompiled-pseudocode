/*
 * XREFs of ?UpdateHolographicLockState@CAnalogCompositorManager@@AEAAJXZ @ 0x18003F800
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180009934 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18003927C (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 * Callees:
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180027ED4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003F864 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicSecureDesktop@@@details@wil@@Q.c)
 */

__int64 __fastcall CAnalogCompositorManager::UpdateHolographicLockState(CAnalogCompositorManager *this)
{
  char v1; // bl
  __int64 v2; // rcx
  bool IsLogonDesktop; // al
  __int64 v4; // rdx

  v1 = 0;
  if ( *((_BYTE *)this + 80)
    || ((v2 = *((_QWORD *)this + 9)) == 0
      ? (IsLogonDesktop = 0)
      : (IsLogonDesktop = CDesktopManager::IsLogonDesktop(v2)),
        IsLogonDesktop) )
  {
    v1 = 1;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicSecureDesktop>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicSecureDesktop>::GetImpl'::`2'::impl,
    0LL);
  LOBYTE(v4) = v1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL)
                                                    + 272LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           v4);
}
