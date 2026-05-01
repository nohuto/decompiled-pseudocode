/*
 * XREFs of _CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow_::_1_::dtor$0 @ 0x1801C661A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_HandleMonitorRelatedNotificationForDesktopWindow_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)(a2 + 48));
}
