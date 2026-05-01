/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180099A90
 * Callers:
 *     _wil::details::RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__&__::_1_::dtor$0 @ 0x1800999E1 (_wil--details--RunFeatureDispatch__lambda_722676b529301132e9c6406d527d4e4b__-__--_1_--dtor$0.c)
 *     _CDesktopPositioner::_GetLaunchPosition_::_1_::dtor$8 @ 0x18017530E (_CDesktopPositioner--_GetLaunchPosition_--_1_--dtor$8.c)
 *     _CortanaDesktopExperienceView::GetActivateArgs_::_1_::dtor$2 @ 0x18027B7AD (_CortanaDesktopExperienceView--GetActivateArgs_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightWNFListener::AssistantLightWNFListener_::_1_::dtor$2 @ 0x1804BC8CF (_TwinUI--Lighting--AssistantLightWNFListener--AssistantLightWNFListener_--_1_--dtor$2.c)
 *     _TwinUI::Lighting::AssistantLightManager::AssistantLightManager_::_1_::dtor$15 @ 0x1804BD6F7 (_TwinUI--Lighting--AssistantLightManager--AssistantLightManager_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
