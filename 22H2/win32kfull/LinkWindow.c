/*
 * XREFs of LinkWindow @ 0x1C00F2760
 * Callers:
 *     ?ImeSetTopmost@@YAXPEAUtagWND@@H0@Z @ 0x1C0025238 (-ImeSetTopmost@@YAXPEAUtagWND@@H0@Z.c)
 *     SetWindowGroupBand @ 0x1C002567C (SetWindowGroupBand.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetBandOrdinal @ 0x1C0024CDC (GetBandOrdinal.c)
 *     DwmAsyncChildLink @ 0x1C005A26C (DwmAsyncChildLink.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00A609C (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     TrackLayeredZorder @ 0x1C00D3BE0 (TrackLayeredZorder.c)
 *     GetLastTopMostWindow @ 0x1C00ECD80 (GetLastTopMostWindow.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C00F3470 (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HWInsertAfter @ 0x1C01A63E8 (HWInsertAfter.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, struct tagWND *a2, __int64 *a3)
{
  char v3; // si
  struct tagWND **v4; // rdi
  struct tagWND *LastTopMostWindow; // r15
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // r8
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r10d
  _DWORD *v22; // rax
  __int64 v23; // r9
  unsigned int v24; // edx
  int v25; // ecx
  _DWORD *v26; // rax
  struct tagWND *v27; // r8
  _DWORD *v28; // r11
  unsigned int v29; // edx
  int v30; // ecx
  _DWORD *v31; // rax
  unsigned int v32; // edx
  int v33; // ecx
  _DWORD *v34; // rax
  __int64 v35; // r8
  unsigned int v36; // edx
  int v37; // ecx
  _DWORD *v38; // rax
  __int64 v39; // rdx
  struct tagWND **v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct tagWND *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  struct tagWND ***v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  struct tagWND *v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // ecx
  struct tagWND *v55; // rax
  bool v56; // zf
  unsigned int v57; // edx
  __int64 v58; // rax
  struct tagWND *v59; // rdx
  __int64 v60; // rcx
  struct tagWND *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 *v64; // rax
  _QWORD *v65; // rbx
  _QWORD *v66; // rdx
  char v67; // al
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  CVisRgnTrackerProp *Prop; // rax
  __int128 *v75; // rbx
  __int64 AlignmentRequirement_low; // r14
  __int64 v77; // xmm1_8
  PERESOURCE *v78; // rax
  int v79; // edi
  tagObjLock **v80; // rbx
  CVisRgnTrackerProp *v81; // rbx
  struct tagWND *i; // rbx
  struct tagWND *j; // rbx
  int v84; // edi
  __int64 v85; // rsi
  __int64 v86; // r14
  void *v87; // rbx
  __int64 v88; // rcx
  __int64 k; // r15
  int v90; // eax
  int v91; // r14d
  __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rbx
  __int64 v95; // rsi
  __int64 v96; // rcx
  void *v97; // rax
  struct tagWND **v98; // [rsp+40h] [rbp-99h] BYREF
  struct tagWND *v99; // [rsp+48h] [rbp-91h]
  char *v100; // [rsp+50h] [rbp-89h] BYREF
  struct tagWND *v101; // [rsp+58h] [rbp-81h]
  _QWORD *v102; // [rsp+60h] [rbp-79h] BYREF
  struct tagWND *v103; // [rsp+68h] [rbp-71h]
  _QWORD v104[2]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v105; // [rsp+80h] [rbp-59h]
  __int64 v106; // [rsp+90h] [rbp-49h]
  _BYTE v107[38]; // [rsp+A0h] [rbp-39h] BYREF
  __int16 v108; // [rsp+C6h] [rbp-13h]
  int v109; // [rsp+C8h] [rbp-11h]
  __int64 v110; // [rsp+CCh] [rbp-Dh]
  __int64 v111; // [rsp+D4h] [rbp-5h]
  struct tagWND *v112; // [rsp+DCh] [rbp+3h]
  int v113; // [rsp+E4h] [rbp+Bh]

  v3 = 0;
  v4 = (struct tagWND **)(a3 + 14);
  LastTopMostWindow = a2;
  v8 = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v9 = *((_QWORD *)a2 + 3);
    v10 = 0LL;
    if ( v9 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( v11 )
        v10 = *(_QWORD *)(v11 + 24);
    }
    v12 = *((_QWORD *)a1 + 3);
    v13 = 0LL;
    if ( v12 )
    {
      v14 = *(_QWORD *)(v12 + 8);
      if ( v14 )
        v13 = *(_QWORD *)(v14 + 24);
    }
    if ( v10 != v13 )
    {
      if ( a3 == (__int64 *)GetDesktopWindow((__int64)a1) )
        LastTopMostWindow = (struct tagWND *)GetLastTopMostWindow((__int64)a1, v15);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3110LL);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3111LL);
  v16 = *((_QWORD *)a1 + 5);
  if ( *(__int16 *)(v16 + 42) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3112LL);
    v16 = *((_QWORD *)a1 + 5);
  }
  v17 = a3[3];
  v18 = 0LL;
  if ( v17 )
  {
    v19 = *(_QWORD *)(v17 + 8);
    if ( v19 )
      v18 = *(__int64 **)(v19 + 24);
  }
  if ( a3 == v18 )
  {
    v20 = *(_DWORD *)(v16 + 236);
    v21 = 1;
    v22 = &gazbidOrder;
    while ( *v22 != v20 )
    {
      if ( v22[1] == v20 )
      {
        ++v8;
        break;
      }
      if ( v22[2] == v20 )
      {
        v8 += 2;
        break;
      }
      if ( v22[3] == v20 )
      {
        v8 += 3;
        break;
      }
      if ( v22[4] == v20 )
      {
        v8 += 4;
        break;
      }
      if ( v22[5] == v20 )
      {
        v8 += 5;
        break;
      }
      v22 += 6;
      v8 += 6;
      if ( v8 >= 0x12 )
        break;
    }
  }
  else
  {
    v21 = 0;
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
          v23 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v23 )
            break;
          if ( v21 )
          {
            v24 = 0;
            v25 = *(_DWORD *)(*(_QWORD *)(v23 + 40) + 236LL);
            v26 = &gazbidOrder;
            while ( *v26 != v25 )
            {
              if ( v26[1] == v25 )
              {
                ++v24;
                break;
              }
              if ( v26[2] == v25 )
              {
                v24 += 2;
                break;
              }
              if ( v26[3] == v25 )
              {
                v24 += 3;
                break;
              }
              if ( v26[4] == v25 )
              {
                v24 += 4;
                break;
              }
              if ( v26[5] == v25 )
              {
                v24 += 5;
                break;
              }
              v26 += 6;
              v24 += 6;
              if ( v24 >= 0x12 )
                break;
            }
            if ( v24 < v8 )
              goto LABEL_62;
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v23 + 40) + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
        if ( !v21 )
          goto LABEL_118;
LABEL_62:
        if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) >= v8 )
          goto LABEL_118;
      }
    }
    else
    {
      if ( !v21 )
      {
LABEL_118:
        if ( *(char *)(*((_QWORD *)LastTopMostWindow + 5) + 19LL) < 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3310LL);
        if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3311LL);
        v39 = *((_QWORD *)LastTopMostWindow + 11);
        v40 = (struct tagWND **)((char *)LastTopMostWindow + 88);
        if ( v39 )
        {
          v41 = *(_QWORD *)(v39 + 40);
          v42 = *((_QWORD *)a1 + 6);
          v104[0] = v39 + 96;
          v104[1] = a1;
          *(_QWORD *)(v41 + 80) = v42;
          HMAssignmentLock(v104, 0LL);
          v43 = *v40;
          if ( *v40 )
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v43 + 6);
          else
            *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
          v98 = (struct tagWND **)((char *)a1 + 88);
          v99 = v43;
          HMAssignmentLock(&v98, 0LL);
        }
        v44 = *((_QWORD *)a1 + 5);
        v45 = *((_QWORD *)LastTopMostWindow + 6);
        v100 = (char *)a1 + 96;
        v101 = LastTopMostWindow;
        *(_QWORD *)(v44 + 80) = v45;
        HMAssignmentLock(&v100, 0LL);
        v46 = *((_QWORD *)LastTopMostWindow + 5);
        v47 = *((_QWORD *)a1 + 6);
        v102 = (_QWORD *)((char *)LastTopMostWindow + 88);
        v103 = a1;
        *(_QWORD *)(v46 + 72) = v47;
        v48 = (struct tagWND ***)&v102;
        goto LABEL_134;
      }
      v32 = 0;
      v33 = *(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL);
      v34 = &gazbidOrder;
      while ( *v34 != v33 )
      {
        if ( v34[1] == v33 )
        {
          ++v32;
          break;
        }
        if ( v34[2] == v33 )
        {
          v32 += 2;
          break;
        }
        if ( v34[3] == v33 )
        {
          v32 += 3;
          break;
        }
        if ( v34[4] == v33 )
        {
          v32 += 4;
          break;
        }
        if ( v34[5] == v33 )
        {
          v32 += 5;
          break;
        }
        v34 += 6;
        v32 += 6;
        if ( v32 >= 0x12 )
          break;
      }
      if ( v8 <= v32 )
      {
        while ( 1 )
        {
          v35 = *((_QWORD *)LastTopMostWindow + 11);
          if ( !v35 )
            goto LABEL_118;
          v36 = 0;
          v37 = *(_DWORD *)(*(_QWORD *)(v35 + 40) + 236LL);
          v38 = &gazbidOrder;
          while ( *v38 != v37 )
          {
            if ( v38[1] == v37 )
            {
              ++v36;
              break;
            }
            if ( v38[2] == v37 )
            {
              v36 += 2;
              break;
            }
            if ( v38[3] == v37 )
            {
              v36 += 3;
              break;
            }
            if ( v38[4] == v37 )
            {
              v36 += 4;
              break;
            }
            if ( v38[5] == v37 )
            {
              v36 += 5;
              break;
            }
            v38 += 6;
            v36 += 6;
            if ( v36 >= 0x12 )
              break;
          }
          if ( v36 <= v8 )
            goto LABEL_118;
          LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 11);
        }
      }
      while ( 1 )
      {
        LastTopMostWindow = (struct tagWND *)*((_QWORD *)LastTopMostWindow + 12);
        if ( !LastTopMostWindow )
          break;
        if ( v8 <= (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)LastTopMostWindow + 5) + 236LL)) )
          goto LABEL_118;
      }
    }
  }
  v27 = *v4;
  if ( *v4 )
  {
    if ( v21 )
    {
      if ( (unsigned int)GetBandOrdinal(*(_DWORD *)(*((_QWORD *)v27 + 5) + 236LL)) > v8 )
      {
        do
        {
          LastTopMostWindow = v27;
          v27 = (struct tagWND *)*((_QWORD *)v27 + 11);
          if ( !v27 )
            break;
          v29 = 0;
          v30 = *(_DWORD *)(*((_QWORD *)v27 + 5) + 236LL);
          v31 = v28;
          while ( *v31 != v30 )
          {
            if ( v31[1] == v30 )
            {
              ++v29;
              break;
            }
            if ( v31[2] == v30 )
            {
              v29 += 2;
              break;
            }
            if ( v31[3] == v30 )
            {
              v29 += 3;
              break;
            }
            if ( v31[4] == v30 )
            {
              v29 += 4;
              break;
            }
            if ( v31[5] == v30 )
            {
              v29 += 5;
              break;
            }
            v31 += 6;
            v29 += 6;
            if ( v29 >= 0x12 )
              break;
          }
        }
        while ( v29 > v8 );
        goto LABEL_118;
      }
      LastTopMostWindow = 0LL;
    }
    v49 = *((_QWORD *)v27 + 5);
    v50 = *((_QWORD *)a1 + 6);
    v102 = (_QWORD *)((char *)v27 + 96);
    v103 = a1;
    *(_QWORD *)(v49 + 80) = v50;
    HMAssignmentLock(&v102, 0LL);
    v51 = *v4;
    if ( *v4 )
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = *((_QWORD *)v51 + 6);
    else
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 72LL) = 0LL;
    v100 = (char *)a1 + 88;
    v101 = v51;
    HMAssignmentLock(&v100, 0LL);
  }
  v52 = (__int64)*(v4 - 9);
  v53 = *((_QWORD *)a1 + 6);
  v98 = v4;
  v99 = a1;
  *(_QWORD *)(v52 + 56) = v53;
  v48 = &v98;
LABEL_134:
  HMAssignmentLock(v48, 0LL);
  *((_DWORD *)a1 + 80) |= 0x1000000u;
  v54 = 0;
  v55 = *v4;
  while ( v55 )
  {
    v56 = v55 == a1;
    v55 = (struct tagWND *)*((_QWORD *)v55 + 11);
    if ( v56 )
      v54 = 1;
  }
  v57 = *((_DWORD *)a1 + 80) | 0x2000000;
  if ( !v54 )
    v57 = *((_DWORD *)a1 + 80) & 0xFDFFFFFF;
  *((_DWORD *)a1 + 80) = v57;
  if ( (v57 & 0x2000000) != 0 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v58 = *((_QWORD *)a1 + 3);
    v59 = 0LL;
    if ( v58 )
    {
      v60 = *(_QWORD *)(v58 + 8);
      if ( v60 )
        v59 = *(struct tagWND **)(v60 + 24);
    }
    if ( a1 != v59 )
    {
      v61 = 0LL;
      if ( v58 )
        v61 = *(struct tagWND **)(v58 + 104);
      if ( a1 != v61 && a3 != (__int64 *)gTermIO[1] )
      {
        v62 = gptiCurrent;
        v63 = *(_QWORD *)(gptiCurrent + 456LL);
        if ( v63 )
        {
          v64 = *(__int64 **)(v63 + 8);
          v62 = *v64;
          if ( (*(_DWORD *)(*v64 + 64) & 1) != 0 && (*((_DWORD *)a1 + 80) & 0x2000000) != 0 )
          {
            v65 = (_QWORD *)*((_QWORD *)a1 + 13);
            v66 = v65;
            if ( v65 )
            {
              while ( 1 )
              {
                v62 = v66[5];
                v67 = *(_BYTE *)(v62 + 31);
                if ( (v67 & 0x10) == 0 || (v67 & 0x20) != 0 && v66 != v65 )
                  break;
                if ( (*(_WORD *)(v62 + 42) & 0x2FFF) != 0x29D )
                {
                  v66 = (_QWORD *)v66[13];
                  if ( v66 )
                    continue;
                }
                goto LABEL_159;
              }
            }
            else
            {
LABEL_159:
              EtwTraceDwmVisRgnDirty(*(_QWORD *)a1, *v65);
              v71 = *((_QWORD *)a1 + 13);
              if ( v71
                && (v72 = *((_QWORD *)a1 + 3)) != 0
                && (v73 = *(_QWORD *)(v72 + 8)) != 0
                && v71 == *(_QWORD *)(v73 + 24) )
              {
                v3 = 1;
              }
              else if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) && (*(_BYTE *)(v65[5] + 31LL) & 2) != 0 )
              {
                Prop = (CVisRgnTrackerProp *)GetProp((__int64)v65, LOWORD(WPP_MAIN_CB.AlignmentRequirement), 1LL, v70);
                if ( Prop )
                  CVisRgnTrackerProp::MarkDirty(Prop);
              }
              v75 = (__int128 *)*((_QWORD *)a1 + 18);
              AlignmentRequirement_low = LOWORD(WPP_MAIN_CB.AlignmentRequirement);
              *(_QWORD *)v107 = gDomainDummyLock;
              v107[8] = 0;
              memset(&v107[16], 0, 17);
              v77 = *((_QWORD *)v75 + 2);
              v105 = *v75;
              LOBYTE(v109) = 0;
              v106 = v77;
              v78 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v71, v68, v69, v70);
              if ( ExIsResourceAcquiredExclusiveLite(*v78) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
              {
                LOBYTE(v109) = 1;
                if ( v75 == (__int128 *)gObjDummyLock )
                  v75 = 0LL;
                *(_QWORD *)&v107[16] = v75;
                if ( !v107[32] )
                {
                  v79 = 0;
                  v80 = (tagObjLock **)&v107[16];
                  do
                  {
                    if ( *v80 )
                      tagObjLock::LockExclusive(*v80);
                    ++v79;
                    ++v80;
                  }
                  while ( !v79 );
                  v107[32] = 1;
                }
              }
              v81 = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), AlignmentRequirement_low, 1LL);
              if ( (_BYTE)v109 && v107[32] )
              {
                v62 = *(_QWORD *)&v107[16];
                if ( *(_QWORD *)&v107[16] )
                  tagObjLock::UnLockExclusive(*(tagObjLock **)&v107[16]);
                v107[32] = 0;
              }
              if ( v81 )
                CVisRgnTrackerProp::MarkDirty(v81);
              for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
                MarkDirtyWorker(i);
              if ( !v3 )
              {
                for ( j = (struct tagWND *)*((_QWORD *)a1 + 11); j; j = (struct tagWND *)*((_QWORD *)j + 11) )
                {
                  v62 = *(unsigned __int8 *)(*((_QWORD *)j + 5) + 31LL);
                  LOBYTE(v62) = v62 & 0x14;
                  if ( (_BYTE)v62 == 20 )
                    MarkDirtyWorker(j);
                }
              }
            }
          }
        }
        v84 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
        if ( (unsigned __int64)LastTopMostWindow - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
          LastTopMostWindow = *(struct tagWND **)LastTopMostWindow;
        v85 = *a3;
        v86 = *(_QWORD *)a1;
        v87 = (void *)ReferenceDwmApiPort(v62);
        _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(v88) + 32) + 13248LL));
        if ( v87 )
        {
          *(_DWORD *)v107 = 4718624;
          memset(&v107[6], 0, 32);
          v108 = 0;
          *(_WORD *)&v107[4] = 0x8000;
          v109 = 1073741842;
          v110 = v86;
          v111 = v85;
          v112 = LastTopMostWindow;
          v113 = v84;
          LpcRequestPort(v87, v107);
          ObfDereferenceObject(v87);
        }
        for ( k = *((_QWORD *)a1 + 11); k; k = *(_QWORD *)(k + 88) )
        {
          v90 = *(_DWORD *)(k + 320);
          if ( (v90 & 0x2000000) == 0 )
          {
            *(_DWORD *)(k + 320) = v90 | 0x2000000;
            DirtyVisRgnTrackers(k);
            v91 = *(_DWORD *)(*(_QWORD *)(k + 40) + 236LL);
            v92 = HWInsertAfter(*(_QWORD *)(k + 96));
            v93 = *a3;
            v94 = v92;
            v95 = *(_QWORD *)k;
            v97 = (void *)ReferenceDwmApiPort(v96);
            DwmAsyncChildLink(v97, v95, v93, v94, v91);
          }
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
}
