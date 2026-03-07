// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v2; // rdi
  int v3; // r15d
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r14
  int v9; // r12d
  __int64 v10; // r13
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  _QWORD *v15; // r15
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  char v26; // bl
  struct _HANDLEENTRY *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r14
  int v30; // esi
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r14d
  struct tagWND *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 result; // rax
  int v41; // esi
  struct tagCVR *i; // rbx
  __int64 v43; // r12
  struct tagSMWP *v44; // rsi
  __int64 ThreadWin32Thread; // rax
  void (__fastcall *v46)(__int64); // rax
  __int64 v47; // rbx
  __int64 *v48; // rax
  struct tagWND *v49; // r15
  int v50; // ebx
  __int64 v51; // rsi
  __int64 v52; // rcx
  struct tagWND **v53; // r14
  int v54; // r13d
  __int64 v55; // r12
  char valid; // al
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // r14d
  PDEVICE_OBJECT v60; // rcx
  __int64 v61; // r14
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  int v69; // eax
  __int64 v70; // r8
  unsigned int v71; // edx
  bool v72; // zf
  char v73; // bl
  char v74; // si
  int v75; // ebx
  __int64 v76; // rdx
  __int64 v77; // rdx
  Gre::Base *v78; // rcx
  struct Gre::Base::SESSION_GLOBALS *v79; // rdi
  Gre::Base *v80; // rcx
  int v81; // ebx
  Gre::Base *v82; // rcx
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  BOOL v89; // r15d
  __int64 v90; // rsi
  int v91; // r14d
  _QWORD *v92; // rsi
  __int64 v93; // rsi
  unsigned int ThreadId; // [rsp+40h] [rbp-89h]
  __int128 v95; // [rsp+58h] [rbp-71h] BYREF
  void (__fastcall *v96)(__int64); // [rsp+68h] [rbp-61h]
  HWND v97; // [rsp+70h] [rbp-59h] BYREF
  __int64 v98; // [rsp+78h] [rbp-51h]
  __int64 v99; // [rsp+80h] [rbp-49h]
  __int128 v100; // [rsp+90h] [rbp-39h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-29h]
  __int128 v102; // [rsp+A8h] [rbp-21h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-11h]
  _QWORD v104[12]; // [rsp+C0h] [rbp-9h] BYREF
  int v105; // [rsp+130h] [rbp+67h] BYREF
  int v106; // [rsp+138h] [rbp+6Fh]
  int v107; // [rsp+140h] [rbp+77h]
  int v108; // [rsp+148h] [rbp+7Fh]

  v106 = a2;
  v2 = a1;
  v97 = 0LL;
  v107 = 0;
  v3 = a2;
  v102 = 0LL;
  v103 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  if ( *((_DWORD *)a1 + 7) )
  {
    v4 = (__int64 *)*((_QWORD *)a1 + 5);
    v105 = 1;
    v5 = *v4;
    PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( (unsigned __int64)(unsigned __int16)v5 < *(_QWORD *)(gpsi + 8LL) )
    {
      v6 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v5;
      v8 = HMPkheFromPhe(v6);
      LOWORD(v5) = WORD1(v5) & 0x7FFF;
      if ( ((WORD1(v5) & 0x7FFF) == *(_WORD *)(v6 + 26)
         || (_WORD)v5 == 0x7FFF
         || !(_WORD)v5 && PsGetCurrentProcessWow64Process(v7))
        && (*(_BYTE *)(v6 + 25) & 1) == 0
        && *(_BYTE *)(v6 + 24) == 1
        && *(_QWORD *)v8 )
      {
        v9 = *((_DWORD *)v2 + 7) - 1;
        v10 = *(_QWORD *)(*(_QWORD *)v8 + 104LL);
        v11 = (__int64 *)*((_QWORD *)v2 + 5);
        if ( v9 >= 0 )
        {
          while ( 1 )
          {
            v12 = *v11;
            PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( (unsigned __int64)(unsigned __int16)v12 >= *(_QWORD *)(gpsi + 8LL) )
              goto LABEL_30;
            v13 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v12;
            v15 = (_QWORD *)HMPkheFromPhe(v13);
            LOWORD(v12) = WORD1(v12) & 0x7FFF;
            if ( (WORD1(v12) & 0x7FFF) != *(_WORD *)(v13 + 26)
              && (_WORD)v12 != 0x7FFF
              && ((_WORD)v12 || !PsGetCurrentProcessWow64Process(v14)) )
            {
              goto LABEL_30;
            }
            if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
              goto LABEL_30;
            if ( *(_BYTE *)(v13 + 24) != 1 )
              goto LABEL_30;
            v16 = (_QWORD *)*v15;
            if ( !*v15 )
              goto LABEL_30;
            v11[13] = v16[2];
            if ( (v11[4] & 4) == 0 )
            {
              v17 = 0LL;
              v18 = v16[3];
              if ( v18 )
              {
                v19 = *(_QWORD *)(v18 + 8);
                if ( v19 )
                  v17 = *(_QWORD *)(v19 + 24);
              }
              if ( *(char *)(v16[5] + 19LL) < 0 )
                goto LABEL_30;
              v20 = v11[1];
              if ( v20 > 0xFFFFFFFFFFFFFFFDuLL )
              {
                if ( v16[13] != v17 )
                  goto LABEL_30;
              }
              else if ( v20 >= 2 )
              {
                LOBYTE(v17) = 1;
                v21 = HMValidateHandleNoSecure(v20, v17);
                if ( !v21 || *(char *)(*(_QWORD *)(v21 + 40) + 19LL) < 0 )
                {
                  UserSetLastError(6);
LABEL_30:
                  *v11 = 0LL;
                  goto LABEL_31;
                }
                if ( v16 == (_QWORD *)v21 || v16[13] != *(_QWORD *)(v21 + 104) )
                  goto LABEL_30;
              }
            }
            if ( *(_QWORD *)(_HMObjectFromHandle(*v11) + 104) != v10 )
            {
              UserSetLastError(1441);
              goto LABEL_37;
            }
            if ( (v11[4] & 0x2000) != 0 )
              v105 = 0;
LABEL_31:
            v11 += 21;
            if ( --v9 < 0 )
            {
              v3 = v106;
              break;
            }
          }
        }
        v22 = 0;
        if ( *((int *)v2 + 7) > 0 )
        {
          v23 = (_QWORD *)*((_QWORD *)v2 + 5);
          v24 = 0LL;
          while ( !*v23 )
          {
            ++v22;
            ++v24;
            v23 += 21;
            if ( v24 >= *((int *)v2 + 7) )
              goto LABEL_37;
          }
          v28 = (_QWORD *)(*((_QWORD *)v2 + 5) + 168LL * v22);
          if ( v28 )
          {
            v29 = *(_QWORD *)(_HMObjectFromHandle(*v28) + 104);
            v98 = v29;
            if ( v29 )
            {
              if ( *(_QWORD *)(v29 + 24) )
              {
                v30 = 0;
                if ( *((int *)v2 + 7) > 0 )
                {
                  v31 = 0LL;
                  do
                  {
                    v32 = *((_QWORD *)v2 + 5);
                    v33 = *(_QWORD *)(v31 + v32);
                    if ( v33 && *(_DWORD *)(v31 + v32 + 152) )
                    {
                      v34 = _HMObjectFromHandle(v33);
                      v35 = *((_QWORD *)v2 + 5);
                      v36 = *(_DWORD *)(v35 + v31 + 152);
                      if ( *(_DWORD *)(*(_QWORD *)(v34 + 40) + 236LL) != v36 )
                      {
                        v37 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v35 + v31));
                        SetWindowGroupBand(v37, v36, 0);
                      }
                      *(_DWORD *)(v31 + *((_QWORD *)v2 + 5) + 152) = 0;
                    }
                    ++v30;
                    v31 += 168LL;
                  }
                  while ( v30 < *((_DWORD *)v2 + 7) );
                  v29 = v98;
                }
                if ( v3 )
                  AsyncWindowPos(v2);
                v38 = *(_QWORD *)(v29 + 24);
                if ( v38 )
                {
                  v39 = *(_QWORD *)(v38 + 8);
                  if ( v39 )
                  {
                    if ( v29 == *(_QWORD *)(v39 + 24) )
                    {
                      result = (__int64)ZOrderByOwner(v2);
                      v2 = (struct tagSMWP *)result;
                      if ( !result )
                        return result;
                      if ( v3 )
                      {
                        v41 = *(_DWORD *)(result + 28) - 1;
                        for ( i = *(struct tagCVR **)(result + 40); v41 >= 0; --v41 )
                        {
                          if ( *(_QWORD *)i && !(unsigned int)ValidateWindowPos(i, 0LL) )
                            *(_QWORD *)i = 0LL;
                          i = (struct tagCVR *)((char *)i + 168);
                        }
                        AsyncWindowPos(v2);
                      }
                    }
                  }
                }
                v43 = gptiCurrent;
                v44 = v2;
                *(_QWORD *)&v100 = *(_QWORD *)(gptiCurrent + 416LL);
                *(_QWORD *)(gptiCurrent + 416LL) = &v100;
                *((_QWORD *)&v100 + 1) = v29;
                HMLockObject(v29);
                if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
                {
                  HMLockObject(v2);
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  v107 = 1;
                  *(_QWORD *)&v95 = *(_QWORD *)(ThreadWin32Thread + 16);
                  *(_QWORD *)(ThreadWin32Thread + 16) = &v95;
                  v46 = (void (__fastcall *)(__int64))UnrefAndDestroySMWP;
                }
                else
                {
                  v47 = 0LL;
                  v48 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( v48 )
                    v47 = *v48;
                  *(_QWORD *)&v95 = *(_QWORD *)(v47 + 16);
                  *(_QWORD *)(v47 + 16) = &v95;
                  v46 = DestroySMWP;
                }
                v96 = v46;
                *((_QWORD *)&v95 + 1) = v2;
                ++*(_DWORD *)(gptiCurrent + 1248LL);
                *((_DWORD *)v2 + 6) |= 4u;
                if ( (unsigned int)xxxCalcValidRects(v2, &v97) )
                {
                  v49 = 0LL;
                  v50 = (int)v97;
                  PsGetThreadWin32Thread(KeGetCurrentThread());
                  if ( (unsigned __int64)(unsigned __int16)v50 < *(_QWORD *)(gpsi + 8LL) )
                  {
                    v51 = *((_QWORD *)&gSharedInfo + 1)
                        + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v50;
                    v53 = (struct tagWND **)HMPkheFromPhe(v51);
                    LOWORD(v50) = HIWORD(v50) & 0x7FFF;
                    if ( ((HIWORD(v50) & 0x7FFF) == *(_WORD *)(v51 + 26)
                       || (_WORD)v50 == 0x7FFF
                       || !(_WORD)v50 && PsGetCurrentProcessWow64Process(v52))
                      && (*(_BYTE *)(v51 + 25) & 1) == 0
                      && *(_BYTE *)(v51 + 24) == 1 )
                    {
                      v49 = *v53;
                    }
                  }
                  *(_QWORD *)&v102 = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = &v102;
                  *((_QWORD *)&v102 + 1) = v49;
                  if ( v49 )
                    HMLockObject(v49);
                  v54 = *(_DWORD *)(gptiCurrent + 908LL);
                  v108 = v54;
                  v55 = gptiForeground;
                  v99 = gptiForeground;
                  valid = zzzBltValidBits((__int64)v2);
                  v59 = v105;
                  v60 = 0LL;
                  if ( (valid & 1) == 0 )
                    v59 = 0;
                  v105 = v59;
                  if ( (valid & 2) != 0 )
                    GenerateMouseMove(0LL);
                  if ( (*((_DWORD *)v2 + 6) & 1) != 0 )
                  {
                    v61 = *((int *)v2 + 7);
                    if ( *((_DWORD *)v2 + 7) )
                    {
                      v62 = 168 * v61;
                      do
                      {
                        v63 = *((_QWORD *)v2 + 5);
                        v62 -= 168LL;
                        --v61;
                        v60 = *(PDEVICE_OBJECT *)(v62 + v63);
                        if ( v60 )
                        {
                          if ( (*(_DWORD *)(v62 + v63 + 32) & 0xF0000000) != 0 )
                          {
                            LOBYTE(v57) = 1;
                            v64 = HMValidateHandleNoSecure(v60, v57);
                            v65 = v64;
                            if ( v64 )
                            {
                              v104[0] = *(_QWORD *)(gptiCurrent + 416LL);
                              *(_QWORD *)(gptiCurrent + 416LL) = v104;
                              v104[2] = 0LL;
                              v104[1] = v64;
                              HMLockObject(v64);
                              v66 = *((_QWORD *)v2 + 5);
                              if ( (*(_DWORD *)(v66 + v62 + 32) & 0x10000000) != 0 )
                              {
                                if ( (*(_DWORD *)(v66 + v62 + 156) & 8) != 0 )
                                {
                                  PostIAMShellHookMessageEx(
                                    *(_QWORD *)(gptiCurrent + 456LL),
                                    0x15u,
                                    *(_QWORD *)(v66 + v62));
                                }
                                else
                                {
                                  PostShellHookMessagesEx(1uLL, *(_QWORD *)(v66 + v62), 0LL);
                                  xxxCallHook(1, *(_QWORD *)(v62 + *((_QWORD *)v2 + 5)), 0LL, 10);
                                }
                              }
                              v67 = *((_QWORD *)v2 + 5);
                              if ( (*(_DWORD *)(v67 + v62 + 32) & 0x20000000) != 0 )
                              {
                                PostShellHookMessagesEx(2uLL, *(_QWORD *)(v67 + v62), 0LL);
                                xxxCallHook(2, *(_QWORD *)(v62 + *((_QWORD *)v2 + 5)), 0LL, 10);
                              }
                              v68 = *((_QWORD *)v2 + 5);
                              if ( (*(_DWORD *)(v68 + v62 + 32) & 0x40000000) != 0 )
                              {
                                v69 = *(_DWORD *)(v68 + v62 + 156);
                                if ( (v69 & 8) != 0 )
                                {
                                  v70 = *(_QWORD *)(v68 + v62);
                                  v71 = 23;
                                }
                                else
                                {
                                  if ( (v69 & 0x10) == 0 )
                                    xxxSetTrayWindow(*(_QWORD *)(v65 + 24), v65);
                                  v71 = 19;
                                  v70 = *(_QWORD *)(v62 + *((_QWORD *)v2 + 5));
                                }
                                PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v71, v70);
                              }
                              if ( *(int *)(v62 + *((_QWORD *)v2 + 5) + 32) < 0 )
                                xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 456LL), 1LL);
                              ThreadUnlock1(v66, v67, v68);
                            }
                          }
                        }
                      }
                      while ( v61 );
                      v55 = v99;
                      v54 = v108;
                    }
                    v59 = v105;
                  }
                  v72 = gptiCurrent == v55;
                  v43 = gptiCurrent;
                  if ( v72
                    && v54
                    && !*(_DWORD *)(gptiCurrent + 908LL)
                    && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
                  {
                    *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
                    v60 = WPP_GLOBAL_Control;
                    v73 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
                    v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
                      WPP_RECORDER_AND_TRACE_SF_D(
                        (__int64)WPP_GLOBAL_Control->AttachedDevice,
                        v73,
                        v74,
                        (__int64)gFullLog,
                        4u,
                        2u,
                        0xFu,
                        (__int64)&WPP_79e939fa1d4d36fcf42089c5c6e082fd_Traceguids,
                        ThreadId);
                    }
                  }
                  v75 = 0;
                  if ( v49 )
                    v75 = xxxSwpActivate(v49);
                  if ( v59 )
                    xxxDoSyncPaint(v98, 4LL);
                  ThreadUnlock1(v60, v57, v58);
                  if ( v75 )
                  {
                    v76 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
                    if ( v76 )
                      SetOrClrWF(0LL, v76, 257LL, 1LL);
                    v77 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
                    if ( v77 )
                      SetOrClrWF(0LL, v77, 257LL, 1LL);
                  }
                  xxxSendChangedMsgs(v2);
                  v44 = v2;
                }
                v72 = (*(_DWORD *)(v43 + 1248))-- == 1;
                if ( v72 )
                {
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                  v79 = Gre::Base::Globals(v78);
                  GreAcquireSemaphore(*((_QWORD *)v79 + 12));
                  EtwTraceGreLockAcquireSemaphoreExclusive(
                    L"GreBaseGlobals.hsemVisRgnUniqueness",
                    *((_QWORD *)v79 + 12),
                    10LL);
                  v81 = *((_DWORD *)Gre::Base::Globals(v80) + 1629);
                  *((_DWORD *)Gre::Base::Globals(v82) + 1630) = v81;
                  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
                  GreReleaseSemaphoreInternal(*((_QWORD *)v79 + 12));
                  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                }
                v83 = 0LL;
                v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
                if ( v84 )
                  v83 = *v84;
                *(_QWORD *)(v83 + 16) = v95;
                ThreadUnlock1(v86, v85, v87);
                v2 = v44;
                if ( v107 )
                {
                  v88 = HMUnlockObject(v44);
                  if ( v88 )
                    DestroySMWP(v88);
                  return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_37:
  v25 = *((_DWORD *)v2 + 6);
  v26 = 0;
  LOBYTE(v105) = 0;
  if ( (v25 & 2) != 0 )
  {
    v27 = (struct _HANDLEENTRY *)_HMPheFromObjectWorker(v2);
    IdentifyPrimaryDestroyTarget::Identify((Identify *)&v105, v27);
    v26 = v105;
  }
  if ( (*((_DWORD *)v2 + 6) & 2) == 0 )
  {
    v89 = v2 != (struct tagSMWP *)gSMWP;
    goto LABEL_149;
  }
  if ( (unsigned int)HMMarkObjectDestroy(v2) )
  {
    v89 = 1;
LABEL_149:
    v90 = *((_QWORD *)v2 + 5);
    if ( v90 )
    {
      v91 = *((_DWORD *)v2 + 7) - 1;
      if ( v91 >= 0 )
      {
        v92 = (_QWORD *)(v90 + 120);
        do
        {
          if ( *v92 )
            GreDeleteObject(*v92);
          v92 += 21;
          --v91;
        }
        while ( v91 >= 0 );
      }
      if ( v89 )
        Win32FreePool(*((void **)v2 + 5));
    }
    if ( (*((_DWORD *)v2 + 6) & 2) != 0 )
    {
      HMFreeObject(v2);
    }
    else if ( v89 )
    {
      Win32FreePool(v2);
    }
    else
    {
      gdwPUDFlags &= ~0x40000000u;
      if ( *((int *)v2 + 8) > 8 )
      {
        v93 = Win32AllocPoolZInit(672LL, 2004054869LL);
        if ( v93 )
        {
          Win32FreePool(*((void **)v2 + 5));
          *((_QWORD *)v2 + 5) = v93;
          *((_DWORD *)v2 + 8) = 4;
        }
      }
      *((_DWORD *)v2 + 6) &= ~4u;
    }
    if ( v26 )
      gphePrimaryDestroyTarget = 0LL;
    return 1LL;
  }
  IdentifyPrimaryDestroyTarget::~IdentifyPrimaryDestroyTarget((IdentifyPrimaryDestroyTarget *)&v105);
  return 1LL;
}
