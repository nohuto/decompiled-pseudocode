/*
 * XREFs of LinkWindow @ 0x1C00639C0
 * Callers:
 *     SetWindowGroupBand @ 0x1C0025CE4 (SetWindowGroupBand.c)
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0026C68 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 * Callees:
 *     GetBandOrdinal @ 0x1C0025CC4 (GetBandOrdinal.c)
 *     TrackLayeredZorder @ 0x1C002C250 (TrackLayeredZorder.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     GetLastTopMostWindow @ 0x1C0044610 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C007B4F0 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     DwmAsyncChildLink @ 0x1C007E580 (DwmAsyncChildLink.c)
 *     DirtyVisRgnTrackers @ 0x1C00AEA8C (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00AED30 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HWInsertAfter @ 0x1C01A7610 (HWInsertAfter.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, _QWORD *a3)
{
  int v3; // r14d
  struct tagWND **v4; // rdi
  struct tagWND *LastTopMostWindow; // r15
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // r10d
  struct tagWND *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  struct tagWND *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char **v20; // rcx
  int v21; // edx
  struct tagWND *v22; // rax
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rax
  struct tagWND *v26; // rdx
  __int64 v27; // rcx
  struct tagWND *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rdx
  char v34; // al
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // di
  __int128 *v39; // rsi
  __int64 AlignmentRequirement_low; // rbx
  __int64 v41; // xmm1_8
  __int64 v42; // rax
  __int64 v43; // rcx
  CVisRgnTrackerProp *v44; // rbx
  struct tagWND *i; // rbx
  int v46; // edi
  __int64 v47; // rsi
  __int64 v48; // r14
  void *v49; // rbx
  __int64 v50; // rcx
  __int64 k; // r15
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // edx
  _DWORD *v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // edx
  int v58; // r8d
  _DWORD *v59; // rax
  __int64 v60; // rdx
  struct tagWND **v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct tagWND *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rax
  int v69; // ecx
  _DWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // r8
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  CVisRgnTrackerProp *Prop; // rax
  struct tagWND *j; // rbx
  __int64 v79; // rdx
  unsigned int v80; // r8d
  int v81; // ecx
  _DWORD *v82; // rax
  _DWORD *v83; // r11
  unsigned int v84; // edx
  int v85; // ecx
  _DWORD *v86; // rax
  __int64 DesktopWindow; // rax
  __int64 v88; // rdx
  tagObjLock **v89; // rsi
  int v90; // r14d
  __int64 v91; // rcx
  void *v92; // rax
  struct tagWND **v93; // [rsp+40h] [rbp-99h] BYREF
  struct tagWND *v94; // [rsp+48h] [rbp-91h]
  char *v95; // [rsp+50h] [rbp-89h] BYREF
  struct tagWND *v96; // [rsp+58h] [rbp-81h]
  _QWORD *v97; // [rsp+60h] [rbp-79h] BYREF
  struct tagWND *v98; // [rsp+68h] [rbp-71h]
  _QWORD v99[2]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v100; // [rsp+80h] [rbp-59h]
  __int64 v101; // [rsp+90h] [rbp-49h]
  _BYTE v102[38]; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v103; // [rsp+C6h] [rbp-13h]
  int v104; // [rsp+C8h] [rbp-11h]
  __int64 v105; // [rsp+CCh] [rbp-Dh]
  __int64 v106; // [rsp+D4h] [rbp-5h]
  struct tagWND *v107; // [rsp+DCh] [rbp+3h]
  int v108; // [rsp+E4h] [rbp+Bh]

  v3 = 0;
  v4 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  v8 = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v71 = *((_QWORD *)a2 + 3);
    v72 = 0LL;
    if ( v71 )
    {
      v73 = *(_QWORD *)(v71 + 8);
      if ( v73 )
        v72 = *(_QWORD *)(v73 + 24);
    }
    v74 = *((_QWORD *)a1 + 3);
    v75 = 0LL;
    if ( v74 )
    {
      v76 = *(_QWORD *)(v74 + 8);
      if ( v76 )
        v75 = *(_QWORD *)(v76 + 24);
    }
    if ( v72 != v75 )
    {
      DesktopWindow = GetDesktopWindow((__int64)a1);
      if ( a3 == (_QWORD *)DesktopWindow )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)a1, v88);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3063LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3064LL);
  v9 = *((_QWORD *)a1 + 5);
  if ( *(__int16 *)(v9 + 42) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3065LL);
    v9 = *((_QWORD *)a1 + 5);
  }
  v10 = a3[3];
  v11 = 0LL;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    if ( v12 )
      v11 = *(_QWORD **)(v12 + 24);
  }
  if ( a3 == v11 )
  {
    v69 = *(_DWORD *)(v9 + 236);
    v13 = 1;
    v70 = &gazbidOrder;
    while ( *v70 != v69 )
    {
      if ( v70[1] == v69 )
      {
        ++v8;
        break;
      }
      if ( v70[2] == v69 )
      {
        v8 += 2;
        break;
      }
      if ( v70[3] == v69 )
      {
        v8 += 3;
        break;
      }
      if ( v70[4] == v69 )
      {
        v8 += 4;
        break;
      }
      if ( v70[5] == v69 )
      {
        v8 += 5;
        break;
      }
      v70 += 6;
      v8 += 6;
      if ( v8 >= 0x12 )
        break;
    }
  }
  else
  {
    v13 = 0;
  }
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (struct tagWND *)1 )
    {
      LastTopMostWindow = *v4;
      if ( *v4 && (*(_BYTE *)(*((_QWORD *)LastTopMostWindow + 5) + 20LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v79 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v79 )
            break;
          if ( v13 )
          {
            v80 = 0;
            v81 = *(_DWORD *)(*(_QWORD *)(v79 + 40) + 236LL);
            v82 = &gazbidOrder;
            while ( *v82 != v81 )
            {
              if ( v82[1] == v81 )
              {
                ++v80;
                break;
              }
              if ( v82[2] == v81 )
              {
                v80 += 2;
                break;
              }
              if ( v82[3] == v81 )
              {
                v80 += 3;
                break;
              }
              if ( v82[4] == v81 )
              {
                v80 += 4;
                break;
              }
              if ( v82[5] == v81 )
              {
                v80 += 5;
                break;
              }
              v82 += 6;
              v80 += 6;
              if ( v80 >= 0x12 )
                break;
            }
            if ( v80 < v8 )
              goto LABEL_156;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v79 + 40) + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
        if ( !v13 )
          goto LABEL_77;
LABEL_156:
        if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) >= v8 )
          goto LABEL_77;
      }
    }
    else
    {
      if ( !v13 )
        goto LABEL_77;
      v53 = 0;
      v54 = *(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL);
      v55 = &gazbidOrder;
      while ( *v55 != v54 )
      {
        if ( v55[1] == v54 )
        {
          ++v53;
          break;
        }
        if ( v55[2] == v54 )
        {
          v53 += 2;
          break;
        }
        if ( v55[3] == v54 )
        {
          v53 += 3;
          break;
        }
        if ( v55[4] == v54 )
        {
          v53 += 4;
          break;
        }
        if ( v55[5] == v54 )
        {
          v53 += 5;
          break;
        }
        v55 += 6;
        v53 += 6;
        if ( v53 >= 0x12 )
          break;
      }
      if ( v8 <= v53 )
      {
        while ( 1 )
        {
          v56 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v56 )
            goto LABEL_77;
          v57 = 0;
          v58 = *(_DWORD *)(*(_QWORD *)(v56 + 40) + 236LL);
          v59 = &gazbidOrder;
          while ( *v59 != v58 )
          {
            if ( v59[1] == v58 )
            {
              ++v57;
              break;
            }
            if ( v59[2] == v58 )
            {
              v57 += 2;
              break;
            }
            if ( v59[3] == v58 )
            {
              v57 += 3;
              break;
            }
            if ( v59[4] == v58 )
            {
              v57 += 4;
              break;
            }
            if ( v59[5] == v58 )
            {
              v57 += 5;
              break;
            }
            v59 += 6;
            v57 += 6;
            if ( v57 >= 0x12 )
              break;
          }
          if ( v57 <= v8 )
            goto LABEL_77;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
      }
      while ( 1 )
      {
        LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
        if ( !LastTopMostWindow )
          break;
        if ( v8 <= (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
          goto LABEL_77;
      }
    }
  }
  v14 = *v4;
  if ( *v4 )
  {
    if ( !v13 )
    {
LABEL_17:
      v15 = *((_QWORD *)v14 + 5);
      v16 = *((_QWORD *)a1 + 6);
      v97 = (_QWORD *)((char *)v14 + 96);
      v98 = a1;
      *(_QWORD *)(v15 + 80) = v16;
      HMAssignmentLock(&v97, 0LL);
      v17 = *v4;
      if ( *v4 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v17 + 6);
      else
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
      v96 = v17;
      v95 = (char *)a1 + 88;
      HMAssignmentLock(&v95, 0LL);
      goto LABEL_20;
    }
    if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)v14 + 5) + 236LL)) <= v8 )
    {
      LastTopMostWindow = 0LL;
      goto LABEL_17;
    }
    do
    {
      LastTopMostWindow = v14;
      v14 = (struct tagWND *)*((_QWORD *)v14 + 11);
      if ( !v14 )
        break;
      v84 = 0;
      v85 = *(_DWORD *)(*((_QWORD *)v14 + 5) + 236LL);
      v86 = v83;
      while ( *v86 != v85 )
      {
        if ( v86[1] == v85 )
        {
          ++v84;
          break;
        }
        if ( v86[2] == v85 )
        {
          v84 += 2;
          break;
        }
        if ( v86[3] == v85 )
        {
          v84 += 3;
          break;
        }
        if ( v86[4] == v85 )
        {
          v84 += 4;
          break;
        }
        if ( v86[5] == v85 )
        {
          v84 += 5;
          break;
        }
        v86 += 6;
        v84 += 6;
        if ( v84 >= 0x12 )
          break;
      }
    }
    while ( v84 > v8 );
LABEL_77:
    if ( *(char *)(*((_QWORD *)LastTopMostWindow + 5) + 19LL) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3263LL);
    if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3264LL);
    v60 = *((_QWORD *)LastTopMostWindow + 11);
    v61 = (struct tagWND **)((char *)LastTopMostWindow + 88);
    if ( v60 )
    {
      v62 = *(_QWORD *)(v60 + 40);
      v63 = *((_QWORD *)a1 + 6);
      v99[0] = v60 + 96;
      v99[1] = a1;
      *(_QWORD *)(v62 + 80) = v63;
      HMAssignmentLock(v99, 0LL);
      v64 = *v61;
      if ( *v61 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v64 + 6);
      else
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
      v94 = v64;
      v93 = (struct tagWND **)((char *)a1 + 88);
      HMAssignmentLock(&v93, 0LL);
    }
    v65 = *((_QWORD *)a1 + 5);
    v66 = *((_QWORD *)LastTopMostWindow + 6);
    v95 = (char *)a1 + 96;
    v96 = LastTopMostWindow;
    *(_QWORD *)(v65 + 80) = v66;
    HMAssignmentLock(&v95, 0LL);
    v67 = *((_QWORD *)LastTopMostWindow + 5);
    v68 = *((_QWORD *)a1 + 6);
    v97 = (_QWORD *)((char *)LastTopMostWindow + 88);
    v98 = a1;
    *(_QWORD *)(v67 + 72) = v68;
    v20 = (char **)&v97;
    goto LABEL_21;
  }
LABEL_20:
  v18 = (__int64)*(v4 - 9);
  v19 = *((_QWORD *)a1 + 6);
  v93 = v4;
  v94 = a1;
  *(_QWORD *)(v18 + 56) = v19;
  v20 = (char **)&v93;
LABEL_21:
  HMAssignmentLock(v20, 0LL);
  *((_DWORD *)a1 + 80) |= 0x1000000u;
  v21 = 0;
  v22 = *v4;
  v23 = *((_DWORD *)a1 + 80);
  if ( !*v4 )
    goto LABEL_196;
  do
  {
    if ( v22 == a1 )
      v21 = 1;
    v22 = (struct tagWND *)*((_QWORD *)v22 + 11);
  }
  while ( v22 );
  if ( v21 )
    v24 = v23 | 0x2000000;
  else
LABEL_196:
    v24 = v23 & 0xFDFFFFFF;
  *((_DWORD *)a1 + 80) = v24;
  if ( (v24 & 0x2000000) != 0 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v25 = *((_QWORD *)a1 + 3);
    v26 = 0LL;
    if ( v25 )
    {
      v27 = *(_QWORD *)(v25 + 8);
      if ( v27 )
        v26 = *(struct tagWND **)(v27 + 24);
    }
    if ( a1 != v26 )
    {
      v28 = 0LL;
      if ( v25 )
        v28 = *(struct tagWND **)(v25 + 104);
      if ( a1 != v28 && a3 != (_QWORD *)gTermIO[1] )
      {
        v29 = gptiCurrent;
        v30 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( v30 )
        {
          v31 = *(__int64 **)(v30 + 8);
          v29 = *v31;
          if ( (*(_DWORD *)(*v31 + 64) & 1) != 0 && (*((_DWORD *)a1 + 80) & 0x2000000) != 0 )
          {
            v32 = (_QWORD *)*((_QWORD *)a1 + 13);
            v33 = v32;
            if ( v32 )
            {
              while ( 1 )
              {
                v29 = v33[5];
                v34 = *(_BYTE *)(v29 + 31);
                if ( (v34 & 0x10) == 0 || (v34 & 0x20) != 0 && v33 != v32 )
                  break;
                if ( (*(_WORD *)(v29 + 42) & 0x2FFF) != 0x29D )
                {
                  v33 = (_QWORD *)v33[13];
                  if ( v33 )
                    continue;
                }
                goto LABEL_45;
              }
            }
            else
            {
LABEL_45:
              EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *v32);
              v35 = *((_QWORD *)a1 + 13);
              if ( v35
                && (v36 = *((_QWORD *)a1 + 3)) != 0
                && (v37 = *(_QWORD *)(v36 + 8)) != 0
                && v35 == *(_QWORD *)(v37 + 24) )
              {
                v38 = 1;
              }
              else
              {
                v38 = 0;
                if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) && (*(_BYTE *)(v32[5] + 31LL) & 2) != 0 )
                {
                  Prop = (CVisRgnTrackerProp *)GetProp((__int64)v32, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1u);
                  if ( Prop )
                    CVisRgnTrackerProp::MarkDirty(Prop);
                }
              }
              v39 = (__int128 *)*((_QWORD *)a1 + 18);
              AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
              *(_QWORD *)v102 = gDomainDummyLock;
              v102[8] = 0;
              memset(&v102[16], 0, 17);
              v41 = *((_QWORD *)v39 + 2);
              v100 = *v39;
              LOBYTE(v104) = 0;
              v101 = v41;
              v42 = SGDGetUserSessionState(v35);
              if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v42 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v43) )
              {
                LOBYTE(v104) = 1;
                if ( v39 == (__int128 *)gObjDummyLock )
                  v39 = 0LL;
                *(_QWORD *)&v102[16] = v39;
                if ( !v102[32] )
                {
                  v89 = (tagObjLock **)&v102[16];
                  do
                  {
                    if ( *v89 )
                      tagObjLock::LockExclusive(*v89);
                    ++v3;
                    ++v89;
                  }
                  while ( !v3 );
                  v102[32] = 1;
                }
              }
              v44 = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
              if ( (_BYTE)v104 && v102[32] )
              {
                v29 = *(_QWORD *)&v102[16];
                if ( *(_QWORD *)&v102[16] )
                  tagObjLock::UnLockExclusive(*(tagObjLock **)&v102[16]);
                v102[32] = 0;
              }
              if ( v44 )
                CVisRgnTrackerProp::MarkDirty(v44);
              for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
                MarkDirtyWorker(i);
              if ( !v38 )
              {
                for ( j = (struct tagWND *)*((_QWORD *)a1 + 11); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
                {
                  v29 = *(unsigned __int8 *)(*((_QWORD *)j + 5) + 31LL);
                  LOBYTE(v29) = v29 & 0x14;
                  if ( (_BYTE)v29 == 20 )
                    MarkDirtyWorker(j);
                }
              }
            }
          }
        }
        v46 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
        if ( (unsigned __int64)LastTopMostWindow >= 2 && (unsigned __int64)LastTopMostWindow < 0xFFFFFFFFFFFFFFFEuLL )
          LastTopMostWindow = *(struct tagWND **)LastTopMostWindow;
        v47 = *a3;
        v48 = *(_QWORD *)a1;
        v49 = (void *)ReferenceDwmApiPort(v29);
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v50) + 32) + 13248LL));
        if ( v49 )
        {
          *(_DWORD *)v102 = 4718624;
          memset(&v102[6], 0, 32);
          v103 = 0;
          *(_WORD *)&v102[4] = 0x8000;
          v104 = 1073741842;
          v105 = v48;
          v106 = v47;
          v107 = LastTopMostWindow;
          v108 = v46;
          LpcRequestPort(v49, v102);
          ObfDereferenceObject(v49);
        }
        for ( k = *((_QWORD *)a1 + 11); k; k = *(_QWORD *)(k + 88) )
        {
          v52 = *(_DWORD *)(k + 320);
          if ( (v52 & 0x2000000) == 0 )
          {
            *(_DWORD *)(k + 320) = v52 | 0x2000000;
            DirtyVisRgnTrackers(k);
            v90 = *(_DWORD *)(*(_QWORD *)(k + 40) + 236LL);
            HWInsertAfter(*(_QWORD *)(k + 96));
            v92 = (void *)ReferenceDwmApiPort(v91);
            DwmAsyncChildLink(v92, v90);
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
}
