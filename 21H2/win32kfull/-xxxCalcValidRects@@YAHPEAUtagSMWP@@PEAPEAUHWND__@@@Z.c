/*
 * XREFs of ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C004720C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047D8C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     xxxSendTransformableMessage @ 0x1C004EBC0 (xxxSendTransformableMessage.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C006A59C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0081A44 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0082294 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     _FChildVisible @ 0x1C00F3654 (_FChildVisible.c)
 *     ?CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z @ 0x1C00F4CFC (-CuratedWindowHidden@NotifyShell@@YAXPEAUtagWND@@W4HideSource@1@@Z.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     GetAppCompatFlags @ 0x1C01027E0 (GetAppCompatFlags.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0107E94 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1C0159B20 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxCalcValidRects(struct tagSMWP *a1, HWND *a2)
{
  HWND v2; // r15
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 *v12; // rbx
  int v13; // edi
  unsigned __int64 v14; // r14
  __int64 v15; // rdi
  struct tagWND **v16; // rsi
  struct tagWND *v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 *v20; // rax
  int v21; // edi
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // r8d
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // r13d
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // r14d
  __int64 v39; // rcx
  int v40; // r10d
  _DWORD *v41; // rcx
  LONG *v42; // r12
  int v43; // edi
  unsigned int v44; // r9d
  int v45; // r15d
  int v46; // eax
  char v47; // al
  __int64 Prop; // rax
  __int64 v49; // rdx
  int v50; // ecx
  unsigned int v51; // edi
  __int64 v52; // r15
  int v53; // r14d
  unsigned int v54; // r9d
  __int64 v55; // r8
  int v56; // r15d
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int16 v60; // r14
  LONG v61; // edx
  int v62; // ecx
  __int64 NewMonitor; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int128 v67; // xmm1
  unsigned __int64 v68; // xmm0_8
  unsigned int v69; // r14d
  unsigned int v70; // edi
  int v71; // r12d
  int v72; // r13d
  unsigned int v73; // r15d
  int v74; // eax
  __int64 v75; // rdx
  unsigned int v76; // eax
  __int64 v77; // r14
  int v78; // r10d
  LONG v79; // edx
  __int64 v80; // r9
  __int64 v81; // rax
  __int64 v82; // rax
  LONG v83; // ecx
  int v84; // edx
  int v85; // eax
  __int64 v86; // rdx
  int v87; // r9d
  int v88; // r11d
  int v89; // edx
  int v90; // r11d
  int v91; // r9d
  int v92; // r8d
  int v93; // r10d
  int v94; // edi
  char v95; // r14
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  int v100; // [rsp+30h] [rbp-D0h]
  int v101; // [rsp+34h] [rbp-CCh]
  int v102; // [rsp+38h] [rbp-C8h]
  unsigned int v103; // [rsp+3Ch] [rbp-C4h]
  __int64 v104; // [rsp+40h] [rbp-C0h]
  int v105; // [rsp+48h] [rbp-B8h]
  int v106; // [rsp+4Ch] [rbp-B4h]
  int v107; // [rsp+50h] [rbp-B0h]
  int v108; // [rsp+54h] [rbp-ACh]
  __int64 v109; // [rsp+58h] [rbp-A8h]
  HWND v110; // [rsp+60h] [rbp-A0h]
  __int128 v111; // [rsp+68h] [rbp-98h] BYREF
  struct tagRECT v112; // [rsp+78h] [rbp-88h] BYREF
  HWND *v113; // [rsp+88h] [rbp-78h]
  __int128 v114; // [rsp+90h] [rbp-70h] BYREF
  __int64 v115; // [rsp+A0h] [rbp-60h]
  __int128 v116; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v117; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v118; // [rsp+C8h] [rbp-38h]
  _QWORD v119[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v120; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v121; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v122; // [rsp+108h] [rbp+8h] BYREF
  __int128 *v123; // [rsp+118h] [rbp+18h]

  v113 = a2;
  v110 = 0LL;
  v119[2] = 0LL;
  v2 = 0LL;
  v123 = 0LL;
  v120 = 0LL;
  v115 = 0LL;
  v121 = 0LL;
  v106 = 0;
  v122 = 0LL;
  v101 = 0;
  v114 = 0LL;
  ValidWindowPos = FindValidWindowPos(a1);
  if ( !ValidWindowPos )
    return 0LL;
  v6 = 0LL;
  v7 = *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  v109 = v7;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  v119[0] = *(_QWORD *)(v6 + 416);
  *(_QWORD *)(v6 + 416) = v119;
  v119[1] = v7;
  if ( v7 )
    HMLockObject(v7);
  v12 = (unsigned __int64 *)*((_QWORD *)a1 + 5);
  v13 = *((_DWORD *)a1 + 7);
  v105 = 1;
  while ( 1 )
  {
    v100 = --v13;
    if ( v13 < 0 )
      break;
    v14 = *v12;
    if ( !*v12 )
      goto LABEL_178;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    v9 = (unsigned __int16)v14;
    v10 = gpsi;
    if ( (unsigned __int64)(unsigned __int16)v14 < *(_QWORD *)(gpsi + 8LL) )
    {
      v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v14 * *((_DWORD *)&gSharedInfo + 4);
      v16 = (struct tagWND **)HMPkheFromPhe(v15);
      v10 = v14 >> 16;
      LOWORD(v10) = WORD1(v14) & 0x7FFF;
      if ( (WORD1(v14) & 0x7FFF) == *(_WORD *)(v15 + 26)
        || (_WORD)v10 == 0x7FFF
        || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v10) )
      {
        v9 = 1LL;
        if ( (*(_BYTE *)(v15 + 25) & 1) == 0 && *(_BYTE *)(v15 + 24) == 1 )
        {
          v17 = *v16;
          if ( v17 )
          {
            v18 = v12[1];
            if ( v18 - 2 > 0xFFFFFFFFFFFFFFFBuLL || HMValidateHandleNoSecure(v18, 1) )
            {
              v19 = 0LL;
              v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
              if ( v20 )
                v19 = *v20;
              *(_QWORD *)&v114 = *(_QWORD *)(v19 + 416);
              *(_QWORD *)(v19 + 416) = &v114;
              *((_QWORD *)&v114 + 1) = v17;
              HMLockObject(v17);
              xxxProcessPreemptiveDpiChange(v17, (struct tagCVR *)v12);
              v102 = 0;
              if ( !v2 && (v12[4] & 0x10) == 0 )
                v110 = *(HWND *)v17;
              v21 = *((_DWORD *)v12 + 8);
              if ( (v21 & 0x400) == 0 )
              {
                v22 = v12[1];
                xxxSendPosMessage((ULONG_PTR)v17, 0x46u, (struct tagWINDOWPOS *)v12);
                v24 = *((_DWORD *)v12 + 8) | v21 & 0xFD0000;
                *((_DWORD *)v12 + 8) = v24;
                LOBYTE(v25) = v24;
                if ( (v21 & 0x40) != 0 && (v24 & 0x40) == 0 )
                {
                  NotifyShell::CuratedWindowHidden(v17, v23, v24);
                  v25 = *((_DWORD *)v12 + 8);
                }
                v26 = *((_DWORD *)v12 + 39);
                if ( (v26 & 0x20) == 0 && (v25 & 3) != 3 )
                {
                  v12[16] = *(_QWORD *)(*((_QWORD *)v17 + 5) + 256LL);
                  *((_DWORD *)v12 + 39) = v26 | 0x20;
                }
                *v12 = v14;
                if ( (v25 & 4) == 0 && ((v21 & 4) != 0 || *((_WORD *)v12 + 4) != (_WORD)v22) )
                {
                  if ( !IsStillWindowC(v12[1]) )
                    goto LABEL_179;
                  if ( *((_WORD *)v12 + 4) != (_WORD)v22 || v12[1] >= 0xFFFFFFFFFFFFFFFEuLL )
                  {
                    v30 = CheckTopmost((struct tagWINDOWPOS *)v12);
                    if ( v30 )
                    {
                      if ( *(_DWORD *)(*((_QWORD *)v17 + 5) + 236LL) == 1 )
                        SetTopmostEnum(v17, v30 == 1, (*((_DWORD *)v12 + 8) >> 9) & 1);
                    }
                  }
                }
              }
              v111 = *(_OWORD *)(*(_QWORD *)(v7 + 40) + 104LL);
              if ( IsChildWindowDpiBoundary(v17) )
              {
                LogicalToPhysicalInPlaceRectWithSubpixel(v7, &v111, 0LL);
                PhysicalToLogicalInPlaceRectWithSubpixel(v17, &v111, 0LL);
              }
              v31 = *((_QWORD *)v17 + 5);
              v32 = 0LL;
              v33 = *(_DWORD *)(v31 + 88);
              v34 = v33;
              v35 = *(_DWORD *)(v31 + 92);
              *((_DWORD *)v12 + 20) = v33;
              *((_DWORD *)v12 + 21) = v35;
              v36 = *((_QWORD *)v17 + 3);
              v107 = v33;
              v108 = v35;
              if ( v36 )
              {
                v37 = *(_QWORD *)(v36 + 8);
                if ( v37 )
                  v32 = *(_QWORD *)(v37 + 24);
              }
              v38 = DWORD2(v111);
              v104 = v111;
              if ( v109 == v32 )
              {
                v40 = v101;
              }
              else
              {
                v33 -= v111;
                v35 -= DWORD1(v111);
                v107 = v33;
                v108 = v35;
                if ( (*(_BYTE *)(*(_QWORD *)(v109 + 40) + 26LL) & 0x40) != 0
                  && (v39 = *((_QWORD *)v17 + 5), (*(_BYTE *)(v39 + 31) & 0xC0) == 0x40) )
                {
                  v101 = 1;
                  v34 = DWORD2(v111) - *(_DWORD *)(v39 + 96);
                  v40 = 1;
                }
                else
                {
                  v40 = 0;
                  v101 = 0;
                  v34 = v33;
                }
              }
              v41 = (_DWORD *)*((_QWORD *)v17 + 5);
              v42 = (LONG *)(v12 + 2);
              v43 = *((_DWORD *)v12 + 8) | 0x1800;
              v44 = v41[24] - v41[22];
              v45 = v41[25] - v41[23];
              v103 = v44;
              *((_DWORD *)v12 + 8) = v43;
              if ( (v43 & 2) != 0 )
              {
                *((_DWORD *)v12 + 39) |= 0x100u;
                *v42 = v34;
                *((_DWORD *)v12 + 5) = v35;
              }
              else
              {
                if ( *v42 == v34 && *((_DWORD *)v12 + 5) == v35 )
                {
                  v46 = v106;
                  *((_DWORD *)v12 + 8) = v43 | 2;
                  if ( v40 )
                    v46 = 1;
                  v106 = v46;
                }
                if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 0x20) != 0 )
                {
                  v47 = IsTrayWindow(v17, 1LL);
                  v44 = v103;
                  if ( v47 )
                  {
                    *v42 = -32000;
                    *((_DWORD *)v12 + 5) = -32000;
                  }
                }
                v43 = *((_DWORD *)v12 + 8);
              }
              if ( (v43 & 1) != 0 )
              {
                *((_DWORD *)v12 + 6) = v44;
                v49 = v44;
                *((_DWORD *)v12 + 7) = v45;
              }
              else
              {
                if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 0x20) != 0
                  && (Prop = GetProp(v17, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1LL),
                      v43 = *((_DWORD *)v12 + 8),
                      Prop) )
                {
                  v49 = *(unsigned int *)(gpsi + 2124LL);
                  *((_DWORD *)v12 + 6) = v49;
                  v50 = *(_DWORD *)(gpsi + 2128LL);
                  *((_DWORD *)v12 + 7) = v50;
                }
                else
                {
                  v49 = *((unsigned int *)v12 + 6);
                  if ( (int)v49 < 0 )
                  {
                    *((_DWORD *)v12 + 6) = 0;
                    v49 = 0LL;
                  }
                  v50 = *((_DWORD *)v12 + 7);
                  if ( v50 < 0 )
                  {
                    *((_DWORD *)v12 + 7) = 0;
                    v50 = 0;
                  }
                }
                if ( (_DWORD)v49 == v103 && v50 == v45 )
                {
                  v43 = *((_DWORD *)v12 + 8) | 1;
                  *((_DWORD *)v12 + 8) = v43;
                  if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 21LL) & 1) == 0 )
                    v102 = 1;
                }
              }
              if ( v101 )
                *v42 = v38 - *v42 - v49 - v104;
              if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 31LL) & 0x10) != 0 )
              {
                v51 = v43 & 0xFFFFFFBF;
                goto LABEL_82;
              }
              v51 = v43 & 0xFFFFFF7F;
              *((_DWORD *)v12 + 8) = v51;
              if ( (v51 & 0x40) == 0 )
              {
                v51 |= 8u;
LABEL_82:
                *((_DWORD *)v12 + 8) = v51;
              }
              v52 = *((_QWORD *)v17 + 5);
              v53 = v51;
              if ( (*(_BYTE *)(v52 + 27) & 2) == 0 && GetStyleWindow((__int64)v17, 2818) )
              {
                v53 = v51 | 0x100;
                *((_DWORD *)v12 + 8) = v51 | 0x100;
                v52 = *((_QWORD *)v17 + 5);
              }
              if ( (*(_BYTE *)(v52 + 20) & 0x20) != 0 )
              {
                v53 &= ~4u;
                v12[1] = 1LL;
                *((_DWORD *)v12 + 8) = v53;
              }
              if ( v105 )
              {
                if ( (v53 & 4) == 0 )
                {
                  v105 = 0;
                  if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 19LL) & 4) == 0 )
                  {
                    if ( (unsigned int)ValidateZorder((struct tagCVR *)v12) )
                    {
                      *((_DWORD *)v12 + 8) |= 4u;
                      v105 = 1;
                    }
                  }
                }
              }
              v54 = *((_DWORD *)v12 + 8);
              v55 = v54;
              if ( (v54 & 8) == 0 && ((v12[4] & 0x18E7) == 0x1807 || !(unsigned int)FChildVisible(v17, v49, v54)) )
              {
                v55 = v54 | 8;
                *((_DWORD *)v12 + 8) = v55;
              }
              if ( (v55 & 2) != 0 || (*(_BYTE *)(*((_QWORD *)v17 + 5) + 21LL) & 1) != 0 )
              {
                v56 = v102;
              }
              else
              {
                v56 = v102;
                if ( (GetAppCompatFlags(0LL) & 0x20000) != 0 )
                  v56 = 1;
              }
              if ( (*((_DWORD *)v12 + 39) & 0x20) != 0
                && (v12[4] & 0x80000) == 0
                && IsWindowBroadcastingDpiToChildrenX(v17) )
              {
                v58 = ValidateHmonitor(v12[16], v57);
                v59 = v58;
                v60 = v58 ? *(_WORD *)(*(_QWORD *)(v58 + 40) + 60LL) : 0;
                v61 = *((_DWORD *)v12 + 5);
                v112.left = *v42;
                v112.right = *((_DWORD *)v12 + 6) + v112.left;
                v62 = *((_DWORD *)v12 + 7);
                v112.top = v61;
                v112.bottom = v61 + v62;
                NewMonitor = GetNewMonitor(v17, &v112);
                if ( NewMonitor )
                {
                  if ( v59 != NewMonitor )
                  {
                    v64 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
                    if ( v60 != (_WORD)v64 )
                      *((_DWORD *)v12 + 39) ^= (*((_DWORD *)v12 + 39) ^ ((unsigned int)xxxAppAdjustDpiCandidateRect(
                                                                                         v17,
                                                                                         v64,
                                                                                         &v112,
                                                                                         v12 + 17) << 7)) & 0x80;
                  }
                }
              }
              v65 = *((unsigned int *)v12 + 8);
              if ( (v12[4] & 0x21) == 1 && !v56 )
              {
                v78 = v108;
LABEL_137:
                if ( (v65 & 0x100) != 0 )
                {
                  *(_OWORD *)(v12 + 7) = 0LL;
                  v79 = *v42;
                }
                else
                {
                  v79 = *v42;
                  v55 = *((unsigned int *)v12 + 5);
                  v80 = 0LL;
                  *((_DWORD *)v12 + 14) = *v42;
                  *((_DWORD *)v12 + 15) = v55;
                  v81 = *((_QWORD *)v17 + 3);
                  if ( v81 )
                  {
                    v82 = *(_QWORD *)(v81 + 8);
                    if ( v82 )
                      v80 = *(_QWORD *)(v82 + 24);
                  }
                  v83 = v79;
                  if ( v109 != v80 )
                  {
                    v83 = v79 + v104;
                    v55 = (unsigned int)(HIDWORD(v104) + v55);
                    *((_DWORD *)v12 + 14) = v79 + v104;
                    *((_DWORD *)v12 + 15) = v55;
                  }
                  *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 6) + v83;
                  v65 = (unsigned int)(v55 + *((_DWORD *)v12 + 7));
                  *((_DWORD *)v12 + 17) = v65;
                }
                if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 26LL) & 0x40) != 0 )
                  v84 = *((_DWORD *)v12 + 6) + v79 - v103 - v33;
                else
                  v84 = v79 - v33;
                *((_DWORD *)v12 + 18) = v84;
                v85 = *((_DWORD *)v12 + 8);
                v86 = (unsigned int)(*((_DWORD *)v12 + 5) - v78);
                *((_DWORD *)v12 + 19) = v86;
                if ( (v85 & 2) != 0 )
                {
                  v7 = v109;
                }
                else
                {
                  *((_DWORD *)v12 + 8) = v85 & 0xFFFFEFFF;
                  *((_DWORD *)v12 + 10) = *((_DWORD *)v12 + 18) + *(_DWORD *)(*((_QWORD *)v17 + 5) + 104LL);
                  *((_DWORD *)v12 + 11) = v86 + *(_DWORD *)(*((_QWORD *)v17 + 5) + 108LL);
                  v7 = v109;
                  if ( v109 != GetDesktopWindow(v17) )
                  {
                    v55 = (unsigned int)(v55 - v104);
                    *((_DWORD *)v12 + 10) = v55;
                    *((_DWORD *)v12 + 11) = v87 - v88;
                  }
                  *((_DWORD *)v12 + 12) = *(_DWORD *)(*((_QWORD *)v17 + 5) + 112LL)
                                        - *(_DWORD *)(*((_QWORD *)v17 + 5) + 104LL);
                  v86 = (unsigned int)(*(_DWORD *)(*((_QWORD *)v17 + 5) + 116LL)
                                     - *(_DWORD *)(*((_QWORD *)v17 + 5) + 108LL));
                  *((_DWORD *)v12 + 13) = v86;
                }
LABEL_173:
                ThreadUnlock1(v65, v86, v55);
              }
              else
              {
                *((_DWORD *)v12 + 39) |= 4u;
                v66 = *((_QWORD *)v17 + 5);
                v116 = 0LL;
                v118 = 0LL;
                v117 = 0LL;
                if ( (*(_BYTE *)(v66 + 31) & 0x40) == 0 && *(char *)(v66 + 24) >= 0 )
                  xxxCheckFullScreen(v17, (struct tagSIZERECT *)(v12 + 2));
                v67 = *((_OWORD *)v12 + 1);
                v116 = *(_OWORD *)v12;
                v68 = v12[4];
                v123 = &v116;
                LODWORD(v120) = *v42;
                DWORD2(v120) = *((_DWORD *)v12 + 6) + v120;
                DWORD1(v120) = *((_DWORD *)v12 + 5);
                HIDWORD(v120) = *((_DWORD *)v12 + 7) + DWORD1(v120);
                v117 = v67;
                v118 = v68;
                GetRect(v17, &v121, 66LL);
                GetRect(v17, &v122, 65LL);
                v69 = v122;
                v70 = DWORD1(v122);
                v71 = DWORD2(v122) - v122;
                v72 = HIDWORD(v122) - DWORD1(v122);
                v73 = xxxSendTransformableMessage((_DWORD)v17, 131, 1, (unsigned int)&v120, 0);
                if ( !IsStillWindowC(v12[1]) )
                {
LABEL_179:
                  ThreadUnlock1(v28, v27, v29);
                  ThreadUnlock1(v98, v97, v99);
                  return 0LL;
                }
                if ( v73 - 16 > 0x3F0 )
                {
                  v73 = 48;
                  v121 = v120;
                }
                if ( (*(_BYTE *)(*((_QWORD *)v17 + 5) + 26LL) & 0x40) != 0 )
                  v74 = DWORD2(v121) - DWORD2(v122);
                else
                  v74 = v121 - v122;
                *((_DWORD *)v12 + 18) = v74;
                *((_DWORD *)v12 + 19) = DWORD1(v121) - DWORD1(v122);
                v12[5] = v120;
                v75 = (unsigned int)(DWORD2(v120) - v120);
                *((_DWORD *)v12 + 12) = v75;
                v55 = (unsigned int)(HIDWORD(v120) - DWORD1(v120));
                *((_DWORD *)v12 + 13) = v55;
                if ( __PAIR64__(v70, v69) != (_QWORD)v120 )
                  *((_DWORD *)v12 + 8) &= ~0x1000u;
                v65 = *((unsigned int *)v12 + 8);
                v76 = *((_DWORD *)v12 + 8);
                if ( v71 != (_DWORD)v75 || v72 != (_DWORD)v55 )
                {
                  v65 = v76;
                  LODWORD(v65) = v76 & 0xFFFFF7FF;
                  *((_DWORD *)v12 + 8) = v76 & 0xFFFFF7FF;
                }
                if ( (v65 & 0x100) == 0 && !v106 )
                {
                  v77 = *((_QWORD *)v17 + 5);
                  if ( (*(_BYTE *)(v77 + 24) & 0x20) == 0 )
                  {
                    if ( (v65 & 0x821) == 0x801 && *((_DWORD *)v12 + 18) == *((_DWORD *)v12 + 4) - v107 )
                    {
                      v78 = v108;
                      if ( *((_DWORD *)v12 + 19) == *((_DWORD *)v12 + 5) - v108 )
                      {
                        v33 = v107;
                        v42 = (LONG *)(v12 + 2);
                        goto LABEL_137;
                      }
                    }
                    if ( v71 == (_DWORD)v75
                      || (v73 & 0x100) == 0
                      && (v65 = *(_QWORD *)(*((_QWORD *)v17 + 17) + 8LL), (*(_BYTE *)(v65 + 8) & 2) == 0) )
                    {
                      if ( v72 == (_DWORD)v55
                        || (v73 & 0x200) == 0
                        && (v65 = *(_QWORD *)(*((_QWORD *)v17 + 17) + 8LL), (*(_BYTE *)(v65 + 8) & 1) == 0) )
                      {
                        v89 = DWORD2(v122) - v122;
                        v90 = HIDWORD(v122) - DWORD1(v122);
                        v91 = v121;
                        v92 = DWORD2(v121) - v121;
                        v93 = DWORD1(v121);
                        v94 = HIDWORD(v121) - DWORD1(v121);
                        v95 = *(_BYTE *)(v77 + 26) & 0x40;
                        if ( (v95 != 0) != ((v73 >> 7) & 1) )
                        {
                          if ( v95 && v89 > v92 )
                            v96 = v89 - v92;
                          else
                            v96 = v92 - v89;
                          v91 = v96 + v121;
                          LODWORD(v121) = v96 + v121;
                        }
                        if ( (v73 & 0x40) != 0 )
                        {
                          v93 = HIDWORD(v121) - v90;
                          DWORD1(v121) = HIDWORD(v121) - v90;
                        }
                        if ( v89 < v92 )
                          DWORD2(v121) = v91 + v89;
                        if ( v90 < v94 )
                          HIDWORD(v121) = v93 + v90;
                        *(_OWORD *)(v12 + 7) = v121;
                        v7 = v109;
                        if ( v109 != GetDesktopWindow(v17) )
                        {
                          *((_DWORD *)v12 + 14) += v104;
                          *((_DWORD *)v12 + 16) += v104;
                          *((_DWORD *)v12 + 17) += HIDWORD(v104);
                          *((_DWORD *)v12 + 15) += HIDWORD(v104);
                        }
                        goto LABEL_173;
                      }
                    }
                  }
                }
                *(_OWORD *)(v12 + 7) = 0LL;
                ThreadUnlock1(v65, v75, v55);
                v7 = v109;
              }
              v2 = v110;
              v13 = v100;
              goto LABEL_178;
            }
          }
        }
      }
      v13 = v100;
    }
    *v12 = 0LL;
    *((_DWORD *)v12 + 8) = 6159;
LABEL_178:
    v12 += 21;
  }
  ThreadUnlock1(v10, v9, v11);
  result = 1LL;
  *v113 = v2;
  return result;
}
