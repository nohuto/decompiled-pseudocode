/*
 * XREFs of _TabViewManager::OnThumbnailRequested_::_1_::dtor$0 @ 0x1802E419B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabViewManager::OnThumbnailRequested_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a2 + 128));
}
