/*
 * XREFs of _Init_thread_notify @ 0x1400038A8
 * Callers:
 *     _Init_thread_footer @ 0x1400037D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140015918 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140015900);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
