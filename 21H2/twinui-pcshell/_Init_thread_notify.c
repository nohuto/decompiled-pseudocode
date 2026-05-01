/*
 * XREFs of _Init_thread_notify @ 0x1800911C0
 * Callers:
 *     _Init_thread_abort @ 0x1800910B0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x1800910E8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18064F638 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18064F620);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
