/*
 * XREFs of _Init_thread_notify @ 0x18010EF58
 * Callers:
 *     _Init_thread_footer @ 0x18010EE80 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( qword_1803E26C8 )
    return qword_1803E26C8(&unk_1803E2688);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
