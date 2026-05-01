/*
 * XREFs of ?get_RequestedSize@ViewSizePreferencesChangedEventArgsImpl@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x1800C9750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewSizePreferencesChangedEventArgsImpl::get_RequestedSize(
        ViewSizePreferencesChangedEventArgsImpl *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 8);
  return result;
}
