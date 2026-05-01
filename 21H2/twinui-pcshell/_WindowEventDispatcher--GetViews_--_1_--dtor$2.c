/*
 * XREFs of _WindowEventDispatcher::GetViews_::_1_::dtor$2 @ 0x1803260F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::GetViews_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>((__int64 *)(a2 + 80));
}
