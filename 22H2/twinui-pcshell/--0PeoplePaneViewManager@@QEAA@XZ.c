/*
 * XREFs of ??0PeoplePaneViewManager@@QEAA@XZ @ 0x1802CD08C
 * Callers:
 *     ??$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802CC55C (--$MakeAndInitialize@VPeoplePaneViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIPeoplePaneViewManager@@UIPeopleExperienceHostManager@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x1802CCF7C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIP.c)
 */

PeoplePaneViewManager *__fastcall PeoplePaneViewManager::PeoplePaneViewManager(PeoplePaneViewManager *this)
{
  PeoplePaneViewManager *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IPeoplePaneViewManager,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>::`vftable';
  *((_QWORD *)this + 3) = &PeoplePaneViewManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 4) = &PeoplePaneViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 11) = &PeoplePaneViewManager::`vftable'{for `IPeoplePaneViewManager'};
  *((_QWORD *)this + 12) = &PeoplePaneViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPeopleExperienceHostManager,IApplicationViewChangeListener,ITabletModeChangeListener>'};
  *((_QWORD *)this + 13) = &PeoplePaneViewManager::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 14) = &PeoplePaneViewManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChangeListener>'};
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  result = this;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 128) = 1;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  return result;
}
