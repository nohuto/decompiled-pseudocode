/*
 * XREFs of _VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor$0 @ 0x1804B5AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VirtualPinnedAppsHandler::IsViewPinned_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared((RTL_SRWLOCK **)(a2 + 48));
}
