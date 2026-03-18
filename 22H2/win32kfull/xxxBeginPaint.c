/*
 * XREFs of xxxBeginPaint @ 0x1C00CDA00
 * Callers:
 *     xxxTooltipWndProc @ 0x1C001FBD0 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00CD814 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x1C00CD890 (NtUserBeginPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0215ADC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00419D0 (ThreadLockExchangeAlways.c)
 *     zzzInternalHideCaret @ 0x1C00B002C (zzzInternalHideCaret.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C8EAC (DwmAsyncChildStyleChange.c)
 *     CalcWindowRgn @ 0x1C00CCAA4 (CalcWindowRgn.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00CE6B0 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00CE8F8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     xxxSendMessage @ 0x1C0127178 (xxxSendMessage.c)
 */

__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  int v5; // esi
  int v6; // r12d
  _DWORD *v7; // rax
  int v8; // r14d
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // eax
  int v13; // r15d
  __int64 v14; // rax
  char v15; // cl
  int v16; // ebx
  int v17; // esi
  int v18; // r12d
  _DWORD *v19; // rax
  int v20; // r14d
  int v21; // ecx
  int v22; // edx
  int v23; // ebp
  int v24; // eax
  int v25; // r15d
  __int64 v26; // rax
  int v27; // r13d
  int v28; // ebx
  int v29; // esi
  int v30; // r12d
  _DWORD *v31; // rax
  int v32; // r14d
  int v33; // ecx
  int v34; // edx
  int v35; // ebp
  int v36; // eax
  int v37; // r15d
  __int64 v38; // rax
  int v39; // ebx
  int v40; // esi
  int v41; // r12d
  _DWORD *v42; // rax
  int v43; // r14d
  int v44; // ecx
  int v45; // edx
  int v46; // ebp
  int v47; // eax
  int v48; // r15d
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v52; // rax
  int v53; // r15d
  int v54; // ebp
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int *v60; // rax
  int v61; // ebp
  int v62; // ebx
  int v63; // r14d
  int v64; // r15d
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 *v67; // r14
  __int64 DCEx; // rax
  __int64 v69; // r12
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r14
  int v73; // eax
  int v74; // esi
  __int64 v75; // rax
  int v76; // r15d
  int v77; // ebp
  int v78; // ebx
  _DWORD *v79; // rax
  int v80; // ebp
  int v81; // ebx
  int v82; // esi
  int v83; // r15d
  __int64 v84; // rcx
  struct tagWND *v85; // rbx
  __int64 v86; // rax
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
  int v89; // esi
  __int64 v90; // rbx
  __int64 v91; // rcx
  void *v92; // rax
  int v93; // esi
  __int64 v94; // rbx
  __int64 v95; // rcx
  void *v96; // rax
  int v97; // esi
  __int64 v98; // rbx
  __int64 v99; // rcx
  void *v100; // rax
  int v101; // esi
  __int64 v102; // rbx
  __int64 v103; // rcx
  void *v104; // rax
  int v105; // esi
  __int64 v106; // rbx
  __int64 v107; // rcx
  void *v108; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v110; // rbx
  __int64 v111; // rcx
  void *v112; // rax
  __int128 v113; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v114[11]; // [rsp+30h] [rbp-58h] BYREF
  int v115; // [rsp+90h] [rbp+8h]

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1LL, a1, 1028LL, 1LL);
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  v115 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 5);
    v8 = v7[7];
    v9 = v7[6];
    v10 = v7[58];
    v11 = v5 ^ v9;
    v12 = v6 ^ v10;
    v13 = v4 ^ v8;
    if ( v4 == v8 )
    {
      if ( v11 )
        goto LABEL_66;
      if ( !v12 )
        goto LABEL_7;
    }
    if ( (v13 & 0xB1CF0000) != 0 )
    {
      v89 = -16;
      goto LABEL_70;
    }
