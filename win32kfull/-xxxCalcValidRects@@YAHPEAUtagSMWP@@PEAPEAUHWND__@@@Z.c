/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00698F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0015B14 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0021308 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0026674 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C002E354 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00A35E4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00A3628 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00A3840 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00A5428 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1C00CE1A4 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     GetAppCompatFlags @ 0x1C00DBDF0 (GetAppCompatFlags.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00EC8F0 (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BB984 (xxxAppAdjustDpiCandidateRect.c)
 *     DwmAsyncNotifyWindowMoveForWorkArea @ 0x1C026FDBC (DwmAsyncNotifyWindowMoveForWorkArea.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND *v3; // r12
  HWND v4; // r15
  __int64 v5; // rax
  int v6; // ecx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 *v14; // rbx
  int v15; // edi
  unsigned __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 *v19; // r14
  bool v20; // zf
  unsigned __int64 v21; // rcx
  int v22; // edi
  unsigned __int64 v23; // r13
  int v24; // r12d
  int v25; // r14d
  int v26; // edi
  struct tagWND *v27; // r10
  int v28; // r14d
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // r15
  __int64 v35; // rdi
  struct tagWND *v36; // r10
  __int64 v37; // rsi
  __int64 v38; // r14
  int v39; // edx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // r8d
  _DWORD *v44; // rcx
  struct tagWND *v45; // rsi
  int v46; // r9d
  int v47; // edi
  int v48; // ecx
  __int64 v49; // r8
  int v50; // r9d
  int v51; // ecx
  int v52; // edx
  _QWORD *v53; // r12
  unsigned int v54; // edx
  __int64 v55; // rdx
  __int64 v56; // rdx
  char v57; // cl
  __int64 v58; // r9
  __int64 v59; // r11
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct tagSIZERECT *v63; // r14
  __int64 v64; // rcx
  int v65; // edi
  int v66; // esi
  int v67; // r15d
  int v68; // ecx
  int v69; // edx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // r12
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  int v76; // eax
  __int64 result; // rax
  __int64 v78; // rdx
  _BOOL8 v79; // rcx
  __int64 v80; // r8
  int v81; // eax
  int v82; // eax
  __int64 v83; // rcx
  __int128 v84; // xmm1
  unsigned __int64 v85; // xmm0_8
  unsigned int v86; // esi
  int v87; // r14d
  unsigned int v88; // r15d
  int v89; // r12d
  int v90; // eax
  __int64 v91; // rdx
  unsigned __int64 v92; // rcx
  int v93; // edi
  __int64 v94; // r8
  __int64 v95; // rdx
  int v96; // eax
  int v97; // r11d
  int v98; // r14d
  int v99; // r9d
  int v100; // ecx
  char v101; // al
  __int64 v102; // rax
  int v103; // eax
  int v104; // eax
  int v105; // r9d
  int v106; // r10d
  __int64 v107; // r11
  __int64 v108; // rax
  __int64 v109; // rdi
  __int16 v110; // si
  int v111; // edx
  int v112; // ecx
  __int64 NewMonitor; // rax
  bool v114; // al
  __int64 Prop; // rax
  __int64 v116; // rax
  unsigned __int16 WindowCoordinateSpaceDpi; // di
  __int64 v118; // rdi
  __int64 v119; // r8
  void *v120; // rax
  __int64 v121; // rax
  __int64 AppCompatFlags; // rax
  bool v123; // cf
  int v124; // eax
  __int64 v125; // rdx
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  struct tagWND *v130; // [rsp+50h] [rbp-B0h]
  struct tagWND *v131; // [rsp+50h] [rbp-B0h]
  int v132; // [rsp+58h] [rbp-A8h]
  __int64 v133; // [rsp+60h] [rbp-A0h]
  __int64 v134; // [rsp+68h] [rbp-98h]
  int v135; // [rsp+70h] [rbp-90h]
  int v136; // [rsp+74h] [rbp-8Ch]
  _QWORD *v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h]
  int v139; // [rsp+88h] [rbp-78h]
  int v140; // [rsp+8Ch] [rbp-74h]
  int v141; // [rsp+90h] [rbp-70h]
  __int64 v142; // [rsp+98h] [rbp-68h]
  int v143; // [rsp+A0h] [rbp-60h]
  __int64 v144; // [rsp+A8h] [rbp-58h]
  int v145; // [rsp+B4h] [rbp-4Ch]
  int v146; // [rsp+B8h] [rbp-48h]
  __int128 v147; // [rsp+C0h] [rbp-40h] BYREF
  int v148; // [rsp+D0h] [rbp-30h]
  int v149; // [rsp+D4h] [rbp-2Ch]
  HWND v150; // [rsp+D8h] [rbp-28h]
  __int64 v151; // [rsp+E0h] [rbp-20h]
  __int64 v152; // [rsp+E8h] [rbp-18h]
  _DWORD v153[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v154; // [rsp+100h] [rbp+0h] BYREF
  HWND *v155; // [rsp+108h] [rbp+8h]
  __int128 v156; // [rsp+110h] [rbp+10h] BYREF
  __int128 v157; // [rsp+120h] [rbp+20h]
  unsigned __int64 v158; // [rsp+130h] [rbp+30h]
  __int64 v159; // [rsp+138h] [rbp+38h] BYREF
  __int128 v160; // [rsp+148h] [rbp+48h] BYREF
  __int64 v161; // [rsp+158h] [rbp+58h]
  __int128 v162; // [rsp+160h] [rbp+60h] BYREF
  __int64 v163; // [rsp+170h] [rbp+70h]
  __int128 v164; // [rsp+178h] [rbp+78h]
  __int128 v165; // [rsp+188h] [rbp+88h] BYREF
  __int128 v166; // [rsp+198h] [rbp+98h] BYREF
  __int128 *v167; // [rsp+1A8h] [rbp+A8h]

  v155 = a2;
  v150 = 0LL;
  v167 = 0LL;
  v161 = 0LL;
  v163 = 0LL;
  v3 = a2;
  v145 = 0;
  v4 = 0LL;
  v136 = 0;
  v5 = *((int *)a1 + 7);
  v6 = 0;
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v160 = 0LL;
  v162 = 0LL;
  if ( (int)v5 <= 0 )
    return 0LL;
  v7 = v5;
  v8 = (_QWORD *)*((_QWORD *)a1 + 5);
  v9 = 0LL;
  while ( !*v8 )
  {
    ++v6;
    ++v9;
    v8 += 21;
    if ( v9 >= v7 )
      return 0LL;
  }
  v10 = (_QWORD *)(*((_QWORD *)a1 + 5) + 168LL * v6);
  if ( !v10 )
    return 0LL;
  v144 = *(_QWORD *)(_HMObjectFromHandle(*v10) + 104);
  ThreadLock(v144, &v160);
  v14 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v15 = *((_DWORD *)a1 + 7) - 1;
  v143 = 1;
  v132 = v15;
  if ( v15 < 0 )
  {
LABEL_107:
    ThreadUnlock1(v12, v11, v13);
    result = 1LL;
    *v3 = v4;
    return result;
  }
  while ( 1 )
  {
    v16 = *v14;
    if ( *v14 )
      break;
LABEL_105:
    v14 += 21;
    v132 = --v15;
    if ( v15 < 0 )
    {
      v3 = v155;
      goto LABEL_107;
    }
  }
  v17 = 0LL;
  v130 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (unsigned __int16)v16;
  v12 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)v16 < *(_QWORD *)(gpsi + 8LL) )
  {
    v18 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v16;
    v19 = (__int64 *)HMPkheFromPhe(v18);
    v12 = v16 >> 16;
    LOWORD(v12) = WORD1(v16) & 0x7FFF;
    if ( ((WORD1(v16) & 0x7FFF) == *(_WORD *)(v18 + 26)
       || (_WORD)v12 == 0x7FFF
       || !(_WORD)v12 && PsGetCurrentProcessWow64Process(v12))
      && (*(_BYTE *)(v18 + 25) & 1) == 0 )
    {
      v20 = *(_BYTE *)(v18 + 24) == 1;
      v15 = v132;
      if ( v20 )
      {
        v17 = *v19;
        v130 = (struct tagWND *)*v19;
      }
    }
    else
    {
      v15 = v132;
    }
  }
  if ( !v17
    || (v21 = v14[1], v21 >= 2)
    && v21 != -2LL
    && v21 != -1LL
    && (LOBYTE(v11) = 1, v12 = HMValidateHandleNoSecure(v21, v11) != 0, !(_DWORD)v12) )
  {
    *v14 = 0LL;
    *((_DWORD *)v14 + 8) = 6159;
    goto LABEL_105;
  }
  ThreadLockAlways(v17, &v162);
  xxxProcessPreemptiveDpiChange((struct tagWND *)v17, (struct tagCVR *)v14);
  v139 = 0;
  if ( !v4 && (v14[4] & 0x10) == 0 )
    v150 = *(HWND *)v17;
  v22 = *((_DWORD *)v14 + 8);
  if ( (v22 & 0x400) == 0 )
  {
    v23 = v14[1];
    v24 = v14[4] & 4;
    v25 = v22 & 0xFD0000;
    v26 = v14[4] & 0x40;
    if ( (*(_DWORD *)(gptiCurrent + 1272LL) & 0x40000) == 0 || gptiCurrent == *((_QWORD *)v130 + 2) )
    {
      _InterlockedIncrement(&glSendMessage);
      xxxSendTransformableMessageTimeout(v130, 0x46u, 0, 0, 0LL, 1, 0);
    }
    else
    {
      if ( tagQ::IsSingleThreadAttached(*(tagQ **)(gptiCurrent + 432LL)) )
      {
        v116 = *(_QWORD *)(gptiCurrent + 1440LL);
        if ( v116 )
        {
          if ( *(_QWORD *)(v116 + 16) == gptiCurrent )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 424LL);
            v27 = v130;
          }
          if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 1440LL) + 16LL) == *((_QWORD *)v27 + 2) )
            goto LABEL_24;
        }
      }
      v154 = 0LL;
      xxxSendTransformableMessageTimeout(v27, 0x46u, 2, 100, (__int64)&v154, 1, 0);
    }
    v27 = v130;
