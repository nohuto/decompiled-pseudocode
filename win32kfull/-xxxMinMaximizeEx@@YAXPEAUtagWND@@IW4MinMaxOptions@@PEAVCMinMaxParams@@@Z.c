void __fastcall xxxMinMaximizeEx(unsigned __int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  __int128 *v7; // r12
  __int64 v8; // rax
  char v9; // cl
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // r15d
  int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rbx
  void *v19; // rax
  __int64 Prop; // rax
  struct tagWND *v21; // rdx
  __int64 v22; // rsi
  int v23; // ebx
  __int64 v24; // rdx
  int v25; // edx
  __int32 v26; // eax
  __int128 v27; // xmm6
  __int128 v28; // xmm7
  int v29; // r13d
  __int64 v30; // r15
  int v31; // edx
  char v32; // cl
  struct tagWND *v33; // rcx
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rax
  char v37; // dl
  struct tagMONITOR *v38; // rcx
  int v39; // ebx
  struct tagWND *v40; // rax
  int v41; // ecx
  __int64 v42; // rcx
  __int64 v43; // rcx
  void *v44; // r14
  int v45; // eax
  _DWORD *v46; // r14
  __int64 i; // rcx
  struct _DEVICE_OBJECT *v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // edx
  unsigned int v58; // edx
  int v59; // edx
  struct tagWND *v60; // rcx
  unsigned int v61; // edx
  int v62; // edx
  unsigned int v63; // edx
  bool v64; // al
  int v65; // edx
  bool v66; // r14
  char v67; // dl
  __int64 *j; // rsi
  __int64 DesktopWindow; // rax
  char v70; // cl
  __int64 v71; // rcx
  bool v72; // si
  __int64 v73; // rsi
  char v74; // cl
  __int64 v75; // rax
  __int64 v76; // rcx
  char v77; // r9
  __int64 v78; // r10
  int v79; // r11d
  __int128 v80; // xmm6
  __int64 v81; // rcx
  int v82; // edx
  struct tagWND *v83; // rcx
  __int64 v84; // rsi
  unsigned __int64 v85; // r8
  void *v86; // r15
  __int64 *v87; // r8
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __m128i *MonitorWorkRectForWindow; // rax
  __int64 v92; // r11
  unsigned __int64 v93; // xmm0_8
  unsigned __int64 v94; // r8
  unsigned int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rbx
  void *v99; // rax
  bool v100; // [rsp+50h] [rbp-B0h]
  char v101; // [rsp+51h] [rbp-AFh]
  char v103; // [rsp+60h] [rbp-A0h]
  char v104; // [rsp+61h] [rbp-9Fh]
  int v105; // [rsp+64h] [rbp-9Ch]
  char v106; // [rsp+68h] [rbp-98h]
  __int128 v107; // [rsp+70h] [rbp-90h]
  int v108; // [rsp+80h] [rbp-80h]
  int v109; // [rsp+84h] [rbp-7Ch]
  int v110; // [rsp+88h] [rbp-78h]
  unsigned int v111; // [rsp+8Ch] [rbp-74h]
  BOOL v112; // [rsp+90h] [rbp-70h]
  int v113; // [rsp+94h] [rbp-6Ch]
  int v114; // [rsp+98h] [rbp-68h]
  int v115; // [rsp+9Ch] [rbp-64h]
  int v116; // [rsp+A0h] [rbp-60h]
  __int64 v117; // [rsp+A8h] [rbp-58h]
  __int128 v118; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-40h]
  __int128 v120; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v121; // [rsp+D8h] [rbp-28h]
  __m128i v122; // [rsp+E0h] [rbp-20h] BYREF
  struct tagRECT v123; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v124; // [rsp+100h] [rbp+0h] BYREF
  __int128 v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+120h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 104);
  v116 = 0;
  v113 = 0;
  v105 = 0;
  v115 = 0;
  v114 = 0;
  v112 = 0;
  v110 = 0;
  v7 = *(__int128 **)(a4 + 8);
  v109 = 0;
  v121 = 0LL;
  v119 = 0LL;
  v100 = 0;
  v126 = 0LL;
  v111 = 0;
  v8 = *(_QWORD *)(a1 + 40);
  v120 = 0LL;
  v106 = a3;
  v118 = 0LL;
  v124 = 0LL;
  v108 = 1;
  v125 = 0LL;
  v9 = *(_BYTE *)(v8 + 31);
  v104 = v9 & 0x20;
  v117 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&v123.left = *(_QWORD *)a4;
  v103 = v9 & 1;
  v107 = 0LL;
  v122 = 0LL;
  if ( !v7 || (v101 = 1, (a3 & 8) == 0) )
    v101 = 0;
  if ( (a3 & 0x20000) != 0 )
  {
    PostEventMessageEx(
      *(struct tagTHREADINFO **)(a1 + 16),
      *(struct tagQ **)(*(_QWORD *)(a1 + 16) + 432LL),
      0x17u,
      (struct tagWND *)a1,
      0,
      a2,
      a3 & 0xFFFFFFFFFFFDFFFFuLL,
      0LL);
    return;
  }
  v10 = ((a3 & 0x20) << 15) | 0x10;
  if ( (a3 & 0x10) == 0 )
    v10 = (a3 & 0x20) << 15;
  v11 = v10 | 4;
  if ( (a3 & 0x40) == 0 )
    v11 = v10;
  v12 = v11 | 0x80000;
  if ( (a3 & 0x80u) == 0 )
    v12 = v11;
  v13 = v12 | 0x400000;
  if ( (a3 & 0x100) == 0 )
    v13 = v12;
  v14 = v13 | 0x800000;
  if ( (a3 & 0x200) == 0 )
    v14 = v13;
  v15 = v14 | 0x200000;
  if ( (a3 & 0x400) == 0 )
    v15 = v14;
  if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
  {
    v106 = v16;
    if ( (*(_DWORD *)(a1 + 320) & 0x40000000) != 0 )
    {
      v108 = 1;
    }
    else
    {
      v108 = v16 & 0x10000;
      if ( (v16 & 0x10000) == 0 )
      {
        v108 = 0;
        if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
        {
          v18 = *(_QWORD *)a1;
          v19 = (void *)ReferenceDwmApiPort(v17);
          DwmAsyncNotifyAnimationChange(v19, 0, v18);
          v108 = 0;
        }
      }
    }
  }
  GetRect(a1, (__int64)&v122, 66);
  if ( (v106 & 4) != 0 )
    Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u);
  else
    Prop = CkptRestore((struct tagWND *)a1);
  v22 = Prop;
  if ( !Prop )
    goto LABEL_237;
  v23 = v15;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0
    && CRecalcProp::s_xxxOnWindowRestoreFromMinimized(
         (struct tagWND *)a1,
         v101,
         (bool *)(a4 + 28),
         (unsigned int *)(a4 + 24),
         (struct tagRECT *)(a4 + 32)) )
  {
    v23 = v15 | 0x80000;
  }
  WindowMargins::OnBecomingMinMaximized((WindowMargins *)a1, v21);
  v24 = *(_QWORD *)(v4 + 40);
  if ( (*(_BYTE *)(v24 + 26) & 0x40) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0 )
  {
    v25 = *(_DWORD *)(v24 + 96);
    v26 = v25 - v122.m128i_i32[2];
    v122.m128i_i32[2] = v25 - v122.m128i_i32[0];
    v122.m128i_i32[0] = v26;
    v113 = 1;
  }
  if ( v101 )
  {
    v27 = *v7;
    *(_DWORD *)(v22 + 48) &= 0xFFFFFFE1;
  }
  else
  {
    v27 = *(_OWORD *)v22;
  }
  v28 = *(_OWORD *)(v22 + 16);
  if ( (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
  {
    v29 = a2;
    if ( (unsigned int)xxxCallHook(1, *(_QWORD *)a1, a2, 5) )
      goto LABEL_237;
  }
  else
  {
    v29 = a2;
  }
  if ( v29 == 204 )
  {
    v23 |= 0x14u;
    if ( (*(_DWORD *)(v22 + 48) & 4) != 0 )
    {
      v29 = 2;
      v30 = gptiCurrent;
      goto LABEL_44;
    }
    v29 = 1;
    goto LABEL_48;
  }
  v30 = gptiCurrent;
  if ( v29 == 1 )
    goto LABEL_48;
  if ( v29 != 2 )
  {
    if ( v29 == 3 )
    {
LABEL_50:
      v34 = *(_QWORD *)(a1 + 40);
      v35 = v23;
      if ( v29 == 3 )
      {
        v36 = ValidateHmonitorNoRip(*(_QWORD *)(v34 + 256));
        v37 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
        v38 = *(struct tagMONITOR **)&v123.left;
        if ( (v37 & 1) != 0
          && (!*(_QWORD *)&v123.left || v36 == *(_QWORD *)&v123.left)
          && (v37 & 0x10) != 0
          && (v106 & 2) == 0 )
        {
          goto LABEL_237;
        }
        v39 = v23 | 0x8000;
        v110 = 1;
        if ( (v37 & 0x20) != 0 )
          *(_DWORD *)(v22 + 48) |= 4u;
        xxxInitSendValidateMinMaxInfoEx((struct tagWND *)a1, (__int64)&v124, v38);
      }
      else
      {
        v70 = *(_BYTE *)(v34 + 31);
        v39 = v23 | 0x8000;
        if ( (v70 & 0x21) == 0 )
          v39 = v35;
        if ( (v70 & 1) != 0 )
          v110 = 1;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
      {
        if ( !xxxSendMessage((struct tagWND *)a1, 0x13u) )
          goto LABEL_237;
        v109 = 1;
        v114 = 1;
        if ( (v39 & 0x10) == 0 )
        {
          v115 = 1;
          v112 = (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) == 0;
        }
        v39 |= 0x100u;
      }
      else
      {
        v109 = 3;
      }
      if ( v29 == 3 )
      {
        *(_QWORD *)&v107 = v125;
        DWORD2(v107) = DWORD2(v124) + v125;
        HIDWORD(v107) = DWORD1(v125) + HIDWORD(v124);
        SetOrClrWF(1, (__int64 *)a1, 0xF01u, 1);
        RemoveSemiMaximizedState((struct tagWND *)a1);
      }
      else
      {
        if ( v29 == 12 || (unsigned int)(v29 - 13) < 2 )
        {
          v107 = v28;
          RestoreSemimaximizedState((struct tagWND *)a1, (const struct tagCHECKPOINT *)v22);
        }
        else
        {
          v107 = v27;
        }
        SetOrClrWF(0, (__int64 *)a1, 0xF01u, 1);
      }
      v71 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v71 + 31) & 0x20) != 0 )
      {
        v72 = (*(_BYTE *)(v71 + 21) & 2) == 0 && IsTrayWindow((struct tagWND *)a1, 1);
        SetMinimize((struct tagWND *)a1);
        v111 = 23;
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0
          && v72 != IsTrayWindow((struct tagWND *)a1, 1)
          && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
        {
          v73 = *(_QWORD *)a1;
          if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
            xxxCallHook(2, *(_QWORD *)a1, 0LL, 10);
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 192LL) )
            PostShellHookMessagesEx(2uLL, v73, 0LL);
        }
        v100 = 0;
        v74 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
        if ( (v74 & 0xC0) != 0x40 && (v74 & 0x10) != 0 )
        {
          v75 = *(_QWORD *)(a1 + 16);
          if ( *(_DWORD *)(v75 + 908) == 1 )
          {
            v76 = *(_QWORD *)(v75 + 432);
            if ( v76 != gpqForeground && ((v39 & 0x10) == 0 || *(_QWORD *)(v76 + 128) == a1) && (v106 & 0x40) == 0 )
              xxxSetForegroundWindowWithOptions(a1, 6u, 4097, 0);
          }
        }
      }
      v23 = v39 | 0x20;
      goto LABEL_167;
    }
    if ( v29 == 4 )
    {
      if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
        v23 |= 0x10u;
      goto LABEL_78;
    }
    if ( v29 != 6 && v29 != 7 )
    {
      if ( v29 != 9 )
        goto LABEL_167;
LABEL_78:
      v29 = 1;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
      {
        v41 = *(_DWORD *)(v22 + 48);
        if ( (v41 & 2) != 0 )
        {
          v29 = 3;
          goto LABEL_50;
        }
        if ( (v41 & 0x18) == 0x18 )
        {
          v29 = 12;
          goto LABEL_50;
        }
        if ( (v41 & 8) != 0 )
        {
          v29 = 14;
          goto LABEL_50;
        }
        if ( (v41 & 0x10) != 0 )
        {
          v29 = 13;
          goto LABEL_50;
        }
      }
LABEL_48:
      if ( IsSemiMaximized((const struct tagWND *)a1) )
        RemoveSemiMaximizedState(v33);
      goto LABEL_50;
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 128LL) )
      v23 |= 0x10u;
    if ( (v106 & 0x40) == 0 )
    {
      v40 = CalcMinZOrder((struct tagWND *)a1);
      if ( v40 )
      {
        if ( !v117 )
          v117 = *(_QWORD *)v40;
      }
      else
      {
        v23 |= 4u;
      }
    }
  }
