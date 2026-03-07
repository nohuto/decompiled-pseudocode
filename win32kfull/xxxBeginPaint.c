__int64 __fastcall xxxBeginPaint(struct tagWND *a1, __int64 *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  int v5; // esi
  int v6; // r12d
  __int64 v7; // r8
  _DWORD *v8; // rax
  int v9; // r14d
  int v10; // ecx
  int v11; // edx
  int v12; // ebp
  int v13; // eax
  int v14; // r15d
  __int64 v15; // rax
  char v16; // cl
  int v17; // ebx
  int v18; // esi
  int v19; // r12d
  __int64 v20; // r8
  _DWORD *v21; // rax
  int v22; // r14d
  int v23; // ecx
  int v24; // edx
  int v25; // ebp
  int v26; // eax
  int v27; // r15d
  __int64 v28; // rax
  int v29; // r13d
  int v30; // ebx
  int v31; // esi
  int v32; // r12d
  __int64 v33; // r8
  _DWORD *v34; // rax
  int v35; // r14d
  int v36; // ecx
  int v37; // edx
  int v38; // ebp
  int v39; // eax
  int v40; // r15d
  __int64 v41; // rax
  int v42; // ebx
  int v43; // esi
  int v44; // r12d
  __int64 v45; // r8
  _DWORD *v46; // rax
  int v47; // r14d
  int v48; // ecx
  int v49; // edx
  int v50; // ebp
  int v51; // eax
  int v52; // r15d
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v56; // rax
  int v57; // r15d
  int v58; // ebp
  int v59; // ebx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int *v64; // rax
  int v65; // ebp
  int v66; // ebx
  int v67; // r14d
  int v68; // r15d
  __int64 v69; // rax
  __int64 v70; // rbx
  __int64 *v71; // r14
  __int64 DCEx; // rax
  __int64 v73; // r12
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r14
  int v77; // eax
  int v78; // esi
  __int64 v79; // rax
  int v80; // r15d
  int v81; // ebp
  int v82; // ebx
  _DWORD *v83; // rax
  int v84; // ebp
  int v85; // ebx
  int v86; // esi
  int v87; // r15d
  __int64 v88; // rcx
  struct tagWND *v89; // rbx
  __int64 v90; // rax
  __int64 result; // rax
  HRGN NCUpdateRgn; // rbx
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
  int v109; // esi
  __int64 v110; // rbx
  __int64 v111; // rcx
  void *v112; // rax
  __int64 EmptyRgnPublic; // rax
  __int64 v114; // rbx
  __int64 v115; // rcx
  void *v116; // rax
  __int128 v117; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v118[11]; // [rsp+30h] [rbp-58h] BYREF
  int v119; // [rsp+90h] [rbp+8h]

  if ( (gdwPUDFlags & 0x10000000) != 0 )
    SetOrClrWF(1, (__int64 *)a1, 0x404u, 1);
  v3 = *((_QWORD *)a1 + 5);
  v4 = *(_DWORD *)(v3 + 28);
  v5 = *(_DWORD *)(v3 + 24);
  v6 = *(_DWORD *)(v3 + 232);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  v119 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 5);
    v9 = v8[7];
    v10 = v8[6];
    v11 = v8[58];
    v12 = v5 ^ v10;
    v13 = v6 ^ v11;
    v14 = v4 ^ v9;
    if ( v4 == v9 )
    {
      if ( v12 )
        goto LABEL_66;
      if ( !v13 )
        goto LABEL_7;
    }
    if ( (v14 & 0xB1CF0000) != 0 )
    {
      v93 = -16;
      goto LABEL_70;
    }
LABEL_66:
    if ( (v12 & 0x4E27A9) != 0 )
    {
      v93 = -20;
      v9 = v10;
    }
    else
    {
      if ( (v13 & 0x12C0) == 0 )
        goto LABEL_71;
      v93 = -268435456;
      v9 = v11;
    }
LABEL_70:
    DirtyVisRgnTrackers((__int64)a1);
    v94 = *(_QWORD *)a1;
    v96 = (void *)ReferenceDwmApiPort(v95);
    DwmAsyncChildStyleChange(v96, v94, v93, v9);
LABEL_71:
    if ( (v12 & 0x200A0381) != 0 || (v14 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL, v7);
  }
