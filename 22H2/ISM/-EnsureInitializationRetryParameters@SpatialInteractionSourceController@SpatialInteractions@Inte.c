/*
 * XREFs of ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18016C388
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BDD0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x18016C05C (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A580 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  unsigned int DwordWithDefault; // eax
  RegistryHelpers *v2; // rcx
  RegistryHelpers *v3; // rcx
  unsigned int v4; // eax
  RegistryHelpers *v5; // rcx

  if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationRetryParametersLoaded )
  {
    DwordWithDefault = RegistryHelpers::GetDwordWithDefault(
                         this,
                         (const WCHAR *)&stru_1801DAFE0,
                         L"AttemptsCount",
                         (const wchar_t *)0xA);
    if ( !DwordWithDefault )
      DwordWithDefault = 1;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationAttemptsCount = DwordWithDefault;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationWaitBeforeRetryMilliseconds = RegistryHelpers::GetDwordWithDefault(v2, (const WCHAR *)&stru_1801DAFE0, L"WaitBeforeRetryMS", (const wchar_t *)0x14);
    v4 = RegistryHelpers::GetDwordWithDefault(
           v3,
           (const WCHAR *)&stru_1801DAFE0,
           L"DynamicNodeInfoBindingAttemptsCount",
           (const wchar_t *)0xC);
    if ( !v4 )
      v4 = 1;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingAttemptsCount = v4;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_DynamicNodeInfoBindingWaitBeforeRetryMilliseconds = RegistryHelpers::GetDwordWithDefault(v5, (const WCHAR *)&stru_1801DAFE0, L"DynamicNodeInfoBindingWaitBeforeRetryMS", (const wchar_t *)0x1388);
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationRetryParametersLoaded = 1;
  }
}
