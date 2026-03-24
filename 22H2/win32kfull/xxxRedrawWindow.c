/*
 * XREFs of xxxRedrawWindow @ 0x1C00722B4
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0035D20 (xxxSetLayeredWindow.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 *     xxxScrollWindowEx @ 0x1C00677EC (xxxScrollWindowEx.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BD30 (xxxSetWindowPosAndBand.c)
 *     NtUserRedrawWindow @ 0x1C00704D0 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRect @ 0x1C0072000 (NtUserInvalidateRect.c)
 *     xxxDestroyWindow @ 0x1C007DC00 (xxxDestroyWindow.c)
 *     xxxDwmStopRedirection @ 0x1C00E9620 (xxxDwmStopRedirection.c)
 *     NtUserInvalidateRgn @ 0x1C0115750 (NtUserInvalidateRgn.c)
 *     xxxValidateRect @ 0x1C0124198 (xxxValidateRect.c)
 *     xxxValidateRgn @ 0x1C01260B0 (xxxValidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C0134F90 (_DwmLockScreenUpdates.c)
 *     xxxUserResetDisplayDevice @ 0x1C0163660 (xxxUserResetDisplayDevice.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0212BC0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RemoteRedrawRectangle @ 0x1C021DFCC (RemoteRedrawRectangle.c)
 *     xxxInvalidateRect @ 0x1C0234D7C (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C023EBD0 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C00724E0 (xxxInternalInvalidate.c)
 *     MirrorRegion @ 0x1C010DF9C (MirrorRegion.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  struct tagWND *v7; // rdi
  struct tagWND *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rcx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  _QWORD v30[4]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a3;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)v8 + 5);
      v10 = *(_BYTE *)(v9 + 31);
      if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(v9 + 42) & 0x2FFF) != 0x29D )
      {
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        if ( v8 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v30[2] = 0LL;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v7, ghrgnInv0, 1LL);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow((__int64)v7) )
          GreOffsetRgn(
            v5,
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 108LL));
      }
      else if ( a2 )
      {
        v11 = *((_QWORD *)v7 + 5);
        v5 = ghrgnInv0;
        if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
        {
          v23 = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104);
          v24 = v23 - a2[2];
          v25 = v23 - *a2;
          *a2 = v24;
          a2[2] = v25;
        }
        v12 = *((_QWORD *)v7 + 3);
        v13 = 0LL;
        if ( v12 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( v14 )
            v13 = *(struct tagWND **)(v14 + 24);
        }
        if ( v7 == v13 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL) + a2[2]),
            *(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[3]);
      }
      else
      {
        v5 = 1LL;
      }
    }
    CurrentThread = KeGetCurrentThread();
    v16 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v8)
      || (CurrentProcess = PsGetCurrentProcess(v18, v17, v19),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
    }
    v30[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v30;
    v30[1] = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v21);
  }
  return 1LL;
}