LABEL_24:
    v28 = *((_DWORD *)v14 + 8) | v25;
    *((_DWORD *)v14 + 8) = v28;
    if ( v26 && (v28 & 0x40) == 0 )
    {
      NotifyShell::CuratedWindowHidden(v27);
      v27 = v130;
    }
    v29 = *((_DWORD *)v14 + 8);
    v30 = *((unsigned int *)v14 + 39);
    if ( (v14[4] & 3) != 3 && (v30 & 0x20) == 0 )
    {
      v30 = (unsigned int)v30 | 0x20;
      v14[16] = *(_QWORD *)(*((_QWORD *)v27 + 5) + 256LL);
      *((_DWORD *)v14 + 39) = v30;
    }
    *v14 = v16;
    if ( (v29 & 4) != 0 || !v24 && *((_WORD *)v14 + 4) == (_WORD)v23 )
      goto LABEL_28;
    if ( !(unsigned int)IsStillWindowC((HWND)v14[1], v30) )
      goto LABEL_226;
    if ( *((_WORD *)v14 + 4) == (_WORD)v23 && v14[1] < 0xFFFFFFFFFFFFFFFEuLL )
    {
LABEL_28:
      v17 = (__int64)v130;
    }
    else
    {
      v81 = CheckTopmost((struct tagWINDOWPOS *)v14);
      v17 = (__int64)v130;
      if ( v81 && *(_DWORD *)(*((_QWORD *)v130 + 5) + 236LL) == 1 )
        SetTopmostEnum(v130, v81 == 1, (*((_DWORD *)v14 + 8) >> 9) & 1);
    }
  }
  v31 = v17 + 24;
  v32 = *(_QWORD *)(v17 + 104);
  v147 = *(_OWORD *)(*(_QWORD *)(v144 + 40) + 104LL);
  if ( !v32
    || (v138 = v17 + 24, *(_QWORD *)v31)
    && (v33 = *(_QWORD *)(*(_QWORD *)v31 + 8LL)) != 0
    && v32 == *(_QWORD *)(v33 + 24)
    || (v134 = v17 + 40,
        (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v17 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v32 + 40) + 288LL) >> 8)) & 0x1FF) == 0) )
  {
    v34 = (_QWORD *)(v17 + 40);
    v133 = v17 + 24;
    v137 = (_QWORD *)(v17 + 40);
    v35 = v17 + 40;
    v134 = v17 + 40;
    v36 = (struct tagWND *)(v17 + 40);
    v131 = (struct tagWND *)(v17 + 40);
    v37 = v17 + 40;
    v138 = v17 + 24;
    v38 = v17 + 24;
    v142 = v17 + 24;
  }
  else
  {
    v133 = v17 + 24;
    v34 = (_QWORD *)(v17 + 40);
    v137 = (_QWORD *)(v17 + 40);
    v142 = v17 + 24;
    v38 = v17 + 24;
    v131 = (struct tagWND *)(v17 + 40);
    v37 = v17 + 40;
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((const struct tagWND *)v17);
    if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(*(const struct tagWND **)(v17 + 104))
      || (v118 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)v37 + 256LL))) != 0
      && (v119 = *(_DWORD *)(*(_QWORD *)v37 + 288LL) >> 8,
          LOWORD(v119) = v119 & 0x1FF,
          GetMonitorRectForDpi(&v159, v118, v119),
          *(_QWORD *)(*(_QWORD *)(v118 + 40) + 28LL) != v159) )
    {
      LogicalToPhysicalInPlaceRectWithSubpixel(v144, &v147, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel(v17, &v147, 0LL);
    }
    v36 = (struct tagWND *)(v17 + 40);
    v35 = v17 + 40;
  }
  v39 = *(_DWORD *)(*(_QWORD *)v37 + 88LL);
  v40 = *(_DWORD *)(*(_QWORD *)v37 + 92LL);
  *((_DWORD *)v14 + 20) = v39;
  v135 = v40;
  *((_DWORD *)v14 + 21) = v40;
  v140 = v39;
  v41 = 0LL;
  if ( *(_QWORD *)v38 )
  {
    v42 = *(_QWORD *)(*(_QWORD *)v38 + 8LL);
    if ( v42 )
      v41 = *(_QWORD *)(v42 + 24);
  }
  v148 = DWORD2(v147);
  v149 = DWORD1(v147);
  v146 = v147;
  if ( v144 != v41 )
  {
    v135 -= DWORD1(v147);
    v39 -= v147;
    v140 = v39;
    if ( (*(_BYTE *)(*(_QWORD *)(v144 + 40) + 26LL) & 0x40) == 0 || (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0xC0) != 0x40 )
    {
      v138 = v17 + 24;
      v43 = 0;
      v136 = 0;
      v134 = v35;
      v133 = v17 + 24;
      v137 = v34;
      v142 = v17 + 24;
      v131 = v36;
      goto LABEL_41;
    }
    v136 = 1;
    v39 = DWORD2(v147) - *(_DWORD *)(*(_QWORD *)v36 + 96LL);
    v138 = v17 + 24;
    v134 = v35;
    v133 = v17 + 24;
    v137 = v34;
    v142 = v17 + 24;
    v131 = v36;
  }
  v43 = v136;
