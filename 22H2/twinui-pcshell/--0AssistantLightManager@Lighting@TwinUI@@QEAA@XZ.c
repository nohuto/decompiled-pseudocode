/*
 * XREFs of ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BD560
 * Callers:
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1804BC7DC (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180049D94 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004D5D8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800999F4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801AA444 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801AD26C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804BCB00 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 */

// Hidden C++ exception states: #wind=6
TwinUI::Lighting::AssistantLightManager *__fastcall TwinUI::Lighting::AssistantLightManager::AssistantLightManager(
        TwinUI::Lighting::AssistantLightManager *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  wil::details *v4; // rcx
  wil::details *Event; // rsi
  __int64 v6; // r8
  const char *v7; // r9
  __int64 v8; // r8
  struct wil::details::IFunctorHost *v9; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v12; // [rsp+30h] [rbp-50h] BYREF
  const char *v13; // [rsp+38h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-40h]
  __int16 v15; // [rsp+48h] [rbp-38h]
  _BYTE v16[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+98h] [rbp+18h]
  TwinUI::Lighting::AssistantLightManager *v20; // [rsp+A8h] [rbp+28h] BYREF

  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  v20 = (TwinUI::Lighting::AssistantLightManager *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 5) = v2;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 8,
      Event);
  }
  else
  {
    wil::details::GetLastErrorFailHr(v4, v3, v6, v7);
  }
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v20 = this;
  v12 = retaddr;
  v13 = "pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp";
  v14 = 0LL;
  v15 = 35;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    1u,
    v8);
  v11[0] = off_18053E328;
  v11[1] = &v20;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v16, 16487091, &v12);
  wil::details::RunFunctor((wil::details *)v11, (struct wil::details::IFunctor *)v16, v9);
  if ( v17 )
    *(_DWORD *)(v17 + 16) = v18;
  return this;
}
