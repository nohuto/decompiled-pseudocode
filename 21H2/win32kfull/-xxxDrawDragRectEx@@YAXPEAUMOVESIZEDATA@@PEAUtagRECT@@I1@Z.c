/*
 * XREFs of ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464
 * Callers:
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C020C448 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02104C0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     _ScreenToClient @ 0x1C009CB08 (_ScreenToClient.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     _SetSystemTimer @ 0x1C00C2F28 (_SetSystemTimer.c)
 *     FreeSpb @ 0x1C00DCA08 (FreeSpb.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     FindSpb @ 0x1C0158F38 (FindSpb.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1C0209AA8 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C0209B08 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E0F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C02105B8 (xxxUpdateThreadsWindows.c)
 *     GreWindowResizeComplete @ 0x1C026E008 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026E268 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C02823D0 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C02826A4 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0282884 (bSetDevPreviewRect.c)
 */

void __fastcall xxxDrawDragRectEx(struct MOVESIZEDATA *a1, struct tagRECT *a2, int a3, struct tagRECT *a4)
{
  unsigned int v8; // r13d
  unsigned int v9; // r15d
  signed int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // rcx
  struct tagRECT *v13; // r12
  int v14; // edx
  struct tagRECT v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r15
  struct tagRECT *v18; // r12
  __int64 *v19; // rsi
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 *v25; // r14
  __int64 **Spb; // rax
  __int64 RectRgnIndirect; // r14
  __int64 v28; // rax
  __int64 v29; // r8
  struct tagWND *v30; // rsi
  LONG bottom; // r8d
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r9
  __int128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // r8
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  BOOL v51; // r12d
  __int64 v52; // rax
  struct tagWND *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  BOOL v57; // [rsp+40h] [rbp-79h]
  int left; // [rsp+44h] [rbp-75h]
  int v59; // [rsp+44h] [rbp-75h]
  unsigned int v60; // [rsp+48h] [rbp-71h] BYREF
  struct tagRECT *v61; // [rsp+50h] [rbp-69h]
  int v62; // [rsp+58h] [rbp-61h] BYREF
  __int64 v63; // [rsp+60h] [rbp-59h] BYREF
  __int128 v64; // [rsp+68h] [rbp-51h] BYREF
  struct tagRECT v65; // [rsp+78h] [rbp-41h] BYREF
  __int128 v66; // [rsp+88h] [rbp-31h] BYREF
  __int128 v67; // [rsp+98h] [rbp-21h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-11h]
  __int128 v69; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v70; // [rsp+C0h] [rbp+7h]
  struct tagRECT v71; // [rsp+C8h] [rbp+Fh] BYREF

  v61 = a4;
  v8 = 1;
  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    || (v9 = 5,
        (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v9 = 4;
  }
  v10 = a3 & 0xF0000000;
  v11 = a3 & 0xFFFFFFF;
  if ( (*((_DWORD *)a1 + 50) & 0x10) == 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 27LL) & 8) == 0 )
  {
    if ( a2 )
      *a4 = *a2;
    return;
  }
  if ( !a2 )
    goto LABEL_12;
  v12 = *((_QWORD *)a1 + 3) - *(_QWORD *)&a2->left;
  if ( !v12 )
    v12 = *((_QWORD *)a1 + 4) - *(_QWORD *)&a2->right;
  if ( v12 )
  {
LABEL_12:
    v13 = a2;
    if ( !a2 )
      v13 = v61;
    v57 = 0;
    v65 = *v13;
    if ( v10 >= 0 && v11 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v65) )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v57 = v14 != 2;
      if ( a2 && (v14 != 2 || (*((_DWORD *)a1 + 50) & 0x20) == 0) )
      {
        v15 = v65;
        *v61 = v65;
        *a2 = v15;
      }
      if ( v14 != 2 )
      {
        xxxMS_FlushWigglies();
        GenerateMouseMove(0LL);
      }
    }
    if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 && v11 >= 2 )
    {
      v16 = *((_QWORD *)a1 + 2);
      v60 = 0;
      LODWORD(v64) = 0;
      v62 = 0;
      v17 = *(_QWORD *)(v16 + 16);
      v67 = 0LL;
      v68 = 0LL;
      v69 = 0LL;
      v63 = gptiCurrent;
      v70 = 0LL;
      if ( v17 != gptiCurrent )
        LockW32Thread(v17, (__int64)&v69);
      *(_DWORD *)(v17 + 488) |= 0x8000u;
      v18 = v61;
      if ( a2 )
        *v61 = *a2;
      v19 = (__int64 *)*((_QWORD *)a1 + 2);
      v20 = v19[13];
      v71 = *v18;
      if ( v20
        && !IsTopLevelWindow((__int64)v19)
        && (ScreenToClient(v21, &v71),
            ScreenToClient(v22, &v71.right),
            (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 26LL) & 0x40) != 0) )
      {
        left = v71.left;
        LODWORD(v61) = v71.right;
      }
      else
      {
        left = v71.right;
        LODWORD(v61) = v71.left;
      }
      v24 = v19[5];
      v25 = v19;
      if ( *(char *)(v24 + 16) < 0 )
      {
        v66 = *(_OWORD *)(v24 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v66, (int *)&v66, &a2->left) )
          {
            Spb = FindSpb(v19);
            FreeSpb((__int64)Spb);
            v25 = (__int64 *)*((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(v25[5] + 88);
      v28 = *((_QWORD *)a1 + 2);
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 40) + 168LL);
      if ( v29 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v29, 1LL);
        v28 = *((_QWORD *)a1 + 2);
      }
      ThreadLock(v28, (__int64 *)&v67);
      v30 = (struct tagWND *)*((_QWORD *)a1 + 2);
      v59 = left - (_DWORD)v61;
      bottom = v71.bottom;
      v32 = (_DWORD *)*((_QWORD *)v30 + 5);
      if ( v32[24] - v32[22] != v59 || v32[25] - v32[23] != v71.bottom - v71.top )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v60 = 0;
          v33 = DoesRequireResizeLayoutSynchronization(v30);
          v34 = *(_QWORD *)v30;
          LODWORD(v64) = v33;
          if ( (unsigned int)GreWindowResizeStarted(&v60, v34, v33, &v62, &v60) && v62 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522LL, v60, (__int64)ResizeTimerFunc, 1);
          v30 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v60 = 1;
        }
        bottom = v71.bottom;
      }
      xxxSetWindowPos(v30, 0LL, (unsigned int)v61, (unsigned int)v71.top, v59, bottom - v71.top, 532);
      if ( (*((_DWORD *)a1 + 50) & 0x10000000) != 0 )
      {
        v38 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL), v35);
        v39 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v38;
        if ( IsTopLevelWindow(v39) )
        {
          v35 = *(_QWORD *)(v40 + 40);
          if ( (*(_DWORD *)(v35 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v40 + 16) + 648LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *a2 = *(struct tagRECT *)(v35 + 88);
              v40 = *((_QWORD *)a1 + 2);
            }
            *v18 = *(struct tagRECT *)(*(_QWORD *)(v40 + 40) + 88LL);
            v41 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            *((_QWORD *)a1 + 32) = *((_QWORD *)a1 + 33);
            *(_OWORD *)((char *)a1 + 120) = v41;
            *((_DWORD *)a1 + 64) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 65) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 50) &= ~0x10000000u;
      }
      ThreadUnlock1(v36, v35, v37);
      if ( *(struct MOVESIZEDATA **)(v17 + 672) == a1 )
      {
        v42 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v43 = v42;
        v44 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v44 )
          GreCombineRgn(v42, v42, v44, 1LL);
        if ( RectRgnIndirect )
        {
          if ( v43 )
          {
            GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v43, 4LL);
          }
          else
          {
            GreDeleteObject(RectRgnIndirect);
            RectRgnIndirect = 0LL;
          }
        }
        v45 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        ThreadLock(v45, (__int64 *)&v67);
        v46 = v45;
        v47 = v63;
        xxxUpdateThreadsWindows(v63, v46, RectRgnIndirect);
        ThreadUnlock1(v49, v48, v50);
        if ( v60 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v62 )
          {
            if ( !(_DWORD)v64 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v43);
      }
      else
      {
        v47 = v63;
      }
      GreDeleteObject(RectRgnIndirect);
      *(_DWORD *)(v17 + 488) &= ~0x8000u;
      if ( v17 != v47 )
        PopAndFreeW32ThreadLock((__int64)&v69);
      v51 = v57;
      goto LABEL_72;
    }
    v53 = (struct tagWND *)*((_QWORD *)a1 + 2);
    v71 = *v13;
    v64 = *(_OWORD *)(*gpDispInfo + 24LL);
    v71 = *(struct tagRECT *)WindowMargins::ReduceRect(&v66, v53, &v71);
    if ( v10 >= 0 )
      v54 = *((_QWORD *)a1 + 26);
    else
      v54 = *((_QWORD *)a1 + 29);
    v63 = v54;
    LogicalToPhysicalDPIRect(&v71, &v71, *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL), &v63);
    v51 = v57;
    if ( v57 )
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v71, (__int64)&v64, v9);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 200) & 0x20) != 0 && v10 < 0 )
      {
        bMoveDevPreviewRect(*(_QWORD *)(gpDispInfo + 40LL), &v71, v9, **((_QWORD **)a1 + 2), *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
          || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                        + 64LL) & 1) == 0 )
        {
          v8 = 0;
        }
        bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v71, &v64, v8);
      }
      *v61 = *a2;
      goto LABEL_72;
    }
    if ( v11 )
    {
      if ( v11 != 1 || v10 >= 0 )
      {
LABEL_72:
        if ( v51 && *((_DWORD *)a1 + 44) == 9 )
        {
          v52 = *((_QWORD *)a1 + 26);
          *(_QWORD *)&v64 = 0LL;
          v63 = v52;
          PhysicalToLogicalDPIPoint(
            &v64,
            (char *)a1 + 272,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v63);
          *((_DWORD *)a1 + 42) = v65.left - v64;
          *((_DWORD *)a1 + 43) = v65.top - DWORD1(v64);
        }
        return;
      }
      v55 = gpDispInfo;
      v56 = *(_QWORD *)(gpsi + 4960LL);
    }
    else
    {
      if ( v10 >= 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v71, (__int64)&v64, v9);
        goto LABEL_72;
      }
      v55 = gpDispInfo;
      v56 = *(_QWORD *)(gpsi + 4960LL);
    }
    bSetDevPreviewRect(*(HDEV *)(v55 + 40), v56);
    goto LABEL_72;
  }
}
