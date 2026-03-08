/*
 * XREFs of _Init_thread_wait @ 0x18010EFAC
 * Callers:
 *     _Init_thread_header @ 0x18010EEE8 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( qword_1803E26C0 )
  {
    qword_1803E26C0(&unk_1803E2688, &stru_1803E2698, dwMilliseconds);
  }
  else
  {
    LeaveCriticalSection(&stru_1803E2698);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_1803E2698);
  }
}
