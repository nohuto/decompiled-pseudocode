/*
 * XREFs of xxxDrawDragRectEx @ 0x1C0210F44
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021026C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210E30 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRect @ 0x1C0210F28 (xxxDrawDragRect.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     _ScreenToClient @ 0x1C0013DCC (_ScreenToClient.c)
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     _SetSystemTimer @ 0x1C002CA18 (_SetSystemTimer.c)
 *     LockW32Thread @ 0x1C003D9CC (LockW32Thread.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x1C006FBE8 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C00750C0 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1530 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E4B14 (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C020A774 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C020A7D4 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E8F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C0212ABC (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C0219CF4 (FindSpb.c)
 *     FreeSpb @ 0x1C0219D24 (FreeSpb.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EE10 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GreWindowResizeComplete @ 0x1C026FE50 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C02700B0 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C0285678 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028594C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0285B2C (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  char v8; // r15
  __int64 result; // rax
  signed int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // rcx
  struct tagRECT *v13; // r13
  int v14; // edx
  struct tagRECT v15; // xmm0
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  struct tagRECT *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  LONG left; // ecx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v30; // r14
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v34; // r13
  LONG bottom; // r8d
  _DWORD *v36; // rdx
  int v37; // eax
  struct tagWND *v38; // r14
  int v39; // r13d
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int128 v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // r8
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r14
  __int64 v53; // rcx
  BOOL v54; // r13d
  __int64 v55; // rax
  const struct tagWND *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  struct _RECTL *v60; // rdx
  BOOL v61; // [rsp+40h] [rbp-C0h]
  char v62; // [rsp+44h] [rbp-BCh]
  unsigned int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v65; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v66; // [rsp+60h] [rbp-A0h]
  int v67; // [rsp+68h] [rbp-98h] BYREF
  int v68; // [rsp+6Ch] [rbp-94h]
  int v69[2]; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+7Ch] [rbp-84h]
  __int64 v72; // [rsp+80h] [rbp-80h]
  struct tagRECT v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  __int64 v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v79; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v80; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v82; // [rsp+F0h] [rbp-10h]
  struct tagRECT v83; // [rsp+F8h] [rbp-8h] BYREF

  v66 = a4;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
  {
    v62 = 1;
    v8 = 5;
  }
  else
  {
    v62 = 0;
    v8 = 4;
  }
  result = *((unsigned int *)a1 + 49);
  v10 = a3 & 0xF0000000;
  v11 = a3 & 0xFFFFFFF;
  if ( (result & 0x10) == 0 )
  {
    result = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 8) == 0 )
    {
      if ( a2 )
        *a4 = *(struct tagRECT *)a2;
      return result;
    }
  }
  if ( !a2 )
    goto LABEL_13;
  v12 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
  if ( !v12 )
    v12 = *((_QWORD *)a1 + 4) - *(_QWORD *)(a2 + 8);
  if ( v12 )
  {
LABEL_13:
    v13 = (struct tagRECT *)a2;
    if ( !a2 )
      v13 = v66;
    v61 = 0;
    v73 = *v13;
    if ( v10 >= 0 && v11 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v73) )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v61 = v14 != 2;
      if ( a2 && (v14 != 2 || (*((_DWORD *)a1 + 49) & 0x20) == 0) )
      {
        v15 = v73;
        *v66 = v73;
        *(struct tagRECT *)a2 = v15;
      }
      if ( v14 != 2 )
      {
        xxxMS_FlushWigglies(v14 != 2);
        GenerateMouseMove(0LL);
      }
    }
    v16 = *((_DWORD *)a1 + 49);
    if ( (v16 & 0x20) != 0 && ((v16 & 0x4000000) == 0 || v11 >= 2) )
    {
      v17 = *((_QWORD *)a1 + 2);
      v70 = 0;
      v68 = 0;
      v63 = 0;
      v18 = *(_QWORD *)(v17 + 16);
      v76 = 0LL;
      v64 = 0;
      v81 = 0LL;
      v72 = gptiCurrent;
      v82 = 0LL;
      if ( v18 != gptiCurrent )
        LockW32Thread(v18, (__int64)&v81);
      *(_DWORD *)(v18 + 488) |= 0x8000u;
      v19 = v66;
      if ( a2 )
        *v66 = *(struct tagRECT *)a2;
      v20 = *((_QWORD *)a1 + 2);
      v21 = *(_QWORD *)(v20 + 104);
      v65 = *v19;
      if ( v21 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v20) )
        {
          ScreenToClient(v22, &v65);
          ScreenToClient(v23, &v65.right);
          if ( (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 26LL) & 0x40) != 0 )
          {
            left = v65.left;
            v65.left = v65.right;
            v65.right = left;
          }
        }
      }
      v26 = *(_QWORD *)(v20 + 40);
      v27 = v20;
      if ( *(char *)(v26 + 16) < 0 )
      {
        v80 = *(_OWORD *)(v26 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v80, (int *)&v80, (int *)a2) )
          {
            Spb = FindSpb(v20);
            FreeSpb(Spb);
            v27 = *((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v27 + 40) + 88LL);
      v30 = *((_QWORD *)a1 + 2);
      v31 = RectRgnIndirect;
      v32 = *(_QWORD *)(*(_QWORD *)(v30 + 40) + 168LL);
      if ( v32 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v32, 1LL);
        v30 = *((_QWORD *)a1 + 2);
      }
      v71 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v74 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v74;
      v75 = v30;
      if ( v30 )
        HMLockObject(v30);
      v34 = (struct tagWND *)*((_QWORD *)a1 + 2);
      bottom = v65.bottom;
      v36 = (_DWORD *)*((_QWORD *)v34 + 5);
      v69[0] = v65.right - v65.left;
      if ( v36[24] - v36[22] == v65.right - v65.left && v36[25] - v36[23] == v65.bottom - v65.top )
        v37 = v70;
      else
        v37 = 1;
      v38 = v34;
      if ( v37 )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v67 = 0;
          v63 = DoesRequireResizeLayoutSynchronization(v34);
          if ( (unsigned int)GreWindowResizeStarted(&v67, *(_QWORD *)v34, v63, &v64, &v67) && v64 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522, v67, (int)ResizeTimerFunc, 1);
          v38 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v39 = 1;
          bottom = v65.bottom;
          goto LABEL_55;
        }
        bottom = v65.bottom;
      }
      v39 = v68;
LABEL_55:
      xxxSetWindowPos(v38, 0LL, (unsigned int)v65.left, (unsigned int)v65.top, v69[0], bottom - v65.top, v71);
      if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
      {
        v41 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
        v42 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v41;
        if ( (unsigned int)IsTopLevelWindow(v42) )
        {
          v44 = *(_QWORD *)(v43 + 40);
          if ( (*(_DWORD *)(v44 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v43 + 16) + 648LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(v44 + 88);
              v43 = *((_QWORD *)a1 + 2);
            }
            *v66 = *(struct tagRECT *)(*(_QWORD *)(v43 + 40) + 88LL);
            v45 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            *(_QWORD *)((char *)a1 + 292) = *(_QWORD *)((char *)a1 + 300);
            *(_OWORD *)((char *)a1 + 120) = v45;
            *((_DWORD *)a1 + 73) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 49) &= ~0x20000000u;
      }
      ThreadUnlock1(v40);
      if ( *(struct _MOVESIZEDATA **)(v18 + 672) == a1 )
      {
        v46 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v47 = v46;
        v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v48 )
          GreCombineRgn(v46, v46, v48, 1LL);
        if ( v31 )
        {
          if ( v47 )
          {
            GreCombineRgn(v31, v31, v47, 4LL);
          }
          else
          {
            GreDeleteObject(v31);
            v31 = 0LL;
          }
        }
        v49 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v74 = *(_QWORD *)(v50 + 416);
        *(_QWORD *)(v50 + 416) = &v74;
        v75 = v49;
        if ( v49 )
          HMLockObject(v49);
        v51 = v49;
        v52 = v72;
        xxxUpdateThreadsWindows(v72, v51, v31);
        ThreadUnlock1(v53);
        if ( v39 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v64 )
          {
            if ( !v63 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v47);
      }
      else
      {
        v52 = v72;
      }
      result = GreDeleteObject(v31);
      *(_DWORD *)(v18 + 488) &= ~0x8000u;
      if ( v18 != v52 )
        result = PopAndFreeW32ThreadLock((__int64)&v81);
      v54 = v61;
      goto LABEL_81;
    }
    v83 = *v13;
    v56 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v79 = *(_OWORD *)(*gpDispInfo + 24LL);
    ReduceRectByWindowMargin(v56, &v83, &v83);
    if ( v10 >= 0 )
      v57 = *((_QWORD *)a1 + 26);
    else
      v57 = *((_QWORD *)a1 + 29);
    v77 = v57;
    result = LogicalToPhysicalDPIRect(
               &v83,
               &v83,
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
               &v77);
    v54 = v61;
    if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
      v8 = v62;
    if ( v61 )
      result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v83, (__int64)&v79, v8);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 196) & 0x20) != 0 && v10 < 0 )
      {
        bMoveDevPreviewRect(*(HDEV *)(gpDispInfo + 40LL), (struct _RECTL *)&v83, *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) )
          W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        bMoveDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
      }
      result = (__int64)v66;
      *v66 = *(struct tagRECT *)a2;
      goto LABEL_81;
    }
    if ( v11 )
    {
      if ( v11 != 1 || v10 >= 0 )
      {
LABEL_81:
        if ( v54 && *((_DWORD *)a1 + 44) == 9 )
        {
          v55 = *((_QWORD *)a1 + 26);
          *(_QWORD *)v69 = 0LL;
          v78 = v55;
          PhysicalToLogicalDPIPoint(
            v69,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v78);
          *((_DWORD *)a1 + 42) = v73.left - v69[0];
          result = (unsigned int)(v73.top - v69[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v58 = gpDispInfo;
      v59 = *(_QWORD *)(gpsi + 4960LL);
      v60 = 0LL;
    }
    else
    {
      if ( v10 >= 0 )
      {
        result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v83, (__int64)&v79, v8);
        goto LABEL_81;
      }
      v58 = gpDispInfo;
      v59 = *(_QWORD *)(gpsi + 4960LL);
      v60 = (struct _RECTL *)&v83;
    }
    result = bSetDevPreviewRect(*(HDEV *)(v58 + 40), v60, v59);
    goto LABEL_81;
  }
  return result;
}
