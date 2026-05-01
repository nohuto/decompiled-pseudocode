/*
 * XREFs of ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1804BCB6C
 * Callers:
 *     ??$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VAssistantLightWNFListener@Lighting@TwinUI@@U?$default_delete@VAssistantLightWNFListener@Lighting@TwinUI@@@wistd@@@wistd@@XZ @ 0x180260E70 (--$make_unique_nothrow@VAssistantLightWNFListener@Lighting@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VA.c)
 * Callees:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004D5D8 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180099A14 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804BCE90 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_LightingWhenLidClosed@@@details@wil@@QEAA.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x1804BD8F0 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
TwinUI::Lighting::AssistantLightWNFListener *__fastcall TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener(
        TwinUI::Lighting::AssistantLightWNFListener *this)
{
  __int64 v2; // rdx
  struct wil::details::IFunctorHost *v3; // r8
  _QWORD v5[2]; // [rsp+20h] [rbp-60h] BYREF
  struct DiagnosticsInfo v6; // [rsp+30h] [rbp-50h] BYREF
  const char *v7; // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int16 v9; // [rsp+48h] [rbp-38h]
  _BYTE v10[8]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+64h] [rbp-1Ch]
  struct DiagnosticsInfo retaddr; // [rsp+88h] [rbp+8h]
  TwinUI::Lighting::AssistantLightManager *v14; // [rsp+98h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  v14 = (TwinUI::Lighting::AssistantLightManager *)operator new(0x70uLL);
  *((_QWORD *)this + 1) = TwinUI::Lighting::AssistantLightManager::AssistantLightManager(v14);
  v14 = this;
  v6 = retaddr;
  v7 = "pcshell\\twinui\\lighting\\lib\\assistantlightwnflistener.cpp";
  v8 = 0LL;
  v9 = 11;
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_LightingWhenLidClosed>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_LightingWhenLidClosed>::GetImpl'::`2'::impl,
    v2);
  v5[0] = off_18053E230;
  v5[1] = &v14;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v10, 16487091, &v6);
  wil::details::RunFunctor((wil::details *)v5, (struct wil::details::IFunctor *)v10, v3);
  if ( v11 )
    *(_DWORD *)(v11 + 16) = v12;
  return this;
}
