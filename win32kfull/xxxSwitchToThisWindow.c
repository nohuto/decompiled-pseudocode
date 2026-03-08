/*
 * XREFs of xxxSwitchToThisWindow @ 0x1C0014D74
 * Callers:
 *     NtUserSwitchToThisWindow @ 0x1C0014CB0 (NtUserSwitchToThisWindow.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C00E2134 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CB3B8 (_GetNextQueueWindow.c)
 */

__int64 __fastcall xxxSwitchToThisWindow(struct tagTHREADINFO **a1, __int64 a2)
{
  int v2; // esi
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v2 = a2;
  if ( gpqForeground )
  {
    if ( !(_DWORD)a2 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v4 = *(struct tagWND **)(gpqForeground + 128LL);
      if ( v4 )
      {
        if ( GetNextQueueWindow(v4, a2, (unsigned int)(a2 + 1)) )
        {
          v5 = *((_QWORD *)v4 + 5);
          if ( (*(_BYTE *)(v5 + 24) & 8) == 0 && (*(_BYTE *)(v5 + 20) & 0x20) == 0 )
          {
            ThreadLock(v4, &v12);
            xxxSetWindowPos(v4, v2 & v10, v2 & v11, 16403);
            ThreadUnlock1(v7, v6, v8);
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 1LL);
  if ( v2 && (*((_BYTE *)a1[5] + 31) & 0x20) != 0 && !IsThreadHungTimeCheck(a1[2], gdwHungAppTimeout) )
    PostEventMessageEx(a1[2], *((struct tagQ **)a1[2] + 54), 7u, (struct tagWND *)a1, 0x112u, 0xF120uLL, 0LL, 0LL);
  return 1LL;
}
