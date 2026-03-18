/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C00D0C30
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserInheritWindowMonitor @ 0x1C01D5020 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z @ 0x1C003120C (-IsDpiBoundaryBetweenWindows@@YA_NPEBUtagWND@@0@Z.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C0096E98 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00CFBE0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C00CFC14 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     UpdateWindowMonitor @ 0x1C00D16E0 (UpdateWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00D1ABC (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00D1BD4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00D1C18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00D2278 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C00D27A0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00D3370 (PostShellHookMessagesEx.c)
 *     PostIAMShellHookMessageEx @ 0x1C00D3520 (PostIAMShellHookMessageEx.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     GetNewMonitor @ 0x1C010B39C (GetNewMonitor.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C013D10C (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01B974C (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01BA7E4 (xxxAppAdjustDpiCandidateRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
{
  __int64 v4; // rcx
  struct tagRECT v7; // xmm0
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 i; // rbp
  unsigned __int16 v11; // r15
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  struct tagBWL *v21; // rdi
  __int64 v22; // rax
  struct tagBWL *v23; // rcx
  __int64 v24; // rax
  struct tagWND *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rax
  PERESOURCE *v28; // rax
  __int64 v29; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // rdx
  struct tagWLDBI *v32; // rbp
  __int64 *v33; // r12
  char *v34; // r15
  __int64 v35; // rbx
  const struct tagWND *v36; // r13
  _QWORD *v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // r8
  struct tagWND **v41; // r14
  struct tagWND *v42; // rbp
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int16 v46; // r8
  __int64 v47; // rax
  _DWORD *v48; // rbx
  const struct tagWND *v49; // r9
  __int64 v50; // rax
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // rbx
  __int64 v54; // rbp
  __int64 v55; // rcx
  __int64 v56; // r8
  struct tagWND **v57; // r14
  __int64 v58; // rcx
  BOOL v59; // r15d
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // ecx
  char *v63; // r14
  _QWORD *v64; // rax
  __int64 v65; // rbx
  __int64 *v66; // rax
  __int64 v67; // rbx
  __int64 *v68; // rax
  int v69; // eax
  __int64 v70; // r8
  unsigned __int16 v71; // r12
  __int16 ScaledLogPixels; // bx
  __int64 v73; // rbx
  struct tagMONITOR *v74; // rax
  int v75; // r9d
  int v76; // edx
  __int128 v77; // xmm0
  struct tagBWL *v78; // rdx
  struct tagBWL *v79; // rcx
  struct tagBWL *v80; // rcx
  __int64 NewMonitor; // [rsp+30h] [rbp-98h]
  struct tagRECT v83; // [rsp+38h] [rbp-90h] BYREF
  __int128 v84; // [rsp+48h] [rbp-80h] BYREF
  __int128 v85; // [rsp+58h] [rbp-70h]
  __int128 v86; // [rsp+68h] [rbp-60h] BYREF
  __int64 v87; // [rsp+78h] [rbp-50h]
  struct tagWLDBI *v88; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v89; // [rsp+D8h] [rbp+10h]
  int v90; // [rsp+E0h] [rbp+18h]
  struct tagBWL *v91; // [rsp+E8h] [rbp+20h]

  v4 = *((_QWORD *)a1 + 5);
  v89 = 1;
  v7 = *(struct tagRECT *)(v4 + 88);
  v8 = *(_QWORD *)(v4 + 256);
  v83 = v7;
  v9 = a2;
  for ( i = ValidateHmonitorNoRip(v8); v9; v9 = (__int64 *)v9[13] )
  {
    if ( (unsigned int)IsTopLevelWindow(v9) )
      break;
  }
  if ( i )
  {
    v11 = *(_WORD *)(*(_QWORD *)(i + 40) + 60LL);
    v90 = v11;
  }
  else
  {
    v11 = 0;
    v90 = 0;
  }
  if ( a3 )
  {
    if ( a2 )
      v89 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1u);
    else
      InternalRemoveProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  v12 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v12 = a2;
  v87 = 0LL;
  v86 = 0LL;
  if ( !v12
    || v9 && (*(_BYTE *)(v9[5] + 20) & 0x20) != 0
    || (v13 = ValidateHmonitorNoRip(*(_QWORD *)(v12[5] + 256)), (v14 = v13) == 0) )
  {
    NewMonitor = GetNewMonitor(a1);
    ThreadLockAlways(NewMonitor, &v86);
    v15 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
    if ( (_WORD)v15 != v11 )
      xxxAppAdjustDpiCandidateRect(a1, v15, *((_QWORD *)a1 + 5) + 88LL, &v83);
  }
  else
  {
    ThreadLockAlways(v13, &v86);
    if ( !HasMaximizedState(a1) )
    {
      v15 = *((_QWORD *)a1 + 5);
      v16 = *(unsigned int *)(v15 + 288);
      LOBYTE(v16) = v16 & 0xF;
      if ( (_BYTE)v16 == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( i )
        {
          v17 = v15 + 88;
          v18 = *(_QWORD *)(v15 + 88);
          v15 = *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 60LL);
          if ( (_WORD)v15 != v11 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v15, v17, &v83) )
            ScaleDPIRect(
              (unsigned int)&v83,
              *((_QWORD *)a1 + 5) + 88,
              *(unsigned __int16 *)(*(_QWORD *)(v14 + 40) + 60LL),
              v11,
              v18,
              v18);
        }
      }
    }
  }
  if ( !ThreadUnlock1(v16, v15, v17) )
    return v89;
  v21 = pbwlCache;
  v91 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v22 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v91 = (struct tagBWL *)v22;
    v21 = (struct tagBWL *)v22;
    if ( !v22 )
      return v89;
    *(_QWORD *)(v22 + 16) = v22 + 280;
  }
  *((_QWORD *)v21 + 3) = 0LL;
  v23 = (struct tagBWL *)((char *)v21 + 32);
  *((_QWORD *)v21 + 1) = (char *)v21 + 32;
  *((_QWORD *)v21 + 4) = *(_QWORD *)a1;
  *((_QWORD *)v21 + 1) = (char *)v21 + 40;
  if ( (struct tagBWL *)((char *)v21 + 40) == *((struct tagBWL **)v21 + 2) )
  {
    v24 = UserReAllocPool(v21, 48LL, 112LL, 1819767637LL);
    v23 = (struct tagBWL *)v24;
    if ( !v24 )
    {
      v91 = v21;
      goto LABEL_37;
    }
    v26 = v24 + 40;
    v91 = v23;
    *((_QWORD *)v23 + 1) = v26;
    v21 = v23;
    *((_QWORD *)v23 + 2) = v26 + 64;
  }
  v25 = (struct tagWND *)*((_QWORD *)a1 + 14);
  if ( v25 )
  {
    v21 = InternalBuildHwndList(v21, v25, 3u);
    v91 = v21;
  }
LABEL_37:
  v27 = (_QWORD *)*((_QWORD *)v21 + 1);
  if ( (unsigned __int64)v27 >= *((_QWORD *)v21 + 2) )
    goto LABEL_135;
  *v27 = 1LL;
  v28 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v23, v25, v19, v20);
  if ( !ExIsResourceAcquiredSharedLite(*v28) )
  {
    LODWORD(v88) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v29 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v29 = *ThreadWin32Thread;
  v32 = 0LL;
  *((_QWORD *)v21 + 3) = v29;
  v88 = 0LL;
  v33 = (__int64 *)((char *)v21 + 32);
  v34 = (char *)v21 + 32;
  *((_QWORD *)v21 + 3) = gptiCurrent;
  *(_QWORD *)v21 = gpbwlList;
  gpbwlList = v21;
  v35 = *((_QWORD *)v21 + 4);
  v36 = (const struct tagWND *)*((_QWORD *)a1 + 13);
  if ( v35 != 1 )
  {
    v37 = &v88;
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v31 = (unsigned __int16)v35;
      if ( (unsigned __int64)(unsigned __int16)v35 < *(_QWORD *)(gpsi + 8LL) )
      {
        v38 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v35;
        v41 = (struct tagWND **)HMPkheFromPhe(v38);
        LOWORD(v35) = WORD1(v35) & 0x7FFF;
        if ( ((WORD1(v35) & 0x7FFF) == *(_WORD *)(v38 + 26)
           || (_WORD)v35 == 0x7FFF
           || !(_WORD)v35 && PsGetCurrentProcessWow64Process(v39, v31, v40))
          && (*(_BYTE *)(v38 + 25) & 1) == 0
          && *(_BYTE *)(v38 + 24) == 1 )
        {
          v42 = *v41;
          if ( *v41 )
          {
            v43 = *((_QWORD *)v42 + 13);
            if ( v43 )
            {
              if ( v36 )
              {
                v44 = *((_QWORD *)v42 + 3);
                if ( !v44 || (v45 = *(_QWORD *)(v44 + 8)) == 0 || v43 != *(_QWORD *)(v45 + 24) )
                {
                  v46 = (*(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) >> 8) & 0x1FF;
                  LOBYTE(v31) = v46 != ((*(_DWORD *)(*(_QWORD *)(v43 + 40) + 288LL) >> 8) & 0x1FF);
                  if ( v42 == a1 )
                    LOBYTE(v31) = (v46 != ((*(_DWORD *)(*((_QWORD *)v36 + 5) + 288LL) >> 8) & 0x1FF)) | v31;
                  if ( (_BYTE)v31 )
                  {
                    v47 = Win32AllocPoolZInit(32LL, 1819767637LL);
                    v48 = (_DWORD *)v47;
                    if ( v47 )
                    {
                      *v37 = v47;
                      v37 = (_QWORD *)v47;
                      *(_QWORD *)v47 = 0LL;
                      v49 = v36;
                      *(_QWORD *)(v47 + 8) = *(_QWORD *)v42;
                      if ( v42 != a1 )
                        v49 = (const struct tagWND *)*((_QWORD *)v42 + 13);
                      *(_DWORD *)(v47 + 28) = v42 == a1;
                      v50 = *((_QWORD *)v42 + 5);
                      v84 = *(_OWORD *)(*((_QWORD *)v49 + 5) + 104LL);
                      v85 = *(_OWORD *)(v50 + 88);
                      if ( IsDpiBoundaryBetweenWindows(v42, v49) )
                      {
                        LogicalToPhysicalInPlaceRectWithSubpixel(v51, &v84, 0LL);
                        PhysicalToLogicalInPlaceRectWithSubpixel(v42, &v84, 0LL);
                        v52 = 1;
                      }
                      else
                      {
                        v52 = 0;
                      }
                      v48[6] = v52;
                      v48[4] = v85 - v84;
                      v48[5] = DWORD1(v85) - DWORD1(v84);
                    }
                  }
                }
              }
            }
          }
        }
      }
      v35 = *((_QWORD *)v34 + 1);
      v34 += 8;
    }
    while ( v35 != 1 );
    v21 = v91;
    v32 = v88;
    v33 = (__int64 *)((char *)v91 + 32);
  }
  v53 = *v33;
  if ( *v33 != 1 )
  {
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v31 = (unsigned __int16)v53;
      if ( (unsigned __int64)(unsigned __int16)v53 < *(_QWORD *)(gpsi + 8LL) )
      {
        v54 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v53;
        v57 = (struct tagWND **)HMPkheFromPhe(v54);
        LOWORD(v53) = WORD1(v53) & 0x7FFF;
        if ( ((WORD1(v53) & 0x7FFF) == *(_WORD *)(v54 + 26)
           || (_WORD)v53 == 0x7FFF
           || !(_WORD)v53 && PsGetCurrentProcessWow64Process(v55, v31, v56))
          && (*(_BYTE *)(v54 + 25) & 1) == 0
          && *(_BYTE *)(v54 + 24) == 1
          && *v57 )
        {
          UpdateWindowMonitor(*v57);
        }
      }
      v53 = v33[1];
      ++v33;
    }
    while ( v53 != 1 );
    v32 = v88;
    v21 = v91;
  }
  if ( v32 )
  {
    UpdateWindowPositionsForDpiBoundaryChange(v32, v31);
    FreeListFree(v32);
  }
  v58 = *((_QWORD *)a1 + 13);
  v59 = 0;
  if ( v58 )
  {
    v60 = *((_QWORD *)a1 + 3);
    if ( v60 )
    {
      v61 = *(_QWORD *)(v60 + 8);
      if ( v61 )
        v59 = v58 == *(_QWORD *)(v61 + 24);
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 && v59 )
    SetDeferredDpiStateForWindowAndChildren(a1);
  v62 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  if ( v62 != 2 )
  {
    if ( v62 == 3 )
    {
      xxxConsiderPreferredDpiChange(a1);
      v63 = (char *)a1 + 16;
      goto LABEL_114;
    }
    v63 = (char *)a1 + 16;
LABEL_96:
    v64 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v64 && *v64 )
    {
      if ( !IS_USERCRIT_OWNED_AT_ALL() )
      {
        LODWORD(v88) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      }
      v65 = 0LL;
      v66 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v66 )
        v65 = *v66;
      if ( *(_QWORD *)(v65 + 456) )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL() )
        {
          LODWORD(v88) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
        }
        v67 = 0LL;
        v68 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v68 )
          v67 = *v68;
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v67 + 456) + 8LL) + 64LL) & 1) != 0 )
        {
          v69 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
          if ( (v69 & 0xF) == 0 && (v69 & 0x40000000) != 0 )
          {
            if ( (unsigned int)IsTopLevelWindow(a1) )
            {
              v71 = v90;
              if ( !(_WORD)v90
                || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v70 + 284)),
                    (unsigned __int16)GreGetScaledLogPixels(v71) != ScaledLogPixels) )
              {
                xxxSendGDIScaledDpiChangedMsgs(a1, v21);
              }
            }
          }
        }
      }
    }
    goto LABEL_114;
  }
  v63 = (char *)a1 + 16;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) != 0 )
    goto LABEL_96;
  xxxSendDpiChangedMsgs(a1, &v83, v21, v90);
