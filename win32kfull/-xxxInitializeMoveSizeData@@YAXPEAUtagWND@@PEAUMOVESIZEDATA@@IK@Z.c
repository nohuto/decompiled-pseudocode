void __fastcall xxxInitializeMoveSizeData(struct tagWND *a1, struct MOVESIZEDATA *a2, int a3, int a4)
{
  char v8; // dl
  int HasForeground; // eax
  int v10; // ecx
  char v11; // dl
  char v12; // r11
  char v13; // r8
  int WindowState; // eax
  const char *StateString; // rax
  __int64 v16; // r10
  char v17; // r8
  char v18; // r11
  __int64 DesktopWindow; // rax
  __int64 v20; // rdx
  __int64 DispInfo; // rax
  int *v22; // rdi
  __int64 v23; // rcx
  struct tagRECT v24; // xmm0
  __int64 TopLevelWindow; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r12d
  __int64 v29; // r15
  __int128 v30; // xmm0
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // edx
  unsigned int v37; // r8d
  BOOL v38; // eax
  int v39; // r8d
  char v40; // dl
  char v41; // r8
  const struct tagWND *v42; // rdx
  int v43; // ecx
  int v44; // ecx
  char v45; // r8
  __int128 v46; // xmm0
  _DWORD *v47; // r15
  int v48; // edi
  unsigned int v49; // eax
  bool v50; // al
  const struct tagWND *v51; // rdx
  WindowArrangement *v52; // rcx
  int v53; // r8d
  _BYTE *v54; // rcx
  int v55; // ecx
  bool v56; // al
  WindowArrangement *v57; // rcx
  int v58; // r8d
  int v59; // r10d
  _BYTE *v60; // rcx
  int v61; // eax
  unsigned int v62; // edx
  const struct tagWND *v63; // rdx
  WindowArrangement *v64; // rcx
  int v65; // r10d
  int v66; // r9d
  int v67; // edx
  __int64 v68; // rcx
  int v69; // r8d
  int v70; // eax
  __int128 *Prop; // rdi
  int v72; // edx
  int v73; // r8d
  unsigned int v74; // edx
  __int128 v75; // xmm0
  __int64 v76; // rcx
  bool v77; // al
  int v78; // edx
  int v79; // r10d
  int v80; // r9d
  const struct tagWND *v81; // rcx
  int v82; // edx
  const struct tagWND *v83; // rcx
  int v84; // r10d
  int v85; // r11d
  int v86; // edx
  int v87; // edx
  int v88; // r10d
  int v89; // r11d
  int v90; // edx
  char v91; // dl
  char v92; // r8
  int v93; // eax
  unsigned int v94; // edi
  int v95; // ecx
  int v96; // ecx
  char v97; // dl
  char v98; // r8
  const char *v99; // rdi
  const char *v100; // rax
  int v101; // eax
  __int64 v102; // rax
  int v103; // ecx
  int v104; // r9d
  int v105; // ecx
  int v106; // eax
  unsigned int v107; // edx
  unsigned int v108; // edx
  unsigned int v109; // edx
  int v110; // r8d
  char v111; // dl
  const char *v112; // rax
  bool v113; // cf
  int v114; // eax
  int v115; // eax
  char v116; // dl
  char v117; // r8
  int v118; // [rsp+20h] [rbp-89h]
  int v119; // [rsp+28h] [rbp-81h]
  int v120; // [rsp+30h] [rbp-79h]
  int v121; // [rsp+38h] [rbp-71h]
  __int64 v122; // [rsp+40h] [rbp-69h]
  __int64 v123; // [rsp+48h] [rbp-61h]
  unsigned __int64 v124; // [rsp+70h] [rbp-39h]
  __int128 v125; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT v126; // [rsp+90h] [rbp-19h] BYREF
  struct tagRECT v127; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v128; // [rsp+B0h] [rbp+7h] BYREF

  v127 = 0LL;
  v125 = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v8 = 0;
  }
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v122 = *(_QWORD *)a1;
    WPP_RECORDER_AND_TRACE_SF_qddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_GLOBAL_Control,
      v118,
      1u,
      0x4Au,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  }
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground
    || (HasForeground = CoreWindowProp::CompositeAppHasForeground(a1), v10 = 0, HasForeground) )
  {
    v10 = 16;
  }
  *((_DWORD *)a2 + 50) = v10 | *((_DWORD *)a2 + 50) & 0xFFFFFFEF;
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dddddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      1u,
      0x4Bu,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v12 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v13 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v13 = 0;
  }
  if ( v12 || v13 )
  {
    WindowState = AdvancedWindowPos::GetWindowState(a1);
    StateString = AdvancedWindowPos::GetStateString(WindowState);
    WPP_RECORDER_AND_TRACE_SF_s(
      *(_QWORD *)(v16 + 24),
      v18,
      v17,
      (__int64)gFullLog,
      5u,
      1u,
      0x4Cu,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      StateString);
  }
  *((_DWORD *)a2 + 72) = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v20 == DesktopWindow )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x88) != 0 || *(_DWORD *)*gpDispInfo > 1u )
    {
      v22 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetScreenRectForWindow((__m128i *)&v126, a1);
      v24 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    }
    else
    {
      DispInfo = GetDispInfo(gpDispInfo);
      v22 = (int *)((char *)a2 + 88);
      *(__m128i *)((char *)a2 + 88) = *GetMonitorWorkRectForWindow((__m128i *)&v126, *(_QWORD *)(DispInfo + 96), a1);
      v24 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(GetDispInfo(v23) + 96) + 40LL) + 44LL);
    }
    v127 = v24;
  }
  else
  {
    *(_OWORD *)((char *)a2 + 88) = *(_OWORD *)(*(_QWORD *)(v20 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces((char *)a2 + 88, (char *)a2 + 88, a1, *((_QWORD *)a1 + 13));
    TopLevelWindow = GetTopLevelWindow((__int64)a1);
    if ( TopLevelWindow )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 168LL);
      if ( v26 )
      {
        v128 = 0LL;
        if ( (unsigned int)GreGetRgnBox(v26, &v128) )
          IntersectRect((_DWORD *)a2 + 22, (int *)a2 + 22, (int *)&v128);
      }
    }
    v22 = (int *)((char *)a2 + 88);
    v127 = *(struct tagRECT *)((char *)a2 + 88);
    if ( (unsigned int)IsWindowDesktopComposed(a1) && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 )
      LogicalToPhysicalDPIRect(&v127, &v127, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), 0LL);
  }
  v27 = *((_QWORD *)a1 + 13);
  v28 = SHIWORD(a4);
  LODWORD(v124) = (__int16)a4;
  HIDWORD(v124) = SHIWORD(a4);
  v29 = *(_QWORD *)(*(_QWORD *)(v27 + 40) + 168LL);
  if ( v29 )
  {
    v30 = *(_OWORD *)((char *)a2 + 120);
    v31 = v124;
    *(_QWORD *)&v125 = v124;
    v128 = v30;
    TransformRectBetweenCoordinateSpaces(&v128, &v128, v27, a1);
    TransformPointBetweenCoordinateSpaces(&v125, &v125, *((_QWORD *)a1 + 13), a1);
    v32 = GreRectInRegion(v29, &v128);
    v33 = DWORD1(v125);
    v34 = (unsigned int)v125;
    *((_DWORD *)a2 + 50) = (v32 != 0 ? 0 : 0x40) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v35 = ((unsigned int)GrePtInRegion(v29, v34, v33) != 0 ? 0 : 0x100000) | *((_DWORD *)a2 + 50) & 0xFFEFFFFF;
  }
  else
  {
    v31 = v124;
    *((_DWORD *)a2 + 50) = ((unsigned int)IntersectRect(&v125, (int *)a2 + 30, v22) == 0 ? 0x40 : 0) | *((_DWORD *)a2 + 50) & 0xFFFFFFBF;
    v38 = PtInRect(v22, v124);
    v37 = v39 & 0xFFEFFFFF;
    v35 = v37 | (!v38 ? 0x100000 : 0);
  }
  *((_DWORD *)a2 + 50) = v35;
  if ( (v35 & 0x40) != 0 )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v37,
        (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        3,
        1,
        77,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x100000) != 0 )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        v37,
        (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
        3,
        1,
        78,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    }
  }
  if ( (*((_DWORD *)a2 + 50) & 0x80000) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v40 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v40 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v41 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v41 = 0;
    }
    if ( v40 || v41 )
      WPP_RECORDER_AND_TRACE_SF_dddddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v40,
        v41,
        (__int64)gFullLog,
        5u,
        1u,
        0x4Fu,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    v126 = v127;
    CCursorClip::SetClip(gpCursorClip, &v126);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
  {
    v42 = (const struct tagWND *)gpsi;
    v43 = *(_DWORD *)(gpsi + 2124LL);
    *((_DWORD *)a2 + 28) = v43;
    *((_DWORD *)a2 + 26) = v43;
    v44 = *(_DWORD *)(gpsi + 2128LL);
    *((_DWORD *)a2 + 29) = v44;
    *((_DWORD *)a2 + 27) = v44;
  }
  else
  {
    xxxGetMinMaxTrackInfo(a2);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v42) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      || (v45 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
    {
      v45 = 0;
    }
    if ( (_BYTE)v42 || v45 )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        (char)v42,
        v45,
        (__int64)gFullLog,
        5u,
        1u,
        0x50u,
        (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  }
  v46 = *(_OWORD *)((char *)a2 + 120);
  v47 = (_DWORD *)((char *)a2 + 240);
  v48 = v124;
  v49 = *((_DWORD *)a2 + 50) & 0xDE7FFF7C;
  *((_DWORD *)a2 + 60) = 4;
  *((_DWORD *)a2 + 50) = v49;
  *(_OWORD *)((char *)a2 + 24) = v46;
  *((_DWORD *)a2 + 61) = v124;
  *(_OWORD *)((char *)a2 + 40) = v46;
  *((_DWORD *)a2 + 62) = v28;
  *(_OWORD *)((char *)a2 + 56) = v46;
  *((_DWORD *)a2 + 63) = v124;
  *(_OWORD *)((char *)a2 + 72) = v46;
  *((_DWORD *)a2 + 64) = v28;
  v50 = WindowArrangement::SizeWithSnapAllowed(a1, v42);
  v53 = 0;
  if ( !v50
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v52)
    || (v54 = (_BYTE *)*((_QWORD *)a1 + 5), (v54[30] & 4) == 0)
    || (v54[24] & 0x40) != 0
    || (v54[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v51 = *(const struct tagWND **)(*((_QWORD *)a1 + 17) + 8LL),
        v55 = 1024,
        *(_WORD *)v51 == *(_WORD *)(gpsi + 900LL)) )
  {
    v55 = v53;
  }
  *((_DWORD *)a2 + 50) = v55 | *((_DWORD *)a2 + 50) & 0xFFFFFBFF;
  v56 = WindowArrangement::MoveWithArrangementAllowed(a1, v51);
  v58 = 0;
  if ( !v56
    || (*((_DWORD *)a2 + 50) & 0x80000) == 0
    || !WindowArrangement::AreDockTargetActiveForSnapMoveSize(v57)
    || (v60 = (_BYTE *)*((_QWORD *)a1 + 5), (v60[30] & 4) == 0)
    || (v60[24] & 0x40) != 0
    || (v60[31] & 0x40) != 0
    || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 40LL) + 30LL) & 1) == 0
    || (v61 = v59, **(_WORD **)(*((_QWORD *)a1 + 17) + 8LL) == *(_WORD *)(gpsi + 900LL)) )
  {
    v61 = v58;
  }
  v62 = v61 | *((_DWORD *)a2 + 50) & 0xFFFFF7FF;
  *((_DWORD *)a2 + 50) = v62;
  if ( (v62 & 0xC00) != 0xC00 )
  {
    if ( !IsSemiMaximized(a1) )
    {
      if ( !WindowArrangement::IsSupported(v64, v63) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 )
        goto LABEL_113;
      LODWORD(v63) = *((_DWORD *)a2 + 50);
      v65 = 2048;
    }
    if ( ((unsigned int)v63 & v65) == 0 )
    {
      LODWORD(v63) = v65 | (unsigned int)v63 | 0x400000;
      *((_DWORD *)a2 + 50) = (_DWORD)v63;
    }
    if ( ((unsigned __int16)v63 & 0x400) == 0 )
      *((_DWORD *)a2 + 50) = (unsigned int)v63 | 0x200400;
  }