LABEL_44:
  v31 = 1;
  v105 = 1;
  v32 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v32 & 0x20) == 0 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v44 = (void *)ReferenceDwmApiPort(v42);
      if ( v44 )
      {
        UserSessionSwitchLeaveCrit(v43);
        DwmSyncNotifyMinimizing(v44, *(_QWORD *)a1);
        EnterCrit(1LL, 0LL);
      }
    }
    v45 = *(_DWORD *)(v22 + 48);
    v109 = 2;
    if ( (v45 & 1) == 0 )
    {
      v45 &= ~0x20u;
      *(_DWORD *)(v22 + 48) = v45;
    }
    v46 = (_DWORD *)(v22 + 32);
    if ( (v45 & 0x20) == 0 )
    {
      ParkIcon(a1, v22 + 32);
      *(_DWORD *)(v22 + 48) |= 0x20u;
    }
    LODWORD(v107) = *v46;
    DWORD1(v107) = *(_DWORD *)(v22 + 36);
    DWORD2(v107) = *(_DWORD *)(gpsi + 2124LL) + *v46;
    HIDWORD(v107) = DWORD1(v107) + *(_DWORD *)(gpsi + 2128LL);
    xxxShowOwnedWindows(a1, 1LL);
    for ( i = *(_QWORD *)(*(_QWORD *)(v30 + 432) + 120LL); i; i = *(_QWORD *)(i + 104) )
    {
      if ( i == a1 )
      {
        *(_QWORD *)&v118 = *(_QWORD *)(v30 + 416);
        *(_QWORD *)(v30 + 416) = &v118;
        *((_QWORD *)&v118 + 1) = i;
        HMLockObject(i);
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) == 0x40 )
        {
          v50 = *(_QWORD *)(a1 + 104);
          *(_QWORD *)&v120 = *(_QWORD *)(v30 + 416);
          *(_QWORD *)(v30 + 416) = &v120;
          *((_QWORD *)&v120 + 1) = v50;
          if ( v50 )
            HMLockObject(v50);
          xxxSetFocus(*(struct tagWND **)(a1 + 104), v48, v49);
          ThreadUnlock1(v52, v51, v53);
        }
        else
        {
          xxxSetFocus(0LL, v48, v49);
        }
        ThreadUnlock1(v55, v54, v56);
        break;
      }
    }
    v57 = *(_DWORD *)(v22 + 48) & 0xFFFFFEFF | (4 * (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x40));
    *(_DWORD *)(v22 + 48) = v57;
    if ( v101 )
      goto LABEL_117;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 1) != 0 )
    {
      v110 = 1;
      v58 = v57 & 0xFFFFFFE5 | 2;
LABEL_116:
      *(_DWORD *)(v22 + 48) = v58;
      goto LABEL_117;
    }
    if ( IsVerticallyMaximized((const struct tagWND *)a1) )
    {
      v61 = v59 | 8;
    }
    else
    {
      if ( IsLeftSemiMaximized(v60) )
      {
        v63 = v62 & 0xFFFFFFE7 | 8;
LABEL_114:
        *(_DWORD *)(v22 + 48) = v63;
        RemoveSemiMaximizedState(v60);
LABEL_117:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) != 0 )
        {
          v66 = 0;
        }
        else
        {
          v66 = IsTrayWindow((struct tagWND *)a1, 1);
          v100 = v66;
        }
        v67 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
        if ( (v67 & 0x20) == 0 )
        {
          SetMinimize((struct tagWND *)a1);
          SetOrClrWF(0, (__int64 *)a1, 0xF01u, 1);
          v111 = 22;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0 )
            v100 = v66 != IsTrayWindow((struct tagWND *)a1, 1);
          for ( j = *(__int64 **)(a1 + 112); j; j = (__int64 *)j[11] )
            ClrFTrueVis(j);
          v23 |= 0x8120u;
          DesktopWindow = GetDesktopWindow(a1);
          v31 = 1;
          if ( *(_QWORD *)(a1 + 104) == DesktopWindow )
            v116 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 18LL) & 0x20;
