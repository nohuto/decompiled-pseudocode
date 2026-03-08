/*
 * XREFs of ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C
 * Callers:
 *     ?xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z @ 0x1C0014C34 (-xxxProcessShowWindowEvent@@YAXPEAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@_K_J@Z.c)
 *     ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002990C (-xxxShowWindow@@YAHPEAUtagWND@@K@Z.c)
 *     NtUserShowWindow @ 0x1C002AD30 (NtUserShowWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowPos @ 0x1C0067A30 (NtUserSetWindowPos.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxShowScrollBar @ 0x1C0234CF4 (xxxShowScrollBar.c)
 * Callees:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0011794 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0014F28 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0027B98 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?xxxGetShellShowWindowCommand@@YA?AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@Z @ 0x1C002B660 (-xxxGetShellShowWindowCommand@@YA-AUShowCommandAndSource@@PEAUtagWND@@EAEBUtagUSERSTARTUPINFO@@@.c)
 *     _FChildVisible @ 0x1C002B72C (_FChildVisible.c)
 *     SetVisible @ 0x1C002DB8C (SetVisible.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00DBF58 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z @ 0x1C00F8A64 (-TraceLoggingShowWindowDPIAwarenessEvent@@YAXQEAUtagWND@@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00FAA10 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00FAFB4 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     xxxSendSizeMessage @ 0x1C00FF5DC (xxxSendSizeMessage.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C02209E0 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C02278C0 (xxxMinimizeHungWindow.c)
 *     ?xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z @ 0x1C0227DC4 (-xxxShowWindowViaStartupInfo@@YAXPEAUtagWND@@UShowCommandAndSource@@PEAUtagUSERSTARTUPINFO@@@Z.c)
 */