LABEL_41:
  v44 = *(_DWORD **)v36;
  v45 = v36;
  v152 = v35;
  v151 = v138;
  v46 = v44[24] - v44[22];
  v47 = v44[25] - v44[23];
  v48 = *((_DWORD *)v14 + 8);
  v141 = v46;
  *((_DWORD *)v14 + 8) = v48 | 0x1800;
  if ( (v48 & 2) != 0 )
  {
    *((_DWORD *)v14 + 39) |= 0x100u;
    *((_DWORD *)v14 + 5) = v135;
    *((_DWORD *)v14 + 4) = v39;
  }
  else
  {
    if ( *((_DWORD *)v14 + 4) == v39 && *((_DWORD *)v14 + 5) == v135 )
    {
      *((_DWORD *)v14 + 8) = v48 | 0x1802;
      if ( v43 )
        v145 = 1;
    }
    if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x20) != 0 )
    {
      v114 = IsTrayWindow((struct tagWND *)v17, 1);
      v36 = v131;
      v46 = v141;
      if ( v114 )
      {
        *((_DWORD *)v14 + 4) = -32000;
        *((_DWORD *)v14 + 5) = -32000;
      }
    }
  }
  v49 = *((unsigned int *)v14 + 8);
  if ( (v49 & 1) != 0 )
  {
    *((_DWORD *)v14 + 6) = v46;
    v52 = v49;
    *((_DWORD *)v14 + 7) = v47;
  }
  else
  {
    if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x20) != 0
      && (Prop = GetProp(v17, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u),
          v49 = *((unsigned int *)v14 + 8),
          v36 = v131,
          Prop) )
    {
      v50 = *(_DWORD *)(gpsi + 2124LL);
      *((_DWORD *)v14 + 6) = v50;
      v51 = *(_DWORD *)(gpsi + 2128LL);
      *((_DWORD *)v14 + 7) = v51;
    }
    else
    {
      v50 = *((_DWORD *)v14 + 6);
      if ( v50 < 0 )
      {
        *((_DWORD *)v14 + 6) = 0;
        v50 = 0;
      }
      v51 = *((_DWORD *)v14 + 7);
      if ( v51 < 0 )
      {
        *((_DWORD *)v14 + 7) = 0;
        v51 = 0;
      }
    }
    v52 = v49;
    if ( v50 == v141 && v51 == v47 )
    {
      v52 = v49 | 1;
      *((_DWORD *)v14 + 8) = v49 | 1;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 21LL) & 1) == 0 )
        v139 = 1;
    }
  }
  if ( (*(_DWORD *)(v17 + 320) & 0x40000000) != 0 )
  {
    v49 = v152;
    v138 = v151;
    v36 = v45;
    v134 = v152;
    v133 = v17 + 24;
    v137 = v34;
    v142 = v17 + 24;
    v131 = v45;
    if ( (v52 & 3) != 3 )
    {
      v120 = (void *)ReferenceDwmApiPort(v151);
      DwmAsyncNotifyWindowMoveForWorkArea(v120);
      v121 = v151;
      v36 = v45;
      v49 = v152;
      *(_DWORD *)(v17 + 320) &= ~0x40000000u;
      v52 = *((_DWORD *)v14 + 8);
      v138 = v121;
      v134 = v49;
      v133 = v17 + 24;
      v137 = v34;
      v142 = v17 + 24;
      v131 = v45;
    }
    v53 = v34;
  }
  else
  {
    v53 = v137;
  }
  if ( v136 )
    *((_DWORD *)v14 + 4) = v148 - *((_DWORD *)v14 + 6) - v146 - *((_DWORD *)v14 + 4);
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0x10) != 0 )
  {
    v54 = v52 & 0xFFFFFFBF;
LABEL_64:
    *((_DWORD *)v14 + 8) = v54;
    goto LABEL_65;
  }
  v54 = v52 & 0xFFFFFF7F;
  *((_DWORD *)v14 + 8) = v54;
  if ( (v54 & 0x40) == 0 )
  {
    v54 |= 8u;
    goto LABEL_64;
  }
