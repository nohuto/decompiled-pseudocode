/*
 * XREFs of NtUserfnTOUCH @ 0x1C0203C10
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ForwardTouchMessage @ 0x1C01D6D8C (ForwardTouchMessage.c)
 */

__int64 __fastcall NtUserfnTOUCH(
        struct tagWND *a1,
        int a2,
        unsigned __int64 a3,
        volatile void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rdi
  __int64 v11; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v7 = 0LL;
  v14 = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a2 == 576
    && a6 >= 0x29E
    && (a6 <= 0x29F || a6 > 0x2AA && (a6 <= 0x2AC || a6 > 0x2B0 && (a6 <= 0x2B4 || a6 - 695 <= 1))) )
  {
    if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      UserSetLastError(1400LL, v11);
    }
    else
    {
      ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( !(unsigned int)ForwardTouchMessage(ThreadWin32Thread, a1, 0x240u, a3, a4, 0, a5, a6, &v14) )
        return v7;
    }
  }
  return v14;
}
