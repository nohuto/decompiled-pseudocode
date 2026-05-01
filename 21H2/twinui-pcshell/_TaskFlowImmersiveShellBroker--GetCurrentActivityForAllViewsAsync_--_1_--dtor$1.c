/*
 * XREFs of _TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor$1 @ 0x1802A1F5C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetCurrentActivityForAllViewsAsync_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(a2 + 64);
}