LABEL_65:
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 27LL) & 2) == 0 )
  {
    v55 = v17;
    while ( (*(_BYTE *)(*(_QWORD *)(v55 + 40) + 27LL) & 2) == 0 )
    {
      v55 = *(_QWORD *)(v55 + 104);
      if ( !v55 )
        goto LABEL_69;
    }
    *((_DWORD *)v14 + 8) |= 0x100u;
LABEL_69:
    v54 = *((_DWORD *)v14 + 8);
  }
  if ( (*(_BYTE *)(*(_QWORD *)v36 + 20LL) & 0x20) != 0 )
  {
    v54 &= ~4u;
    v14[1] = 1LL;
    *((_DWORD *)v14 + 8) = v54;
  }
  if ( v143 )
  {
    if ( (v54 & 4) == 0 )
    {
      v143 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 19LL) & 4) == 0 )
      {
        v82 = ValidateZorder((struct tagCVR *)v14);
        v36 = v131;
        if ( v82 )
        {
          *((_DWORD *)v14 + 8) |= 4u;
          v143 = 1;
        }
      }
    }
  }
  v56 = *((unsigned int *)v14 + 8);
  if ( (v56 & 8) == 0 )
  {
    if ( (v14[4] & 0x18E7) == 0x1807 )
    {
LABEL_81:
      v56 = (unsigned int)v56 | 8;
      *((_DWORD *)v14 + 8) = v56;
    }
    else
    {
      v49 = v17;
      if ( (*(_BYTE *)(*(_QWORD *)v36 + 31LL) & 0xC0) == 0x40 )
      {
        do
        {
          v49 = *(_QWORD *)(v49 + 104);
          if ( !v49 )
            break;
          v57 = *(_BYTE *)(*(_QWORD *)(v49 + 40) + 31LL);
          if ( (v57 & 0x10) == 0 )
            goto LABEL_81;
        }
        while ( (v57 & 0xC0) == 0x40 );
      }
    }
  }
  v58 = v133;
  v59 = v134;
  if ( (v14[4] & 2) == 0 && (*(_BYTE *)(*(_QWORD *)v36 + 21LL) & 1) == 0 )
  {
    AppCompatFlags = GetAppCompatFlags(0LL);
    v36 = v131;
    v123 = (AppCompatFlags & 0x20000) != 0;
    v124 = v139;
    if ( v123 )
      v124 = 1;
    v58 = v133;
    v139 = v124;
    v59 = v134;
  }
  if ( (v14[4] & 0x80000) != 0 || (*((_BYTE *)v14 + 156) & 0x20) == 0 )
    goto LABEL_90;
  v60 = *(_DWORD *)(*(_QWORD *)v36 + 288LL) & 0xF;
  if ( v60 != 3 )
  {
    if ( v60 == 2 )
    {
      v61 = *(_QWORD *)(v17 + 104);
      if ( v61 )
      {
        if ( *(_QWORD *)v142 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)v142 + 8LL);
          if ( v62 )
          {
            if ( v61 == *(_QWORD *)(v62 + 24) )
            {
              v59 = v134;
              v58 = v133;
              v137 = v53;
              if ( (*(_DWORD *)(v17 + 320) & 0x100000) != 0 )
              {
                v137 = v53;
                goto LABEL_175;
              }
            }
          }
        }
      }
    }