LABEL_113:
  if ( (*((_DWORD *)a2 + 50) & 0xC00) != 0 )
  {
    if ( IsSemiMaximized(a1) || (v70 = v69, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0) )
      v70 = 4096;
    *((_DWORD *)a2 + 50) = v70 | v67 & 0xFFFFEFFF;
    Prop = (__int128 *)GetProp(v68, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
    if ( !Prop )
    {
      if ( (*((_DWORD *)a2 + 50) & 0x1000) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5758);
      Prop = (__int128 *)CkptRestore(*((struct tagWND **)a2 + 2), (struct MOVESIZEDATA *)((char *)a2 + 120));
      if ( !Prop )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v72) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v72) = 0;
        }
        if ( (_BYTE)v72 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v73) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v72,
            v73,
            (unsigned int)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
            2,
            1,
            81,
            (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
        }
      }
    }
    v74 = *((_DWORD *)a2 + 50) | 0x800000;
    *((_DWORD *)a2 + 50) = v74;
    if ( Prop && (v74 & 0x1000) != 0 )
      v75 = *Prop;
    else
      v75 = *(_OWORD *)((char *)a2 + 120);
    v76 = *(_QWORD *)((char *)a2 + 268);
    *(_OWORD *)((char *)a2 + 152) = v75;
    HitTargetAndMonitorFromPoint(v76, (v74 >> 15) & 7, (__int64 *)a2 + 29, (_DWORD *)a2 + 60);
    if ( (*((_DWORD *)a2 + 50) & 0x38000) != 0 )
    {
      v80 = 0;
    }
    else
    {
      v77 = IsSemiMaximized(a1);
      v80 = 0;
      if ( v77 && a3 == 9 )
        *((_DWORD *)a2 + 50) = v79 | v78 & 0xFFFE7FFF;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 || IsVerticallyMaximized(a1) )
    {
      *v47 = v80;
      if ( !IsVerticallyMaximized(a1) || (unsigned int)(a3 - 6) > 2 )
        goto LABEL_157;
      goto LABEL_156;
    }
    if ( IsLeftSemiMaximized(v81) )
    {
      v86 = v85 & v82;
      if ( v86 == v84 )
        goto LABEL_146;
      if ( v86 )
      {
LABEL_145:
        *v47 = 1;
LABEL_157:
        v48 = v124;
        *((_DWORD *)a2 + 50) ^= ((unsigned __int8)*((_DWORD *)a2 + 50) ^ (unsigned __int8)(*((_DWORD *)a2 + 50) >> 5)) & 0x80;
        goto LABEL_158;
      }
      if ( (unsigned int)(a3 - 6) > 2 )
      {
        if ( (unsigned int)(a3 - 3) > 2 )
          goto LABEL_145;
LABEL_146:
        *v47 = v66;
        goto LABEL_157;
      }
LABEL_156:
      *v47 = 3;
      goto LABEL_157;
    }
    if ( !IsRightSemiMaximized(v83) )
    {
      *v47 = 4;
      goto LABEL_157;
    }
    v90 = v89 & v87;
    if ( v90 == v88 )
      goto LABEL_146;
    if ( !v90 )
    {
      if ( (unsigned int)(a3 - 6) <= 2 )
        goto LABEL_156;
      if ( (unsigned int)(a3 - 3) <= 2 )
        goto LABEL_146;
    }
    *v47 = 2;
    goto LABEL_157;
  }
  *((_QWORD *)a2 + 29) = MonitorFromPoint(v31, 2u, 0);
  LOWORD(v66) = 0;
