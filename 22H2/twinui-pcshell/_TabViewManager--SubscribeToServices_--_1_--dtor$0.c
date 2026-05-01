/*
 * XREFs of _TabViewManager::SubscribeToServices_::_1_::dtor$0 @ 0x1802EBF0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::SubscribeToServices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a2 + 160));
}
