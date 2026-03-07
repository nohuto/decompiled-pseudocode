__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  int v2; // r15d
  unsigned int v3; // edi
  int v4; // r13d
  struct tagWND *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 *v21; // r15
  unsigned __int64 v22; // rcx
  int v23; // ecx
  unsigned int v24; // r14d
  int v25; // edx
  __int64 v26; // rdx
  __int64 NewMonitor; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r9
  __int16 v31; // cx
  __int64 v32; // r8
  _DWORD *v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v41; // rcx
  _DWORD *v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // r9d
  struct tagWND *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r10d
  int v50; // r11d
  _DWORD *v51; // rdx
  int v52; // r12d
  int v53; // ecx
  unsigned int v54; // r12d
  int v55; // r13d
  unsigned int v56; // r13d
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rax
  int v60; // ecx
  struct tagWND *v61; // rbx
  __int64 v62; // r14
  __int64 v63; // rcx
  __int128 v64; // xmm0
  __int64 v65; // rcx
  int v66; // eax
  struct tagWND *v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // ebx
  __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  int v75; // ebx
  int v76; // eax
  _DWORD *v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  struct tagWND *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rcx
  int v86; // eax
  int v87; // edx
  int v88; // ebx
  bool v89; // al
  __int64 v90; // r14
  __int64 v91; // rcx
  BOOL v92; // r9d
  int v93; // edx
  int v94; // eax
  BOOL v95; // ecx
  int v96; // ecx
  int v97; // edx
  int v98; // ebx
  int v99; // ecx
  int v100; // r12d
  int v101; // r13d
  int v102; // ecx
  char v103; // bl
  _DWORD *v104; // rdx
  __int64 v105; // rax
  __int64 i; // rbx
  char v107; // bl
  int v108; // eax
  __int64 v109; // rbx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 DesktopWindow; // rax
  __int64 v113; // rdx
  int v114; // r9d
  __int64 v115; // rbx
  __int64 v116; // rdx
  BOOL v117; // r8d
  __int16 v118; // dx
  int v119; // [rsp+60h] [rbp-A0h]
  unsigned int updated; // [rsp+64h] [rbp-9Ch]
  _BYTE v121[4]; // [rsp+68h] [rbp-98h] BYREF
  int v122; // [rsp+6Ch] [rbp-94h]
  int v123; // [rsp+70h] [rbp-90h]
  int v124; // [rsp+74h] [rbp-8Ch]
  struct tagWND *v125; // [rsp+78h] [rbp-88h]
  int v126; // [rsp+80h] [rbp-80h]
  __int64 v127; // [rsp+88h] [rbp-78h] BYREF
  __int64 v128; // [rsp+90h] [rbp-70h]
  struct tagSMWP *v129; // [rsp+98h] [rbp-68h]
  struct tagSIZE v130; // [rsp+A0h] [rbp-60h] BYREF
  struct tagPOINT v131; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v132; // [rsp+B0h] [rbp-50h] BYREF
  int v133; // [rsp+B8h] [rbp-48h]
  int v134; // [rsp+BCh] [rbp-44h]
  __int128 v135; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v136; // [rsp+D0h] [rbp-30h]
  __int128 v137; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v138; // [rsp+E8h] [rbp-18h]
  __int128 v139; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v140; // [rsp+100h] [rbp+0h] BYREF
  __int128 v141; // [rsp+110h] [rbp+10h] BYREF

  v2 = 0;
  v129 = a2;
  updated = 0;
  v138 = 0LL;
  v136 = 0LL;
  v3 = 0;
  v126 = 0;
  v137 = 0LL;
  v4 = 0;
  v119 = 0;
  v135 = 0LL;
  v125 = a1;
  v6 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 8)
    || (v8 = SGDGetUserSessionState(v7), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v8 + 8))) )
  {
    v123 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 282LL);
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 42LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v9);
  ++*(_DWORD *)(CurrentThreadWin32Thread + 48);
  ThreadLockAlways(v6, &v135);
  v13 = (__int64 *)*((_QWORD *)a2 + 5);
  v14 = 1LL;
  v15 = *((_DWORD *)a2 + 7) - 1;
  v122 = v15;
  if ( v15 >= 0 )
  {
    v16 = v15;
    while ( 1 )
    {
      v17 = *v13;
      v124 = 0;
      v123 = 0;
      v127 = 0LL;
      v139 = 0LL;
      if ( v17 )
        break;
LABEL_38:
      v13 += 21;
      v122 = --v16;
      if ( v16 < 0 )
      {
        if ( v126 )
          xxxWindowEvent(0x8004u, v6, -4, 0, gdwDeferWinEvent != 0 ? 2 : 0);
        v3 = updated;
        goto LABEL_42;
      }
    }
    v18 = 0LL;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v11 = (unsigned __int16)v17;
    if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(gpsi + 8LL) )
    {
      v19 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v17;
      v21 = (__int64 *)HMPkheFromPhe(v19);
      LOWORD(v17) = WORD1(v17) & 0x7FFF;
      if ( (WORD1(v17) & 0x7FFF) == *(_WORD *)(v19 + 26)
        || (_WORD)v17 == 0x7FFF
        || !(_WORD)v17 && PsGetCurrentProcessWow64Process(v20) )
      {
        if ( (*(_BYTE *)(v19 + 25) & 1) != 0 || *(_BYTE *)(v19 + 24) != 1 )
        {
          v2 = 0;
        }
        else
        {
          v18 = *v21;
          v2 = 0;
          if ( v18 )
          {
            v22 = v13[1];
            if ( v22 < 2 || v22 == -2LL || v22 == -1LL || (LOBYTE(v11) = 1, HMValidateHandleNoSecure(v22, v11)) )
            {
LABEL_15:
              v23 = v13[4] & 0x18E7;
              if ( v23 == 6151 )
              {
                *((_DWORD *)v13 + 8) |= 8u;
LABEL_37:
                v16 = v122;
                v14 = 1LL;
                goto LABEL_38;
              }
              if ( v23 == 6147
                && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 19LL) & 4) == 0
                && (unsigned int)ValidateZorder((struct tagCVR *)v13) )
              {
                *((_DWORD *)v13 + 8) |= 0xCu;
                v84 = v13[12];
                if ( v84 )
                {
                  GreDeleteObject(v84);
                  v13[12] = 0LL;
                }
                goto LABEL_37;
              }
              if ( (v13[4] & 0x1803) == 0x1803 )
                goto LABEL_18;
              v41 = *(_QWORD *)(v18 + 40);
              if ( (*(_BYTE *)(v41 + 27) & 0x20) == 0 && (*(_BYTE *)(v41 + 26) & 8) == 0
                || (v97 = *(_DWORD *)(v41 + 100) - *(_DWORD *)(v41 + 92),
                    LODWORD(v128) = *(_DWORD *)(v41 + 96) - *(_DWORD *)(v41 + 88),
                    HIDWORD(v128) = v97,
                    (_DWORD)v128 == *((_DWORD *)v13 + 6))
                && v97 == *((_DWORD *)v13 + 7) )
              {
                v128 = v127;
              }
              else
              {
                v124 = 1;
              }
              v42 = (_DWORD *)v13 + 5;
              if ( *(_DWORD *)(v41 + 88) != *((_DWORD *)v13 + 4) || *(_DWORD *)(v41 + 92) != *v42 )
                v123 = 1;
              v139 = *(_OWORD *)(*((_QWORD *)v6 + 5) + 104LL);
              if ( IsChildWindowDpiBoundary((const struct tagWND *)v18) )
              {
                v115 = 0LL;
                if ( (*((_DWORD *)v13 + 39) & 0x100) == 0 )
                {
                  v115 = v18 + 224;
                  *(_DWORD *)(v18 + 228) = 0;
                  *(_DWORD *)(v18 + 224) = 0;
                }
                LogicalToPhysicalInPlaceRectWithSubpixel(v6, &v139, v115);
                PhysicalToLogicalInPlaceRectWithSubpixel(v18, &v139, v115);
                v119 = 1;
              }
              v43 = *(_QWORD *)(v18 + 40);
              v44 = *(unsigned int *)(v43 + 88);
              v45 = *(_DWORD *)(v43 + 92);
              *(_DWORD *)(v43 + 88) = *((_DWORD *)v13 + 4);
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) = *v42;
              v46 = 0LL;
              v47 = *(_QWORD *)(v18 + 24);
              if ( v47 )
              {
                v48 = *(_QWORD *)(v47 + 8);
                if ( v48 )
                  v46 = *(struct tagWND **)(v48 + 24);
              }
              v49 = DWORD1(v139);
              v50 = v139;
              if ( v6 != v46 )
              {
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 88LL) += v139;
                *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL) += v49;
              }
              v51 = *(_DWORD **)(v18 + 40);
              v52 = v51[22];
              v53 = *((_DWORD *)v13 + 6) + v52;
              v54 = v52 - v44;
              v55 = v51[23];
              v51[24] = v53;
              v56 = v55 - v45;
              *(_DWORD *)(*(_QWORD *)(v18 + 40) + 100LL) = *((_DWORD *)v13 + 7)
                                                         + *(_DWORD *)(*(_QWORD *)(v18 + 40) + 92LL);
              v57 = *(_QWORD *)(v18 + 40);
              v58 = *(_DWORD *)(v57 + 88);
              if ( *(_DWORD *)(v57 + 96) < v58 )
                *(_DWORD *)(v57 + 96) = v58;
              v59 = *(_QWORD *)(v18 + 40);
              v60 = *(_DWORD *)(v59 + 92);
              if ( *(_DWORD *)(v59 + 100) < v60 )
                *(_DWORD *)(v59 + 100) = v60;
              if ( v18 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
              {
                DesktopWindow = GetDesktopWindow(v18);
                v61 = v125;
                if ( v125 != (struct tagWND *)DesktopWindow )
                {
                  v44 = (unsigned int)(v44 - v50);
                  v114 -= v49;
                }
                if ( (unsigned int)v44 | v114 )
                {
                  *(_DWORD *)(v113 + 324) += v44;
                  *(_DWORD *)(v113 + 328) += v114;
                }
              }
              else
              {
                v61 = v125;
              }
              v62 = v18 + 40;
              v63 = *(_QWORD *)(v18 + 40);
              v64 = *(_OWORD *)(v63 + 104);
              *(_DWORD *)(v63 + 104) = *((_DWORD *)v13 + 10);
              v65 = *(_QWORD *)(v18 + 40);
              v66 = *((_DWORD *)v13 + 11);
              v139 = v64;
              *(_DWORD *)(v65 + 108) = v66;
              v67 = 0LL;
              v68 = *(_QWORD *)(v18 + 24);
              if ( v68 )
              {
                v69 = *(_QWORD *)(v68 + 8);
                if ( v69 )
                  v67 = *(struct tagWND **)(v69 + 24);
              }
              if ( v61 != v67 )
              {
                *(_DWORD *)(*(_QWORD *)v62 + 104LL) += v50;
                *(_DWORD *)(*(_QWORD *)v62 + 108LL) += v49;
              }
              *(_DWORD *)(*(_QWORD *)v62 + 112LL) = *((_DWORD *)v13 + 12) + *(_DWORD *)(*(_QWORD *)v62 + 104LL);
              *(_DWORD *)(*(_QWORD *)v62 + 116LL) = *((_DWORD *)v13 + 13) + *(_DWORD *)(*(_QWORD *)v62 + 108LL);
              v70 = *(_QWORD *)v62;
              v71 = v139 - *(_QWORD *)(*(_QWORD *)v62 + 104LL);
              if ( (_QWORD)v139 == *(_QWORD *)(*(_QWORD *)v62 + 104LL) )
                v71 = *((_QWORD *)&v139 + 1) - *(_QWORD *)(v70 + 112);
              LOBYTE(v2) = v71 == 0;
              v72 = v13[4] & 8;
              if ( (*(_BYTE *)(v70 + 21) & 8) == 0 )
              {
LABEL_68:
                if ( v124 )
                {
                  *((_DWORD *)v13 + 39) |= 1u;
                  if ( (*(_BYTE *)(*(_QWORD *)v62 + 27LL) & 0x20) != 0
                    && (v103 = *(_BYTE *)(*(_QWORD *)v62 + 26LL), (v103 & 0x20) == 0) )
                  {
                    v107 = v103 & 8;
                    v127 = 0LL;
                    v108 = RecreateRedirectionBitmap(
                             (struct tagWND *)v18,
                             0,
                             (unsigned __int64)&v127 & -(__int64)(v107 != 0));
                    updated = v108;
                    if ( v107 && v108 >= 0 )
                    {
                      v109 = v127;
                      if ( v127 )
                      {
                        if ( (unsigned int)SetOldRedirectionBitmap(v18, v127) )
                          v109 = 0LL;
                      }
                      else
                      {
                        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v121);
                        xxxInternalInvalidate((struct tagWND *)v18, (HRGN)1, 0x401u);
                        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v121);
                      }
                    }
                    else
                    {
                      v109 = v127;
                    }
                    if ( v109 )
                      DeleteOrSetRedirectionBitmap(v18, v109, 1);
                  }
                  else if ( (unsigned int)IsWindowDesktopComposed(v18) )
                  {
                    v104 = *(_DWORD **)v62;
                    v130.cx = v104[24] - v104[22];
                    v130.cy = v104[25] - v104[23];
                    updated = UpdateSprite(
                                *(HDEV *)(gpDispInfo + 40LL),
                                (const struct tagWND *)v18,
                                v44,
                                0LL,
                                0LL,
                                &v130,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0,
                                0LL);
                  }
                }
                if ( (v54 || v56) && (*(_BYTE *)(*(_QWORD *)v62 + 21LL) & 8) == 0 )
                {
                  v73 = *(_QWORD *)(*(_QWORD *)v62 + 168LL);
                  if ( v73 )
                    GreOffsetRgn(v73, v54, v56);
                }
                if ( v13[9] || v119 )
                {
                  v74 = *(_QWORD *)(*(_QWORD *)v62 + 136LL);
                  if ( v74 > 1 )
                    GreOffsetRgn(v74, *((unsigned int *)v13 + 18), *((unsigned int *)v13 + 19));
                  OffsetChildren((struct tagWND *)v18, *((_DWORD *)v13 + 18), *((_DWORD *)v13 + 19), 0LL);
                }
                if ( v123 || !v2 || v54 || v56 )
                {
                  v75 = 0;
                  v131 = *(struct tagPOINT *)(*(_QWORD *)v62 + 88LL);
                  v140 = 0LL;
                  if ( v123 )
                  {
                    v76 = *(_DWORD *)(v18 + 320);
                    if ( (v76 & 0x400) != 0 )
                    {
                      v111 = *(_QWORD *)v18;
                      *(_DWORD *)(v18 + 320) = v76 & 0xFFFFFBFF;
                      PostShellHookMessagesEx(0x36uLL, v111, 0LL);
                    }
                    v77 = *(_DWORD **)v62;
                    if ( (*(_BYTE *)(*(_QWORD *)v62 + 26LL) & 8) != 0 )
                    {
                      v98 = v124;
                      if ( v124 )
                      {
                        v99 = v77[24] - v77[22];
                        v100 = -v54;
                        v101 = -v56;
                        v132 = 0LL;
                        v133 = v99;
                        v102 = v77[25] - v77[23];
                        DWORD2(v140) = v100 + v128;
                        v134 = v102;
                        HIDWORD(v140) = v101 + HIDWORD(v128);
                        *(_QWORD *)&v140 = __PAIR64__(v101, v100);
                        IntersectRect(&v140, &v140, &v132);
                      }
                      if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
                      {
                        InvalidateGDIWindows(v18);
                        GreClientRgnUpdated((Gre::Base *)1);
                      }
                      if ( !v98 || (v75 = 1, (unsigned int)IsWindowDesktopComposed(v18)) )
                        v75 = 0;
                    }
                  }
                  if ( (*(_BYTE *)(*(_QWORD *)v62 + 26LL) & 8) != 0 )
                    updated = UpdateSprite(
                                *(HDEV *)(gpDispInfo + 40LL),
                                (const struct tagWND *)v18,
                                v44,
                                0LL,
                                &v131,
                                0LL,
                                0LL,
                                0LL,
                                0,
                                0LL,
                                0,
                                (struct tagRECT *)((unsigned __int64)&v140 & -(__int64)(v75 != 0)));
                  if ( v123 )
                    goto LABEL_89;
                }
                if ( v124 )
                {
LABEL_89:
                  v78 = *(_QWORD *)(v18 + 40);
                  if ( (*(_BYTE *)(v78 + 27) & 0x20) != 0 && (*(_BYTE *)(v78 + 26) & 0x20) == 0 )
                  {
                    v79 = *(_QWORD *)(gptiCurrent + 672LL);
                    if ( (!v79 || (*(_DWORD *)(v79 + 200) & 0x80000) == 0)
                      && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v18) )
                    {
                      *(_DWORD *)(v18 + 320) &= ~0x20000u;
                      RecreateRedirectionBitmap((struct tagWND *)v18, 0, 0LL);
                    }
                  }
                }
                v6 = v125;
                v4 = v119;
