/*
 * XREFs of ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00024C8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     GetCaptionHeight @ 0x1C00BBE0C (GetCaptionHeight.c)
 *     ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA5C (-IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA78 (-IsLeftSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00CBA94 (-IsVerticallyMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A7C0 (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBUMOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4THRESHOLD.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z @ 0x1C020D2C8 (-xxxGetMinMaxTrackInfo@@YAXPEAUMOVESIZEDATA@@H@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020E0F0 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C023CA1C (-AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ.c)
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA64 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAA8 (-MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAD4 (-SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025A608 (GetScreenRectForWindow.c)
 */

void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, int a3, int a4)
{
  int v5; // r13d
  struct MOVESIZEDATA *v6; // rdi
  int v8; // ecx
  __int64 DesktopWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 DispInfo; // rax
  int *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagRECT v19; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int *v23; // rdx
  int v24; // r12d
  __int64 v25; // r15
  __int128 v26; // xmm0
  unsigned __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned int v31; // eax
  BOOL v32; // eax
  int v33; // r8d
  const struct tagWND *v34; // rdx
  int v35; // ecx
  int v36; // ecx
  __int128 v37; // xmm0
  _DWORD *v38; // r14
  unsigned int v39; // r15d
  unsigned int v40; // eax
  const struct tagWND *v41; // rdx
  WindowArrangement *v42; // rcx
  int v43; // r8d
  _BYTE *v44; // rcx
  int v45; // eax
  WindowArrangement *v46; // rcx
  int v47; // r8d
  int v48; // r9d
  _BYTE *v49; // rcx
  int v50; // eax
  unsigned int v51; // r8d
  const struct tagWND *v52; // rdx
  WindowArrangement *v53; // rcx
  int v54; // r8d
  int v55; // r9d
  __int64 v56; // rax
  unsigned int v57; // edx
  int v58; // edx
  int v59; // eax
  unsigned int v60; // edx
  int v61; // edx
  int v62; // r9d
  const struct tagWND *v63; // rcx
  int v64; // edx
  const struct tagWND *v65; // rcx
  int v66; // r9d
  int v67; // r10d
  int v68; // edx
  int v69; // edx
  int v70; // r9d
  int v71; // r10d
  int v72; // edx
  int v73; // edx
  int v74; // eax
  unsigned int v75; // r8d
  int v76; // edx
  int v77; // eax
  int v78; // ecx
  int v79; // ecx
  int v80; // eax
  unsigned int v81; // edx
  unsigned int v82; // edx
  unsigned int v83; // edx
  int v84; // edx
  int v85; // eax
  int v86; // eax
  unsigned __int64 v87; // [rsp+50h] [rbp-39h]
  struct tagPOINT v88; // [rsp+50h] [rbp-39h]
  unsigned int v89; // [rsp+58h] [rbp-31h]
  __int128 v90; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v91; // [rsp+70h] [rbp-19h] BYREF
  __int128 v92; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v93; // [rsp+90h] [rbp+7h] BYREF

  v90 = 0LL;
  v5 = a3;
  v6 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      24,
      4,
      1,
      24,
      (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
      (char)a1);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground || (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    v8 = 16;
  else
    v8 = 0;
  *((_DWORD *)v6 + 50) = v8 | *((_DWORD *)v6 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)v6 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)v6 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *((_DWORD *)v6 + 73) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v10 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v14 = (int *)((char *)v6 + 88);
      *(_OWORD *)((char *)v6 + 88) = *(_OWORD *)GetScreenRectForWindow(&v91, a1);
      v19 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo, v10, v11, v12);
      v14 = (int *)((char *)v6 + 88);
      *(_OWORD *)((char *)v6 + 88) = *(_OWORD *)GetMonitorWorkRectForWindow(
                                                  (__int64)&v91,
                                                  *(_QWORD *)(DispInfo + 96),
                                                  a1);
      v19 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v16, v15, v17, v18) + 96) + 40LL) + 44LL);
    }
    v93 = v19;
  }
  else
  {
    *(_OWORD *)((char *)v6 + 88) = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)v6 + 88, (char *)v6 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v21 )
      {
        v92 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v21, &v92) )
          IntersectRect((_DWORD *)v6 + 22, (int *)v6 + 22, (int *)&v92);
      }
    }
    v14 = (int *)((char *)v6 + 88);
    v93 = *(struct tagRECT *)((char *)v6 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v93, &v93, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v22 = *((_QWORD *)a1 + 13);
  v23 = (int *)((char *)v6 + 120);
  v24 = SHIWORD(a4);
  v89 = (__int16)a4;
  LODWORD(v87) = (__int16)a4;
  HIDWORD(v87) = SHIWORD(a4);
  v25 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 168LL);
  if ( v25 )
  {
    v26 = *(_OWORD *)v23;
    v27 = v87;
    *(_QWORD *)&v90 = v87;
    v92 = v26;
    TransformRectBetweenCoordinateSpaces(&v92, &v92, v22, a1);
    TransformPointBetweenCoordinateSpaces(&v90, &v90, *((_QWORD *)a1 + 13), a1);
    v28 = GreRectInRegion(v25, &v92);
    v29 = DWORD1(v90);
    v30 = (unsigned int)v90;
    *((_DWORD *)v6 + 50) = (v28 != 0 ? 0 : 0x40) | *((_DWORD *)v6 + 50) & 0xFFFFFFBF;
    v31 = ((unsigned int)GrePtInRegion(v25, v30, v29) != 0 ? 0 : 0x200000) | *((_DWORD *)v6 + 50) & 0xFFDFFFFF;
  }
  else
  {
    v27 = v87;
    *((_DWORD *)v6 + 50) = ((unsigned int)IntersectRect(&v90, v23, v14) == 0 ? 0x40 : 0) | *((_DWORD *)v6 + 50) & 0xFFFFFFBF;
    v32 = PtInRect(v14, v87);
    v31 = v33 & 0xFFDFFFFF | (!v32 ? 0x200000 : 0);
  }
  *((_DWORD *)v6 + 50) = v31;
  if ( (v31 & 0x100000) != 0 )
  {
    v91 = v93;
    CCursorClip::SetClip(gpCursorClip, &v91);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v34 = (const struct tagWND *)gpsi;
    v35 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)v6 + 28) = v35;
    *((_DWORD *)v6 + 26) = v35;
    v36 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)v6 + 29) = v36;
    *((_DWORD *)v6 + 27) = v36;
  }
  else
  {
    xxxGetMinMaxTrackInfo(v6);
  }
  v37 = *(_OWORD *)((char *)v6 + 120);
  v38 = (_DWORD *)((char *)v6 + 240);
  v39 = v89;
  v40 = *((_DWORD *)v6 + 50) & 0xFDFFFFFC;
  *((_DWORD *)v6 + 61) = 0;
  *((_DWORD *)v6 + 50) = v40 & 0xBEFBFF7F;
  *((_DWORD *)v6 + 60) = 4;
  *(_OWORD *)((char *)v6 + 24) = v37;
  *((_DWORD *)v6 + 62) = v89;
  *(_OWORD *)((char *)v6 + 40) = v37;
  *((_DWORD *)v6 + 63) = v24;
  *(_OWORD *)((char *)v6 + 56) = v37;
  *((_DWORD *)v6 + 64) = v89;
  *(_OWORD *)((char *)v6 + 72) = v37;
  *((_DWORD *)v6 + 65) = v24;
  if ( WindowArrangement::SizeWithSnapAllowed(a1, v34)
    && (*((_DWORD *)v6 + 50) & 0x100000) != 0
    && WindowArrangement::AreDockTargetActiveForSnapMoveSize(v42)
    && (v44 = (_BYTE *)*((_QWORD *)a1 + 5), (v44[30] & 4) != 0)
    && (v44[24] & 0x40) == 0
    && (v44[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL) + 30LL) & 1) != 0
    && (v41 = *(const struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL), *(_WORD *)v41 != *(_WORD *)(gpsi + 900LL)) )
  {
    v45 = 1024;
  }
  else
  {
    v43 = *((_DWORD *)v6 + 50);
    v45 = 0;
  }
  *((_DWORD *)v6 + 50) = v45 | v43 & 0xFFFFFBFF;
  if ( WindowArrangement::MoveWithArrangementAllowed(a1, v41)
    && (*((_DWORD *)v6 + 50) & 0x100000) != 0
    && WindowArrangement::AreDockTargetActiveForSnapMoveSize(v46)
    && (v49 = (_BYTE *)*((_QWORD *)a1 + 5), (v49[30] & 4) != 0)
    && (v49[24] & 0x40) == 0
    && (v49[31] & 0x40) == 0
    && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 2) + 40LL) + 30LL) & 1) != 0
    && **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) != *(_WORD *)(gpsi + 900LL) )
  {
    v50 = v48;
  }
  else
  {
    v47 = *((_DWORD *)v6 + 50);
    v50 = 0;
  }
  v51 = v50 | v47 & 0xFFFFF7FF;
  *((_DWORD *)v6 + 50) = v51;
  if ( (v51 & 0xC00) != 0xC00 )
  {
    if ( !IsSemiMaximized(a1) )
    {
      if ( !WindowArrangement::IsSupported(v53, v52) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_63;
      v54 = *((_DWORD *)v6 + 50);
      v55 = 2048;
    }
    if ( (v54 & v55) == 0 )
    {
      v54 |= v55 | 0x800000;
      *((_DWORD *)v6 + 50) = v54;
    }
    if ( (v54 & 0x400) == 0 )
      *((_DWORD *)v6 + 50) = v54 | 0x400400;
  }
LABEL_63:
  if ( (*((_DWORD *)v6 + 50) & 0xC00) == 0 )
  {
    v56 = MonitorFromPoint(v27, 2u, 0);
    v57 = *((_DWORD *)v6 + 50);
    *((_QWORD *)v6 + 29) = v56;
    goto LABEL_95;
  }
  if ( IsSemiMaximized(a1) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    v59 = 4096;
  else
    v59 = 0;
  v60 = v59 | v58 & 0xFFFFEFFF;
  *((_DWORD *)v6 + 50) = v60;
  if ( (v60 & 0x1000) != 0 )
  {
    *((_DWORD *)v6 + 61) = 2;
    *((_DWORD *)v6 + 50) = v60 | 0x40000;
  }
  HitTargetAndMonitorFromPoint(
    (struct tagPOINT)v27,
    v6,
    (struct tagMONITOR **)v6 + 29,
    (struct MOVESIZEDATA *)((char *)v6 + 240));
  if ( (*((_DWORD *)v6 + 50) & 0x38000) == 0 && IsSemiMaximized(a1) && v5 == 9 )
    *((_DWORD *)v6 + 50) = v62 | v61 & 0xFFFE7FFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsVerticallyMaximized(a1) )
  {
    *v38 = 0;
    if ( !IsVerticallyMaximized(a1) || (unsigned int)(v5 - 6) > 2 )
      goto LABEL_94;
    goto LABEL_93;
  }
  if ( !IsLeftSemiMaximized(v63) )
  {
    if ( !IsRightSemiMaximized(v65) )
    {
      *v38 = 4;
      goto LABEL_94;
    }
    v72 = v71 & v69;
    if ( v72 == v70 )
      goto LABEL_83;
    if ( !v72 )
    {
      if ( (unsigned int)(v5 - 6) <= 2 )
        goto LABEL_93;
      if ( (unsigned int)(v5 - 3) <= 2 )
        goto LABEL_83;
    }
    *v38 = 2;
    goto LABEL_94;
  }
  v68 = v67 & v64;
  if ( v68 == v66 )
    goto LABEL_83;
  if ( !v68 )
  {
    if ( (unsigned int)(v5 - 6) > 2 )
    {
      if ( (unsigned int)(v5 - 3) > 2 )
        goto LABEL_82;
LABEL_83:
      *v38 = 0;
      goto LABEL_94;
    }
LABEL_93:
    *v38 = 3;
    goto LABEL_94;
  }
LABEL_82:
  *v38 = 1;
LABEL_94:
  v57 = *((_DWORD *)v6 + 50) ^ ((unsigned __int8)*((_DWORD *)v6 + 50) ^ (unsigned __int8)(*((_DWORD *)v6 + 50) >> 5)) & 0x80;
  *((_DWORD *)v6 + 50) = v57;
LABEL_95:
  if ( v5 )
  {
    if ( v5 != 10 )
    {
      v75 = *((_DWORD *)v6 + 62);
      goto LABEL_108;
    }
    v5 = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  v73 = *((_DWORD *)v6 + 50);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    v73 |= 1u;
  v74 = *((_DWORD *)v6 + 6) + *((_DWORD *)v6 + 8);
  *((_DWORD *)v6 + 50) = v73 | 2;
  *((_DWORD *)v6 + 47) = v89;
  *((_DWORD *)v6 + 48) = v24;
  v39 = v74 / 2;
  v88.x = v74 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || v5 != 9 )
  {
    v24 = (*((_DWORD *)v6 + 7) + *((_DWORD *)v6 + 9)) / 2;
    v88.y = v24;
  }
  else
  {
    v24 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)v6 + 7) + 3;
    v88.y = v24;
  }
  v27 = (unsigned __int64)v88;
  zzzInternalSetCursorPos(v39, v88.y, 1, 0);
  xxxMS_FlushWigglies();
  v76 = *((_DWORD *)v6 + 50);
  if ( (v76 & 0x400) == 0 )
    *v38 = 4;
  v57 = v76 & 0xFFFFFF7F;
  *((_DWORD *)v6 + 62) = v39;
  *((_DWORD *)v6 + 50) = v57;
  v75 = v39;
  *((_DWORD *)v6 + 63) = v24;
  *((_DWORD *)v6 + 64) = v39;
  *((_DWORD *)v6 + 65) = v24;
