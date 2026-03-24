/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968
 * Callers:
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     bSetDevDragRect @ 0x1C0029460 (bSetDevDragRect.c)
 *     SetMinimize @ 0x1C002C0CC (SetMinimize.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DD5C (zzzLockWindowUpdate2.c)
 *     CkptRestore @ 0x1C00411F0 (CkptRestore.c)
 *     GetMonitorWorkRect @ 0x1C0041390 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     PtInRect @ 0x1C004DE1C (PtInRect.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005B960 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendMessage @ 0x1C005D594 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C0061430 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     xxxReleaseCapture @ 0x1C00DAB00 (xxxReleaseCapture.c)
 *     RecreateRedirectionBitmap @ 0x1C00F1598 (RecreateRedirectionBitmap.c)
 *     _GetMessagePos @ 0x1C010F9A0 (_GetMessagePos.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0118A6C (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01E5A84 (TransformRegionBetweenCoordinateSpaces.c)
 *     ?IsSizingLEFT@@YAEH@Z @ 0x1C020B20C (-IsSizingLEFT@@YAEH@Z.c)
 *     ?IsSizingRIGHT@@YAEH@Z @ 0x1C020B22C (-IsSizingRIGHT@@YAEH@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B294 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C020BF58 (-TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020C22C (-UpdateMoveSizeDataForCancelation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D270 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021026C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxDrawDragRect @ 0x1C0210F28 (xxxDrawDragRect.c)
 *     TransformVector @ 0x1C0216FBC (TransformVector.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02235E8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 */

void __fastcall xxxMS_TrackMove(
        unsigned __int64 *a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct _MOVESIZEDATA *a5)
{
  int v7; // r14d
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm1
  unsigned int v13; // edx
  int v14; // r12d
  int v15; // r13d
  _BOOL8 v16; // rcx
  bool v17; // zf
  unsigned int v18; // eax
  unsigned int DpiForSystem; // eax
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // r9d
  unsigned __int64 v24; // r15
  unsigned int MessagePos; // eax
  __int64 v26; // r8
  __int16 v27; // ax
  __int64 v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  int v34; // edi
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v38; // ecx
  LONG y; // edx
  int v40; // r9d
  int v41; // r8d
  int v42; // eax
  __int64 DesktopWindow; // rax
  __int64 v44; // rdx
  int v45; // r15d
  int v46; // r12d
  __int64 v47; // rax
  struct tagRECT *v48; // r13
  __int64 v49; // rcx
  char v50; // cl
  char v51; // al
  _DWORD *v52; // rax
  struct tagRECT v53; // xmm0
  __int128 *v54; // rbx
  __int64 v55; // rcx
  int v56; // eax
  int v57; // ecx
  int v58; // r15d
  bool v59; // al
  __int64 v60; // rcx
  int v61; // r12d
  unsigned int v62; // eax
  int DpiDependentMetric; // r12d
  unsigned int v64; // eax
  __int64 v65; // r14
  struct tagRECT v66; // xmm0
  unsigned __int64 v67; // r11
  int v68; // ecx
  int v69; // r9d
  int v70; // r11d
  int v71; // r9d
  int v72; // r11d
  __int64 v73; // rax
  __int64 v74; // r13
  unsigned __int64 v75; // r15
  int v76; // eax
  _OWORD *v77; // rax
  int v78; // ecx
  int v79; // eax
  _OWORD *MonitorWorkRect; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  int v83; // ecx
  int v84; // eax
  _OWORD *MonitorRect; // rax
  int v86; // ecx
  __int64 v87; // rax
  int v88; // eax
  unsigned int v89; // ecx
  int v90; // ecx
  int v91; // [rsp+20h] [rbp-51h]
  int v92; // [rsp+20h] [rbp-51h]
  unsigned __int64 v93; // [rsp+30h] [rbp-41h] BYREF
  int v94; // [rsp+38h] [rbp-39h]
  unsigned __int64 v95; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v96; // [rsp+48h] [rbp-29h] BYREF
  struct tagRECT v97; // [rsp+50h] [rbp-21h] BYREF
  __int128 v98; // [rsp+60h] [rbp-11h] BYREF
  __int128 v99; // [rsp+70h] [rbp-1h] BYREF

  *(_QWORD *)&v98 = a3;
  v93 = a4;
  LODWORD(v96) = (__int16)a4;
  HIDWORD(v96) = SWORD1(a4);
  v99 = 0LL;
  v7 = 1;
  v8 = a2 - 256;
  if ( v8 )
  {
    v9 = v8 - 4;
    if ( v9 )
    {
      v10 = v9 - 252;
      if ( v10 )
      {
        if ( v10 != 2 )
          return;
        xxxTM_MoveDragRect(a5, a4);
        v11 = *((_DWORD *)a5 + 49);
        if ( (v11 & 0x2000000) != 0 )
        {
          v12 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v12;
        }
        *((_DWORD *)a5 + 49) = v11 & 0xFFFFFFFD;
        goto LABEL_71;
      }
      v13 = a4;
LABEL_9:
      xxxTM_MoveDragRect(a5, v13);
      return;
    }
  }
  v14 = 0;
  v15 = 0;
  v16 = (_GetKeyState(17LL) & 0x8000u) != 0LL;
  if ( a3 > 0x28 )
    return;
  if ( (_DWORD)a3 != 13 )
  {
    if ( (_DWORD)a3 == 27 )
    {
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
      {
        xxxDrawDragRect(a5, 0LL, 2LL);
        *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      }
      UpdateMoveSizeDataForCancelation(a5);
      goto LABEL_76;
    }
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v17 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02F6244[a3];
LABEL_27:
          if ( !v17 )
          {
            v20 = *((_DWORD *)a5 + 49);
            *((_DWORD *)a5 + 70) &= ~2u;
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 49) = v20 & 0xFFFFF8FF;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( v16 || (v18 = GetDpiForSystem(v16), (int)GetDpiDependentMetric(13LL, v18) / 2 <= 1) )
        {
          v14 = 1;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v16);
          v14 = (int)GetDpiDependentMetric(13LL, DpiForSystem) / 2;
        }
        if ( a3 == 38 )
          v14 = -v14;
        goto LABEL_36;
      }
      if ( (_DWORD)a3 != 39 )
      {
        if ( (_DWORD)a3 != 40 )
          return;
        goto LABEL_17;
      }
    }
    if ( !*((_DWORD *)a5 + 45) )
    {
      v17 = *((_DWORD *)a5 + 46) == 0;
      *((_DWORD *)a5 + 45) = dword_1C02F6244[a3];
      goto LABEL_27;
    }
    if ( v16 || (v21 = GetDpiForSystem(v16), (int)GetDpiDependentMetric(12LL, v21) / 2 <= 1) )
    {
      v15 = 1;
    }
    else
    {
      v22 = GetDpiForSystem(v16);
      v15 = (int)GetDpiDependentMetric(12LL, v22) / 2;
    }
    if ( a3 == 37 )
      v15 = -v15;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v23 = 9;
      v24 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos(v16);
      v23 = *((_DWORD *)a5 + 44);
      v24 = MessagePos;
    }
    v26 = *((int *)a5 + 45);
    v93 = v24;
    if ( (_DWORD)v26 )
    {
      v27 = v15 + *((_WORD *)a5 + 2 * dword_1C02F62A8[v26] + 20);
      LOWORD(v93) = v27;
      LODWORD(v24) = v93;
    }
    else
    {
      v27 = v93;
    }
    v28 = *((int *)a5 + 46);
    LOWORD(v94) = v27;
    if ( (_DWORD)v28 )
    {
      WORD1(v93) = v14 + *((_WORD *)a5 + 2 * dword_1C02F6278[v28] + 20);
      LODWORD(v24) = v93;
    }
    if ( v23 != 9 )
    {
      v29 = v26 + v28;
      v30 = 0LL;
      *((_DWORD *)a5 + 44) = v29;
      if ( a1 )
        v30 = *a1;
      xxxSendMessage(
        (unsigned __int64)a1,
        0x20u,
        v30,
        (struct _LARGE_STRING *)((unsigned __int16)(v29 + 9) | 0x2000000LL));
    }
    LODWORD(v96) = (__int16)v94 - *((_DWORD *)a5 + 42);
    HIDWORD(v96) = SWORD1(v24) - *((_DWORD *)a5 + 43);
    v31 = a1[13];
    v32 = v96;
    v95 = v96;
    v33 = *(_QWORD *)(v31 + 40);
    if ( *(_QWORD *)(v33 + 168) )
    {
      v93 = *(_QWORD *)(v33 + 168);
      v34 = TransformRegionBetweenCoordinateSpaces((__int64)a1, v31, (__int64 *)&v93);
      v36 = GrePtInRegion(v93, (unsigned int)v32, HIDWORD(v95));
      if ( v34 )
        GreDeleteObject(v93);
      if ( !v36 )
        goto LABEL_66;
      v32 = v96;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v96) )
    {
LABEL_66:
      v13 = v24;
      goto LABEL_9;
    }
    v95 = *((_QWORD *)a5 + 26);
    v93 = v32;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v35);
    LogicalToPhysicalDPIPoint(&v93, &v96, CurrentThreadDpiAwarenessContext, &v95);
    if ( (((_QWORD)v98 - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v38 = v93;
      if ( (((_QWORD)v98 - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v93);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v93) = y;
        if ( (_DWORD)v93 == (_DWORD)gptCursorAsync )
        {
          if ( v15 <= 0 )
            v7 = -1;
          v38 = v7 + v93;
          LODWORD(v93) = v7 + v93;
        }
      }
    }
    else
    {
      y = HIDWORD(v93);
      v38 = (unsigned int)gptCursorAsync;
      LODWORD(v93) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v93) == gptCursorAsync->y )
      {
        if ( v14 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v93);
        HIDWORD(v93) += v7;
      }
    }
    zzzInternalSetCursorPos(v38, y, 2, 0);
    goto LABEL_66;
  }
  GetMessagePos(v16);
LABEL_71:
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  v40 = *(_DWORD *)(gptiCurrent + 488LL);
  if ( (v40 & 0x10) != 0 )
  {
    v41 = *((_DWORD *)a5 + 49);
    if ( (v41 & 0x800) == 0 || (((v41 & 0x20) != 0) & *(_BYTE *)(a1[5] + 31)) == 0 )
    {
      xxxDrawDragRect(a5, 0LL, ((v41 & 0xFE000000) << 6) | 1);
      v40 = *(_DWORD *)(gptiCurrent + 488LL);
    }
    *(_DWORD *)(gptiCurrent + 488LL) = v40 & 0xFFFFFFEF;
  }
LABEL_76:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1);
  xxxReleaseCapture();
  v42 = *((_DWORD *)a5 + 49) | 8;
  *((_DWORD *)a5 + 49) = v42;
  if ( (v42 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v44 == DesktopWindow )
  {
    v45 = 0;
    v46 = 0;
  }
  else
  {
    v47 = *(_QWORD *)(v44 + 40);
    v46 = *(_DWORD *)(v47 + 104);
    v45 = *(_DWORD *)(v47 + 108);
  }
  v48 = (struct tagRECT *)((char *)a5 + 24);
  v49 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v49 )
    v49 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v49 )
  {
    if ( (unsigned int)xxxCallHook(0, *a1, (__int64)a5 + 24, 5) )
    {
      v53 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v48 = v53;
    }
    else
    {
      v50 = *(_BYTE *)(a1[5] + 31);
      v51 = v50 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v51 )
        {
          LODWORD(v98) = *((_DWORD *)a5 + 34) - v46;
          DWORD2(v98) = *((_DWORD *)a5 + 36) - v46;
          DWORD1(v98) = *((_DWORD *)a5 + 35) - v45;
          HIDWORD(v98) = *((_DWORD *)a5 + 37) - v45;
          v52 = CkptRestore((__int64)a1, &v98);
          if ( v52 )
            v52[12] |= 1u;
        }
      }
      else if ( v51 )
      {
        LODWORD(v98) = *((_DWORD *)a5 + 34) - v46;
        DWORD2(v98) = *((_DWORD *)a5 + 36) - v46;
        DWORD1(v98) = *((_DWORD *)a5 + 35) - v45;
        HIDWORD(v98) = *((_DWORD *)a5 + 37) - v45;
        CkptRestore((__int64)a1, &v98);
        SetMinimize((__int64)a1, 0);
      }
      else if ( (v50 & 1) != 0 )
      {
        SetOrClrWF(0, (__int64)a1, 0xF01u, 1);
      }
    }
  }
  v54 = (__int128 *)((char *)a5 + 24);
  v55 = *(_QWORD *)(a1[13] + 40);
  if ( (*(_BYTE *)(v55 + 26) & 0x40) != 0 )
  {
    v56 = *(_DWORD *)(v55 + 112);
    *(_DWORD *)v54 -= v56;
    *((_DWORD *)a5 + 8) -= v56;
    *((_DWORD *)a5 + 9) -= v45;
    *((_DWORD *)a5 + 7) -= v45;
    v57 = -*(_DWORD *)v54;
    v48->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v57;
  }
  else
  {
    *(_DWORD *)v54 -= v46;
    *((_DWORD *)a5 + 8) -= v46;
    *((_DWORD *)a5 + 9) -= v45;
    *((_DWORD *)a5 + 7) -= v45;
  }
  if ( a1[13] == GetDesktopWindow((__int64)a1) )
  {
    v58 = *(_BYTE *)(a1[5] + 24) & 0x88;
    v94 = v58;
    v59 = WindowArrangementAllowed((struct tagWND *)a1);
    v60 = a1[5];
    v61 = *(char *)(v60 + 24);
    if ( v59 )
    {
      if ( (v61 & 0x80u) == 0 )
      {
        DpiDependentMetric = 0;
      }
      else
      {
        v64 = GetDpiForSystem(v60);
        DpiDependentMetric = GetDpiDependentMetric(22LL, v64);
      }
    }
    else
    {
      v62 = GetDpiForSystem(v60);
      DpiDependentMetric = GetDpiDependentMetric(((v61 >> 7) & 0x14u) + 2, v62) - 1;
    }
    *(_QWORD *)&v98 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v66 = *v48;
      v67 = a1[27];
      v68 = DpiDependentMetric + *((_DWORD *)a5 + 7);
      LODWORD(v95) = v68;
      v97 = v66;
      if ( v67 )
      {
        LODWORD(v93) = 0;
        TransformVector(v67, (unsigned int)&v93, (unsigned int)&v95, 0, 0);
        TransformVector(v70, (unsigned int)&v97, (unsigned int)&v97.top, v69, v69 & v91);
        TransformVector(v72, (unsigned int)&v97.right, (unsigned int)&v97.bottom, v71, v71 & v92);
        v68 = v95;
      }
      v73 = *(_QWORD *)(v98 + 104);
      v93 = v73;
      if ( v73 )
      {
        do
        {
          v74 = *(_QWORD *)(v73 + 40);
          if ( (*(_DWORD *)(v74 + 24) & 1) != 0 )
          {
            v75 = -(__int64)(v58 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v68 >= *(_DWORD *)(v75 + v74 + 48) && v68 < *(_DWORD *)(v75 + v74 + 56) )
            {
              if ( !WindowArrangementAllowed((struct tagWND *)a1) )
                goto LABEL_136;
              v76 = *(_DWORD *)(v75 + v74 + 44);
              if ( v97.right >= v76 && v97.right < *(_DWORD *)(v75 + v74 + 52) )
                goto LABEL_136;
              if ( v97.left >= v76 && v97.left < *(_DWORD *)(v75 + v74 + 52) )
                goto LABEL_136;
            }
            v58 = v94;
          }
          v68 = v95;
          v73 = *(_QWORD *)(v93 + 56);
          v93 = v73;
        }
        while ( v73 );
        v48 = (struct tagRECT *)((char *)a5 + 24);
      }
      v65 = MonitorFromRect(v48, 2u, 0);
    }
    else
    {
      v65 = *(_QWORD *)(GetDispInfo(v60, 0LL) + 96);
    }
    if ( WindowArrangementAllowed((struct tagWND *)a1) )
    {
      v81 = *(_QWORD *)(a1[5] + 168);
      if ( v81 && (unsigned int)GreGetRgnBox(v81, &v99) )
      {
        v82 = a1[5];
        v54 = &v99;
        v83 = *((_DWORD *)a5 + 7);
        LODWORD(v99) = v48->left;
        v84 = *((_DWORD *)a5 + 8);
        DWORD1(v99) += v83 - *(_DWORD *)(v82 + 92);
        DWORD2(v99) = v84;
        HIDWORD(v99) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v82 + 100) - HIDWORD(v99);
      }
      if ( v58 )
        MonitorRect = GetMonitorRect(&v97, v65);
      else
        MonitorRect = GetMonitorWorkRect(&v97, v65);
      v86 = *((_DWORD *)v54 + 1);
      v87 = HIDWORD(*(_QWORD *)MonitorRect);
      if ( v86 < (int)v87 )
      {
        v88 = v87 - v86;
        *((_DWORD *)a5 + 7) += v88;
        *((_DWORD *)a5 + 9) += v88;
      }
    }
    else
    {
      if ( v58 )
      {
        v77 = GetMonitorRect(&v97, v65);
        v78 = *((_DWORD *)a5 + 7);
        v79 = HIDWORD(*(_QWORD *)v77) - DpiDependentMetric;
        if ( v78 <= v79 )
          v78 = v79;
      }
      else
      {
        MonitorWorkRect = GetMonitorWorkRect(&v97, v65);
        v78 = *((_DWORD *)a5 + 7);
        if ( v78 <= (int)(HIDWORD(*(_QWORD *)MonitorWorkRect) - DpiDependentMetric) )
          v78 = HIDWORD(*(_QWORD *)GetMonitorWorkRect(&v98, v65)) - DpiDependentMetric;
      }
      *((_DWORD *)a5 + 7) = v78;
    }
  }
LABEL_136:
  if ( IsSizingLEFT(*((_DWORD *)a5 + 44)) || v89 - 3 <= 2 || IsSizingRIGHT(v89) || (unsigned int)(v90 - 6) <= 2 )
    TraceWindowResizeTelemetry((HWND *)a1);
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1[5] + 232) &= ~0x80000u;
    RecreateRedirectionBitmap((void **)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
