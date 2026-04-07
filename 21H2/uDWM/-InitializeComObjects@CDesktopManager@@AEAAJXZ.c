/*
 * XREFs of ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18004D5C0
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18003F9A8 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004BF70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D6DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDisplayBroker@@@details@wil@@QEAAX.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x18004E2B0 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?Initialize@CAnimationEngine@@QEAAJXZ @ 0x18004E4B4 (-Initialize@CAnimationEngine@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085268 (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CDesktopManager::InitializeComObjects(LPVOID *this, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  HRESULT Instance; // eax
  HRESULT v6; // eax
  CAnimationEngine *v7; // rcx
  int v8; // r8d
  CDisplayBroker *v9; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-38h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationInitialization_Start,
      a3,
      1,
      (__int64)v12);
  v4 = 0;
  if ( !this[41] )
  {
    Instance = CoCreateInstance(
                 &CLSID_UIAnimationTransitionLibrary,
                 0LL,
                 1u,
                 &GUID_ca5a14b1_d24f_48b8_8fe4_c78169ba954e,
                 this + 42);
    v4 = Instance;
    if ( Instance < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x6F6u);
      goto LABEL_10;
    }
    v6 = CoCreateInstance(&CLSID_UIAnimationManager, 0LL, 1u, &GUID_9169896c_ac8d_4e7d_94e5_67fa4dc2f2e8, this + 41);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1788;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, ppv);
      goto LABEL_10;
    }
  }
  v7 = (CAnimationEngine *)this[26];
  if ( !*((_BYTE *)v7 + 120) )
  {
    v6 = CAnimationEngine::Initialize(v7);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1793;
      goto LABEL_17;
    }
  }
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDisplayBroker>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DesktopDisplayBroker>::GetImpl'::`2'::impl,
    a2);
  v9 = (CDisplayBroker *)this[36];
  if ( !*(_QWORD *)v9 )
  {
    v6 = CDisplayBroker::Initialize(v9);
    v4 = v6;
    if ( v6 < 0 )
    {
      ppv = 1800;
      goto LABEL_17;
    }
  }
LABEL_10:
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (unsigned int)&UdwmAnimationInitialization_Stop,
      v8,
      1,
      (__int64)v12);
  return v4;
}
