// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *this, struct tagWND *a2, int a3)
{
  __int64 v4; // rcx
  struct tagWND *v6; // rbx
  struct tagRECT v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 i; // rdi
  unsigned __int16 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct tagBWL *v15; // rbx
  struct tagBWL *v16; // rcx
  struct tagWND *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 *v23; // r14
  struct tagWLDBI *v24; // rbp
  char *v25; // r12
  __int64 v26; // rdi
  const struct tagWND *v27; // r14
  struct tagWLDBI **v28; // r13
  __int64 v29; // rbp
  __int64 v30; // rcx
  struct tagWND **v31; // r15
  struct tagWND *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int16 v36; // r8
  __int64 v37; // rdi
  __int64 v38; // rbp
  __int64 v39; // rcx
  struct tagWND **v40; // r15
  __int64 v41; // rcx
  BOOL v42; // ebp
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // ecx
  char *v46; // r14
  struct tagBWL *v47; // r8
  struct tagBWL *v48; // rdx
  struct tagBWL *v49; // rcx
  __int64 v51; // rdi
  struct tagMONITOR *v52; // rax
  int v53; // r9d
  int v54; // r8d
  __int128 v55; // xmm0
  _QWORD *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdi
  __int64 *v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 *v62; // rax
  _QWORD *v63; // rax
  _DWORD *v64; // rbp
  const struct tagWND *v65; // r9
  int v66; // eax
  __int64 v67; // rax
  const struct tagWND *v68; // r9
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v78; // r8
  unsigned __int16 v79; // r12
  __int16 ScaledLogPixels; // di
  __int64 NewMonitor; // [rsp+30h] [rbp-98h]
  __int128 v82; // [rsp+38h] [rbp-90h] BYREF
  struct tagRECT v83; // [rsp+48h] [rbp-80h] BYREF
  __int128 v84; // [rsp+58h] [rbp-70h]
  __int128 v85; // [rsp+68h] [rbp-60h] BYREF
  __int64 v86; // [rsp+78h] [rbp-50h]
  struct tagWLDBI *v87; // [rsp+D0h] [rbp+8h] BYREF
  unsigned int v88; // [rsp+D8h] [rbp+10h]
  int v89; // [rsp+E0h] [rbp+18h]
  struct tagBWL *v90; // [rsp+E8h] [rbp+20h]

  v4 = *((_QWORD *)this + 5);
  v6 = a2;
  v88 = 1;
  v7 = *(struct tagRECT *)(v4 + 88);
  v8 = *(_QWORD *)(v4 + 256);
  v83 = v7;
  v9 = (__int64)a2;
  for ( i = ValidateHmonitorNoRip(v8); v9; v9 = *(_QWORD *)(v9 + 104) )
  {
    if ( IsTopLevelWindow(v9) )
      break;
  }
  if ( i )
  {
    v11 = *(_WORD *)(*(_QWORD *)(i + 40) + 60LL);
    v89 = v11;
  }
  else
  {
    v11 = 0;
    v89 = 0;
  }
  if ( a3 )
  {
    if ( v6 )
      v88 = InternalSetProp(this, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)v6, 1LL);
    else
      InternalRemoveProp((__int64)this, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  if ( v6 == this )
    v6 = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  if ( !v6
    || v9 && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 20LL) & 0x20) != 0
    || (v70 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v6 + 5) + 256LL)), (v71 = v70) == 0) )
  {
    NewMonitor = GetNewMonitor(this, 0LL, &v83);
    ThreadLockAlways(NewMonitor, &v85);
    v14 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
    if ( (_WORD)v14 != v11 )
      xxxAppAdjustDpiCandidateRect(this, v14, *((_QWORD *)this + 5) + 88LL, &v83);
  }
  else
  {
    ThreadLockAlways(v70, &v85);
    if ( !HasMaximizedState(this) )
    {
      v14 = *((_QWORD *)this + 5);
      v12 = *(unsigned int *)(v14 + 288);
      LOBYTE(v12) = v12 & 0xF;
      if ( (_BYTE)v12 == 2 && (*(_DWORD *)(*((_QWORD *)this + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( i )
        {
          v13 = v14 + 88;
          v72 = *(_QWORD *)(v14 + 88);
          v14 = *(unsigned __int16 *)(*(_QWORD *)(v71 + 40) + 60LL);
          if ( (_WORD)v14 != v11 && !(unsigned int)xxxAppAdjustDpiCandidateRect(this, v14, v13, &v83) )
            ScaleDPIRect(
              &v83,
              (__m128i *)(*((_QWORD *)this + 5) + 88LL),
              *(_WORD *)(*(_QWORD *)(v71 + 40) + 60LL),
              v11,
              v72,
              v72);
        }
      }
    }
  }
  if ( !ThreadUnlock1(v12, v14, v13) )
    return v88;
  v15 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v73 = Win32AllocPoolZInit(296LL, 1819767637LL);
    v15 = (struct tagBWL *)v73;
    if ( !v73 )
      return v88;
    *(_QWORD *)(v73 + 16) = v73 + 280;
  }
  *((_QWORD *)v15 + 3) = 0LL;
  v16 = (struct tagBWL *)((char *)v15 + 32);
  *((_QWORD *)v15 + 1) = (char *)v15 + 32;
  *((_QWORD *)v15 + 4) = *(_QWORD *)this;
  *((_QWORD *)v15 + 1) = (char *)v15 + 40;
  if ( (struct tagBWL *)((char *)v15 + 40) == *((struct tagBWL **)v15 + 2) )
  {
    v75 = UserReAllocPool(v15, 48LL, 112LL, 1819767637LL);
    v16 = (struct tagBWL *)v75;
    if ( !v75 )
      goto LABEL_16;
    v76 = v75 + 40;
    v15 = v16;
    *((_QWORD *)v16 + 1) = v76;
    *((_QWORD *)v16 + 2) = v76 + 64;
  }
  v17 = (struct tagWND *)*((_QWORD *)this + 14);
  if ( v17 )
    v15 = InternalBuildHwndList(v15, v17, 3);
LABEL_16:
  v18 = (_QWORD *)*((_QWORD *)v15 + 1);
  v90 = v15;
  if ( (unsigned __int64)v18 >= *((_QWORD *)v15 + 2) )
    goto LABEL_101;
  *v18 = 1LL;
  v19 = SGDGetUserSessionState(v16);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v19 + 8)) )
  {
    LODWORD(v87) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v20 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v20 = *ThreadWin32Thread;
  v23 = (__int64 *)((char *)v15 + 32);
  *((_QWORD *)v15 + 3) = v20;
  v24 = 0LL;
  v87 = 0LL;
  v25 = (char *)v15 + 32;
  *((_QWORD *)v15 + 3) = gptiCurrent;
  *(_QWORD *)v15 = gpbwlList;
  gpbwlList = v15;
  v26 = *((_QWORD *)v15 + 4);
  if ( v26 != 1 )
  {
    v27 = (const struct tagWND *)*((_QWORD *)this + 13);
    v28 = &v87;
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v22 = (unsigned __int16)v26;
      if ( (unsigned __int64)(unsigned __int16)v26 < *(_QWORD *)(gpsi + 8LL) )
      {
        v29 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v26;
        v31 = (struct tagWND **)HMPkheFromPhe(v29);
        LOWORD(v26) = WORD1(v26) & 0x7FFF;
        if ( ((WORD1(v26) & 0x7FFF) == *(_WORD *)(v29 + 26)
           || (_WORD)v26 == 0x7FFF
           || !(_WORD)v26 && PsGetCurrentProcessWow64Process(v30))
          && (*(_BYTE *)(v29 + 25) & 1) == 0
          && *(_BYTE *)(v29 + 24) == 1 )
        {
          v32 = *v31;
          if ( *v31 )
          {
            v33 = *((_QWORD *)v32 + 13);
            if ( v33 )
            {
              if ( v27 )
              {
                v34 = *((_QWORD *)v32 + 3);
                if ( !v34 || (v35 = *(_QWORD *)(v34 + 8)) == 0 || v33 != *(_QWORD *)(v35 + 24) )
                {
                  v36 = (*(_DWORD *)(*((_QWORD *)v32 + 5) + 288LL) >> 8) & 0x1FF;
                  LOBYTE(v22) = v36 != ((*(_DWORD *)(*(_QWORD *)(v33 + 40) + 288LL) >> 8) & 0x1FF);
                  if ( v32 == this )
                    LOBYTE(v22) = (v36 != ((*(_DWORD *)(*((_QWORD *)v27 + 5) + 288LL) >> 8) & 0x1FF)) | v22;
                  if ( (_BYTE)v22 )
                  {
                    v63 = (_QWORD *)Win32AllocPoolZInit(32LL, 1819767637LL);
                    v64 = v63;
                    if ( v63 )
                    {
                      *v28 = (struct tagWLDBI *)v63;
                      v28 = (struct tagWLDBI **)v63;
                      *v63 = 0LL;
                      v63[1] = *(_QWORD *)v32;
                      if ( v32 == this )
                      {
                        v65 = v27;
                        v66 = 1;
                      }
                      else
                      {
                        v65 = (const struct tagWND *)*((_QWORD *)v32 + 13);
                        v66 = 0;
                      }
                      v64[7] = v66;
                      v67 = *((_QWORD *)v32 + 5);
                      v82 = *(_OWORD *)(*((_QWORD *)v65 + 5) + 104LL);
                      v84 = *(_OWORD *)(v67 + 88);
                      if ( IsDpiBoundaryBetweenWindows(v32, v65) )
                      {
                        LogicalToPhysicalInPlaceRectWithSubpixel(v68, (int *)&v82, 0LL);
                        PhysicalToLogicalInPlaceRectWithSubpixel(v32, (int *)&v82, 0LL);
                        v69 = 1;
                      }
                      else
                      {
                        v69 = 0;
                      }
                      v64[6] = v69;
                      v64[4] = v84 - v82;
                      v64[5] = DWORD1(v84) - DWORD1(v82);
                    }
                  }
                }
              }
            }
          }
        }
      }
      v26 = *((_QWORD *)v25 + 1);
      v25 += 8;
    }
    while ( v26 != 1 );
    v15 = v90;
    v24 = v87;
    v23 = (__int64 *)((char *)v90 + 32);
  }
  v37 = *v23;
  if ( *v23 != 1 )
  {
    do
    {
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v22 = (unsigned __int16)v37;
      if ( (unsigned __int64)(unsigned __int16)v37 < *(_QWORD *)(gpsi + 8LL) )
      {
        v38 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v37;
        v40 = (struct tagWND **)HMPkheFromPhe(v38);
        LOWORD(v37) = WORD1(v37) & 0x7FFF;
        if ( ((WORD1(v37) & 0x7FFF) == *(_WORD *)(v38 + 26)
           || (_WORD)v37 == 0x7FFF
           || !(_WORD)v37 && PsGetCurrentProcessWow64Process(v39))
          && (*(_BYTE *)(v38 + 25) & 1) == 0
          && *(_BYTE *)(v38 + 24) == 1
          && *v40 )
        {
          UpdateWindowMonitor(*v40);
        }
      }
      v37 = v23[1];
      ++v23;
    }
    while ( v37 != 1 );
    v24 = v87;
  }
  if ( v24 )
  {
    UpdateWindowPositionsForDpiBoundaryChange(v24, v22);
    FreeListFree(v24);
  }
  v41 = *((_QWORD *)this + 13);
  v42 = 0;
  if ( v41 )
  {
    v43 = *((_QWORD *)this + 3);
    if ( v43 )
    {
      v44 = *(_QWORD *)(v43 + 8);
      if ( v44 )
        v42 = v41 == *(_QWORD *)(v44 + 24);
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF) == 2 && v42 )
    SetDeferredDpiStateForWindowAndChildren(this, 0, 0);
  v45 = *(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0xF;
  if ( v45 != 2 )
  {
    if ( v45 == 3 )
    {
      xxxConsiderPreferredDpiChange(this);
      v46 = (char *)this + 16;
      goto LABEL_59;
    }
    v46 = (char *)this + 16;
LABEL_77:
    v56 = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v56 && *v56 )
    {
      if ( !IS_USERCRIT_OWNED_AT_ALL(v57) )
      {
        LODWORD(v87) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      }
      v58 = 0LL;
      v59 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v59 )
        v58 = *v59;
      if ( *(_QWORD *)(v58 + 456) )
      {
        if ( !IS_USERCRIT_OWNED_AT_ALL(v60) )
        {
          LODWORD(v87) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
        }
        v61 = 0LL;
        v62 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v62 )
          v61 = *v62;
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v61 + 456) + 8LL) + 64LL) & 1) != 0
          && (*(_DWORD *)(*((_QWORD *)this + 5) + 288LL) & 0x4000000F) == 0x40000000
          && IsTopLevelWindow((__int64)this) )
        {
          v79 = v89;
          if ( !(_WORD)v89
            || (ScaledLogPixels = GreGetScaledLogPixels(*(unsigned __int16 *)(v78 + 284)),
                (unsigned __int16)GreGetScaledLogPixels(v79) != ScaledLogPixels) )
          {
            xxxSendGDIScaledDpiChangedMsgs(this, v15);
          }
        }
      }
    }
    goto LABEL_59;
  }
  v46 = (char *)this + 16;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 648LL) & 0x2000000) != 0 )
    goto LABEL_77;
  xxxSendDpiChangedMsgs(this, &v83, v15, v89);