LABEL_158:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v91 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v91 = v66;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v92 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v66) )
  {
    v92 = v66;
  }
  if ( v91 || v92 )
  {
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v91,
      v92,
      (__int64)gFullLog,
      5u,
      1u,
      0x52u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
    LOWORD(v66) = 0;
  }
  *((_DWORD *)a2 + 51) &= ~1u;
  if ( a3 )
  {
    if ( a3 != 10 )
      goto LABEL_180;
    a3 = 9;
  }
  zzzSetCursor(*(struct tagCURSOR **)(gasyscur[0] + 4976LL));
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    *((_DWORD *)a2 + 50) |= 1u;
  v93 = *((_DWORD *)a2 + 6) + *((_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 50) |= 2u;
  *((_DWORD *)a2 + 47) = v48;
  *((_DWORD *)a2 + 48) = v28;
  v94 = v93 / 2;
  LODWORD(v124) = v93 / 2;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 || a3 != 9 )
  {
    v28 = (*((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 9)) / 2;
    HIDWORD(v124) = v28;
  }
  else
  {
    v28 = (int)GetCaptionHeight((__int64)a1) / 2 + *((_DWORD *)a2 + 7) + 3;
    HIDWORD(v124) = v28;
  }
  v31 = v124;
  zzzInternalSetCursorPos(v94, HIDWORD(v124), 1, 0);
  xxxMS_FlushWigglies();
  v95 = *((_DWORD *)a2 + 50);
  if ( (v95 & 0x400) == 0 )
    *v47 = 4;
  *((_DWORD *)a2 + 61) = v94;
  *((_DWORD *)a2 + 50) = v95 & 0xFFFFFF7F;
  LOWORD(v66) = 0;
  *((_DWORD *)a2 + 62) = v28;
  *((_DWORD *)a2 + 63) = v94;
  *((_DWORD *)a2 + 64) = v28;
LABEL_180:
  v96 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ (gdwPUDFlags >> 15)) & 0x20;
  *((_DWORD *)a2 + 50) = v96;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v97 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v97 = v66;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v98 = 1, LOWORD(WPP_GLOBAL_Control->DeviceType) == (_WORD)v66) )
  {
    v98 = v66;
  }
  v99 = "yes";
  if ( v97 || v98 )
  {
    v100 = "yes";
    if ( (v96 & 0x20) == 0 )
      v100 = "no";
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v97,
      v98,
      (__int64)gFullLog,
      5u,
      1u,
      0x53u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v100);
  }
  v101 = *((_DWORD *)a2 + 31);
  *((_DWORD *)a2 + 62) -= v101;
  *((_DWORD *)a2 + 64) -= v101;
  v102 = *((_QWORD *)a2 + 29);
  v103 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 61) -= v103;
  *((_DWORD *)a2 + 63) -= v103;
  *((_QWORD *)a2 + 27) = v102;
  *((_DWORD *)a2 + 56) = *v47;
  *((_QWORD *)a2 + 26) = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
  v105 = *((_DWORD *)a2 + 50) ^ (*((_DWORD *)a2 + 50) ^ ~(*((_DWORD *)a2 + 50) << 21)) & 0x4000000;
  *((_DWORD *)a2 + 50) = v105;
  v106 = v105 ^ ((unsigned __int16)v105 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x2000;
  *((_DWORD *)a2 + 50) = v106;
  v107 = v106 ^ ((unsigned __int16)v106 ^ (unsigned __int16)(*((_DWORD *)a1 + 80) >> 13)) & 0x4000;
  v108 = ((unsigned __int16)v107 ^ (unsigned __int16)(v107 >> 5)) & 0x100 ^ v107;
  v109 = (((unsigned __int16)v108 ^ (unsigned __int16)(v108 >> 5)) & 0x200 ^ v108) & 0xF7FBFFFF;
  *((_DWORD *)a2 + 50) = v109;
  v110 = v109;
  if ( (v109 & 2) != 0 )
  {
    *((_DWORD *)a2 + 50) = v109 & 0xFFFFF3FF;
    if ( IsSemiMaximized(a1) )
    {
      v109 |= 0x600800u;
      v110 = v109 | 0x400;
      *((_DWORD *)a2 + 50) = v109 | 0x400;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v104) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v104) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v111 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v111 = 0;
  }
  if ( (_BYTE)v104 || v111 )
  {
    v112 = "yes";
    if ( (v110 & 0x800) == 0 )
      v112 = "no";
    v113 = (v110 & 0x400) != 0;
    LOBYTE(v110) = v111;
    if ( !v113 )
      v99 = "no";
    LOBYTE(v109) = v104;
    WPP_RECORDER_AND_TRACE_SF_ss(
      WPP_GLOBAL_Control->AttachedDevice,
      v109,
      v110,
      v104,
      v118,
      v119,
      v120,
      v121,
      (__int64)v99,
      (__int64)v112);
  }
  *((_DWORD *)a2 + 45) = dword_1C03226B8[a3];
  *((_DWORD *)a2 + 46) = dword_1C0322658[a3];
  v114 = dword_1C03226F8[a3];
  if ( v114 != -1 )
    *((_DWORD *)a2 + 42) = *((_DWORD *)a2 + (__int16)v114 + 30) - v124;
  v115 = dword_1C0322688[a3];
  if ( v115 != -1 )
    *((_DWORD *)a2 + 43) = *((_DWORD *)a2 + (__int16)v115 + 30) - v28;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v116 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v116 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v117 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v117 = 0;
  }
  if ( v116 || v117 )
  {
    LODWORD(v123) = *((_DWORD *)a2 + 43);
    LODWORD(v122) = *((_DWORD *)a2 + 42);
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v116,
      v117,
      (__int64)gFullLog,
      5u,
      1u,
      0x55u,
      (__int64)&WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
      v122,
      v123);
  }
  *(_QWORD *)((char *)a2 + 260) = v31;
  *((_DWORD *)a2 + 44) = a3;
  *(_OWORD *)((char *)a2 + 300) = 0LL;
  *((_QWORD *)a2 + 40) = 0LL;
  *((_WORD *)a2 + 158) = 0;
  *((_DWORD *)a2 + 74) = 0;
  *((_BYTE *)a2 + 336) = 0;
  *((_DWORD *)a2 + 86) = 0;
  *((_QWORD *)a2 + 44) = 0LL;
}
