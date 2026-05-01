/*
 * XREFs of _Init_thread_wait @ 0x1800911F8
 * Callers:
 *     _Init_thread_header @ 0x180091130 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18064F5F8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18064F5F8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18064F630 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18064F620,
      &stru_18064F5F8,
      dwMilliseconds);
  }
}