LABEL_59:
  if ( v42 )
  {
    v51 = *(_QWORD *)(*(_QWORD *)v46 + 424LL);
    if ( v51 )
    {
      v52 = _MonitorFromWindowInternal(this, 1u, 0);
      if ( v52 )
      {
        v53 = *(_DWORD *)(v51 + 960);
        v54 = *(_DWORD *)(v51 + 972) | 1;
        v55 = *(_OWORD *)(*((_QWORD *)v52 + 5) + 28LL);
        *(_DWORD *)(v51 + 972) = v54;
        *(_OWORD *)(v51 + 944) = v55;
        if ( v53 != *(unsigned __int16 *)(*((_QWORD *)v52 + 5) + 60LL) )
        {
          *(_DWORD *)(v51 + 968) = v53;
          *(_DWORD *)(v51 + 972) = v54 | 2;
        }
        *(_DWORD *)(v51 + 960) = *(unsigned __int16 *)(*((_QWORD *)v52 + 5) + 60LL);
      }
      else
      {
        *(_QWORD *)(v51 + 956) = 0LL;
        *(_QWORD *)(v51 + 944) = 0LL;
        *(_DWORD *)(v51 + 952) = 0;
      }
    }
    if ( *((_QWORD *)this + 15) )
    {
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x18u, *(_QWORD *)this);
    }
    else if ( IsTrayWindow(this, 1) )
    {
      PostShellHookMessagesEx(0x10uLL, *(_QWORD *)this, 0LL);
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x14u, *(_QWORD *)this);
      xxxCallHook(16, *(_QWORD *)this, 0LL, 10);
    }
  }
  if ( v15 )
  {
    if ( *(_QWORD *)v15 == 3LL )
      goto LABEL_101;
    v47 = (struct tagBWL *)gpbwlList;
    v48 = (struct tagBWL *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v48 != v15 )
      {
        v47 = v48;
        v48 = *(struct tagBWL **)v48;
        if ( !v48 )
          return v88;
      }
      *(_QWORD *)v47 = *(_QWORD *)v15;
      v49 = pbwlCache;
      if ( !pbwlCache )
      {
        pbwlCache = v15;
        return v88;
      }
      if ( (__int64)((*((_QWORD *)v15 + 2) - (_QWORD)v15 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = v15;
LABEL_93:
        Win32FreePool(v49);
        return v88;
      }
LABEL_101:
      v49 = v15;
      goto LABEL_93;
    }
  }
  return v88;
}