LABEL_66:
    if ( (v11 & 0x4E27A9) != 0 )
    {
      v89 = -20;
      v8 = v9;
    }
    else
    {
      if ( (v12 & 0x12C0) == 0 )
        goto LABEL_71;
      v89 = -268435456;
      v8 = v10;
    }
LABEL_70:
    DirtyVisRgnTrackers(a1);
    v90 = *(_QWORD *)a1;
    v92 = (void *)ReferenceDwmApiPort(v91);
    DwmAsyncChildStyleChange(v92, v90, v89, v8);
LABEL_71:
    if ( (v11 & 0x200A0381) != 0 || (v13 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
  }
LABEL_7:
  v14 = *((_QWORD *)a1 + 5);
  v15 = *(_BYTE *)(v14 + 17);
  if ( (v15 & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0LL, a1, 288LL, 1LL);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x20) != 0 );
    goto LABEL_12;
  }
  v16 = *(_DWORD *)(v14 + 28);
  v17 = *(_DWORD *)(v14 + 24);
  v18 = *(_DWORD *)(v14 + 232);
  *(_BYTE *)(v14 + 17) = v15 & 0xDF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_12;
  v19 = (_DWORD *)*((_QWORD *)a1 + 5);
  v20 = v19[7];
  v21 = v19[6];
  v22 = v19[58];
  v23 = v17 ^ v21;
  v24 = v18 ^ v22;
  v25 = v16 ^ v20;
  if ( v16 == v20 )
  {
    if ( v23 )
      goto LABEL_75;
    if ( !v24 )
      goto LABEL_12;
  }
  if ( (v25 & 0xB1CF0000) != 0 )
  {
    v93 = -16;
    goto LABEL_79;
  }
LABEL_75:
  if ( (v23 & 0x4E27A9) != 0 )
  {
    v93 = -20;
    v20 = v21;
  }
  else
  {
    if ( (v24 & 0x12C0) == 0 )
      goto LABEL_80;
    v93 = -268435456;
    v20 = v22;
  }
LABEL_79:
  DirtyVisRgnTrackers(a1);
  v94 = *(_QWORD *)a1;
  v96 = (void *)ReferenceDwmApiPort(v95);
  DwmAsyncChildStyleChange(v96, v94, v93, v20);