LABEL_114:
  if ( v59 )
  {
    v73 = *(_QWORD *)(*(_QWORD *)v63 + 424LL);
    if ( v73 )
    {
      v74 = _MonitorFromWindowInternal(a1, 1u, 0);
      if ( v74 )
      {
        v75 = *(_DWORD *)(v73 + 984);
        v76 = *(_DWORD *)(v73 + 996) | 1;
        v77 = *(_OWORD *)(*((_QWORD *)v74 + 5) + 28LL);
        *(_DWORD *)(v73 + 996) = v76;
        *(_OWORD *)(v73 + 968) = v77;
        if ( v75 != *(unsigned __int16 *)(*((_QWORD *)v74 + 5) + 60LL) )
        {
          *(_DWORD *)(v73 + 992) = v75;
          *(_DWORD *)(v73 + 996) = v76 | 2;
        }
        *(_DWORD *)(v73 + 984) = *(unsigned __int16 *)(*((_QWORD *)v74 + 5) + 60LL);
      }
      else
      {
        *(_QWORD *)(v73 + 980) = 0LL;
        *(_QWORD *)(v73 + 968) = 0LL;
        *(_DWORD *)(v73 + 976) = 0;
      }
    }
    if ( *((_QWORD *)a1 + 15) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 24LL);
    }
    else if ( (unsigned __int8)IsTrayWindow(a1, 1LL) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)a1, 0LL);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 20LL);
      xxxCallHook(16, *(_QWORD *)a1, 0LL, 10);
    }
  }
  if ( v21 )
  {
    if ( *(_QWORD *)v21 == 3LL )
      goto LABEL_135;
    v78 = (struct tagBWL *)gpbwlList;
    v79 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v79 != v21 )
      {
        v78 = v79;
        v79 = *(struct tagBWL **)v79;
        if ( !v79 )
          return v89;
      }
      *(_QWORD *)v78 = *(_QWORD *)v21;
      v80 = pbwlCache;
      if ( !pbwlCache )
      {
        pbwlCache = v21;
        return v89;
      }
      if ( (__int64)((*((_QWORD *)v21 + 2) - (_QWORD)v21 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = v21;
LABEL_136:
        Win32FreePool(v80);
        return v89;
      }
LABEL_135:
      v80 = v21;
      goto LABEL_136;
    }
  }
  return v89;
}
