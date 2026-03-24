/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C006ED1C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00333F4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040980 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C006BD30 (xxxSetWindowPosAndBand.c)
 *     xxxSetWindowRgn @ 0x1C010DEC0 (xxxSetWindowRgn.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C010F610 (NtUserEndDeferWindowPosEx.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C01246C0 (xxxProcessSetWindowPosEvent.c)
 *     xxxArrangeIconicWindows @ 0x1C015DED0 (xxxArrangeIconicWindows.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D7AFC (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     PostIAMShellHookMessageEx @ 0x1C002DAB0 (PostIAMShellHookMessageEx.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0035FF8 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     SetWindowGroupBand @ 0x1C0036648 (SetWindowGroupBand.c)
 *     xxxSetTrayWindow @ 0x1C003CE78 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C0043540 (PostShellHookMessages.c)
 *     SetOrClrWF @ 0x1C004DF08 (SetOrClrWF.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006DF90 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E8B8 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C006F450 (DestroySMWP.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C006F57C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006F5C4 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F670 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0070758 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0071524 (GreClientRgnUpdatedStable.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C00BFA20 (PushW32ThreadLock.c)
 *     xxxDoSyncPaint @ 0x1C00F4FD4 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C011132C (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C0111850 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 *     Feature_3645952312__private_IsEnabledDeviceUsage @ 0x1C0165CC4 (Feature_3645952312__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  struct tagSMWP *v3; // rdi
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v5; // r13
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  struct tagWND *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct tagSMWP *v15; // rax
  __int64 v16; // rcx
  struct tagCVR *v18; // rbx
  int v19; // r14d
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v28; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct tagWND *v33; // r14
  int v34; // ebx
  char valid; // al
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r15d
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // eax
  unsigned int v47; // edx
  int v48; // edx
  int v49; // ebx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  struct _KTHREAD *v54; // r14
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  int v60; // ebx
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx
  HWND v67; // [rsp+30h] [rbp-49h] BYREF
  __int128 v68; // [rsp+38h] [rbp-41h] BYREF
  __int64 v69; // [rsp+48h] [rbp-31h]
  __int128 v70; // [rsp+50h] [rbp-29h] BYREF
  __int64 (__fastcall *v71)(_QWORD); // [rsp+60h] [rbp-19h]
  __int64 v72; // [rsp+68h] [rbp-11h]
  __int128 v73; // [rsp+70h] [rbp-9h] BYREF
  __int64 v74; // [rsp+80h] [rbp+7h]
  _QWORD v75[9]; // [rsp+88h] [rbp+Fh] BYREF
  int v76; // [rsp+E0h] [rbp+67h] BYREF
  int v77; // [rsp+F0h] [rbp+77h]
  int v78; // [rsp+F8h] [rbp+7Fh]

  v67 = 0LL;
  v76 = 0;
  v3 = a1;
  v77 = 0;
  v73 = 0LL;
  v74 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_98;
  if ( !(unsigned int)ValidateSmwp(a1, &v76) )
    goto LABEL_98;
  ValidWindowPos = FindValidWindowPos(v3);
  if ( !ValidWindowPos )
    goto LABEL_98;
  v5 = *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v5 || !*(_QWORD *)(v5 + 24) )
    goto LABEL_98;
  if ( (unsigned int)Feature_3645952312__private_IsEnabledDeviceUsage() )
  {
    *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v68;
    *((_QWORD *)&v68 + 1) = v5;
    HMLockObject(v5);
  }
  v6 = 0;
  if ( *((int *)v3 + 7) > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)v3 + 5);
      v9 = *(_QWORD *)(v7 + v8);
      if ( v9 && *(_DWORD *)(v7 + v8 + 152) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(_HMObjectFromHandle(v9) + 40) + 236LL) != *(_DWORD *)(v7 + v8 + 152) )
        {
          v10 = *((_QWORD *)v3 + 5);
          v11 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v7 + v10));
          SetWindowGroupBand(v11, *(_DWORD *)(v7 + v10 + 152), 0);
        }
        *(_DWORD *)(v7 + *((_QWORD *)v3 + 5) + 152) = 0;
      }
      ++v6;
      v7 += 168LL;
    }
    while ( v6 < *((_DWORD *)v3 + 7) );
  }
  if ( a2 )
    AsyncWindowPos(v3);
  v12 = *(_QWORD *)(v5 + 24);
  v13 = 0LL;
  if ( v12 )
  {
    v14 = *(_QWORD *)(v12 + 8);
    if ( v14 )
      v13 = *(_QWORD *)(v14 + 24);
  }
  if ( v5 != v13 )
  {
LABEL_34:
    if ( !(unsigned int)Feature_3645952312__private_IsEnabledDeviceUsage() )
    {
      *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v68;
      *((_QWORD *)&v68 + 1) = v5;
      HMLockObject(v5);
    }
    if ( (*((_DWORD *)v3 + 6) & 2) != 0 )
    {
      HMLockObject(v3);
      PushW32ThreadLock(v3, &v70, UnrefAndDestroySMWP);
      v77 = 1;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v20)
        || (CurrentProcess = PsGetCurrentProcess(v24, v23, v25),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v28),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v22 = *ThreadWin32Thread;
      }
      *(_QWORD *)&v70 = *(_QWORD *)(v22 + 16);
      *(_QWORD *)(v22 + 16) = &v70;
      v71 = DestroySMWP;
      *((_QWORD *)&v70 + 1) = v3;
    }
    ++*(_DWORD *)(gptiCurrent + 1208LL);
    *((_DWORD *)v3 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v3, &v67) )
    {
      LOBYTE(v31) = 1;
      v33 = (struct tagWND *)HMValidateHandleNoSecure(v67, v31);
      *(_QWORD *)&v73 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v73;
      *((_QWORD *)&v73 + 1) = v33;
      if ( v33 )
        HMLockObject(v33);
      v34 = *(_DWORD *)(gptiCurrent + 900LL);
      v78 = v34;
      v72 = gptiForeground;
      valid = zzzBltValidBits((__int64)v3);
      LOBYTE(v37) = -(valid & 1);
      v38 = (valid & 1) != 0 ? v76 : 0;
      v76 = v38;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v3 + 6) & 1) != 0 )
      {
        v39 = *((int *)v3 + 7);
        if ( *((_DWORD *)v3 + 7) )
        {
          v40 = 168 * v39;
          do
          {
            v41 = *((_QWORD *)v3 + 5);
            v40 -= 168LL;
            --v39;
            v37 = *(_QWORD *)(v40 + v41);
            if ( v37 )
            {
              if ( (*(_DWORD *)(v40 + v41 + 32) & 0xF0000000) != 0 )
              {
                LOBYTE(v36) = 1;
                v42 = HMValidateHandleNoSecure(v37, v36);
                if ( v42 )
                {
                  v43 = *(_QWORD *)(gptiCurrent + 416LL);
                  v75[2] = 0LL;
                  v75[0] = v43;
                  *(_QWORD *)(gptiCurrent + 416LL) = v75;
                  v75[1] = v42;
                  HMLockObject(v42);
                  v44 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v40 + v44 + 32) & 0x10000000) != 0 )
                  {
                    if ( (*(_DWORD *)(v40 + v44 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x15u, *(_QWORD *)(v40 + v44));
                    }
                    else
                    {
                      PostShellHookMessages(1uLL, *(_QWORD *)(v40 + v44));
                      xxxCallHook(1, *(_QWORD *)(v40 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    }
                  }
                  v45 = *((_QWORD *)v3 + 5);
                  if ( (*(_DWORD *)(v40 + v45 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2uLL, *(_QWORD *)(v40 + v45));
                    xxxCallHook(2, *(_QWORD *)(v40 + *((_QWORD *)v3 + 5)), 0LL, 10);
                    v45 = *((_QWORD *)v3 + 5);
                  }
                  if ( (*(_DWORD *)(v40 + v45 + 32) & 0x40000000) != 0 )
                  {
                    v46 = *(_DWORD *)(v40 + v45 + 156);
                    if ( (v46 & 8) != 0 )
                    {
                      v47 = 23;
                    }
                    else
                    {
                      if ( (v46 & 0x10) == 0 )
                      {
                        xxxSetTrayWindow(*(_QWORD *)(v42 + 24), (unsigned __int64 *)v42);
                        v45 = *((_QWORD *)v3 + 5);
                      }
                      v47 = 19;
                    }
                    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), v47, *(_QWORD *)(v40 + v45));
                  }
                  if ( *(int *)(v40 + *((_QWORD *)v3 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 456LL), (unsigned __int64 *)1);
                  ThreadUnlock1(v44);
                }
              }
            }
          }
          while ( v39 );
          v34 = v78;
        }
        v38 = v76;
      }
      if ( gptiCurrent == v72 )
      {
        if ( v34 )
        {
          if ( !*(_DWORD *)(gptiCurrent + 900LL)
            && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
          {
            *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v48) = 4;
              WPP_RECORDER_SF_q(v37, v48, 2, 10, (__int64)&WPP_188f69cf96d039d288360eb464022a63_Traceguids, gptiCurrent);
            }
          }
        }
      }
      v49 = 0;
      if ( v33 )
        v49 = xxxSwpActivate(v33);
      if ( v38 )
        xxxDoSyncPaint(v5, 4LL);
      ThreadUnlock1(v37);
      if ( v49 )
      {
        v51 = *(_QWORD *)(gptiCurrent + 432LL);
        v52 = *(_QWORD *)(v51 + 120);
        if ( v52 )
        {
          SetOrClrWF(0, v52, 0x101u, 1);
          v51 = *(_QWORD *)(gptiCurrent + 432LL);
        }
        v50 = *(_QWORD *)(v51 + 128);
        if ( v50 )
          SetOrClrWF(0, v50, 0x101u, 1);
      }
      xxxSendChangedMsgs(v3, v50);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1208LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v54 = KeGetCurrentThread();
    v55 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v32)
      || (v59 = PsGetCurrentProcess(v57, v56, v58),
          v60 = PsGetProcessSessionIdEx(v59),
          v62 = PsGetCurrentThreadProcess(v61),
          v60 == (unsigned int)PsGetProcessSessionIdEx(v62)) )
    {
      v64 = (__int64 *)PsGetThreadWin32Thread(v54);
      if ( v64 )
        v55 = *v64;
    }
    *(_QWORD *)(v55 + 16) = v70;
    ThreadUnlock1(v63);
    if ( v77 )
    {
      v65 = HMUnlockObject(v3);
      if ( !v65 )
        return 1LL;
      v66 = v65;
LABEL_99:
      DestroySMWP(v66);
      return 1LL;
    }
LABEL_98:
    v66 = (__int64)v3;
    goto LABEL_99;
  }
  v15 = ZOrderByOwner(v3);
  v3 = v15;
  if ( v15 )
  {
    if ( a2 )
    {
      v18 = (struct tagCVR *)*((_QWORD *)v15 + 5);
      v19 = *((_DWORD *)v15 + 7);
      while ( --v19 >= 0 )
      {
        if ( *(_QWORD *)v18 && !(unsigned int)ValidateWindowPos(v18, 0LL) )
          *(_QWORD *)v18 = 0LL;
        v18 = (struct tagCVR *)((char *)v18 + 168);
      }
      AsyncWindowPos(v3);
    }
    goto LABEL_34;
  }
  if ( (unsigned int)Feature_3645952312__private_IsEnabledDeviceUsage() )
    ThreadUnlock1(v16);
  return 0LL;
}