LABEL_168:
          if ( (v106 & 1) == 0 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
            {
              if ( v31 )
                v23 |= 0x40u;
              if ( !(unsigned int)IsVisible(a1)
                || (v79 & 0x10000) == 0
                || !v109
                || (v77 & 0x40) != 0 && (*(_BYTE *)(v78 + 23) & 0x10) != 0 )
              {
                goto LABEL_188;
              }
              v80 = 0LL;
              if ( v113 )
              {
                v80 = v107;
                v81 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL);
                v82 = *(_DWORD *)(v81 + 96) - v107;
                LODWORD(v107) = *(_DWORD *)(v81 + 96) - DWORD2(v107);
                DWORD2(v107) = v82;
              }
              if ( v109 == 3 || !IsTrayWindow((struct tagWND *)a1, 1) )
              {
                v83 = (struct tagWND *)a1;
              }
              else
              {
                v123 = 0LL;
                xxxSendMinRectMessages((unsigned __int64 *)a1, (__int64)&v123);
                if ( IsRectEmptyInl(&v123) )
                  goto LABEL_185;
                v83 = (struct tagWND *)a1;
              }
              xxxDrawAnimatedRects(v83);
LABEL_185:
              if ( v113 )
                v107 = v80;
              goto LABEL_188;
            }
            v23 |= 0x40u;
          }