LABEL_90:
    v63 = (struct tagSIZERECT *)(v14 + 2);
    goto LABEL_91;
  }
LABEL_175:
  v108 = ValidateHmonitor(v14[16], v56, v49, v58);
  v109 = v108;
  if ( v108 )
    v110 = *(_WORD *)(*(_QWORD *)(v108 + 40) + 60LL);
  else
    v110 = 0;
  v63 = (struct tagSIZERECT *)(v14 + 2);
  v111 = *((_DWORD *)v14 + 5);
  v153[0] = *((_DWORD *)v14 + 4);
  v153[2] = *((_DWORD *)v14 + 6) + v153[0];
  v112 = *((_DWORD *)v14 + 7);
  v153[1] = v111;
  v153[3] = v111 + v112;
  NewMonitor = GetNewMonitor((struct tagWND *)v17);
  if ( NewMonitor )
  {
    if ( v109 != NewMonitor )
    {
      v125 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
      if ( v110 != (_WORD)v125 )
        *((_DWORD *)v14 + 39) ^= (*((_DWORD *)v14 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                           v17,
                                                                           v125,
                                                                           v153,
                                                                           v14 + 17) << 7)) & 0x80;
    }
  }
  v58 = v133;
  v59 = v134;
LABEL_91:
  LODWORD(v64) = *((_DWORD *)v14 + 8);
  if ( (v64 & 0x21) == 1 && !v139 )
  {
    v65 = v146;
    v66 = v149;
    v67 = v140;
    goto LABEL_94;
  }
  *((_DWORD *)v14 + 39) |= 4u;
  v83 = *v53;
  v156 = 0LL;
  v158 = 0LL;
  v157 = 0LL;
  if ( (*(_BYTE *)(v83 + 31) & 0x40) == 0 && *(char *)(v83 + 24) >= 0 )
    xxxCheckFullScreen((struct tagWND *)v17, v63);
  v84 = *((_OWORD *)v14 + 1);
  v156 = *(_OWORD *)v14;
  v85 = v14[4];
  v167 = &v156;
  LODWORD(v164) = *(_DWORD *)v63;
  DWORD2(v164) = *((_DWORD *)v14 + 6) + v164;
  DWORD1(v164) = *((_DWORD *)v14 + 5);
  HIDWORD(v164) = *((_DWORD *)v14 + 7) + DWORD1(v164);
  v157 = v84;
  v158 = v85;
  GetRect(v17, (__int64)&v165, 66);
  GetRect(v17, (__int64)&v166, 65);
  v86 = v166;
  v87 = DWORD2(v166) - v166;
  v88 = DWORD1(v166);
  v89 = HIDWORD(v166) - DWORD1(v166);
  _InterlockedIncrement(&glSendMessage);
  v90 = xxxSendTransformableMessageTimeout((struct tagWND *)v17, 0x83u, 0, 0, 0LL, 1, 0);
  v92 = v14[1];
  v93 = v90;
  if ( v92 < 2 || v92 == -2LL || v92 == -1LL || (LOBYTE(v91) = 1, v79 = HMValidateHandleNoSecure(v92, v91) != 0) )
  {
    if ( (unsigned int)(v93 - 16) > 0x3F0 )
    {
      LOWORD(v93) = 48;
      v165 = v164;
    }
    if ( (*(_BYTE *)(*v137 + 26LL) & 0x40) != 0 )
      v94 = (unsigned int)(DWORD2(v165) - DWORD2(v166));
    else
      v94 = (unsigned int)(v165 - v166);
    *((_DWORD *)v14 + 18) = v94;
    *((_DWORD *)v14 + 19) = DWORD1(v165) - DWORD1(v166);
    v14[5] = v164;
    v95 = (unsigned int)(DWORD2(v164) - v164);
    *((_DWORD *)v14 + 12) = v95;
    v96 = HIDWORD(v164) - DWORD1(v164);
    *((_DWORD *)v14 + 13) = HIDWORD(v164) - DWORD1(v164);
    if ( __PAIR64__(v88, v86) != (_QWORD)v164 )
      *((_DWORD *)v14 + 8) &= ~0x1000u;
    v64 = *((unsigned int *)v14 + 8);
    if ( v87 == (_DWORD)v95 )
    {
      if ( v89 == v96 )
      {
LABEL_135:
        if ( (v64 & 0x100) != 0 || v145 || (*(_BYTE *)(*v137 + 24LL) & 0x20) != 0 )
          goto LABEL_167;
        if ( (v64 & 0x821) != 0x801
          || (v67 = v140, (_DWORD)v94 != *((_DWORD *)v14 + 4) - v140)
          || *((_DWORD *)v14 + 19) != *((_DWORD *)v14 + 5) - v135 )
        {
          if ( v87 != (_DWORD)v95
            && ((v93 & 0x100) != 0 || (v64 = *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL), (*(_BYTE *)(v64 + 8) & 2) != 0))
            || v89 != *((_DWORD *)v14 + 13)
            && ((v93 & 0x200) != 0 || (v64 = *(_QWORD *)(*(_QWORD *)(v17 + 136) + 8LL), (*(_BYTE *)(v64 + 8) & 1) != 0)) )
          {
LABEL_167:
            *(_OWORD *)(v14 + 7) = 0LL;
            ThreadUnlock1(v64, v95, v94);
            v15 = v132;
            v4 = v150;
            goto LABEL_105;
          }
          v97 = v165;
          v75 = (unsigned int)(DWORD2(v165) - v165);
          v98 = DWORD1(v165);
          v99 = HIDWORD(v165) - DWORD1(v165);
          v100 = DWORD2(v166) - v166;
          v73 = (unsigned int)(HIDWORD(v166) - DWORD1(v166));
          v101 = *(_BYTE *)(*v137 + 26LL) & 0x40;
          if ( (v101 != 0) != ((v93 & 0x80u) != 0) )
          {
            if ( v101 && v100 > (int)v75 )
              v126 = v100 - v75;
            else
              v126 = v75 - v100;
            v97 = v126 + v165;
            LODWORD(v165) = v126 + v165;
          }
          if ( (v93 & 0x40) != 0 )
          {
            v98 = HIDWORD(v165) - v73;
            DWORD1(v165) = HIDWORD(v165) - v73;
          }
          if ( v100 < (int)v75 )
            DWORD2(v165) = v97 + v100;
          if ( (int)v73 < v99 )
            HIDWORD(v165) = v98 + v73;
          v74 = 0LL;
          *(_OWORD *)(v14 + 7) = v165;
          if ( *(_QWORD *)v138 )
          {
            v102 = *(_QWORD *)(*(_QWORD *)v138 + 8LL);
            if ( v102 )
              v74 = *(_QWORD *)(v102 + 24);
          }
          if ( v144 != v74 )
          {
            v103 = v147;
            *((_DWORD *)v14 + 14) += v147;
            *((_DWORD *)v14 + 16) += v103;
            v104 = DWORD1(v147);
            *((_DWORD *)v14 + 17) += DWORD1(v147);
            *((_DWORD *)v14 + 15) += v104;
          }
          goto LABEL_104;
        }
        v66 = DWORD1(v147);
        v63 = (struct tagSIZERECT *)(v14 + 2);
        v65 = v147;
        v58 = v133;
        v59 = v134;
LABEL_94:
        if ( (v64 & 0x100) != 0 )
        {
          v72 = v144;
          *(_OWORD *)(v14 + 7) = 0LL;
        }
        else
        {
          v68 = *(_DWORD *)v63;
          v69 = *((_DWORD *)v14 + 5);
          v70 = 0LL;
          *((_DWORD *)v14 + 14) = *(_DWORD *)v63;
          *((_DWORD *)v14 + 15) = v69;
          if ( *(_QWORD *)v58 )
          {
            v71 = *(_QWORD *)(*(_QWORD *)v58 + 8LL);
            if ( v71 )
              v70 = *(_QWORD *)(v71 + 24);
          }
          v72 = v144;
          if ( v144 != v70 )
          {
            v68 += v65;
            v69 += v66;
            *((_DWORD *)v14 + 14) = v68;
            *((_DWORD *)v14 + 15) = v69;
          }
          *((_DWORD *)v14 + 16) = *((_DWORD *)v14 + 6) + v68;
          *((_DWORD *)v14 + 17) = v69 + *((_DWORD *)v14 + 7);
        }
        v73 = *(unsigned int *)v63;
        if ( (*(_BYTE *)(*(_QWORD *)v59 + 26LL) & 0x40) != 0 )
          v74 = (unsigned int)(v73 + *((_DWORD *)v14 + 6) - v141 - v67);
        else
          v74 = (unsigned int)(v73 - v67);
        *((_DWORD *)v14 + 18) = v74;
        v75 = (unsigned int)(*((_DWORD *)v14 + 5) - v135);
        v76 = *((_DWORD *)v14 + 8);
        *((_DWORD *)v14 + 19) = v75;
        if ( (v76 & 2) == 0 )
        {
          *((_DWORD *)v14 + 8) = v76 & 0xFFFFEFFF;
          *((_DWORD *)v14 + 10) = v74 + *(_DWORD *)(*(_QWORD *)v59 + 104LL);
          *((_DWORD *)v14 + 11) = v75 + *(_DWORD *)(*(_QWORD *)v59 + 108LL);
          if ( v72 != GetDesktopWindow(v17) )
          {
            *((_DWORD *)v14 + 10) = v105 - v65;
            *((_DWORD *)v14 + 11) = v106 - v66;
          }
          *((_DWORD *)v14 + 12) = *(_DWORD *)(*(_QWORD *)v107 + 112LL) - *(_DWORD *)(*(_QWORD *)v107 + 104LL);
          v73 = (unsigned int)(*(_DWORD *)(*(_QWORD *)v107 + 116LL) - *(_DWORD *)(*(_QWORD *)v107 + 108LL));
          *((_DWORD *)v14 + 13) = v73;
        }
LABEL_104:
        ThreadUnlock1(v74, v73, v75);
        v15 = v132;
        v4 = v150;
        goto LABEL_105;
      }
      v64 = *((unsigned int *)v14 + 8);
    }
    LODWORD(v64) = v64 & 0xFFFFF7FF;
    *((_DWORD *)v14 + 8) = v64;
    goto LABEL_135;
  }
LABEL_226:
  ThreadUnlock1(v79, v78, v80);
  ThreadUnlock1(v128, v127, v129);
  return 0LL;
}
