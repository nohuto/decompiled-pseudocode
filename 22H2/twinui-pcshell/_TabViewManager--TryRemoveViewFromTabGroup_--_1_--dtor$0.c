/*
 * XREFs of _TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor$0 @ 0x1802EEC67
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::TryRemoveViewFromTabGroup_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a2 + 128));
}