LABEL_188:
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 2) == 0 && v100 && (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
          {
            v84 = *(_QWORD *)a1;
            if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
              xxxCallHook(1, *(_QWORD *)a1, 0LL, 10);
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 192LL) )
              PostShellHookMessagesEx(1uLL, v84, 0LL);
          }
          v86 = InternalBeginDeferWindowPos(1);
          if ( v86 )
          {
            v87 = v117 ? (__int64 *)HMValidateHandleNoSecure(v117, 1) : 0LL;
            v85 = _DeferWindowPos(
                    (__int64)v86,
                    a1,
                    v87,
                    v107,
                    DWORD1(v107),
                    DWORD2(v107) - (int)v107,
                    HIDWORD(v107) - DWORD1(v107),
                    v23,
                    0);
            if ( v85 )
            {
              if ( v110 && IsTopLevelWindow(a1) )
              {
                v88 = *(_QWORD *)(a1 + 40);
                if ( (*(_BYTE *)(v88 + 31) & 1) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 40) + 112LL) = 2LL;
                }
                else if ( (*(_BYTE *)(v88 + 21) & 8) != 0 )
                {
                  *(_QWORD *)(*(_QWORD *)(v85 + 40) + 112LL) = 1LL;
                }
              }
              xxxEndDeferWindowPosEx((struct tagSMWP *)v85, 0);
            }
          }
          if ( v111 )
            xxxWindowEvent(v111, (struct tagWND *)a1, 0, 0, 1);
          *(_DWORD *)(a1 + 320) &= ~0x200000u;
          v89 = *(_QWORD *)(a1 + 40);
          if ( (*(_BYTE *)(v89 + 31) & 1) != 0 )
          {
            v90 = ValidateHmonitorNoRip(*(_QWORD *)(v89 + 256));
            MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(&v122, v90, (const struct tagWND *)a1);
            v89 = *(_QWORD *)(a1 + 40);
            v92 = *(_QWORD *)(v89 + 88);
            v85 = _mm_srli_si128(*MonitorWorkRectForWindow, 8).m128i_u64[0];
            v93 = _mm_srli_si128(*(__m128i *)(v89 + 88), 8).m128i_u64[0];
            if ( (int)v93 - (int)v92 < (int)(v85 - MonitorWorkRectForWindow->m128i_i64[0]) )
            {
              v85 = (unsigned int)(HIDWORD(v85) - HIDWORD(MonitorWorkRectForWindow->m128i_i64[0]));
              if ( HIDWORD(v93) - HIDWORD(v92) < (int)v85 )
                *(_DWORD *)(a1 + 320) |= 0x200000u;
            }
          }
          if ( v29 == 2
            && (*(_BYTE *)(v89 + 21) & 2) == 0
            && (*(_BYTE *)(v89 + 31) & 0x10) != 0
            && (*(_BYTE *)(v89 + 30) & 0x40) != 0 )
          {
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 136) + 80LL) )
            {
              v94 = 1LL;
              v95 = 38;
            }
            else
            {
              v94 = 0LL;
              v95 = 15;
            }
            PostMessage(a1, v95, v94, 0LL);
          }
          if ( v114 )
            xxxShowOwnedWindows(a1, 3LL);
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0
            && v29 == 6
            && *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1)
            && !(unsigned int)xxxActivateOnMinimize((struct tagWND *)a1) )
          {
            xxxActivateWindowWithOptions((struct tagWND *)a1, 2LL, 49LL, 1);
          }
          if ( v115 )
            xxxSetFocus((struct tagWND *)a1, (PDEVICE_OBJECT)v89, v85);
          if ( v112 )
            xxxSendMessage((struct tagWND *)a1, 6u);
          if ( v116 )
            xxxFlushPalette(a1);
          v96 = *(_QWORD *)(a1 + 40);
          if ( v103 != (*(_BYTE *)(v96 + 31) & 1) || (v104 != 0) != ((*(unsigned __int8 *)(v96 + 31) >> 5) & 1) )
            PostIAMShellHookMessage(0x28u, *(_QWORD *)a1);
          goto LABEL_237;
        }
        if ( (v67 & 0x10) != 0 )
          goto LABEL_237;
        v23 |= 0x17u;
        v107 = 0LL;
LABEL_167:
        v31 = v105;
        goto LABEL_168;
      }
      v64 = IsRightSemiMaximized(v60);
      v61 = v65 & 0xFFFFFFF7;
      if ( !v64 )
      {
        v58 = v61 & 0xFFFFFFEF;
        goto LABEL_116;
      }
    }
    v63 = v61 | 0x10;
    goto LABEL_114;
  }
  if ( (v32 & 0x10) == 0 )
  {
    v23 |= 0x17u;
    goto LABEL_168;
  }
LABEL_237:
  if ( !v108 )
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
    {
      v98 = *(_QWORD *)a1;
      v99 = (void *)ReferenceDwmApiPort(v97);
      DwmAsyncNotifyAnimationChange(v99, 1, v98);
    }
  }
}