LABEL_7:
  v15 = *((_QWORD *)a1 + 5);
  v16 = *(_BYTE *)(v15 + 17);
  if ( (v16 & 8) != 0 )
  {
    do
    {
      SetOrClrWF(0, (__int64 *)a1, 0x120u, 1);
      NCUpdateRgn = GetNCUpdateRgn(a1, 0);
      xxxSendNCPaint(a1, NCUpdateRgn);
      DeleteMaybeSpecialRgn(NCUpdateRgn);
    }
    while ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x20) != 0 );
    goto LABEL_12;
  }
  v17 = *(_DWORD *)(v15 + 28);
  v18 = *(_DWORD *)(v15 + 24);
  v19 = *(_DWORD *)(v15 + 232);
  *(_BYTE *)(v15 + 17) = v16 & 0xDF;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_12;
  v21 = (_DWORD *)*((_QWORD *)a1 + 5);
  v22 = v21[7];
  v23 = v21[6];
  v24 = v21[58];
  v25 = v18 ^ v23;
  v26 = v19 ^ v24;
  v27 = v17 ^ v22;
  if ( v17 == v22 )
  {
    if ( v25 )
      goto LABEL_75;
    if ( !v26 )
      goto LABEL_12;
  }
  if ( (v27 & 0xB1CF0000) != 0 )
  {
    v97 = -16;
    goto LABEL_79;
  }
LABEL_75:
  if ( (v25 & 0x4E27A9) != 0 )
  {
    v97 = -20;
    v22 = v23;
  }
  else
  {
    if ( (v26 & 0x12C0) == 0 )
      goto LABEL_80;
    v97 = -268435456;
    v22 = v24;
  }
LABEL_79:
  DirtyVisRgnTrackers((__int64)a1);
  v98 = *(_QWORD *)a1;
  v100 = (void *)ReferenceDwmApiPort(v99);
  DwmAsyncChildStyleChange(v100, v98, v97, v22);
LABEL_80:
  if ( (v25 & 0x200A0381) != 0 || (v27 & 0xC40000) != 0 )
    WindowMargins::CheckForChanges(a1, 1LL, v20);
