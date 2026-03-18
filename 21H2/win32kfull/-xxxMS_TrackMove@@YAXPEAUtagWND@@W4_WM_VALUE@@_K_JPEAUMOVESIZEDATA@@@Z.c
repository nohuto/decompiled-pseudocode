/*
 * XREFs of ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     SetMinimize @ 0x1C00CB6A0 (SetMinimize.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C00ED8B4 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     _GetMessagePos @ 0x1C0101D84 (_GetMessagePos.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     TransformRegionBetweenCoordinateSpaces @ 0x1C01DFFD4 (TransformRegionBetweenCoordinateSpaces.c)
 *     TransformVector @ 0x1C02073DC (TransformVector.c)
 *     ?MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1C020AAD8 (-MakeArrangedStateObservable@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1C020B5BC (-UpdateMoveSizeDataForCancelation@@YAXPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z @ 0x1C020C448 (-xxxDrawDragRect@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x1C020F9AC (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA64 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

void __fastcall xxxMS_TrackMove(ULONG_PTR a1, int a2, unsigned __int64 a3, __int64 a4, struct MOVESIZEDATA *a5)
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
  int DpiDependentMetric; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int DpiForSystem; // eax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // r9d
  unsigned __int64 v30; // r15
  unsigned int MessagePos; // eax
  __int64 v32; // r8
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned int v42; // ecx
  LONG y; // edx
  int v44; // r8d
  int v45; // eax
  __int64 DesktopWindow; // rax
  __int64 v47; // rdx
  int v48; // r15d
  int v49; // r12d
  __int64 v50; // rax
  struct tagRECT *v51; // r13
  __int64 v52; // rcx
  char v53; // cl
  char v54; // al
  struct tagRECT *v55; // rax
  struct tagRECT v56; // xmm0
  __int128 *v57; // rbx
  __int64 v58; // rcx
  int v59; // eax
  int v60; // ecx
  const struct tagWND *v61; // rdx
  bool IsSupported; // al
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  int v66; // r15d
  unsigned int v67; // eax
  int v68; // r12d
  unsigned int v69; // eax
  __int64 v70; // r11
  const struct tagWND *v71; // rdx
  __int64 v72; // r14
  struct tagRECT v73; // xmm0
  float *v74; // r15
  int v75; // ecx
  int *v76; // r9
  int *v77; // r9
  __int64 v78; // rax
  __int64 v79; // r13
  unsigned __int64 v80; // r15
  LONG v81; // eax
  _QWORD *v82; // rax
  int v83; // ecx
  int v84; // eax
  _QWORD *MonitorWorkRect; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  int v88; // ecx
  int v89; // eax
  _QWORD *MonitorRect; // rax
  int v91; // ecx
  __int64 v92; // rax
  int v93; // eax
  int v94; // [rsp+20h] [rbp-60h]
  int v95; // [rsp+20h] [rbp-60h]
  __int64 v96[2]; // [rsp+30h] [rbp-50h] BYREF
  int v97; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v98; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v99; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v100; // [rsp+58h] [rbp-28h] BYREF
  __int128 v101; // [rsp+68h] [rbp-18h] BYREF

  *(_QWORD *)&v100.left = a3;
  v96[0] = a4;
  LODWORD(v99) = (__int16)a4;
  HIDWORD(v99) = SWORD1(a4);
  v101 = 0LL;
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
        v11 = *((_DWORD *)a5 + 50);
        if ( (v11 & 0x2000000) != 0 )
        {
          v12 = *(_OWORD *)((char *)a5 + 56);
          *(_OWORD *)((char *)a5 + 40) = *(_OWORD *)((char *)a5 + 72);
          *(_OWORD *)((char *)a5 + 24) = v12;
        }
        *((_DWORD *)a5 + 50) = v11 & 0xFFFFFFFD;
        goto LABEL_69;
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
  if ( (_DWORD)a3 == 13 )
  {
    GetMessagePos();
LABEL_69:
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
    if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
    {
      v44 = *((_DWORD *)a5 + 50);
      if ( (v44 & 0x800) == 0 || (((v44 & 0x20) != 0) & *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL)) == 0 )
        xxxDrawDragRect(a5, 0LL, ((v44 & 0xFE000000) << 6) | 1);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
    }
    goto LABEL_74;
  }
  if ( (_DWORD)a3 != 27 )
  {
    if ( (_DWORD)a3 != 37 )
    {
      if ( (_DWORD)a3 == 38 )
      {
LABEL_17:
        if ( !*((_DWORD *)a5 + 46) )
        {
          v17 = *((_DWORD *)a5 + 45) == 0;
          *((_DWORD *)a5 + 46) = dword_1C02F452C[a3];
LABEL_27:
          if ( !v17 )
          {
            v23 = *((_DWORD *)a5 + 50);
            *((_DWORD *)a5 + 60) = 4;
            *((_DWORD *)a5 + 50) = v23 & 0xFFFFF8FF;
            *(_OWORD *)((char *)a5 + 296) = 0LL;
            *(_OWORD *)((char *)a5 + 312) = 0LL;
            *((_DWORD *)a5 + 83) &= 0xFFFFFFFC;
            *((_DWORD *)a5 + 82) = 0;
            MakeArrangedStateObservable(a5);
          }
          *((_QWORD *)a5 + 21) = 0LL;
          goto LABEL_36;
        }
        if ( v16
          || (v18 = GetDpiForSystem(v16, 0LL),
              DpiDependentMetric = GetDpiDependentMetric(13LL, v18),
              v21 = (unsigned int)(DpiDependentMetric >> 31),
              DpiDependentMetric / 2 <= 1) )
        {
          v14 = 1;
        }
        else
        {
          LODWORD(v21) = DpiDependentMetric % 2;
          DpiForSystem = GetDpiForSystem(v20, v21);
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
      *((_DWORD *)a5 + 45) = dword_1C02F452C[a3];
      goto LABEL_27;
    }
    if ( v16
      || (v24 = GetDpiForSystem(v16, 0LL),
          v25 = GetDpiDependentMetric(12LL, v24),
          v27 = (unsigned int)(v25 >> 31),
          v25 / 2 <= 1) )
    {
      v15 = 1;
    }
    else
    {
      LODWORD(v27) = v25 % 2;
      v28 = GetDpiForSystem(v26, v27);
      v15 = (int)GetDpiDependentMetric(12LL, v28) / 2;
    }
    if ( a3 == 37 )
      v15 = -v15;
LABEL_36:
    if ( *((_DWORD *)a5 + 44) == 9 )
    {
      v29 = 9;
      v30 = *((unsigned __int16 *)a5 + 12) | ((unsigned __int64)*((unsigned __int16 *)a5 + 14) << 16);
    }
    else
    {
      MessagePos = GetMessagePos();
      v29 = *((_DWORD *)a5 + 44);
      v30 = MessagePos;
    }
    v32 = *((int *)a5 + 45);
    v96[0] = v30;
    if ( (_DWORD)v32 )
    {
      v33 = v15 + *((_WORD *)a5 + 2 * dword_1C02F4590[v32] + 20);
      LOWORD(v96[0]) = v33;
      LODWORD(v30) = v96[0];
    }
    else
    {
      v33 = v96[0];
    }
    v34 = *((int *)a5 + 46);
    LOWORD(v97) = v33;
    if ( (_DWORD)v34 )
    {
      WORD1(v96[0]) = v14 + *((_WORD *)a5 + 2 * dword_1C02F4560[v34] + 20);
      LODWORD(v30) = v96[0];
    }
    if ( v29 != 9 )
    {
      *((_DWORD *)a5 + 44) = v32 + v34;
      xxxSendMessage(a1);
    }
    LODWORD(v99) = (__int16)v97 - *((_DWORD *)a5 + 42);
    HIDWORD(v99) = SWORD1(v30) - *((_DWORD *)a5 + 43);
    v35 = *(_QWORD *)(a1 + 104);
    v36 = v99;
    v98 = v99;
    v96[0] = *(_QWORD *)(*(_QWORD *)(v35 + 40) + 168LL);
    if ( v96[0] )
    {
      v37 = TransformRegionBetweenCoordinateSpaces(a1, v35, v96);
      v40 = GrePtInRegion(v96[0], (unsigned int)v36, HIDWORD(v98));
      if ( v37 )
        GreDeleteObject(v96[0]);
      if ( !v40 )
        goto LABEL_64;
      v36 = v99;
    }
    else if ( !PtInRect((_DWORD *)a5 + 22, v99) )
    {
LABEL_64:
      v13 = v30;
      goto LABEL_9;
    }
    v98 = *((_QWORD *)a5 + 26);
    v96[0] = v36;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v39, v38);
    LogicalToPhysicalDPIPoint(v96, &v99, CurrentThreadDpiAwarenessContext, &v98);
    if ( ((*(_QWORD *)&v100.left - 38LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v42 = v96[0];
      if ( ((*(_QWORD *)&v100.left - 37LL) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        y = HIDWORD(v96[0]);
      }
      else
      {
        y = gptCursorAsync->y;
        HIDWORD(v96[0]) = y;
        if ( LODWORD(v96[0]) == (_DWORD)gptCursorAsync )
        {
          if ( v15 <= 0 )
            v7 = -1;
          v42 = v7 + LODWORD(v96[0]);
          LODWORD(v96[0]) += v7;
        }
      }
    }
    else
    {
      y = HIDWORD(v96[0]);
      v42 = (unsigned int)gptCursorAsync;
      LODWORD(v96[0]) = (_DWORD)gptCursorAsync;
      if ( HIDWORD(v96[0]) == gptCursorAsync->y )
      {
        if ( v14 <= 0 )
          v7 = -1;
        y = v7 + HIDWORD(v96[0]);
        HIDWORD(v96[0]) += v7;
      }
    }
    zzzInternalSetCursorPos(v42, y, 2, 0);
    goto LABEL_64;
  }
  bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x10) != 0 )
  {
    xxxDrawDragRect(a5, 0LL, 2u);
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
  }
  UpdateMoveSizeDataForCancelation(a5);
LABEL_74:
  CCursorClip::ClearClip(gpCursorClip);
  zzzLockWindowUpdate2(0LL, 1LL);
  xxxReleaseCapture();
  v45 = *((_DWORD *)a5 + 50) | 8;
  *((_DWORD *)a5 + 50) = v45;
  if ( (v45 & 2) != 0 )
    zzzInternalSetCursorPos(*(_QWORD *)((char *)a5 + 188), HIDWORD(*(_QWORD *)((char *)a5 + 188)), 1, 0);
  DesktopWindow = GetDesktopWindow(a1);
  if ( v47 == DesktopWindow )
  {
    v48 = 0;
    v49 = 0;
  }
  else
  {
    v50 = *(_QWORD *)(v47 + 40);
    v49 = *(_DWORD *)(v50 + 104);
    v48 = *(_DWORD *)(v50 + 108);
  }
  v51 = (struct tagRECT *)((char *)a5 + 24);
  v52 = *((_QWORD *)a5 + 3) - *((_QWORD *)a5 + 17);
  if ( !v52 )
    v52 = *((_QWORD *)a5 + 4) - *((_QWORD *)a5 + 18);
  if ( v52 )
  {
    if ( (unsigned int)xxxCallHook(0, *(_QWORD *)a1, (__int64)a5 + 24, 5) )
    {
      v56 = *(struct tagRECT *)((char *)a5 + 136);
      *((_QWORD *)a5 + 26) = *((_QWORD *)a5 + 27);
      *v51 = v56;
    }
    else
    {
      v53 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      v54 = v53 & 0x20;
      if ( *((_DWORD *)a5 + 44) == 9 )
      {
        if ( v54 )
        {
          v100.left = *((_DWORD *)a5 + 34) - v49;
          v100.right = *((_DWORD *)a5 + 36) - v49;
          v100.top = *((_DWORD *)a5 + 35) - v48;
          v100.bottom = *((_DWORD *)a5 + 37) - v48;
          v55 = CkptRestore((struct tagWND *)a1, &v100);
          if ( v55 )
            v55[3].left |= 1u;
        }
      }
      else if ( v54 )
      {
        v100.left = *((_DWORD *)a5 + 34) - v49;
        v100.right = *((_DWORD *)a5 + 36) - v49;
        v100.top = *((_DWORD *)a5 + 35) - v48;
        v100.bottom = *((_DWORD *)a5 + 37) - v48;
        CkptRestore((struct tagWND *)a1, &v100);
        SetMinimize((struct tagWND *)a1, 0);
      }
      else if ( (v53 & 1) != 0 )
      {
        SetOrClrWF(0, (struct tagWND *)a1, 0xF01u, 1);
      }
    }
  }
  v57 = (__int128 *)((char *)a5 + 24);
  v58 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
  if ( (*(_BYTE *)(v58 + 26) & 0x40) != 0 )
  {
    v59 = *(_DWORD *)(v58 + 112);
    *(_DWORD *)v57 -= v59;
    *((_DWORD *)a5 + 8) -= v59;
    *((_DWORD *)a5 + 9) -= v48;
    *((_DWORD *)a5 + 7) -= v48;
    v60 = -*(_DWORD *)v57;
    v51->left = -*((_DWORD *)a5 + 8);
    *((_DWORD *)a5 + 8) = v60;
  }
  else
  {
    *(_DWORD *)v57 -= v49;
    *((_DWORD *)a5 + 8) -= v49;
    *((_DWORD *)a5 + 9) -= v48;
    *((_DWORD *)a5 + 7) -= v48;
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) )
  {
    LODWORD(v98) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 24LL) & 0x88;
    IsSupported = WindowArrangement::IsSupported((WindowArrangement *)a1, v61);
    v65 = *(_QWORD *)(a1 + 40);
    v66 = *(char *)(v65 + 24);
    if ( IsSupported )
    {
      if ( (v66 & 0x80u) == 0 )
      {
        v68 = 0;
      }
      else
      {
        v69 = GetDpiForSystem(v65, 0LL);
        v68 = GetDpiDependentMetric(22LL, v69);
      }
    }
    else
    {
      v67 = GetDpiForSystem(v65, 0LL);
      v68 = GetDpiDependentMetric(((v66 >> 7) & 0x14u) + 2, v67) - 1;
    }
    v70 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v73 = *v51;
      v74 = *(float **)(a1 + 216);
      v75 = v68 + *((_DWORD *)a5 + 7);
      v97 = v75;
      v100 = v73;
      if ( v74 )
      {
        LODWORD(v96[0]) = 0;
        TransformVector(v74, (int *)v96, &v97, 0LL, 0);
        TransformVector(v74, &v100.left, &v100.top, v76, (unsigned int)v76 & v94);
        TransformVector(v74, &v100.right, &v100.bottom, v77, (unsigned int)v77 & v95);
        v75 = v97;
      }
      v78 = *(_QWORD *)(v70 + 104);
      v96[0] = v78;
      if ( v78 )
      {
        while ( 1 )
        {
          v79 = *(_QWORD *)(v78 + 40);
          if ( (*(_DWORD *)(v79 + 24) & 1) != 0 )
          {
            v80 = -(__int64)((_DWORD)v98 != 0) & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v75 >= *(_DWORD *)(v80 + v79 + 48) && v75 < *(_DWORD *)(v80 + v79 + 56) )
            {
              if ( !WindowArrangement::IsSupported((WindowArrangement *)a1, 0LL) )
                goto LABEL_133;
              v81 = *(_DWORD *)(v80 + v79 + 44);
              if ( v100.right >= v81 && v100.right < *(_DWORD *)(v80 + v79 + 52) )
                goto LABEL_133;
              if ( v100.left >= v81 && v100.left < *(_DWORD *)(v80 + v79 + 52) )
                goto LABEL_133;
            }
          }
          v75 = v97;
          v78 = *(_QWORD *)(v96[0] + 56);
          v96[0] = v78;
          if ( !v78 )
          {
            v51 = (struct tagRECT *)((char *)a5 + 24);
            break;
          }
        }
      }
      v72 = MonitorFromRect(v51, 2u, 0);
    }
    else
    {
      v72 = *(_QWORD *)(GetDispInfo(v65, 0LL, v63, v64) + 96);
    }
    if ( WindowArrangement::IsSupported((WindowArrangement *)a1, v71) )
    {
      v86 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 168LL);
      if ( v86 && (unsigned int)GreGetRgnBox(v86, &v101) )
      {
        v87 = *(_QWORD *)(a1 + 40);
        v57 = &v101;
        v88 = *((_DWORD *)a5 + 7);
        LODWORD(v101) = v51->left;
        v89 = *((_DWORD *)a5 + 8);
        DWORD1(v101) += v88 - *(_DWORD *)(v87 + 92);
        DWORD2(v101) = v89;
        HIDWORD(v101) = *((_DWORD *)a5 + 9) + *(_DWORD *)(v87 + 100) - HIDWORD(v101);
      }
      if ( (_DWORD)v98 )
        MonitorRect = (_QWORD *)GetMonitorRect((__int64)&v100, v72);
      else
        MonitorRect = (_QWORD *)GetMonitorWorkRect((__int64)&v100, v72);
      v91 = *((_DWORD *)v57 + 1);
      v92 = HIDWORD(*MonitorRect);
      if ( v91 < (int)v92 )
      {
        v93 = v92 - v91;
        *((_DWORD *)a5 + 7) += v93;
        *((_DWORD *)a5 + 9) += v93;
      }
    }
    else
    {
      if ( (_DWORD)v98 )
      {
        v82 = (_QWORD *)GetMonitorRect((__int64)&v100, v72);
        v83 = *((_DWORD *)a5 + 7);
        v84 = HIDWORD(*v82) - v68;
        if ( v83 <= v84 )
          v83 = v84;
      }
      else
      {
        MonitorWorkRect = (_QWORD *)GetMonitorWorkRect((__int64)&v100, v72);
        v83 = *((_DWORD *)a5 + 7);
        if ( v83 <= (int)(HIDWORD(*MonitorWorkRect) - v68) )
          v83 = HIDWORD(*(_QWORD *)GetMonitorWorkRect((__int64)v96, v72)) - v68;
      }
      *((_DWORD *)a5 + 7) = v83;
    }
  }
LABEL_133:
  xxxCommitMoveSize((struct tagWND *)a1, a5);
  if ( !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)a1) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    *(_DWORD *)(a1 + 320) &= ~0x20000u;
    RecreateRedirectionBitmap((struct tagWND *)a1, 0, 0, 0, 0, 0LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
}