LABEL_80:
  if ( (v23 & 0x200A0381) != 0 || (v25 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL);
LABEL_12:
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalHideCaret();
  v26 = *((_QWORD *)a1 + 5);
  v27 = *(_BYTE *)(v26 + 17) & 2;
  if ( (*(_BYTE *)(v26 + 17) & 2) != 0 )
  {
    v28 = *(_DWORD *)(v26 + 28);
    v29 = *(_DWORD *)(v26 + 24);
    v30 = *(_DWORD *)(v26 + 232);
    *(_BYTE *)(v26 + 17) &= ~4u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_19;
    v31 = (_DWORD *)*((_QWORD *)a1 + 5);
    v32 = v31[7];
    v33 = v31[6];
    v34 = v31[58];
    v35 = v29 ^ v33;
    v36 = v30 ^ v34;
    v37 = v28 ^ v32;
    if ( v28 == v32 )
    {
      if ( v35 )
        goto LABEL_84;
      if ( !v36 )
        goto LABEL_19;
    }
    if ( (v37 & 0xB1CF0000) != 0 )
    {
      v97 = -16;
      goto LABEL_88;
    }
LABEL_84:
    if ( (v35 & 0x4E27A9) != 0 )
    {
      v97 = -20;
      v32 = v33;
    }
    else
    {
      if ( (v36 & 0x12C0) == 0 )
        goto LABEL_89;
      v97 = -268435456;
      v32 = v34;
    }
LABEL_88:
    DirtyVisRgnTrackers(a1);
    v98 = *(_QWORD *)a1;
    v100 = (void *)ReferenceDwmApiPort(v99);
    DwmAsyncChildStyleChange(v100, v98, v97, v32);
LABEL_89:
    if ( (v35 & 0x200A0381) != 0 || (v37 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
LABEL_19:
    v38 = *((_QWORD *)a1 + 5);
    v39 = *(_DWORD *)(v38 + 28);
    v40 = *(_DWORD *)(v38 + 24);
    v41 = *(_DWORD *)(v38 + 232);
    *(_BYTE *)(v38 + 17) &= ~2u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_23;
    v42 = (_DWORD *)*((_QWORD *)a1 + 5);
    v43 = v42[7];
    v44 = v42[6];
    v45 = v42[58];
    v46 = v40 ^ v44;
    v47 = v41 ^ v45;
    v48 = v39 ^ v43;
    if ( v39 == v43 )
    {
      if ( v46 )
        goto LABEL_93;
      if ( !v47 )
        goto LABEL_23;
    }
    if ( (v48 & 0xB1CF0000) != 0 )
    {
      v101 = -16;
      goto LABEL_97;
    }
LABEL_93:
    if ( (v46 & 0x4E27A9) != 0 )
    {
      v101 = -20;
      v43 = v44;
    }
    else
    {
      if ( (v47 & 0x12C0) == 0 )
        goto LABEL_98;
      v101 = -268435456;
      v43 = v45;
    }
LABEL_97:
    DirtyVisRgnTrackers(a1);
    v102 = *(_QWORD *)a1;
    v104 = (void *)ReferenceDwmApiPort(v103);
    DwmAsyncChildStyleChange(v104, v102, v101, v43);
LABEL_98:
    if ( (v46 & 0x200A0381) != 0 || (v48 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
  }
LABEL_23:
  v49 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v49 + 136) || (*(_BYTE *)(v49 + 17) & 0x10) != 0 )
  {
    v50 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v50 + 600))-- == 1 )
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v50 + 448) + 8LL), 0xFFFFFFDF);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v50 + 448) + 4LL), 0xFFFFFFDF);
    }
  }
  v52 = *((_QWORD *)a1 + 5);
  v53 = *(_DWORD *)(v52 + 28);
  v54 = *(_DWORD *)(v52 + 24);
  v55 = *(_DWORD *)(v52 + 232);
  *(_BYTE *)(v52 + 17) &= ~0x10u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v60 = (unsigned int *)*((_QWORD *)a1 + 5);
    v57 = v60[6];
    v61 = v57 ^ v54;
    v56 = v60[58];
    v62 = v56 ^ v55;
    v63 = v60[7];
    v64 = v63 ^ v53;
    if ( !v64 )
    {
      if ( v61 )
        goto LABEL_102;
      if ( !v62 )
        goto LABEL_30;
    }
    if ( (v64 & 0xB1CF0000) != 0 )
    {
      v105 = -16;
      goto LABEL_106;
    }
LABEL_102:
    if ( (v61 & 0x4E27A9) != 0 )
    {
      v105 = -20;
      v63 = v60[6];
    }
    else
    {
      if ( (v62 & 0x12C0) == 0 )
        goto LABEL_107;
      v105 = -268435456;
      v63 = v60[58];
    }
LABEL_106:
    DirtyVisRgnTrackers(a1);
    v106 = *(_QWORD *)a1;
    v108 = (void *)ReferenceDwmApiPort(v107);
    DwmAsyncChildStyleChange(v108, v106, v105, v63);
LABEL_107:
    LOBYTE(v57) = (v61 & 0x200A0381) == 0;
    if ( ((unsigned __int8)v57 & ((v64 & 0xC40000) == 0)) == 0 )
      WindowMargins::CheckForChanges(a1, 1LL);
  }