LABEL_12:
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalHideCaret();
  v28 = *((_QWORD *)a1 + 5);
  v29 = *(_BYTE *)(v28 + 17) & 2;
  if ( (*(_BYTE *)(v28 + 17) & 2) != 0 )
  {
    v30 = *(_DWORD *)(v28 + 28);
    v31 = *(_DWORD *)(v28 + 24);
    v32 = *(_DWORD *)(v28 + 232);
    *(_BYTE *)(v28 + 17) &= ~4u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_19;
    v34 = (_DWORD *)*((_QWORD *)a1 + 5);
    v35 = v34[7];
    v36 = v34[6];
    v37 = v34[58];
    v38 = v31 ^ v36;
    v39 = v32 ^ v37;
    v40 = v30 ^ v35;
    if ( v30 == v35 )
    {
      if ( v38 )
        goto LABEL_84;
      if ( !v39 )
        goto LABEL_19;
    }
    if ( (v40 & 0xB1CF0000) != 0 )
    {
      v101 = -16;
      goto LABEL_88;
    }
LABEL_84:
    if ( (v38 & 0x4E27A9) != 0 )
    {
      v101 = -20;
      v35 = v36;
    }
    else
    {
      if ( (v39 & 0x12C0) == 0 )
        goto LABEL_89;
      v101 = -268435456;
      v35 = v37;
    }
LABEL_88:
    DirtyVisRgnTrackers((__int64)a1);
    v102 = *(_QWORD *)a1;
    v104 = (void *)ReferenceDwmApiPort(v103);
    DwmAsyncChildStyleChange(v104, v102, v101, v35);
LABEL_89:
    if ( (v38 & 0x200A0381) != 0 || (v40 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL, v33);
LABEL_19:
    v41 = *((_QWORD *)a1 + 5);
    v42 = *(_DWORD *)(v41 + 28);
    v43 = *(_DWORD *)(v41 + 24);
    v44 = *(_DWORD *)(v41 + 232);
    *(_BYTE *)(v41 + 17) &= ~2u;
    if ( !(unsigned int)IsWindowDesktopComposed(a1) )
      goto LABEL_23;
    v46 = (_DWORD *)*((_QWORD *)a1 + 5);
    v47 = v46[7];
    v48 = v46[6];
    v49 = v46[58];
    v50 = v43 ^ v48;
    v51 = v44 ^ v49;
    v52 = v42 ^ v47;
    if ( v42 == v47 )
    {
      if ( v50 )
        goto LABEL_93;
      if ( !v51 )
        goto LABEL_23;
    }
    if ( (v52 & 0xB1CF0000) != 0 )
    {
      v105 = -16;
      goto LABEL_97;
    }
LABEL_93:
    if ( (v50 & 0x4E27A9) != 0 )
    {
      v105 = -20;
      v47 = v48;
    }
    else
    {
      if ( (v51 & 0x12C0) == 0 )
        goto LABEL_98;
      v105 = -268435456;
      v47 = v49;
    }
LABEL_97:
    DirtyVisRgnTrackers((__int64)a1);
    v106 = *(_QWORD *)a1;
    v108 = (void *)ReferenceDwmApiPort(v107);
    DwmAsyncChildStyleChange(v108, v106, v105, v47);
LABEL_98:
    if ( (v50 & 0x200A0381) != 0 || (v52 & 0xC40000) != 0 )
      WindowMargins::CheckForChanges(a1, 1LL, v45);
  }
LABEL_23:
  v53 = *((_QWORD *)a1 + 5);
  if ( *(_QWORD *)(v53 + 136) || (*(_BYTE *)(v53 + 17) & 0x10) != 0 )
  {
    v54 = *((_QWORD *)a1 + 2);
    if ( (*(_DWORD *)(v54 + 600))-- == 1 )
    {
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v54 + 448) + 8LL), 0xFFFFFFDF);
      _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v54 + 448) + 4LL), 0xFFFFFFDF);
    }
  }
  v56 = *((_QWORD *)a1 + 5);
  v57 = *(_DWORD *)(v56 + 28);
  v58 = *(_DWORD *)(v56 + 24);
  v59 = *(_DWORD *)(v56 + 232);
  *(_BYTE *)(v56 + 17) &= ~0x10u;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v64 = (unsigned int *)*((_QWORD *)a1 + 5);
    v61 = v64[6];
    v65 = v61 ^ v58;
    v60 = v64[58];
    v66 = v60 ^ v59;
    v67 = v64[7];
    v68 = v67 ^ v57;
    if ( !v68 )
    {
      if ( v65 )
        goto LABEL_102;
      if ( !v66 )
        goto LABEL_30;
    }
    if ( (v68 & 0xB1CF0000) != 0 )
    {
      v109 = -16;
      goto LABEL_106;
    }
LABEL_102:
    if ( (v65 & 0x4E27A9) != 0 )
    {
      v109 = -20;
      v67 = v64[6];
    }
    else
    {
      if ( (v66 & 0x12C0) == 0 )
        goto LABEL_107;
      v109 = -268435456;
      v67 = v64[58];
    }
LABEL_106:
    DirtyVisRgnTrackers((__int64)a1);
    v110 = *(_QWORD *)a1;
    v112 = (void *)ReferenceDwmApiPort(v111);
    DwmAsyncChildStyleChange(v112, v110, v109, v67);
LABEL_107:
    LOBYTE(v61) = (v65 & 0x200A0381) == 0;
    if ( ((unsigned __int8)v61 & ((v68 & 0xC40000) == 0)) == 0 )
      WindowMargins::CheckForChanges(a1, 1LL, v62);
  }
