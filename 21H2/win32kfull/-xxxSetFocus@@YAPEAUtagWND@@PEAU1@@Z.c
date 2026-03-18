/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC
 * Callers:
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C0063110 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     NtUserSetFocus @ 0x1C00A7910 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00AECA8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023F3A8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00821A8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00FFB08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C01513C0 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rsi
  char v7; // cl
  __int64 v8; // rax
  struct tagWND *v9; // r14
  PDEVICE_OBJECT *v10; // rax
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rax
  __int64 v18; // r8
  char v19; // al
  void *v20; // r9
  int v21; // edx
  __int64 *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 v32; // [rsp+50h] [rbp-48h] BYREF
  __int64 v33; // [rsp+60h] [rbp-38h]
  __int64 v34; // [rsp+A0h] [rbp+8h] BYREF

  LODWORD(v3) = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
    {
      v24 = 0LL;
      v25 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v25 )
        v24 = *v25;
      if ( (unsigned int)xxxCallHook(9, 0LL, v24, 5) )
        return 0LL;
    }
    v22 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( v22 )
      v3 = *v22;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
    return (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v5 + 432) != *(_QWORD *)(gptiCurrent + 432LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    v34 = 0LL;
    if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v34) )
    {
      for ( i = *(_QWORD **)(v34 + 40); i; i = (_QWORD *)*i )
      {
        v27 = (const struct tagWND *)i[1];
        if ( v27 && (unsigned int)CoreWindowProp::IsComponent(v27) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
          goto LABEL_3;
      }
    }
    v23 = 5LL;
LABEL_51:
    UserSetLastError(v23, a2);
    return 0LL;
  }
LABEL_3:
  v6 = a1;
  do
  {
    v7 = *(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL);
    if ( (v7 & 0x20) != 0 || (v7 & 8) != 0 )
    {
      v23 = 87LL;
      goto LABEL_51;
    }
    LOBYTE(v5) = v7 & 0xC0;
    if ( (_BYTE)v5 != 64 )
      break;
    v6 = (struct tagWND *)*((_QWORD *)v6 + 13);
  }
  while ( v6 );
  *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v32;
  *((_QWORD *)&v32 + 1) = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  v9 = *(struct tagWND **)(v8 + 112);
  if ( a1 == v9 )
  {
LABEL_16:
    v13 = *(_QWORD *)(v8 + 112);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      v14 = gptiCurrent;
    v15 = *(_QWORD *)(v14 + 440);
    if ( v15 )
    {
      v15 = *(_QWORD *)(v15 + 40);
      if ( gLCIDSentToShell != v15 )
      {
        v16 = *(__int64 **)(gptiCurrent + 464LL);
        a2 = *v16;
        if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v16 + 16)) & 0x800) != 0 )
        {
          gLCIDSentToShell = v15;
          xxxCallHook(8, 0LL, v15, 10);
        }
      }
    }
    if ( v9 )
      v3 = *(_QWORD *)v9;
    ThreadUnlock1(v5, a2, v15);
    return (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  }
  v10 = *(PDEVICE_OBJECT **)(gptiCurrent + 464LL);
  v11 = *v10;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | LOBYTE((*v10)->NextDevice)) & 0x40) == 0 )
    goto LABEL_12;
  v18 = 0LL;
  if ( v9 )
    v18 = *(_QWORD *)v9;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v18, 5) )
  {
LABEL_12:
    v12 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v6 == *(struct tagWND **)(v12 + 120) )
    {
LABEL_13:
      v9 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      ThreadUnlock1(v11, v12, a3);
      *(_QWORD *)&v32 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v32;
      *((_QWORD *)&v32 + 1) = v9;
      if ( v9 )
        HMLockObject(v9);
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      v8 = *(_QWORD *)(gptiCurrent + 432LL);
      goto LABEL_16;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v19 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v19 = 0;
    }
    v20 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = 71;
      LOBYTE(v21) = v19;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        a3,
        (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        4,
        2,
        71,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      v12 = *(_QWORD *)(gptiCurrent + 432LL);
      v20 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
    }
    if ( v12 == gpqForeground )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          a3,
          (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          4,
          2,
          72,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          a3,
          (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          4,
          2,
          73,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          (char)v6);
      if ( (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v6, v12, a3, v20) )
      {
        if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 31LL) & 0x10) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
        if ( !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v6, 8LL) )
          goto LABEL_78;
      }
    }
    if ( v6 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
      || anonymous_namespace_::xxxLocalActivateWindow(v6, 0, 0) )
    {
      goto LABEL_13;
    }
LABEL_78:
    v28 = 87LL;
    goto LABEL_79;
  }
  v28 = 5LL;
LABEL_79:
  UserSetLastError(v28, v12);
  ThreadUnlock1(v30, v29, v31);
  return 0LL;
}