LABEL_108:
  v77 = *((_DWORD *)v6 + 31);
  *((_DWORD *)v6 + 63) -= v77;
  *((_DWORD *)v6 + 65) -= v77;
  *((_QWORD *)v6 + 27) = *((_QWORD *)v6 + 29);
  *((_DWORD *)v6 + 56) = *v38;
  *((_DWORD *)v6 + 50) = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)(gdwPUDFlags >> 15)) & 0x20;
  v78 = *((_DWORD *)v6 + 30);
  *((_DWORD *)v6 + 64) -= v78;
  *((_DWORD *)v6 + 62) = v75 - v78;
  *((_QWORD *)v6 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v79 = *((_DWORD *)v6 + 50) ^ (*((_DWORD *)v6 + 50) ^ ~(*((_DWORD *)v6 + 50) << 22)) & 0x8000000;
  *((_DWORD *)v6 + 50) = v79;
  v80 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x2000;
  *((_DWORD *)v6 + 50) = v80;
  v81 = v80 ^ ((unsigned __int16)v80 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x4000;
  v82 = ((unsigned __int16)v81 ^ (unsigned __int16)(v81 >> 5)) & 0x100 ^ v81;
  v83 = (((unsigned __int16)v82 ^ (unsigned __int16)(v82 >> 5)) & 0x200 ^ v82) & 0xEFF7FFFF;
  *((_DWORD *)v6 + 50) = v83;
  if ( (v83 & 2) != 0 )
  {
    *((_DWORD *)v6 + 50) = v83 & 0xFFFFF3FF;
    if ( IsSemiMaximized(a1) )
      *((_DWORD *)v6 + 50) = v84 | 0xC00C00;
  }
  *((_DWORD *)v6 + 45) = dword_1C02F4530[v5];
  *((_DWORD *)v6 + 46) = dword_1C02F4500[v5];
  v85 = dword_1C02F4590[v5];
  if ( v85 != -1 )
    *((_DWORD *)v6 + 42) = *((_DWORD *)v6 + (__int16)v85 + 30) - v39;
  v86 = dword_1C02F4560[v5];
  if ( v86 != -1 )
    *((_DWORD *)v6 + 43) = *((_DWORD *)v6 + (__int16)v86 + 30) - v24;
  *((_QWORD *)v6 + 33) = v27;
  *((_DWORD *)v6 + 44) = v5;
  *(_OWORD *)((char *)v6 + 296) = 0LL;
  *(_OWORD *)((char *)v6 + 312) = 0LL;
  *((_DWORD *)v6 + 83) &= 0xFFFFFFF0;
  *((_DWORD *)v6 + 82) = 0;
}
