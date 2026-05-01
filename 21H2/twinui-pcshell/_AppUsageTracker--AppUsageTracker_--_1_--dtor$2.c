/*
 * XREFs of _AppUsageTracker::AppUsageTracker_::_1_::dtor$2 @ 0x1804C6E7D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppUsageTracker::AppUsageTracker_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 112) + 80LL));
}
