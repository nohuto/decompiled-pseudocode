/*
 * XREFs of xxxInitializeMoveSizeData @ 0x1C0211E0C
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E97C (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020ECE4 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000798C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00146EC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C002C560 (GetMonitorWorkRectForWindow.c)
 *     _MonitorFromPoint @ 0x1C0042100 (_MonitorFromPoint.c)
 *     GetCaptionHeight @ 0x1C00472F4 (GetCaptionHeight.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B658 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z @ 0x1C020A74C (-AreDockTargetsActive@@YAEPEAU_MOVESIZEDATA@@@Z.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B3E8 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020EAAC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020EEB0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223AB4 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223B7C (-SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223BA8 (-WindowArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025DA2C (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct _MOVESIZEDATA *a2, int a3, int a4, int a5)
{
  struct _MOVESIZEDATA *v7; // rdi
  int v9; // ebx
  __int64 DesktopWindow; // rax
  __int64 v11; // rdx
  __int64 DispInfo; // rax
  int *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagRECT v16; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int *v20; // rdx
  unsigned int v21; // r12d
  int v22; // r15d
  __int128 v23; // xmm0
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  unsigned int v28; // eax
  BOOL v29; // eax
  int v30; // r8d
  int v31; // ecx
  int v32; // ecx
  __int128 v33; // xmm0
  int v34; // eax
  int *v35; // r14
  _BYTE *v36; // rcx
  int v37; // ecx
  bool v38; // al
  int v39; // r9d
  _BYTE *v40; // rcx
  int v41; // eax
  unsigned int v42; // edx
  int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // edx
  __int64 v46; // rdx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // rcx
  char v51; // cl
  int v52; // edx
  int v53; // edx
  int v54; // ecx
  int v55; // edx
  int v56; // eax
  int v57; // ecx
  int v58; // edx
  int v59; // eax
  int v60; // ecx
  int v61; // edx
  unsigned int v62; // ecx
  unsigned int v63; // edx
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  int v67; // eax
  int v68; // eax
  __int64 result; // rax
  struct tagPOINT v70; // [rsp+30h] [rbp-41h]
  __int128 v71; // [rsp+38h] [rbp-39h] BYREF
  struct tagRECT v72; // [rsp+50h] [rbp-21h] BYREF
  __int128 v73; // [rsp+60h] [rbp-11h] BYREF
  struct tagRECT v74; // [rsp+70h] [rbp-1h] BYREF

  v71 = 0LL;
  v7 = a2;
  v9 = 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)a1,
      (_DWORD)a2,
      1,
      16,
      (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
      (char)a1);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) != gpqForeground && !(unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    v9 = 0;
  *((_DWORD *)v7 + 49) = v9 | *((_DWORD *)v7 + 49) & 0xFFFFFFEF;
  *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)v7 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v11 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v13 = (int *)((char *)v7 + 88);
      *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)GetScreenRectForWindow(&v72, a1);
      v16 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v11);
      v13 = (int *)((char *)v7 + 88);
      *(_OWORD *)((char *)v7 + 88) = *GetMonitorWorkRectForWindow(&v72, *(_QWORD *)(DispInfo + 96), a1);
      v16 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v15, v14) + 96) + 40LL) + 44LL);
    }
    v74 = v16;
  }
  else
  {
    *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)(*(_QWORD *)(v11 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)v7 + 88, (char *)v7 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v18 )
      {
        v73 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v18, &v73) )
          IntersectRect((_DWORD *)v7 + 22, (int *)v7 + 22, (int *)&v73);
      }
    }
    v13 = (int *)((char *)v7 + 88);
    v74 = *(struct tagRECT *)((char *)v7 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v74, &v74, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v19 = *((_QWORD *)a1 + 13);
  v20 = (int *)((char *)v7 + 120);
  v21 = (__int16)a4;
  v22 = SHIWORD(a4);
  if ( *(_QWORD *)(*(_QWORD *)(v19 + 40) + 168LL) )
  {
    v23 = *(_OWORD *)v20;
    v24 = __PAIR64__(v22, v21);
    *(_QWORD *)&v71 = __PAIR64__(v22, v21);
    v73 = v23;
    TransformRectBetweenCoordinateSpaces(&v73, &v73, v19, a1);
    TransformPointBetweenCoordinateSpaces(&v71, &v71, *((_QWORD *)a1 + 13), a1);
    v25 = GreRectInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), &v73);
    v26 = DWORD1(v71);
    v27 = (unsigned int)v71;
    *((_DWORD *)v7 + 49) = (v25 != 0 ? 0 : 0x40) | *((_DWORD *)v7 + 49) & 0xFFFFFFBF;
    v28 = ((unsigned int)GrePtInRegion(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 168LL), v27, v26) != 0
         ? 0
         : 0x200000) | *((_DWORD *)v7 + 49) & 0xFFDFFFFF;
  }
  else
  {
    v24 = __PAIR64__(v22, v21);
    *((_DWORD *)v7 + 49) = ((unsigned int)IntersectRect(&v71, v20, v13) == 0 ? 0x40 : 0) | *((_DWORD *)v7 + 49) & 0xFFFFFFBF;
    v29 = PtInRect(v13, __PAIR64__(v22, v21));
    v28 = v30 & 0xFFDFFFFF | (!v29 ? 0x200000 : 0);
  }
  *((_DWORD *)v7 + 49) = v28;
  if ( (v28 & 0x100000) != 0 )
  {
    v72 = v74;
    CCursorClip::SetClip(gpCursorClip, &v72);
  }
  if ( (((a5 & 4) == 0) & (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) >> 5)) != 0 )
  {
    v31 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)v7 + 28) = v31;
    *((_DWORD *)v7 + 26) = v31;
    v32 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)v7 + 29) = v32;
    *((_DWORD *)v7 + 27) = v32;
  }
  else
  {
    xxxGetMinMaxTrackInfo(v7, a5 & 1);
  }
  v33 = *(_OWORD *)((char *)v7 + 120);
  v34 = *((_DWORD *)v7 + 49);
  *((_DWORD *)v7 + 61) = 0;
  v35 = (int *)((char *)v7 + 240);
  *((_DWORD *)v7 + 60) = 4;
  *((_DWORD *)v7 + 71) = v21;
  *((_DWORD *)v7 + 72) = v22;
  *((_DWORD *)v7 + 73) = v21;
  *((_DWORD *)v7 + 74) = v22;
  *((_DWORD *)v7 + 49) = v34 & 0x78FBFF7C | ~(a5 << 25) & 0x4000000;
  *(_OWORD *)((char *)v7 + 24) = v33;
  *(_OWORD *)((char *)v7 + 40) = v33;
  *(_OWORD *)((char *)v7 + 56) = v33;
  *(_OWORD *)((char *)v7 + 72) = v33;
  if ( SizeWithSnapAllowed(a1)
    && AreDockTargetsActive(v7)
    && (v36 = (_BYTE *)*((_QWORD *)a1 + 5), (v36[30] & 4) != 0)
    && (v36[24] & 0x40) == 0
    && (v36[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v37 = 1024;
  }
  else
  {
    v37 = 0;
  }
  *((_DWORD *)v7 + 49) = v37 | *((_DWORD *)v7 + 49) & 0xFFFFFBFF;
  v38 = MoveWithArrangementAllowed(a1);
  v39 = 2048;
  if ( v38
    && AreDockTargetsActive(v7)
    && (v40 = (_BYTE *)*((_QWORD *)a1 + 5), (v40[30] & 4) != 0)
    && (v40[24] & 0x40) == 0
    && (v40[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v41 = v39;
  }
  else
  {
    v41 = 0;
  }
  v42 = v41 | *((_DWORD *)v7 + 49) & 0xFFFFF7FF;
  *((_DWORD *)v7 + 49) = v42;
  if ( (v42 & 0xC00) != 0xC00 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 0 )
    {
      if ( !WindowArrangementAllowed(a1) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_54;
      v42 = *((_DWORD *)v7 + 49);
      v39 = 2048;
    }
    if ( (v42 & v39) == 0 )
    {
      v42 |= v39 | 0x800000;
      *((_DWORD *)v7 + 49) = v42;
    }
    if ( (v42 & 0x400) == 0 )
      *((_DWORD *)v7 + 49) = v42 | 0x400400;
  }
LABEL_54:
  v43 = *((_DWORD *)v7 + 49);
  if ( (v43 & 0xC00) == 0 )
  {
    v44 = MonitorFromPoint(v24, 2u, 0);
    v45 = *((_DWORD *)v7 + 49);
    *((_QWORD *)v7 + 29) = v44;
    goto LABEL_88;
  }
  v46 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v46 + 233) & 3) != 0 || (*(_BYTE *)(v46 + 31) & 1) != 0 )
    v47 = 4096;
  else
    v47 = 0;
  v48 = v47 | v43 & 0xFFFFEFFF;
  *((_DWORD *)v7 + 49) = v48;
  if ( (v48 & 0x1000) != 0 )
  {
    *((_DWORD *)v7 + 61) = 2;
    *((_DWORD *)v7 + 49) = v48 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v24,
    v7,
    (struct tagMONITOR **)v7 + 29,
    (struct _MOVESIZEDATA *)((char *)v7 + 240));
  v49 = *((_DWORD *)v7 + 49);
  if ( (v49 & 0x38000) == 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 && a3 == 9 )
  {
    v49 = v49 & 0xFFFC7FFF | 0x20000;
    *((_DWORD *)v7 + 49) = v49;
  }
  v50 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v50 + 31) & 1) != 0 || (v51 = *(_BYTE *)(v50 + 233), (v51 & 3) == 3) )
  {
    *v35 = 0;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
    {
      v54 = *v35;
      if ( (unsigned int)(a3 - 6) <= 2 )
        v54 = 3;
      *v35 = v54;
    }
    goto LABEL_87;
  }
  if ( (v51 & 1) == 0 )
  {
    if ( (v51 & 2) == 0 )
    {
      *v35 = 4;
      goto LABEL_87;
    }
    v53 = v49 & 0x38000;
    if ( v53 != 0x20000 )
    {
      if ( v53 )
        goto LABEL_81;
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_72;
      if ( (unsigned int)(a3 - 3) > 2 )
      {
LABEL_81:
        *v35 = 2;
        goto LABEL_87;
      }
    }
    goto LABEL_75;
  }
  v52 = v49 & 0x38000;
  if ( v52 == 0x20000 )
    goto LABEL_75;
  if ( v52 )
  {
LABEL_74:
    *v35 = 1;
    goto LABEL_87;
  }
  if ( (unsigned int)(a3 - 6) > 2 )
  {
    if ( (unsigned int)(a3 - 3) > 2 )
      goto LABEL_74;
LABEL_75:
    *v35 = 0;
    goto LABEL_87;
  }
LABEL_72:
  *v35 = 3;
LABEL_87:
  v45 = *((_DWORD *)v7 + 49) ^ ((unsigned __int8)*((_DWORD *)v7 + 49) ^ (unsigned __int8)(*((_DWORD *)v7 + 49) >> 5)) & 0x80;
  *((_DWORD *)v7 + 49) = v45;
LABEL_88:
  *((_DWORD *)v7 + 44) = a3;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_100;
    a3 = 9;
    *((_DWORD *)v7 + 44) = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  v55 = *((_DWORD *)v7 + 49);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    v55 |= 1u;
  v56 = *((_DWORD *)v7 + 6) + *((_DWORD *)v7 + 8);
  *((_DWORD *)v7 + 49) = v55 | 2;
  *((_DWORD *)v7 + 47) = v21;
  *((_DWORD *)v7 + 48) = v22;
  v21 = v56 / 2;
  v70.x = v56 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || *((_DWORD *)v7 + 44) != 9 )
  {
    v22 = (*((_DWORD *)v7 + 7) + *((_DWORD *)v7 + 9)) / 2;
    v70.y = v22;
  }
  else
  {
    v22 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)v7 + 7) + 3;
    v70.y = v22;
  }
  v24 = (__int64)v70;
  zzzInternalSetCursorPos(v21, v70.y, 1, 0);
  xxxMS_FlushWigglies(v57);
  v58 = *((_DWORD *)v7 + 49);
  if ( (v58 & 0x400) == 0 )
    *v35 = 4;
  v45 = v58 & 0xFFFFFF7F;
  *((_DWORD *)v7 + 71) = v21;
  *((_DWORD *)v7 + 49) = v45;
  *((_DWORD *)v7 + 72) = v22;
  *((_DWORD *)v7 + 73) = v21;
  *((_DWORD *)v7 + 74) = v22;
LABEL_100:
  v59 = *((_DWORD *)v7 + 31);
  *((_DWORD *)v7 + 72) -= v59;
  *((_DWORD *)v7 + 74) -= v59;
  *((_QWORD *)v7 + 27) = *((_QWORD *)v7 + 29);
  *((_DWORD *)v7 + 56) = *v35;
  *((_DWORD *)v7 + 49) = v45 ^ ((unsigned __int8)v45 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
  v60 = *((_DWORD *)v7 + 30);
  *((_DWORD *)v7 + 71) -= v60;
  *((_DWORD *)v7 + 73) -= v60;
  *((_QWORD *)v7 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v61 = *((_DWORD *)v7 + 49) ^ (*((_DWORD *)v7 + 49) ^ ~(*((_DWORD *)v7 + 49) << 23)) & 0x10000000;
  *((_DWORD *)v7 + 49) = v61;
  v62 = v61 & 0xFFFFDFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 1) << 13);
  *((_DWORD *)v7 + 49) = v62;
  v63 = v62 & 0xFFFFBFFF | ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 2) << 13);
  v64 = ((unsigned __int16)v63 ^ (unsigned __int16)(v63 >> 5)) & 0x100 ^ v63;
  v65 = (((unsigned __int16)v64 ^ (unsigned __int16)(v64 >> 5)) & 0x200 ^ v64) & 0xDFF7FFFF;
  *((_DWORD *)v7 + 49) = v65;
  if ( (v65 & 2) != 0 )
  {
    v66 = v65 & 0xFFFFF3FF;
    *((_DWORD *)v7 + 49) = v66;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      *((_DWORD *)v7 + 49) = v66 | 0xC00C00;
  }
  *((_DWORD *)v7 + 45) = dword_1C02F72E8[a3];
  *((_DWORD *)v7 + 46) = dword_1C02F7318[a3];
  v67 = dword_1C02F7348[a3];
  if ( v67 != -1 )
    *((_DWORD *)v7 + 42) = *((_DWORD *)v7 + (__int16)v67 + 30) - v21;
  v68 = dword_1C02F7378[a3];
  if ( v68 != -1 )
    *((_DWORD *)v7 + 43) = *((_DWORD *)v7 + (__int16)v68 + 30) - v22;
  *((_DWORD *)v7 + 85) = a5;
  *(_QWORD *)((char *)v7 + 300) = v24;
  *(_OWORD *)((char *)v7 + 248) = 0LL;
  *(_OWORD *)((char *)v7 + 264) = 0LL;
  result = *((_DWORD *)v7 + 70) & 0xFFFFFFF4 | (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 234LL) >> 7) & 0xFFFFFFF5 | (2 * (a5 & 4 | (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) >> 7)));
  *((_DWORD *)v7 + 70) = result;
  return result;
}