__int64 __fastcall xxxShowWindowEx(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  _BYTE *v3; // r9
  int v6; // r12d
  int v7; // r14d
  int v8; // edx
  char v9; // cl
  char v10; // r15
  char v11; // di
  __int64 v12; // r11
  unsigned int v13; // r15d
  __int64 v14; // r13
  __int64 v15; // r8
  int v16; // r10d
  int v17; // r10d
  __int64 ShellShowWindowCommand; // rax
  unsigned int v19; // r8d
  __m128i v20; // xmm6
  __int64 v21; // xmm1_8
  int v22; // edx
  unsigned __int8 v23; // r13
  char v24; // al
  int v25; // edx
  __int32 v26; // r9d
  int v27; // edx
  int v28; // edx
  int v29; // r8d
  struct _DEVICE_OBJECT *v30; // r10
  void *v31; // r11
  int v32; // r14d
  const struct tagWND *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r12
  int v36; // ecx
  unsigned int v37; // esi
  bool v38; // al
  int v39; // r8d
  unsigned int v40; // eax
  unsigned int v41; // esi
  struct tagWND *v42; // rdx
  BOOL v43; // r8d
  __int64 v44; // r9
  __m128i v46; // [rsp+58h] [rbp-49h] BYREF
  __int64 v47; // [rsp+68h] [rbp-39h]
  int v48; // [rsp+78h] [rbp-29h]
  __int64 v49; // [rsp+80h] [rbp-21h]
  __m128i v50; // [rsp+88h] [rbp-19h] BYREF
  __int64 v51; // [rsp+98h] [rbp-9h]
  __int128 v52; // [rsp+A0h] [rbp-1h] BYREF

  v3 = *(_BYTE **)(a1 + 40);
  v6 = a2;
  v7 = 3;
  v8 = 0;
  v9 = v3[31];
  v10 = v3[25];
  v49 = gptiCurrent;
  v11 = 1;
  v12 = *(_QWORD *)(gptiCurrent + 424LL);
  v13 = v9 & 0x10 | v10 & 8;
  v14 = v12 + 780;
  v15 = *(unsigned int *)(v12 + 800);
  v16 = *(_DWORD *)(v12 + 800);
  *(_QWORD *)&v52 = v12 + 780;
  v17 = v16 & 1;
  if ( !v17 || (v9 & 0xC0) == 0x40 || (v3[30] & 0xC0) != 0xC0 || *(_QWORD *)(a1 + 120) || (v8 = 1, v6 != 1) && v6 != 5 )
  {
    if ( (_BYTE)v6 != 10 )
      goto LABEL_11;
    if ( !v17 )
      goto LABEL_10;
  }
  LOBYTE(v6) = *(_BYTE *)(v12 + 804);
  v8 = 1;
  if ( (_BYTE)v6 == 10 )
LABEL_10:
    LOBYTE(v6) = 1;
LABEL_11:
  if ( v8 )
  {
    *(_DWORD *)(v12 + 800) = v15 & 0xFFFFFFF8;
    TraceLoggingShowWindowDPIAwarenessEvent((struct tagWND *const)a1);
  }
  LOBYTE(v15) = v6;
  ShellShowWindowCommand = xxxGetShellShowWindowCommand(&v46, a1, v15, v14);
  v20 = *(__m128i *)ShellShowWindowCommand;
  v50 = v20;
  v21 = *(_QWORD *)(ShellShowWindowCommand + 16);
  v51 = v21;
  if ( v20.m128i_i8[4] == -1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = 30;
      LOBYTE(v22) = v11;
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qd(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v19,
        (_DWORD)gFullLog,
        4,
        22,
        30,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        *(_QWORD *)a1,
        v13);
    }
    return v13;
  }
  v23 = _mm_cvtsi128_si32(_mm_srli_si128(v20, 4));
  v50.m128i_i8[4] = v23;
  if ( v23 == 21 )
  {
    v24 = WindowArrangement::xxxSetSnapArrangementPos(a1, &v50.m128i_u64[1], 0LL, 0LL);
    v26 = 0;
    if ( v24 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v11 = 0;
      }
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 31;
        LOBYTE(v27) = v11;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v27,
          v19,
          0,
          4,
          22,
          31,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids);
      }
      return v13;
    }
    if ( (_BYTE)v6 == v50.m128i_i8[4] )
    {
      v48 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 735LL);
      v26 = 0;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v25) = 0;
    }
    LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v25,
        v19,
        0,
        3,
        22,
        32,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids);
      v26 = 0;
    }
    v21 = v51;
    v23 = v6;
    v50.m128i_i8[4] = v6;
    v50.m128i_i32[0] = 0;
    v20 = v50;
  }
  else
  {
    v26 = v50.m128i_i32[0];
  }
  if ( v26
    && ShellWindowManagement::BehaviorEnabled(
         *(ShellWindowManagement **)(a1 + 24),
         (const struct tagDESKTOP *)0x10,
         v19) )
  {
    if ( WPP_GLOBAL_Control == v30
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
      || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v28) = 0;
    }
    if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != v31 )
    {
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != v31;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v28,
        v29,
        v26,
        4,
        22,
        33,
        (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
        *(_QWORD *)a1);
      v21 = v51;
      v26 = v50.m128i_i32[0];
      v20 = v50;
    }
    a3 |= 0x20u;
    v7 = 1048579;
  }
  if ( v23 > 7u )
  {
    if ( v23 == 8 )
    {
      v32 = v7 | 0x50;
LABEL_97:
      v35 = v49;
      goto LABEL_98;
    }
    if ( v23 == 9 )
      goto LABEL_88;
    if ( v23 == 11 )
    {
      xxxMinimizeHungWindow((struct tagWND *)a1);
      return v13;
    }
    if ( v23 == 17 )
    {
      v50.m128i_i8[4] = 3;
    }
    else
    {
      if ( v23 != 18 )
      {
        if ( v23 == 19 )
        {
          v50.m128i_i8[4] = 3;
        }
        else
        {
          if ( v23 != 20 )
            goto LABEL_78;
          v50.m128i_i8[4] = 9;
        }
        v37 = a3 | 0x70;
        goto LABEL_81;
      }
      v50.m128i_i8[4] = 9;
    }
    v37 = a3 | 0x30;
LABEL_81:
    v34 = v37;
    v46 = v50;
LABEL_82:
    v47 = v21;
    v33 = (const struct tagWND *)a1;
    goto LABEL_66;
  }
  switch ( v23 )
  {
    case 7u:
      goto LABEL_60;
    case 0u:
      if ( !v13 )
        return v13;
      v35 = v49;
      v36 = 148;
      if ( a1 == *(_QWORD *)(*(_QWORD *)(v49 + 432) + 128LL) )
        v36 = 128;
      v32 = v36 | v7;
LABEL_98:
      v40 = v23 != 0;
      if ( v40 == v13 )
        goto LABEL_101;
      goto LABEL_99;
    case 1u:
      goto LABEL_88;
    case 2u:
LABEL_60:
      v46 = v20;
      v47 = v21;
      xxxMinimizeWindowViaMinMax((const struct tagWND *)a1, (__int64)&v46, a3);
      return v13;
    case 3u:
      v46 = v20;
      v47 = v21;
      v33 = (const struct tagWND *)a1;
      if ( v26 != 1 )
      {
        v34 = a3;
LABEL_66:
        xxxShowWindowViaMinMax(v33, (__int64)&v46, v34);
        return v13;
      }
LABEL_64:
      xxxShowWindowViaStartupInfo(v33, &v46, v52);
      return v13;
  }
  if ( v23 != 4 )
  {
    if ( v23 != 5 )
    {
      if ( v23 == 6 )
        goto LABEL_60;
LABEL_78:
      UserSetLastError(1449LL);
      return v13;
    }
    if ( v13 )
      return v13;
    v32 = v7 | 0x40;
    goto LABEL_97;
  }
