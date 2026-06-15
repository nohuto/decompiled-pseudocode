/*
 * XREFs of _Init_thread_notify @ 0x14001E948
 * Callers:
 *     _Init_thread_footer @ 0x14001E870 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hEvent )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_14008FDB8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_14008FDA0);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
