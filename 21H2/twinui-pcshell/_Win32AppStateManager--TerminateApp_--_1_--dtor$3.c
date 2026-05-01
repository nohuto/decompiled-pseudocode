/*
 * XREFs of _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x1800DBEFD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32AppStateManager::TerminateApp_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return details::ObjectArrayAdapterImpl<IApplicationView,wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>::Iterator::~Iterator(a2 + 72);
}
