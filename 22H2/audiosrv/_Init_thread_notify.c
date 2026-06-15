/*
 * XREFs of _Init_thread_notify @ 0x18006A4A8
 * Callers:
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18019E1D8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18019E1C0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