LABEL_30:
  v65 = *((_QWORD *)a1 + 5);
  v66 = *(_QWORD *)(v65 + 136);
  *(_QWORD *)(v65 + 136) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( v66 )
    {
      Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
      if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink
        || (Flink = (struct _LIST_ENTRY *)CreateEmptyRgnPublic(v57, v56, v58, v59),
            (WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = Flink) != 0LL) )
      {
        if ( v66 == 1 )
          CalcWindowRgn((__int64)a1, (__int64)Flink, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(Flink, Flink, v66, 2LL);
        ++LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
      }
    }
  }
  v67 = a2;
  *(__int64 *)((char *)a2 + 28) = 0LL;
  DCEx = _GetDCEx(a1, v66, 65664LL);
  *a2 = DCEx;
  v113 = 0LL;
  v69 = DCEx;
  if ( (unsigned int)GreGetClipBox(DCEx, (char *)a2 + 12, 1LL) != 1 )
  {
    v70 = *((_QWORD *)a1 + 17);
    v71 = *(_QWORD *)(v70 + 8);
    if ( *(char *)(v71 + 8) >= 0
      || (GetRect((__int64)a1, (__int64)&v113, 17), (unsigned int)IntersectRect((char *)a2 + 12, (char *)a2 + 12, &v113)) )
    {
      if ( v27 && v66 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( v69 )
          v72 = v69;
        else
          v72 = _GetDCEx(a1, v66, 327808LL);
        if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
          GreSetDCOwnerEx(v72, 0LL, 0LL, 1LL);
        v73 = xxxSendMessage(a1, 20LL, v72, 0LL);
        v70 = *((_QWORD *)a1 + 2);
        v74 = v73;
        if ( *(_QWORD *)(v70 + 424) != *(_QWORD *)(gptiCurrent + 424LL) )
          GreSetDCOwnerEx(v72, 2147483650LL, 0LL, 1LL);
        if ( v74 )
          goto LABEL_50;
        v75 = *((_QWORD *)a1 + 5);
        v76 = *(_DWORD *)(v75 + 28);
        v77 = *(_DWORD *)(v75 + 24);
        v78 = *(_DWORD *)(v75 + 232);
        *(_BYTE *)(v75 + 17) |= 4u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        {
LABEL_48:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
            SetOrClrWF(1LL, a1, 258LL, 1LL);
LABEL_50:
          if ( !v69 )
            ReleaseCacheDC(v72, 1LL);
          v67 = a2;
          goto LABEL_53;
        }
        v79 = (_DWORD *)*((_QWORD *)a1 + 5);
        v80 = v79[6] ^ v77;
        v70 = (unsigned int)v79[58];
        v81 = v70 ^ v78;
        v82 = v79[7];
        v83 = v82 ^ v76;
        if ( !v83 )
        {
          if ( v80 )
          {
LABEL_118:
            if ( (v80 & 0x4E27A9) != 0 )
            {
              v115 = -20;
              v82 = v79[6];
            }
            else
            {
              if ( (v81 & 0x12C0) == 0 )
                goto LABEL_123;
              v115 = -268435456;
              v82 = v79[58];
            }
LABEL_122:
            DirtyVisRgnTrackers(a1);
            v110 = *(_QWORD *)a1;
            v112 = (void *)ReferenceDwmApiPort(v111);
            DwmAsyncChildStyleChange(v112, v110, v115, v82);
LABEL_123:
            if ( (v83 & 0xC40000) != 0 || (v80 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL);
            goto LABEL_48;
          }
          if ( !v81 )
            goto LABEL_48;
        }
        if ( (v83 & 0xB1CF0000) != 0 )
          goto LABEL_122;
        goto LABEL_118;
      }
    }
  }
LABEL_53:
  v114[2] = 0LL;
  v84 = gptiCurrent;
  v114[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v114;
  v85 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v114[1] = 0LL;
  while ( v85 )
  {
    v86 = *((_QWORD *)v85 + 5);
    if ( !*(_QWORD *)(v86 + 136) && (*(_BYTE *)(v86 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways((__int64)v85, (__int64)v114);
      xxxSendNCPaint(v85, (HRGN)1);
    }
    v85 = (struct tagWND *)*((_QWORD *)v85 + 11);
  }
  ThreadUnlock1(v84, v70, v71);
  result = v69;
  *((_DWORD *)v67 + 2) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
