/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C00369BC (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00372FC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00391A0 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     _FChildVisible @ 0x1C004BA44 (_FChildVisible.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     IsTrayWindow @ 0x1C005EA90 (IsTrayWindow.c)
 *     GetRect @ 0x1C0063E88 (GetRect.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     GetNewMonitor @ 0x1C006BEBC (GetNewMonitor.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006ECE8 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006F57C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C007061C (IsChildWindowDpiBoundary.c)
 *     GetStyleWindow @ 0x1C00714C0 (GetStyleWindow.c)
 *     xxxCheckFullScreen @ 0x1C007C55C (xxxCheckFullScreen.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F14BC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F1500 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsWindowBroadcastingDpiToChildrenX @ 0x1C010D0F4 (IsWindowBroadcastingDpiToChildrenX.c)
 *     GetAppCompatFlags @ 0x1C0110BC0 (GetAppCompatFlags.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C01245A8 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF83C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5D58 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r13
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rdi
  int v16; // r14d
  char v17; // r8
  int v18; // r15d
  __int64 v19; // rcx
  int v20; // r10d
  int v21; // r11d
  int v22; // ebx
  LONG v23; // edx
  __int64 v24; // r9
  int v25; // r8d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  LONG v29; // ecx
  int v30; // edx
  int v31; // edx
  int v32; // eax
  unsigned __int64 v33; // r15
  struct _KTHREAD *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rdx
  NotifyShell **v40; // rsi
  NotifyShell *v41; // rsi
  struct _KTHREAD *v42; // r12
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 *v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  int v50; // r12d
  int v51; // r14d
  int v52; // ebx
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // edx
  int v59; // r14d
  int v60; // r9d
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r15d
  int v64; // edx
  _DWORD *v65; // rcx
  int v66; // r8d
  int v67; // ebx
  int v68; // edx
  int v69; // r12d
  int v70; // edx
  LONG *v71; // r13
  int v72; // edx
  int v73; // ecx
  unsigned int v74; // ebx
  __int64 v75; // r15
  int v76; // r14d
  int v77; // r9d
  __int64 result; // rax
  int v79; // eax
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  __int128 v83; // xmm1
  unsigned __int64 v84; // xmm0_8
  int v85; // r14d
  int v86; // r12d
  int v87; // ebx
  int v88; // r13d
  unsigned int v89; // r15d
  __int64 v90; // rdx
  int v91; // eax
  int v92; // edx
  int v93; // r8d
  unsigned int v94; // eax
  __int64 v95; // r14
  int v96; // edx
  int v97; // r11d
  int v98; // r9d
  int v99; // r8d
  int v100; // r10d
  int v101; // ebx
  char v102; // r14
  int v103; // eax
  int v104; // eax
  int v105; // r8d
  int v106; // r9d
  int v107; // r10d
  __int64 v108; // rax
  __int64 v109; // rbx
  __int16 v110; // r14
  LONG v111; // edx
  int v112; // ecx
  __int64 NewMonitor; // rax
  __int64 Prop; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v117; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v119; // rax
  int v120; // ebx
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // ebx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 AppCompatFlags; // rax
  __int64 v129; // rdx
  int v130; // eax
  __int64 v131; // rcx
  int v132; // [rsp+50h] [rbp-B0h]
  int v133; // [rsp+54h] [rbp-ACh]
  int v134; // [rsp+58h] [rbp-A8h]
  int v135; // [rsp+5Ch] [rbp-A4h]
  int v136; // [rsp+60h] [rbp-A0h]
  int v137; // [rsp+64h] [rbp-9Ch]
  int v138; // [rsp+68h] [rbp-98h]
  int v139; // [rsp+6Ch] [rbp-94h]
  int v140; // [rsp+70h] [rbp-90h]
  __int64 v141; // [rsp+78h] [rbp-88h]
  __int128 v142; // [rsp+80h] [rbp-80h] BYREF
  int v143; // [rsp+90h] [rbp-70h]
  HWND v144; // [rsp+98h] [rbp-68h]
  struct tagRECT v145; // [rsp+A0h] [rbp-60h] BYREF
  __int64 LowLimit; // [rsp+B0h] [rbp-50h] BYREF
  HWND *v147; // [rsp+B8h] [rbp-48h]
  __int128 v148; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v149; // [rsp+D0h] [rbp-30h]
  __int128 v150; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v151; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v152; // [rsp+F8h] [rbp-8h]
  _QWORD v153[3]; // [rsp+100h] [rbp+0h] BYREF
  int v154[4]; // [rsp+118h] [rbp+18h] BYREF
  __int128 v155; // [rsp+128h] [rbp+28h] BYREF
  __int128 v156; // [rsp+138h] [rbp+38h] BYREF
  __int128 *v157; // [rsp+148h] [rbp+48h]

  v147 = a2;
  v144 = 0LL;
  v153[2] = 0LL;
  v2 = 0LL;
  v157 = 0LL;
  *(_OWORD *)v154 = 0LL;
  v149 = 0LL;
  v155 = 0LL;
  v136 = 0;
  v156 = 0LL;
  v132 = 0;
  v148 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v5 = _HMObjectFromHandle(*(_QWORD *)ValidWindowPos);
  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  v8 = *(_QWORD *)(v5 + 104);
  v141 = v8;
  if ( !(unsigned __int8)KeIsAttachedProcess(v9)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v117),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  v153[0] = *(_QWORD *)(v7 + 416);
  *(_QWORD *)(v7 + 416) = v153;
  v153[1] = v8;
  if ( v8 )
    HMLockObject(v8);
  v15 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v16 = *((_DWORD *)a1 + 7);
  v135 = 1;
  while ( 1 )
  {
    v139 = --v16;
    if ( v16 < 0 )
    {
      ThreadUnlock1(v14);
      result = 1LL;
      *v147 = v2;
      return result;
    }
    v33 = *v15;
    if ( *v15 )
      break;
LABEL_28:
    v15 += 21;
  }
  v34 = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v119 = PsGetCurrentProcess(v36, v35, v37),
        v120 = PsGetProcessSessionIdEx(v119),
        v122 = PsGetCurrentThreadProcess(v121),
        v120 == (unsigned int)PsGetProcessSessionIdEx(v122)) )
  {
    PsGetThreadWin32Thread(v34);
  }
  v14 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)v33 >= *(_QWORD *)(gpsi + 8LL)
    || (v38 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v33 * LODWORD(gSharedInfo[2]),
        v40 = (NotifyShell **)HMPkheFromPhe(v38),
        v14 = v33 >> 16,
        WORD1(v33) != *(_WORD *)(v38 + 26))
    && WORD1(v33) != 0xFFFF
    && (WORD1(v33) || !PsGetCurrentProcessWow64Process(v14))
    || (*(_BYTE *)(v38 + 25) & 1) != 0
    || *(_BYTE *)(v38 + 24) != 1
    || (v41 = *v40) == 0LL
    || (v14 = v15[1], v14 > 1) && v14 <= 0xFFFFFFFFFFFFFFFDuLL && (LOBYTE(v39) = 1, !HMValidateHandleNoSecure(v14, v39)) )
  {
    *v15 = 0LL;
    *((_DWORD *)v15 + 8) = 6159;
    goto LABEL_28;
  }
  v42 = KeGetCurrentThread();
  v43 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v123 = PsGetCurrentProcess(v45, v44, v46),
        v124 = PsGetProcessSessionIdEx(v123),
        v126 = PsGetCurrentThreadProcess(v125),
        v124 == (unsigned int)PsGetProcessSessionIdEx(v126)) )
  {
    v47 = (__int64 *)PsGetThreadWin32Thread(v42);
    if ( v47 )
      v43 = *v47;
  }
  *(_QWORD *)&v148 = *(_QWORD *)(v43 + 416);
  *(_QWORD *)(v43 + 416) = &v148;
  *((_QWORD *)&v148 + 1) = v41;
  HMLockObject(v41);
  v133 = 0;
  if ( !v2 && (v15[4] & 0x10) == 0 )
    v144 = *(HWND *)v41;
  v48 = *((_DWORD *)v15 + 8);
  if ( (v48 & 0x400) == 0 )
  {
    v49 = v15[1];
    v50 = v15[4] & 4;
    v51 = v48 & 0x750000;
    v52 = v15[4] & 0x40;
    if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0 || gptiCurrent == *((_QWORD *)v41 + 2) )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(
        (unsigned __int64)v41,
        0x46u,
        0LL,
        (struct _LARGE_STRING *)v15,
        0,
        0,
        0LL,
        1,
        0);
    }
    else if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) != 1 )
    {
      LowLimit = 0LL;
      xxxSendTransformableMessageTimeout(
        (unsigned __int64)v41,
        0x46u,
        0LL,
        (struct _LARGE_STRING *)v15,
        2u,
        0x32u,
        &LowLimit,
        1,
        0);
    }
    v53 = v51 | *((_DWORD *)v15 + 8);
    *((_DWORD *)v15 + 8) = v53;
    v54 = v53;
    if ( v52 && (v53 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v41, (struct tagWND *)v53);
      v54 = *((unsigned int *)v15 + 8);
    }
    v55 = *((_DWORD *)v15 + 39);
    if ( (v54 & 3) != 3 && (v55 & 0x20) == 0 )
    {
      v15[16] = *(_QWORD *)(*((_QWORD *)v41 + 5) + 256LL);
      *((_DWORD *)v15 + 39) = v55 | 0x20;
    }
    *v15 = v33;
    if ( (v54 & 4) == 0 && (v50 || *((_WORD *)v15 + 4) != (_WORD)v49) )
    {
      if ( !IsStillWindowC(v15[1], v54) )
        goto LABEL_205;
      if ( *((_WORD *)v15 + 4) != (_WORD)v49 || v15[1] >= 0xFFFFFFFFFFFFFFFEuLL )
      {
        v81 = CheckTopmost((struct tagWINDOWPOS *)v15);
        if ( v81 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v41 + 5) + 236LL) == 1 )
            SetTopmostEnum(v41, v81 == 1, (*((_DWORD *)v15 + 8) >> 9) & 1);
        }
      }
    }
  }
  v142 = *(_OWORD *)(*(_QWORD *)(v141 + 40) + 104LL);
  if ( (unsigned int)IsChildWindowDpiBoundary(v41) )
  {
    LogicalToPhysicalInPlaceRectWithSubpixel(v141, &v142, 0LL);
    PhysicalToLogicalInPlaceRectWithSubpixel(v41, &v142, 0LL);
  }
  v56 = *((_QWORD *)v41 + 5);
  v57 = 0LL;
  v58 = *(_DWORD *)(v56 + 88);
  v59 = v58;
  v60 = *(_DWORD *)(v56 + 92);
  *((_DWORD *)v15 + 20) = v58;
  *((_DWORD *)v15 + 21) = v60;
  v61 = *((_QWORD *)v41 + 3);
  v137 = v58;
  v134 = v60;
  if ( v61 )
  {
    v62 = *(_QWORD *)(v61 + 8);
    if ( v62 )
      v57 = *(_QWORD *)(v62 + 24);
  }
  v63 = DWORD2(v142);
  v143 = DWORD1(v142);
  v140 = v142;
  if ( v141 != v57 )
  {
    v64 = v58 - v142;
    v60 -= DWORD1(v142);
    v137 = v64;
    v134 = v60;
    if ( (*(_BYTE *)(*(_QWORD *)(v141 + 40) + 26LL) & 0x40) != 0
      && (v127 = *((_QWORD *)v41 + 5), (*(_BYTE *)(v127 + 31) & 0xC0) == 0x40) )
    {
      v132 = 1;
      v59 = DWORD2(v142) - *(_DWORD *)(v127 + 96);
    }
    else
    {
      v132 = 0;
      v59 = v64;
    }
  }
  v65 = (_DWORD *)*((_QWORD *)v41 + 5);
  v66 = *((_DWORD *)v15 + 8) | 0x1800;
  v67 = v66;
  v68 = v65[24] - v65[22];
  v69 = v65[25] - v65[23];
  *((_DWORD *)v15 + 8) = v66;
  v138 = v68;
  v70 = v66;
  if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 233LL) & 3) != 0 && (v66 & 0x100000) != 0 )
  {
    ExtendArrangedRectangleByFrameMargin(v41, (struct tagSIZERECT *)(v15 + 2));
    v70 = *((_DWORD *)v15 + 8);
    v60 = v134;
    v67 = v70;
  }
  v71 = (LONG *)(v15 + 2);
  if ( (v70 & 2) != 0 )
  {
    *((_DWORD *)v15 + 39) |= 0x100u;
    *v71 = v59;
    *((_DWORD *)v15 + 5) = v60;
  }
  else
  {
    if ( *v71 == v59 && *((_DWORD *)v15 + 5) == v60 )
    {
      v79 = v136;
      *((_DWORD *)v15 + 8) = v70 | 2;
      if ( v132 )
        v79 = 1;
      v136 = v79;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x20) != 0 && (unsigned int)IsTrayWindow(v41) )
    {
      *v71 = -32000;
      *((_DWORD *)v15 + 5) = -32000;
    }
    v70 = *((_DWORD *)v15 + 8);
    v67 = v70;
  }
  if ( (v70 & 1) != 0 )
  {
    v72 = v138;
    *((_DWORD *)v15 + 6) = v138;
    *((_DWORD *)v15 + 7) = v69;
  }
  else
  {
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x20) != 0
      && (Prop = GetProp((__int64)v41, WORD2(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1LL),
          v67 = *((_DWORD *)v15 + 8),
          Prop) )
    {
      v72 = *(_DWORD *)(gpsi + 2124LL);
      *((_DWORD *)v15 + 6) = v72;
      v73 = *(_DWORD *)(gpsi + 2128LL);
      *((_DWORD *)v15 + 7) = v73;
    }
    else
    {
      v72 = *((_DWORD *)v15 + 6);
      if ( v72 < 0 )
      {
        *((_DWORD *)v15 + 6) = 0;
        v72 = 0;
      }
      v73 = *((_DWORD *)v15 + 7);
      if ( v73 < 0 )
      {
        *((_DWORD *)v15 + 7) = 0;
        v73 = 0;
      }
    }
    if ( v72 == v138 && v73 == v69 )
    {
      v67 = *((_DWORD *)v15 + 8) | 1;
      *((_DWORD *)v15 + 8) = v67;
      if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 21LL) & 1) == 0 )
        v133 = 1;
    }
  }
  if ( v132 )
    *v71 = v63 - v72 - v140 - *v71;
  if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 31LL) & 0x10) != 0 )
  {
    v74 = v67 & 0xFFFFFFBF;
LABEL_80:
    *((_DWORD *)v15 + 8) = v74;
  }
  else
  {
    v74 = v67 & 0xFFFFFF7F;
    *((_DWORD *)v15 + 8) = v74;
    if ( (v74 & 0x40) == 0 )
    {
      v74 |= 8u;
      goto LABEL_80;
    }
  }
  v75 = *((_QWORD *)v41 + 5);
  v76 = v74;
  if ( (*(_BYTE *)(v75 + 27) & 2) == 0 && GetStyleWindow(v41, 2818LL) )
  {
    v76 = v74 | 0x100;
    *((_DWORD *)v15 + 8) = v74 | 0x100;
    v75 = *((_QWORD *)v41 + 5);
  }
  if ( (*(_BYTE *)(v75 + 20) & 0x20) != 0 )
  {
    v76 &= ~4u;
    v15[1] = 1LL;
    *((_DWORD *)v15 + 8) = v76;
  }
  if ( v135 )
  {
    if ( (v76 & 4) == 0 )
    {
      v135 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 19LL) & 4) == 0 )
      {
        if ( (unsigned int)ValidateZorder((struct tagCVR *)v15) )
        {
          *((_DWORD *)v15 + 8) |= 4u;
          v135 = 1;
        }
      }
    }
  }
  v77 = *((_DWORD *)v15 + 8);
  v17 = v77;
  if ( (v77 & 8) == 0 && ((v15[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible((__int64)v41)) )
  {
    v17 = v77 | 8;
    *((_DWORD *)v15 + 8) = v77 | 8;
  }
  if ( (v17 & 2) != 0 || (*(_BYTE *)(*((_QWORD *)v41 + 5) + 21LL) & 1) != 0 )
  {
    v18 = v133;
  }
  else
  {
    AppCompatFlags = GetAppCompatFlags(0LL);
    v18 = v133;
    if ( (AppCompatFlags & 0x20000) != 0 )
      v18 = 1;
  }
  if ( (*((_DWORD *)v15 + 39) & 0x20) != 0 && (unsigned int)IsWindowBroadcastingDpiToChildrenX(v41) )
  {
    v108 = ValidateHmonitor(v15[16]);
    v109 = v108;
    v110 = v108 ? *(_WORD *)(*(_QWORD *)(v108 + 40) + 64LL) : 0;
    v111 = *((_DWORD *)v15 + 5);
    v145.left = *v71;
    v145.right = *((_DWORD *)v15 + 6) + v145.left;
    v112 = *((_DWORD *)v15 + 7);
    v145.top = v111;
    v145.bottom = v111 + v112;
    NewMonitor = GetNewMonitor(v41, &v145, 0LL);
    if ( NewMonitor )
    {
      if ( v109 != NewMonitor )
      {
        v129 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 64LL);
        if ( v110 != (_WORD)v129 )
          *((_DWORD *)v15 + 39) ^= (*((_DWORD *)v15 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                             v41,
                                                                             v129,
                                                                             &v145,
                                                                             v15 + 17) << 7)) & 0x80;
      }
    }
  }
  v19 = *((unsigned int *)v15 + 8);
  if ( (v15[4] & 0x21) == 1 && !v18 )
  {
    v20 = v140;
    v21 = v137;
    v22 = v143;
    goto LABEL_16;
  }
  *((_DWORD *)v15 + 39) |= 4u;
  v82 = *((_QWORD *)v41 + 5);
  v150 = 0LL;
  v152 = 0LL;
  v151 = 0LL;
  if ( (*(_BYTE *)(v82 + 31) & 0x40) == 0 && *(char *)(v82 + 24) >= 0 )
    xxxCheckFullScreen(v41, (struct tagSIZERECT *)(v15 + 2));
  v83 = *((_OWORD *)v15 + 1);
  v150 = *(_OWORD *)v15;
  v84 = v15[4];
  v157 = &v150;
  v154[0] = *v71;
  v154[2] = *((_DWORD *)v15 + 6) + v154[0];
  v154[1] = *((_DWORD *)v15 + 5);
  v154[3] = *((_DWORD *)v15 + 7) + v154[1];
  v151 = v83;
  v152 = v84;
  GetRect((__int64)v41, (__int64)&v155, 66);
  GetRect((__int64)v41, (__int64)&v156, 65);
  v85 = v156;
  v86 = DWORD2(v156) - v156;
  v87 = DWORD1(v156);
  v88 = HIDWORD(v156) - DWORD1(v156);
  _InterlockedAdd(&glSendMessage, 1u);
  v89 = xxxSendTransformableMessageTimeout(
          (unsigned __int64)v41,
          0x83u,
          1uLL,
          (struct _LARGE_STRING *)v154,
          0,
          0,
          0LL,
          1,
          0);
  if ( IsStillWindowC(v15[1], v90) )
  {
    if ( v89 - 16 > 0x3F0 )
    {
      v89 = 48;
      v155 = *(_OWORD *)v154;
    }
    if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 26LL) & 0x40) != 0 )
      v91 = DWORD2(v155) - DWORD2(v156);
    else
      v91 = v155 - v156;
    *((_DWORD *)v15 + 18) = v91;
    *((_DWORD *)v15 + 19) = DWORD1(v155) - DWORD1(v156);
    *((_DWORD *)v15 + 10) = v154[0];
    *((_DWORD *)v15 + 11) = v154[1];
    v92 = v154[2] - v154[0];
    *((_DWORD *)v15 + 12) = v154[2] - v154[0];
    v93 = v154[3] - v154[1];
    *((_DWORD *)v15 + 13) = v154[3] - v154[1];
    if ( v85 != v154[0] || v87 != v154[1] )
      *((_DWORD *)v15 + 8) &= ~0x1000u;
    v19 = *((unsigned int *)v15 + 8);
    v94 = *((_DWORD *)v15 + 8);
    if ( v86 != v92 || v88 != v93 )
    {
      v19 = v94;
      LODWORD(v19) = v94 & 0xFFFFF7FF;
      *((_DWORD *)v15 + 8) = v94 & 0xFFFFF7FF;
    }
    if ( (v19 & 0x100) == 0 && !v136 )
    {
      v95 = *((_QWORD *)v41 + 5);
      if ( (*(_BYTE *)(v95 + 24) & 0x20) == 0 )
      {
        if ( (v19 & 0x821) == 0x801 )
        {
          v21 = v137;
          if ( *((_DWORD *)v15 + 18) == *((_DWORD *)v15 + 4) - v137
            && *((_DWORD *)v15 + 19) == *((_DWORD *)v15 + 5) - v134 )
          {
            v22 = DWORD1(v142);
            v71 = (LONG *)(v15 + 2);
            v20 = v142;
LABEL_16:
            if ( (v19 & 0x100) != 0 )
            {
              v28 = v141;
              *(_OWORD *)(v15 + 7) = 0LL;
              v23 = *v71;
            }
            else
            {
              v23 = *v71;
              v24 = 0LL;
              v25 = *((_DWORD *)v15 + 5);
              *((_DWORD *)v15 + 14) = *v71;
              *((_DWORD *)v15 + 15) = v25;
              v26 = *((_QWORD *)v41 + 3);
              if ( v26 )
              {
                v27 = *(_QWORD *)(v26 + 8);
                if ( v27 )
                  v24 = *(_QWORD *)(v27 + 24);
              }
              v28 = v141;
              v29 = v23;
              if ( v141 != v24 )
              {
                v29 = v23 + v20;
                v25 += v22;
                *((_DWORD *)v15 + 14) = v23 + v20;
                *((_DWORD *)v15 + 15) = v25;
              }
              *((_DWORD *)v15 + 16) = *((_DWORD *)v15 + 6) + v29;
              v19 = (unsigned int)(v25 + *((_DWORD *)v15 + 7));
              *((_DWORD *)v15 + 17) = v19;
            }
            if ( (*(_BYTE *)(*((_QWORD *)v41 + 5) + 26LL) & 0x40) != 0 )
              v30 = *((_DWORD *)v15 + 6) + v23 - v138 - v21;
            else
              v30 = v23 - v21;
            *((_DWORD *)v15 + 18) = v30;
            v31 = *((_DWORD *)v15 + 5) - v134;
            v32 = *((_DWORD *)v15 + 8);
            *((_DWORD *)v15 + 19) = v31;
            if ( (v32 & 2) == 0 )
            {
              *((_DWORD *)v15 + 8) = v32 & 0xFFFFEFFF;
              *((_DWORD *)v15 + 10) = *((_DWORD *)v15 + 18) + *(_DWORD *)(*((_QWORD *)v41 + 5) + 104LL);
              *((_DWORD *)v15 + 11) = v31 + *(_DWORD *)(*((_QWORD *)v41 + 5) + 108LL);
              if ( v28 != GetDesktopWindow((__int64)v41) )
              {
                *((_DWORD *)v15 + 10) = v105 - v107;
                *((_DWORD *)v15 + 11) = v106 - v22;
              }
              *((_DWORD *)v15 + 12) = *(_DWORD *)(*((_QWORD *)v41 + 5) + 112LL)
                                    - *(_DWORD *)(*((_QWORD *)v41 + 5) + 104LL);
              *((_DWORD *)v15 + 13) = *(_DWORD *)(*((_QWORD *)v41 + 5) + 116LL)
                                    - *(_DWORD *)(*((_QWORD *)v41 + 5) + 108LL);
            }
LABEL_26:
            ThreadUnlock1(v19);
LABEL_27:
            v2 = v144;
            v16 = v139;
            goto LABEL_28;
          }
        }
        if ( v86 == v92
          || (v89 & 0x100) == 0 && (v19 = *(_QWORD *)(*((_QWORD *)v41 + 17) + 8LL), (*(_BYTE *)(v19 + 8) & 2) == 0) )
        {
          if ( v88 == v93
            || (v89 & 0x200) == 0 && (v19 = 1LL, (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v41 + 17) + 8LL) + 8LL) & 1) == 0) )
          {
            v96 = DWORD2(v156) - v156;
            v97 = HIDWORD(v156) - DWORD1(v156);
            v98 = v155;
            v99 = DWORD2(v155) - v155;
            v100 = DWORD1(v155);
            v101 = HIDWORD(v155) - DWORD1(v155);
            v102 = *(_BYTE *)(v95 + 26) & 0x40;
            if ( (v102 != 0) != ((v89 >> 7) & 1) )
            {
              if ( v102 && v96 > v99 )
                v130 = v96 - v99;
              else
                v130 = v99 - v96;
              v98 = v130 + v155;
              LODWORD(v155) = v130 + v155;
            }
            if ( (v89 & 0x40) != 0 )
            {
              v100 = HIDWORD(v155) - v97;
              DWORD1(v155) = HIDWORD(v155) - v97;
            }
            if ( v96 < v99 )
              DWORD2(v155) = v98 + v96;
            if ( v97 < v101 )
              HIDWORD(v155) = v100 + v97;
            *(_OWORD *)(v15 + 7) = v155;
            if ( v141 != GetDesktopWindow((__int64)v41) )
            {
              v103 = v142;
              *((_DWORD *)v15 + 14) += v142;
              *((_DWORD *)v15 + 16) += v103;
              v104 = DWORD1(v142);
              *((_DWORD *)v15 + 17) += DWORD1(v142);
              *((_DWORD *)v15 + 15) += v104;
            }
            goto LABEL_26;
          }
        }
      }
    }
    *(_OWORD *)(v15 + 7) = 0LL;
    ThreadUnlock1(v19);
    goto LABEL_27;
  }
LABEL_205:
  ThreadUnlock1(v80);
  ThreadUnlock1(v131);
  return 0LL;
}
