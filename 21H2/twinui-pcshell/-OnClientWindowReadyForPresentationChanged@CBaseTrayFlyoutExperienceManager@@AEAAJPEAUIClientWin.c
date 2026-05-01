/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1800BC480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged(
        CBaseTrayFlyoutExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  return SingleViewLightDismissHelper::UpdateLightDismiss(
           (char *)this + 288,
           *((unsigned int *)this + 70),
           *((_QWORD *)this + 12));
}
