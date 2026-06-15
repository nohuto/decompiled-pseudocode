/*
 * XREFs of _Init_thread_wait @ 0x18003A150
 * Callers:
 *     _Init_thread_header @ 0x18003A088 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_18004FC18);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_18004FC18);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_18004FC50 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_18004FC40,
      &stru_18004FC18,
      dwMilliseconds);
  }
}