LABEL_30:
  v69 = *((_QWORD *)a1 + 5);
  v70 = *(_QWORD *)(v69 + 136);
  *(_QWORD *)(v69 + 136) = 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( v70 )
    {
      EmptyRgnPublic = ghrgnUpdateSave;
      if ( ghrgnUpdateSave
        || (EmptyRgnPublic = CreateEmptyRgnPublic(v61, v60, v62, v63), (ghrgnUpdateSave = EmptyRgnPublic) != 0) )
      {
        if ( v70 == 1 )
          CalcWindowRgn(a1, EmptyRgnPublic, (((unsigned int)gRdwFlags >> 10) & 1) == 0);
        else
          GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, v70, 2LL);
        ++gnUpdateSave;
      }
    }
  }
  v71 = a2;
  *(__int64 *)((char *)a2 + 28) = 0LL;
  DCEx = _GetDCEx(a1, v70, 65664LL);
  *a2 = DCEx;
  v117 = 0LL;
  v73 = DCEx;
  if ( (unsigned int)GreGetClipBox(DCEx, (char *)a2 + 12, 1LL) != 1 )
  {
    v74 = *((_QWORD *)a1 + 17);
    v75 = *(_QWORD *)(v74 + 8);
    if ( *(char *)(v75 + 8) >= 0
      || (GetRect((__int64)a1, (__int64)&v117, 17), (unsigned int)IntersectRect((char *)a2 + 12, (char *)a2 + 12, &v117)) )
    {
      if ( v29 && v70 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( v73 )
          v76 = v73;
        else
          v76 = _GetDCEx(a1, v70, 327808LL);
        if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != *(_QWORD *)(gptiCurrent + 424LL) )
          GreSetDCOwnerEx(v76, 0LL, 0LL, 1LL);
        v77 = xxxSendMessage(a1, 0x14u);
        v74 = *((_QWORD *)a1 + 2);
        v78 = v77;
        if ( *(_QWORD *)(v74 + 424) != *(_QWORD *)(gptiCurrent + 424LL) )
          GreSetDCOwnerEx(v76, 2147483650LL, 0LL, 1LL);
        if ( v78 )
          goto LABEL_50;
        v79 = *((_QWORD *)a1 + 5);
        v80 = *(_DWORD *)(v79 + 28);
        v81 = *(_DWORD *)(v79 + 24);
        v82 = *(_DWORD *)(v79 + 232);
        *(_BYTE *)(v79 + 17) |= 4u;
        if ( !(unsigned int)IsWindowDesktopComposed(a1) )
        {
LABEL_48:
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 1) == 0 )
            SetOrClrWF(1, (__int64 *)a1, 0x102u, 1);
LABEL_50:
          if ( !v73 )
            ReleaseCacheDC(v76, 1LL);
          v71 = a2;
          goto LABEL_53;
        }
        v83 = (_DWORD *)*((_QWORD *)a1 + 5);
        v84 = v83[6] ^ v81;
        v74 = (unsigned int)v83[58];
        v85 = v74 ^ v82;
        v86 = v83[7];
        v87 = v86 ^ v80;
        if ( !v87 )
        {
          if ( v84 )
          {
LABEL_118:
            if ( (v84 & 0x4E27A9) != 0 )
            {
              v119 = -20;
              v86 = v83[6];
            }
            else
            {
              if ( (v85 & 0x12C0) == 0 )
                goto LABEL_123;
              v119 = -268435456;
              v86 = v83[58];
            }
LABEL_122:
            DirtyVisRgnTrackers((__int64)a1);
            v114 = *(_QWORD *)a1;
            v116 = (void *)ReferenceDwmApiPort(v115);
            DwmAsyncChildStyleChange(v116, v114, v119, v86);
LABEL_123:
            if ( (v87 & 0xC40000) != 0 || (v84 & 0x200A0381) != 0 )
              WindowMargins::CheckForChanges(a1, 1LL, v75);
            goto LABEL_48;
          }
          if ( !v85 )
            goto LABEL_48;
        }
        if ( (v87 & 0xB1CF0000) != 0 )
          goto LABEL_122;
        goto LABEL_118;
      }
    }
  }
LABEL_53:
  v118[2] = 0LL;
  v88 = gptiCurrent;
  v118[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v118;
  v89 = (struct tagWND *)*((_QWORD *)a1 + 14);
  v118[1] = 0LL;
  while ( v89 )
  {
    v90 = *((_QWORD *)v89 + 5);
    if ( !*(_QWORD *)(v90 + 136) && (*(_BYTE *)(v90 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways((__int64)v89, (__int64)v118);
      xxxSendNCPaint(v89, (HRGN)1);
    }
    v89 = (struct tagWND *)*((_QWORD *)v89 + 11);
  }
  ThreadUnlock1(v88, v74, v75);
  result = v73;
  *((_DWORD *)v71 + 2) = (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 17LL) >> 2) & 1;
  return result;
}
