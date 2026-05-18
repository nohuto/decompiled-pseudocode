/*
 * XREFs of _Init_thread_notify @ 0x18011EE10
 * Callers:
 *     _Init_thread_abort @ 0x18011ED18 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18011ED48 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18021AD28 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18021AD10);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
