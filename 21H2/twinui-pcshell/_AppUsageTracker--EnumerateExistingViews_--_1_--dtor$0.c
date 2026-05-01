/*
 * XREFs of _AppUsageTracker::EnumerateExistingViews_::_1_::dtor$0 @ 0x1804C7161
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AppUsageTracker::EnumerateExistingViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 104));
}