LABEL_18:
                v24 = updated;
                if ( (v13[4] & 4) == 0 )
                {
                  v80 = v13[1];
                  if ( v80 >= 2 && (v80 == 0xFFFF || v80 >= 0xFFFFFFFFFFFFFFFDuLL)
                    || (v119 = v4, !(unsigned int)ValidateWindowPos((struct tagCVR *)v13, v6)) )
                  {
                    *((_DWORD *)v13 + 8) |= 4u;
                    SetOrClrWF(0LL, v18, 772LL, 1LL);
                    v24 = updated;
                  }
                  else
                  {
                    UnlinkWindow(v18, v6);
                    v82 = (struct tagWND *)PWInsertAfter(v13[1], v81);
                    LinkWindow((struct tagWND *)v18, v82, v6);
                    v83 = *(_QWORD *)(v18 + 40);
                    ++v126;
                    if ( (*(_BYTE *)(v83 + 19) & 4) != 0 )
                    {
                      SetOrClrWF(0LL, v18, 772LL, 1LL);
                      *(_BYTE *)(*(_QWORD *)(v18 + 40) + 24LL) ^= 8u;
                    }
                    v119 = v4;
                  }
                }
                v25 = *((_DWORD *)v13 + 39);
                if ( (v25 & 0x20) != 0 && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 31LL) & 0x20) == 0 )
                {
                  v139 = 0LL;
                  if ( (v25 & 0x80u) != 0 )
                    v139 = *(_OWORD *)(v13 + 17);
                  NewMonitor = GetNewMonitor((struct tagWND *)v18);
                  if ( NewMonitor )
                  {
                    if ( ValidateHmonitor(v13[16], v26, v28, v29) != NewMonitor )
                      goto LABEL_214;
                    v30 = *(_QWORD *)(v18 + 40);
                    v31 = *(_WORD *)(v30 + 286);
                    if ( v31 )
                    {
                      v32 = NewMonitor + 40;
                      if ( *(_WORD *)(*(_QWORD *)(NewMonitor + 40) + 60LL) != v31
                        && (*(_DWORD *)(v30 + 288) & 0xF) == 2
                        && (*(_DWORD *)(*(_QWORD *)(v18 + 16) + 648LL) & 0x2000000) == 0
                        && IsTopLevelWindow(v18) )
                      {
                        goto LABEL_214;
                      }
                    }
                    else
                    {
                      v32 = NewMonitor + 40;
                    }
                    if ( (*(_BYTE *)(v30 + 288) & 0xF) == 3 )
                    {
                      v118 = *(_WORD *)(*(_QWORD *)v32 + 84LL);
                      if ( v118 != ((*(_DWORD *)(v30 + 288) >> 8) & 0x1FF) && v118 != *(_WORD *)(v18 + 304) )
LABEL_214:
                        *((_DWORD *)v13 + 39) ^= (*((_DWORD *)v13 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND *)v18) << 6)) & 0x40;
                    }
                  }
                }
                ThreadLockAlways(v18, &v137);
                v34 = *((_DWORD *)v13 + 8);
                if ( (v34 & 0x40) == 0 )
                {
                  if ( (v34 & 0x80u) != 0 )
                  {
                    v95 = IsTrayWindow((struct tagWND *)v18, 1);
                    v2 = 0;
                    if ( (v13[4] & 0x1F) != 0x1F && v95 && (*(_WORD *)(*(_QWORD *)(v18 + 40) + 42LL) & 0x2FFF) != 0x2AA )
                    {
                      updated = v24;
                      v119 = v4;
                      *((_DWORD *)v129 + 6) |= 1u;
                      *((_DWORD *)v13 + 8) |= 0x20000000u;
                    }
                    SetRedrawProp(v18, 0LL);
                    if ( (unsigned int)SetVisible((struct tagWND *)v18, 0xAu) )
                      DecomposeWindowIfNeeded((struct tagWND *)v18);
                    v96 = 3;
                    if ( !gdwDeferWinEvent )
                      v96 = 1;
                    xxxWindowEvent(0x8003u, (struct tagWND *)v18, 0, 0, v96);
                  }
                  else
                  {
                    v2 = 0;
                  }
LABEL_31:
                  v35 = *(_QWORD *)(v18 + 40);
                  if ( (*(_BYTE *)(v35 + 31) & 0x10) != 0 )
                  {
                    v36 = *((_DWORD *)v13 + 8);
                    if ( (v36 & 0x8000) != 0 || (*(_BYTE *)(v35 + 21) & 1) == 0 && (v36 & 8) != 0 )
                      SetOrClrWF(1LL, v18, 264LL, 1LL);
                  }
                  v37 = v13[14];
                  if ( v37 )
                    SelectWindowRgn((struct tagWND *)v18, v37, ((*((_DWORD *)v13 + 8) >> 3) & 1) == 0);
                  ThreadUnlock1(v35, v37, v33);
                  v6 = v125;
                  goto LABEL_37;
                }
                v85 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 424LL);
                if ( (*(_DWORD *)(v85 + 12) & 0x40) != 0 )
                  zzzCalcStartCursorHide(v85, 5000LL);
                SetRedrawProp(v18, 0LL);
                v86 = SetVisible((struct tagWND *)v18, 9u);
                v87 = 3;
                v88 = v86;
                if ( !gdwDeferWinEvent )
                  v87 = 1;
                xxxWindowEvent(0x8002u, (struct tagWND *)v18, 0, 0, v87);
                if ( v88 )
                {
                  *((_DWORD *)v13 + 39) |= 2u;
                  if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 8) == 0 )
                    updated = ComposeWindowIfNeeded((struct tagWND *)v18, 0);
                }
                v89 = IsTrayWindow((struct tagWND *)v18, 1);
                v90 = v18 + 40;
                v91 = *(_QWORD *)(v18 + 40);
                v33 = (_DWORD *)((char *)v129 + 24);
                v92 = v89;
                if ( (*(_WORD *)(v91 + 42) & 0x2FFF) == 0x2AA )
                {
                  if ( (*(_BYTE *)(v91 + 16) & 0x40) != 0 )
                  {
                    *v33 |= 1u;
                    v93 = *((_DWORD *)v13 + 8) | 0x40000000;
                    *((_DWORD *)v13 + 8) = v93;
                  }
                  else
                  {
                    v93 = *((_DWORD *)v13 + 8);
                  }
                  v94 = v93;
                  v119 = v4;
                }
                else
                {
                  if ( (*(_BYTE *)(v91 + 16) & 0x40) != 0 )
                  {
                    *v33 |= 1u;
                    v93 = *((_DWORD *)v13 + 8) | 0x40000000;
                    *((_DWORD *)v13 + 8) = v93;
                  }
                  else
                  {
                    v93 = *((_DWORD *)v13 + 8);
                  }
                  v94 = v93;
                  if ( !v92 && !*(_QWORD *)(v18 + 120) )
                    goto LABEL_120;
                  *v33 |= 1u;
                  v93 = *((_DWORD *)v13 + 8) | 0x10000000;
                  v119 = v4;
                  *((_DWORD *)v13 + 8) = v93;
                  v94 = v93;
                  if ( !v92 )
                  {
                    *((_DWORD *)v13 + 39) |= 8u;
LABEL_120:
                    v119 = v4;
                    v2 = 0;
LABEL_150:
                    if ( !*(_QWORD *)(v18 + 120) )
                    {
                      LOWORD(v93) = v94;
                      if ( (v94 & 0x40000000) != 0 )
                        *((_DWORD *)v13 + 39) |= 0x10u;
                    }
                    if ( (*(_BYTE *)(*(_QWORD *)v90 + 20LL) & 0x40) != 0 )
                    {
                      *v33 |= 1u;
                      *((_DWORD *)v13 + 8) |= 0x80000000;
                      v93 = *((_DWORD *)v13 + 8);
                    }
LABEL_155:
                    if ( (v93 & 0x4008) != 8
                      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 136) + 8LL) + 9LL) & 8) != 0
                      && *(_QWORD *)(v18 + 24) == grpdeskRitInput )
                    {
                      v105 = *(_QWORD *)(v18 + 104);
                      v139 = 0LL;
                      for ( i = *(_QWORD *)(v105 + 112); i; i = *(_QWORD *)(i + 88) )
                      {
                        if ( i == v18 )
                        {
                          CreateSpb((struct tagWND *)v18, 0, *(_QWORD *)(gpDispInfo + 56LL));
                          break;
                        }
                        v110 = *(_QWORD *)(i + 40);
                        if ( (*(_BYTE *)(v110 + 31) & 0x10) != 0 )
                        {
                          v141 = *(_OWORD *)(v110 + 88);
                          TransformRectBetweenCoordinateSpaces(&v141, &v141, v18, i);
                          if ( (unsigned int)IntersectRect(&v139, *(_QWORD *)v90 + 88LL, &v141) )
                            break;
                        }
                      }
                      v4 = v119;
                    }
                    else
                    {
                      v4 = v119;
                    }
                    goto LABEL_31;
                  }
                }
                v2 = 0;
                if ( v92 )
                  goto LABEL_155;
                goto LABEL_150;
              }
              if ( *(_DWORD *)*gpDispInfo <= 1u || (unsigned int)IsSmallerThanScreen(v18, v70, v44, 0LL) )
              {
                v117 = v72 == 0;
                v116 = 0LL;
              }
              else
              {
                if ( *(_QWORD *)(*(_QWORD *)v62 + 168LL) )
                  goto LABEL_68;
                v116 = 2LL;
                v117 = v72 == 0;
              }
              SelectWindowRgn((struct tagWND *)v18, v116, v117);
              goto LABEL_68;
            }
          }
        }
      }
      else
      {
        v2 = 0;
      }
    }
    *((_DWORD *)v13 + 8) = 6159;
    *v13 = 0LL;
    goto LABEL_15;
  }
LABEL_42:
  ThreadUnlock1(v14, v11, v12);
  v39 = PsGetCurrentThreadWin32Thread(v38);
  --*(_DWORD *)(v39 + 48);
  return v3;
}
