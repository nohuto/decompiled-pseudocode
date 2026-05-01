/*
 * XREFs of ?_OnClientWindowReadyForPresentationChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18022BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@SAXXZ @ 0x180020EAC (-CortanaExperienceManager_OnClientWindowReadyForPresentationChanged@CortanaProactiveTelemetry@@S.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnClientWindowReadyForPresentationChangedHandler(
        CortanaSharedExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  CortanaProactiveTelemetry::CortanaExperienceManager_OnClientWindowReadyForPresentationChanged();
  return 0LL;
}