LABEL_88:
  v33 = (const struct tagWND *)a1;
  if ( v26 == 1 )
  {
    v46 = v20;
    v47 = v21;
    goto LABEL_64;
  }
  v38 = IsSemiMaximized((const struct tagWND *)a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x21) != 0 || v38 )
  {
    v34 = a3 | (4 * v38);
    v46 = v20;
    goto LABEL_82;
  }
  if ( v13 )
    return v13;
  v32 = v7 | 0x40;
  if ( v23 != 4 )
    goto LABEL_97;
  v35 = v49;
  v32 = v39 | 0x54;
  v40 = 1;
LABEL_99:
  v41 = v40;
  xxxSendMessage(a1, 24LL, v40, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 1) == 0 )
    xxxSendMessage(a1, 9LL, v41, 0LL);
LABEL_101:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 9LL) & 8) == 0 || ((v23 - 1) & 0xFB) != 0 )
      goto LABEL_106;
    xxxActivateWindow((struct tagWND *)a1);
  }
  v32 |= 0x14u;
LABEL_106:
  if ( (unsigned int)FChildVisible(a1) )
  {
    xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, v32);
    if ( (v32 & 0x100000) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) == 0
        || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v42) = 0;
      }
      LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v42,
          v43,
          (_DWORD)gFullLog,
          4,
          22,
          16,
          (__int64)&WPP_3f78c04d49003d4f1c93f80039781261_Traceguids,
          a1,
          v32);
      LOBYTE(v42) = 1;
      NotifyShell::TrackedWindowPosChanged((NotifyShell *)a1, v42, v43);
    }
  }
  else
  {
    SetVisible((struct tagWND *)a1);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 0x10) != 0 )
  {
    SetOrClrWF(0LL, a1, 16LL, 1LL);
    xxxSendSizeMessage((struct tagWND *)a1);
    v44 = *(_QWORD *)(a1 + 104);
    v52 = *(_OWORD *)(*(_QWORD *)(v44 + 40) + 104LL);
    TransformRectBetweenCoordinateSpaces(&v52, &v52, a1, v44);
    GetDesktopWindow(a1, *(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 108LL));
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((struct tagWND *)a1, 3u, 0, 0, 0LL, 1, 0);
  }
  if ( !v23 )
  {
    if ( *(_QWORD *)(v35 + 432) == gpqForeground && a1 == *(_QWORD *)(gpqForeground + 128LL) )
      xxxActivateWindowWithOptions(a1, 2LL, 57LL, 1LL);
    else
      xxxMoveFocusAway((const struct tagWND *)a1);
  }
  return v13;
}
