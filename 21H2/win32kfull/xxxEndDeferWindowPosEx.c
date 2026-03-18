/*
 * XREFs of xxxEndDeferWindowPosEx @ 0x1C004720C
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C009AE90 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009DA04 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowRgn @ 0x1C00F914C (xxxSetWindowRgn.c)
 *     NtUserEndDeferWindowPosEx @ 0x1C00FB8A0 (NtUserEndDeferWindowPosEx.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0043774 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     DestroySMWP @ 0x1C0047920 (DestroySMWP.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0047AA4 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047B50 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0047D8C (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     GreClientRgnUpdatedStable @ 0x1C0049624 (GreClientRgnUpdatedStable.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     SetWindowGroupBand @ 0x1C00810A4 (SetWindowGroupBand.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     xxxSetTrayWindow @ 0x1C00A5F60 (xxxSetTrayWindow.c)
 *     PostShellHookMessages @ 0x1C00A6110 (PostShellHookMessages.c)
 *     xxxDoSyncPaint @ 0x1C00C9754 (xxxDoSyncPaint.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00FDA38 (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00FE1F4 (-xxxSwpActivate@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxEndDeferWindowPosEx(struct tagSMWP *a1, int a2)
{
  int v2; // r15d
  struct tagSMWP *v4; // rbx
  struct tagWINDOWPOS *ValidWindowPos; // rax
  __int64 v6; // r13
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v15; // r12
  int v16; // esi
  char valid; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  PDEVICE_OBJECT v20; // rcx
  int v21; // r14d
  int v22; // esi
  __int64 v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 result; // rax
  struct tagCVR *v31; // rsi
  int v32; // r14d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  struct tagWND *v50; // rax
  HWND v51; // [rsp+50h] [rbp-49h] BYREF
  __int128 v52; // [rsp+58h] [rbp-41h] BYREF
  __int64 (__fastcall *v53)(_QWORD); // [rsp+68h] [rbp-31h]
  __int64 v54; // [rsp+70h] [rbp-29h]
  __int128 v55; // [rsp+78h] [rbp-21h] BYREF
  __int64 v56; // [rsp+88h] [rbp-11h]
  __int128 v57; // [rsp+90h] [rbp-9h] BYREF
  __int64 v58; // [rsp+A0h] [rbp+7h]
  _QWORD v59[9]; // [rsp+A8h] [rbp+Fh] BYREF
  int v60; // [rsp+100h] [rbp+67h]
  int v61; // [rsp+110h] [rbp+77h] BYREF
  int v62; // [rsp+118h] [rbp+7Fh]

  v2 = 0;
  v51 = 0LL;
  v61 = 0;
  v60 = 0;
  v4 = a1;
  v57 = 0LL;
  v58 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( !*((_DWORD *)a1 + 7) )
    goto LABEL_39;
  if ( !(unsigned int)ValidateSmwp(a1, &v61) )
    goto LABEL_39;
  ValidWindowPos = FindValidWindowPos(v4);
  if ( !ValidWindowPos )
    goto LABEL_39;
  v6 = *(_QWORD *)(_HMObjectFromHandle(*(_QWORD *)ValidWindowPos) + 104);
  if ( !v6 || !*(_QWORD *)(v6 + 24) )
    goto LABEL_39;
  v7 = 0;
  if ( *((int *)v4 + 7) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_QWORD *)v4 + 5);
      v10 = *(_QWORD *)(v8 + v9);
      if ( v10 && *(_DWORD *)(v8 + v9 + 152) )
      {
        v43 = _HMObjectFromHandle(v10);
        v44 = *((_QWORD *)v4 + 5);
        if ( *(_DWORD *)(*(_QWORD *)(v43 + 40) + 236LL) != *(_DWORD *)(v44 + v8 + 152) )
        {
          v50 = (struct tagWND *)_HMObjectFromHandle(*(_QWORD *)(v44 + v8));
          SetWindowGroupBand(v50);
          v44 = *((_QWORD *)v4 + 5);
        }
        *(_DWORD *)(v8 + v44 + 152) = 0;
      }
      ++v7;
      v8 += 168LL;
    }
    while ( v7 < *((_DWORD *)v4 + 7) );
    v2 = 0;
  }
  if ( a2 )
    AsyncWindowPos(v4);
  v11 = *(_QWORD *)(v6 + 24);
  if ( !v11 || (v12 = *(_QWORD *)(v11 + 8)) == 0 || v6 != *(_QWORD *)(v12 + 24) )
  {
LABEL_17:
    *(_QWORD *)&v55 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v55;
    *((_QWORD *)&v55 + 1) = v6;
    HMLockObject(v6);
    if ( (*((_DWORD *)v4 + 6) & 2) != 0 )
    {
      HMLockObject(v4);
      PushW32ThreadLock(v4, &v52, UnrefAndDestroySMWP);
      v2 = 1;
      v60 = 1;
    }
    else
    {
      v13 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v13 = *ThreadWin32Thread;
      *(_QWORD *)&v52 = *(_QWORD *)(v13 + 16);
      *(_QWORD *)(v13 + 16) = &v52;
      v53 = DestroySMWP;
      *((_QWORD *)&v52 + 1) = v4;
    }
    ++*(_DWORD *)(gptiCurrent + 1232LL);
    *((_DWORD *)v4 + 6) |= 4u;
    if ( (unsigned int)xxxCalcValidRects(v4, &v51) )
    {
      v15 = (struct tagWND *)HMValidateHandleNoSecure((int)v51, 1);
      *(_QWORD *)&v57 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v57;
      *((_QWORD *)&v57 + 1) = v15;
      if ( v15 )
        HMLockObject(v15);
      v16 = *(_DWORD *)(gptiCurrent + 900LL);
      v62 = v16;
      v54 = gptiForeground;
      valid = zzzBltValidBits(v4);
      LOBYTE(v20) = -(valid & 1);
      v21 = (valid & 1) != 0 ? v61 : 0;
      v61 = v21;
      if ( (valid & 2) != 0 )
        GenerateMouseMove(0LL);
      if ( (*((_DWORD *)v4 + 6) & 1) != 0 )
      {
        v34 = *((int *)v4 + 7);
        if ( *((_DWORD *)v4 + 7) )
        {
          v35 = 168 * v34;
          do
          {
            v36 = *((_QWORD *)v4 + 5);
            v35 -= 168LL;
            --v34;
            v20 = *(PDEVICE_OBJECT *)(v35 + v36);
            if ( v20 )
            {
              if ( (*(_DWORD *)(v35 + v36 + 32) & 0xF0000000) != 0 )
              {
                v37 = HMValidateHandleNoSecure((int)v20, 1);
                if ( v37 )
                {
                  v38 = *(_QWORD *)(gptiCurrent + 416LL);
                  v59[2] = 0LL;
                  v59[0] = v38;
                  *(_QWORD *)(gptiCurrent + 416LL) = v59;
                  v59[1] = v37;
                  HMLockObject(v37);
                  v40 = *((_QWORD *)v4 + 5);
                  if ( (*(_DWORD *)(v35 + v40 + 32) & 0x10000000) != 0 )
                  {
                    v41 = *(_QWORD *)(v35 + v40);
                    if ( (*(_DWORD *)(v35 + v40 + 156) & 8) != 0 )
                    {
                      PostIAMShellHookMessage(21LL, v41);
                    }
                    else
                    {
                      PostShellHookMessages(1LL, v41);
                      xxxCallHook(1, *(_QWORD *)(v35 + *((_QWORD *)v4 + 5)), 0LL, 10);
                    }
                  }
                  v42 = *((_QWORD *)v4 + 5);
                  if ( (*(_DWORD *)(v42 + v35 + 32) & 0x20000000) != 0 )
                  {
                    PostShellHookMessages(2LL, *(_QWORD *)(v42 + v35));
                    xxxCallHook(2, *(_QWORD *)(v35 + *((_QWORD *)v4 + 5)), 0LL, 10);
                    v42 = *((_QWORD *)v4 + 5);
                  }
                  if ( (*(_DWORD *)(v35 + v42 + 32) & 0x40000000) != 0 )
                  {
                    v45 = *(_DWORD *)(v35 + v42 + 156);
                    if ( (v45 & 8) != 0 )
                    {
                      v46 = 23LL;
                    }
                    else
                    {
                      if ( (v45 & 0x10) == 0 )
                      {
                        xxxSetTrayWindow(*(_QWORD *)(v37 + 24), v37);
                        v42 = *((_QWORD *)v4 + 5);
                      }
                      v46 = 19LL;
                    }
                    PostIAMShellHookMessage(v46, *(_QWORD *)(v35 + v42));
                  }
                  if ( *(int *)(v35 + *((_QWORD *)v4 + 5) + 32) < 0 )
                    xxxSetTrayWindow(*(_QWORD *)(gptiCurrent + 456LL), 1LL);
                  ThreadUnlock1(v40, v42, v39);
                }
              }
            }
          }
          while ( v34 );
          v16 = v62;
          v2 = v60;
        }
        v21 = v61;
      }
      if ( gptiCurrent == v54
        && v16
        && !*(_DWORD *)(gptiCurrent + 900LL)
        && !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
      {
        *(_DWORD *)(gptiCurrent + 488LL) |= 0x20u;
        v20 = WPP_GLOBAL_Control;
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            15,
            4,
            2,
            15,
            (__int64)&WPP_b070418cf9b83e0c1c6b283a126581e8_Traceguids,
            gptiCurrent);
      }
      v22 = 0;
      if ( v15 )
        v22 = xxxSwpActivate(v15);
      if ( v21 )
        xxxDoSyncPaint(v6, 4LL);
      ThreadUnlock1(v20, v18, v19);
      if ( v22 )
      {
        v47 = *(_QWORD *)(gptiCurrent + 432LL);
        v48 = *(_QWORD *)(v47 + 120);
        if ( v48 )
        {
          SetOrClrWF(0LL, v48, 257LL, 1LL);
          v47 = *(_QWORD *)(gptiCurrent + 432LL);
        }
        v49 = *(_QWORD *)(v47 + 128);
        if ( v49 )
          SetOrClrWF(0LL, v49, 257LL, 1LL);
      }
      xxxSendChangedMsgs(v4);
    }
    if ( (*(_DWORD *)(gptiCurrent + 1232LL))-- == 1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreClientRgnUpdatedStable();
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
    v24 = 0LL;
    v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v25 )
      v24 = *v25;
    *(_QWORD *)(v24 + 16) = v52;
    ThreadUnlock1(v27, v26, v28);
    if ( v2 )
    {
      v33 = HMUnlockObject(v4);
      if ( !v33 )
        return 1LL;
      v29 = v33;
LABEL_40:
      DestroySMWP(v29);
      return 1LL;
    }
LABEL_39:
    v29 = (__int64)v4;
    goto LABEL_40;
  }
  result = (__int64)ZOrderByOwner(v4);
  v4 = (struct tagSMWP *)result;
  if ( result )
  {
    if ( a2 )
    {
      v31 = *(struct tagCVR **)(result + 40);
      v32 = *(_DWORD *)(result + 28);
      while ( --v32 >= 0 )
      {
        if ( *(_QWORD *)v31 && !(unsigned int)ValidateWindowPos(v31, 0LL) )
          *(_QWORD *)v31 = 0LL;
        v31 = (struct tagCVR *)((char *)v31 + 168);
      }
      AsyncWindowPos(v4);
    }
    goto LABEL_17;
  }
  return result;
}
