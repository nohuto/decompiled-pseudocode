/*
 * XREFs of _WindowGroupManager::WindowGroupManager_::_1_::dtor$5 @ 0x180303E51
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowGroupManager::WindowGroupManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>::~com_ptr_t<CreationThreadDispatcher,wil::err_exception_policy>(
           (__int64 *)(*(_QWORD *)(a2 + 80) + 120LL),
           (volatile int *)a2);
}
