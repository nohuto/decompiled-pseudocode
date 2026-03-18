/*
 * XREFs of xxxRedrawWindow @ 0x1C0031604
 * Callers:
 *     NtUserValidateRgn @ 0x1C00131E0 (NtUserValidateRgn.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028948 (xxxSetWindowPosAndBand.c)
 *     NtUserSetWindowPos @ 0x1C0028F90 (NtUserSetWindowPos.c)
 *     NtUserInvalidateRect @ 0x1C00313D0 (NtUserInvalidateRect.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     NtUserRedrawWindow @ 0x1C009CE90 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRgn @ 0x1C00A2D00 (NtUserInvalidateRgn.c)
 *     _DwmLockScreenUpdates @ 0x1C00BB9D0 (_DwmLockScreenUpdates.c)
 *     xxxValidateRect @ 0x1C00BC36C (xxxValidateRect.c)
 *     xxxSetLayeredWindow @ 0x1C00CEB30 (xxxSetLayeredWindow.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     xxxUserResetDisplayDevice @ 0x1C01354D0 (xxxUserResetDisplayDevice.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F49BC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     RemoteRedrawRectangle @ 0x1C01F5AA8 (RemoteRedrawRectangle.c)
 *     ?xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01F5FC0 (-xxxSoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxInvalidateRect @ 0x1C021519C (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C0224BB0 (xxxMinimizeHungWindow.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     MirrorRegion @ 0x1C002561C (MirrorRegion.c)
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, __int64 a2, __int64 a3, int a4)
{
  struct tagWND *v6; // r8
  int *v7; // r11
  struct tagWND *v8; // rbx
  struct tagWND *v9; // rcx
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edx
  int v19; // eax
  int v20; // edx
  __int128 v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = (int *)a2;
  v8 = a1;
  if ( !a1 )
    v8 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v9 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      a2 = *((_QWORD *)v9 + 5);
      v10 = *(_BYTE *)(a2 + 31);
      if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v9 != v8 )
        break;
      if ( (*(_WORD *)(a2 + 42) & 0x2FFF) != 0x29D )
      {
        v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
        if ( v9 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v22 = 0LL;
    v21 = 0LL;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion((__int64)v8, ghrgnInv0, 1);
          a3 = ghrgnInv0;
        }
        if ( v8 != (struct tagWND *)GetDesktopWindow(v8, a2) )
          GreOffsetRgn(
            a3,
            *(unsigned int *)(*((_QWORD *)v8 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v8 + 5) + 108LL));
      }
      else if ( v7 )
      {
        v15 = *((_QWORD *)v8 + 5);
        a3 = ghrgnInv0;
        if ( (*(_BYTE *)(v15 + 26) & 0x40) != 0 )
        {
          v18 = *(_DWORD *)(v15 + 112) - *(_DWORD *)(v15 + 104);
          v19 = v18 - v7[2];
          v20 = v18 - *v7;
          *v7 = v19;
          v7[2] = v20;
        }
        v16 = *((_QWORD *)v8 + 3);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          if ( v17 )
            v6 = *(struct tagWND **)(v17 + 24);
        }
        if ( v8 == v6 )
          SetRectRgnIndirect(ghrgnInv0, v7);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*v7 + *(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v8 + 5) + 104LL) + v7[2]),
            *(_DWORD *)(*((_QWORD *)v8 + 5) + 108LL) + v7[3]);
      }
      else
      {
        a3 = 1LL;
      }
    }
    ThreadLock(v8, &v21);
    xxxInternalInvalidate(v8, (HRGN)a3, a4 | 0x1000);
    ThreadUnlock1(v12, v11, v13);
  }
  return 1LL;
}
