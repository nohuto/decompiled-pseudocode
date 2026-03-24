/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0007AA0 (xxxSwitchToThisWindow.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0027BBC (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039B68 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     ?xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z @ 0x1C0126250 (-xxxStubSetForegroundWindow@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C012A880 (NtUserSetForegroundWindowForApplication.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C0240428 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DB50 (PostIAMShellHookMessageEx.c)
 *     IAMThreadAccessGranted @ 0x1C0037FF4 (IAMThreadAccessGranted.c)
 *     GetNonChildAncestor @ 0x1C00389C8 (GetNonChildAncestor.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AF8C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B5B0 (_GhostWindowFromHungWindow.c)
 *     WPP_RECORDER_SF_s @ 0x1C003B844 (WPP_RECORDER_SF_s.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CB30 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsTrayWindow @ 0x1C005EB30 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00C202C (WPP_RECORDER_SF_qqq.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012C918 (IsImmersiveBandOrShellManaged.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C0132A58 (DSW_GetTopLevelCreatorWindow.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // bp
  char v5; // di
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v8; // rsi
  bool v9; // r12
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r13
  int v13; // edx
  const char *v14; // rax
  bool v15; // al
  __int64 v16; // rdx
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r9d
  int v22; // r15d
  const char *v23; // rax
  __int64 v24; // r8
  __int64 NonChildAncestor; // rax
  __int64 *TopLevelCreatorWindow; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // rax
  _DWORD *v31; // rax
  __int64 v32; // rcx
  __int64 ThreadWin32Thread; // rax
  char v34; // [rsp+40h] [rbp-88h]
  int v35; // [rsp+44h] [rbp-84h]
  int CanSetForegroundWindow; // [rsp+48h] [rbp-80h]
  __int64 v37; // [rsp+50h] [rbp-78h]
  __int128 v38; // [rsp+58h] [rbp-70h] BYREF
  __int64 v39; // [rsp+68h] [rbp-60h]
  _QWORD v40[11]; // [rsp+70h] [rbp-58h] BYREF
  bool v41; // [rsp+D0h] [rbp+8h]
  char v42; // [rsp+E0h] [rbp+18h]
  char v43; // [rsp+E8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  v41 = 0;
  v4 = 0;
  v5 = 1;
  v6 = a2;
  v34 = 1;
  v7 = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
  v38 = 0LL;
  v9 = v8 == gpqForeground;
  v35 = a3 & 0x1000;
  v39 = 0LL;
  v37 = GhostWindowFromHungWindow(a1, a2, a3, a4);
  if ( v37 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v7 = v37;
    *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
    *((_QWORD *)&v38 + 1) = v37;
    HMLockObject(v37);
  }
  if ( v8 == gpqForeground )
  {
    v12 = *(_QWORD *)(gptiCurrent + 432LL);
    v41 = gpqForeground == v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 2, 39, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = "Synchronously";
        if ( gpqForeground != v12 )
          v14 = "Async";
        WPP_RECORDER_SF_s(
          (unsigned int)"Async",
          v13,
          2,
          40,
          (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
          (__int64)v14);
      }
    }
LABEL_9:
    v15 = v41;
    goto LABEL_10;
  }
  v18 = 2;
  CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, v6);
  v22 = CanSetForegroundWindow;
  if ( CanSetForegroundWindow == 2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = "Removed";
      if ( v35 )
        v23 = "Preserved";
      WPP_RECORDER_SF_s(
        (unsigned int)"Preserved",
        v19,
        2,
        41,
        (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
        (__int64)v23);
    }
    if ( !v35 )
      anonymous_namespace_::RemoveForegroundActivate(v11, v19, v20, v21);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_(v11, v19, 2, 42, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    }
    if ( (unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, v42 & 0x7F) )
    {
      v4 = 1;
    }
    else
    {
      v4 = 0;
      if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
        && *(char *)(*(_QWORD *)(v7 + 40) + 19LL) >= 0
        && !IAMThreadAccessGranted(gptiCurrent)
        && *(_DWORD *)(v24 + 236) != 15
        && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
      {
        NonChildAncestor = GetNonChildAncestor(v7);
        TopLevelCreatorWindow = (__int64 *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x22u, *TopLevelCreatorWindow);
      }
    }
    goto LABEL_9;
  }
  v34 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v7 )
      v27 = *(_QWORD *)(v7 + 16);
    else
      LOBYTE(v27) = 0;
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_qqq(
      v11,
      v19,
      2,
      43,
      (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids,
      gptiCurrent,
      v7,
      v27);
    v22 = CanSetForegroundWindow;
  }
  if ( (v43 & 1) != 0 )
  {
    v28 = GetNonChildAncestor(v7);
    v29 = (__int64 *)DSW_GetTopLevelCreatorWindow(v28);
    if ( !(unsigned int)IsTrayWindow(v29) )
    {
      v29 = (__int64 *)v7;
      v18 = 3;
    }
    if ( *(_DWORD *)(v29[5] + 236) != 15 )
    {
      if ( (unsigned int)IsImmersiveBandOrShellManaged(v29) )
      {
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 456LL), 0x22u, *v29);
      }
      else
      {
        v40[2] = 0LL;
        v30 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v40[0] = *(_QWORD *)(v30 + 416);
        *(_QWORD *)(v30 + 416) = v40;
        v40[1] = v29;
        HMLockObject(v29);
        v31 = (_DWORD *)UPDWORDPointer(8196LL);
        xxxFlashWindow((__int64)v29, v18 | ((unsigned __int16)*v31 << 16) | 0xC, 0);
        ThreadUnlock1(v32);
      }
    }
  }
  if ( v22 == 1 )
  {
    v15 = 0;
  }
  else
  {
    v9 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL);
    if ( *(_QWORD *)(gptiCurrent + 432LL) == v11 )
    {
LABEL_32:
      LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0;
      if ( (_BYTE)v11 != 64 && anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7, 0, 128) )
        goto LABEL_13;
      v4 = 0;
      goto LABEL_14;
    }
    v15 = 0;
  }
LABEL_10:
  if ( !v9 )
    goto LABEL_14;
  if ( v15 )
    goto LABEL_32;
  v11 = *(_QWORD *)(v7 + 16);
  v16 = *(_QWORD *)(v11 + 432);
  if ( v7 == *(_QWORD *)(v16 + 120) )
  {
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v4 = (unsigned int)PostEventMessageEx(
                       (struct tagTHREADINFO *)v11,
                       (struct tagQ *)v16,
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_14:
  if ( v37 )
    ThreadUnlock1(v11);
  if ( !v34 || !v4 )
    return 0;
  return v5;
}
