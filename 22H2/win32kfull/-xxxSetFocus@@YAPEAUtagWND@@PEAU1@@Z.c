/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034370
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     NtUserSetFocus @ 0x1C00342A0 (NtUserSetFocus.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00371DC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C007E820 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240A10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 * Callees:
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00346D4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039E68 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DA08 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B6A0 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006B6E8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0122530 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C01322A0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  struct tagWND *v4; // rsi
  char v5; // cl
  __int64 v6; // rax
  struct tagWND *v7; // r14
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 *v21; // rcx
  __int64 v22; // rcx
  _QWORD *i; // rsi
  const struct tagWND *v24; // rcx
  __int64 v25; // rcx
  __int128 v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( !a1 )
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0 )
    {
      v20 = 0LL;
      v21 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      if ( v21 )
        v20 = *v21;
      if ( (unsigned int)xxxCallHook(9, 0LL, v20, 5) )
        return 0LL;
    }
    v18 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( v18 )
      v1 = *v18;
    anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
LABEL_25:
    LOBYTE(v15) = 1;
    return (struct tagWND *)HMValidateHandleNoSecure(v1, v15);
  }
  v3 = *((_QWORD *)a1 + 2);
  if ( *(_QWORD *)(v3 + 432) != *(_QWORD *)(gptiCurrent + 432LL) && !CoreWindowProp::IsHostThreadOf(gptiCurrent, a1) )
  {
    v28 = 0LL;
    if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v28) )
    {
      for ( i = *(_QWORD **)(v28 + 32); i; i = (_QWORD *)*i )
      {
        v24 = (const struct tagWND *)i[1];
        if ( v24 && (unsigned int)CoreWindowProp::IsComponent(v24) && gptiCurrent == *(_QWORD *)(i[1] + 16LL) )
          goto LABEL_3;
      }
    }
    v19 = 5LL;
LABEL_41:
    UserSetLastError(v19);
    return 0LL;
  }
LABEL_3:
  v4 = a1;
  do
  {
    v5 = *(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL);
    if ( (v5 & 0x20) != 0 || (v5 & 8) != 0 )
    {
      v19 = 87LL;
      goto LABEL_41;
    }
    LOBYTE(v3) = v5 & 0xC0;
    if ( (_BYTE)v3 != 64 )
      break;
    v4 = (struct tagWND *)*((_QWORD *)v4 + 13);
  }
  while ( v4 );
  *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v26;
  *((_QWORD *)&v26 + 1) = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = *(_QWORD *)(gptiCurrent + 432LL);
  v7 = *(struct tagWND **)(v6 + 112);
  if ( a1 == v7 )
  {
LABEL_16:
    v11 = *(_QWORD *)(v6 + 112);
    if ( v11 )
      v12 = *(_QWORD *)(v11 + 16);
    else
      v12 = gptiCurrent;
    v13 = *(_QWORD *)(v12 + 440);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      if ( gLCIDSentToShell != v14
        && ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) != 0 )
      {
        gLCIDSentToShell = v14;
        xxxCallHook(8, 0LL, v14, 10);
      }
    }
    if ( v7 )
      v1 = *(_QWORD *)v7;
    ThreadUnlock1(v3);
    goto LABEL_25;
  }
  v8 = *(_QWORD *)(gptiCurrent + 464LL);
  v9 = *(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)v8 + 16LL);
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v8 + 16LL)) & 0x40) == 0 )
    goto LABEL_12;
  v17 = 0LL;
  if ( v7 )
    v17 = *(_QWORD *)v7;
  if ( !(unsigned int)xxxCallHook(9, *(_QWORD *)a1, v17, 5) )
  {
LABEL_12:
    v10 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( v4 == *(struct tagWND **)(v10 + 120) )
    {
LABEL_13:
      v7 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
      ThreadUnlock1(v10);
      *(_QWORD *)&v26 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v26;
      *((_QWORD *)&v26 + 1) = v7;
      if ( v7 )
        HMLockObject(v7);
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      v6 = *(_QWORD *)(gptiCurrent + 432LL);
      goto LABEL_16;
    }
    if ( v10 == gpqForeground )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(v10, v9, 2, 44, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
      }
    }
    else if ( (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v4) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 31LL) & 0x10) == 0 )
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
      if ( !(unsigned __int8)xxxForceForegroundWindowNoRestoreFocus(v4, 8LL) )
        goto LABEL_51;
    }
    if ( v4 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
      || (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(v4) )
    {
      goto LABEL_13;
    }
LABEL_51:
    v25 = 87LL;
    goto LABEL_52;
  }
  v25 = 5LL;
LABEL_52:
  UserSetLastError(v25);
  ThreadUnlock1(v22);
  return 0LL;
}
