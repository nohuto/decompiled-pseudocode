/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C00038F4
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x1C0003830 (NtUserSwitchToThisWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetNextQueueWindow @ 0x1C01EE6BC (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagTHREADINFO **a1, int a2)
{
  struct tagWND *v5; // rdi
  __int64 v6; // rcx
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp-18h]

  if ( gpqForeground )
  {
    if ( !a2 )
    {
      v7 = 0LL;
      v8 = 0LL;
      v5 = *(struct tagWND **)(gpqForeground + 120LL);
      if ( v5 )
      {
        if ( GetNextQueueWindow(v5, 0LL, 1LL) )
        {
          v6 = *((_QWORD *)v5 + 5);
          if ( (*(_BYTE *)(v6 + 24) & 8) == 0 && (*(_BYTE *)(v6 + 20) & 0x20) == 0 )
          {
            ThreadLock(v5, &v7);
            xxxSetWindowPos(v5, 0, 0, 16403);
            ThreadUnlock1();
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL);
  if ( a2 && (*((_BYTE *)a1[5] + 31) & 0x20) != 0 && !(unsigned int)IsThreadHung(a1[2], 0) )
    PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), 7u, (struct tagWND *)a1, 0x112u, 0xF120uLL, 0LL, 0LL);
  return 1LL;
}
