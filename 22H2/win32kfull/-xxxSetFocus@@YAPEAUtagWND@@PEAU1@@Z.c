/*
 * XREFs of ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004B2B0
 * Callers:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000BB08 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     NtUserSetFocus @ 0x1C004B210 (NtUserSetFocus.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C00EB2AC (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02224C8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F78 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C004B720 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00D3128 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     ?IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C0220354 (-IsComponentThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C02203C8 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, PDEVICE_OBJECT a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rsi
  char v14; // cl
  PDEVICE_OBJECT **v15; // r12
  _DWORD *v16; // r13
  struct tagWND *v17; // r14
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int128 v28; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+60h] [rbp-38h]

  v3 = 0LL;
  v28 = 0LL;
  v5 = gptiCurrent;
  v29 = 0LL;
  v6 = gptiCurrent + 432LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == *(_QWORD *)v6
      || CoreWindowProp::IsHostThreadOf(gptiCurrent, a1)
      || (unsigned int)CoreWindowProp::IsComponentThreadOf(gptiCurrent, a1) )
    {
      v13 = a1;
      do
      {
        v14 = *(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL);
        if ( (v14 & 0x20) != 0 || (v14 & 8) != 0 )
        {
          v12 = 87LL;
          goto LABEL_71;
        }
        if ( (v14 & 0xC0) != 0x40 )
          break;
        v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
      }
      while ( v13 );
      *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v28;
      *((_QWORD *)&v28 + 1) = v13;
      if ( v13 )
        HMLockObject(v13);
      v15 = (PDEVICE_OBJECT **)(gptiCurrent + 464LL);
      v16 = (_DWORD *)(gptiCurrent + 680LL);
      v17 = *(struct tagWND **)(*(_QWORD *)v6 + 120LL);
      if ( a1 != v17 )
      {
        v18 = **v15;
        v19 = (unsigned int)(*v16 | LODWORD(v18->NextDevice));
        if ( ((*(_BYTE *)v16 | LOBYTE(v18->NextDevice)) & 0x40) != 0 )
        {
          v20 = 0LL;
          if ( v17 )
            v20 = *(_QWORD *)v17;
          if ( (unsigned int)xxxCallHook(9, *(_QWORD *)a1, v20, 5) )
          {
            v21 = 5LL;
LABEL_27:
            UserSetLastError(v21);
            ThreadUnlock1(v23, v22, v24);
            return 0LL;
          }
        }
        if ( v13 != *(struct tagWND **)(*(_QWORD *)v6 + 128LL) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v19) = 0;
          }
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              a3,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              4,
              2,
              92,
              (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
          }
          if ( *(_QWORD *)v6 == gpqForeground )
          {
            v18 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v19) = 0;
            }
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                a3,
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                4,
                2,
                93,
                (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
            goto LABEL_55;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v19) = 0;
          }
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              a3,
              94,
              4,
              2,
              94,
              (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
              *(_QWORD *)v13);
          if ( (unsigned __int8)anonymous_namespace_::FAllowForegroundActivate(v13, v19, a3) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL) & 0x10) == 0 )
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
            if ( !xxxForceForegroundWindowNoRestoreFocus((__int64)v13, 8LL, a3) )
            {
LABEL_57:
              v21 = 87LL;
              goto LABEL_27;
            }
          }
LABEL_55:
          if ( v13 != *(struct tagWND **)(*(_QWORD *)v6 + 128LL)
            && !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(v13) )
          {
            goto LABEL_57;
          }
        }
        v17 = *(struct tagWND **)(*(_QWORD *)v6 + 120LL);
        ThreadUnlock1(v18, v19, a3);
        *(_QWORD *)&v28 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v28;
        *((_QWORD *)&v28 + 1) = v17;
        if ( v17 )
          HMLockObject(v17);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      }
      v25 = *(_QWORD *)(*(_QWORD *)v6 + 120LL);
      if ( v25 )
        v5 = *(_QWORD *)(v25 + 16);
      v26 = *(_QWORD *)(v5 + 440);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 40);
        if ( *(_QWORD *)(SGDGetUserSessionState(v25) + 13928) != v27 )
        {
          a2 = **v15;
          if ( ((*v16 | LODWORD(a2->NextDevice)) & 0x800) != 0 )
          {
            *(_QWORD *)(SGDGetUserSessionState(v25) + 13928) = v27;
            xxxCallHook(8, 0LL, v27, 10);
          }
        }
      }
      if ( v17 )
        v3 = *(_QWORD *)v17;
      ThreadUnlock1(v25, a2, a3);
      goto LABEL_9;
    }
    v12 = 5LL;
LABEL_71:
    UserSetLastError(v12);
  }
  else
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) == 0 )
      goto LABEL_6;
    v7 = 0LL;
    v8 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
    if ( v8 )
      v7 = *v8;
    if ( !(unsigned int)xxxCallHook(9, 0LL, v7, 5) )
    {
LABEL_6:
      v9 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
      if ( v9 )
        v3 = *v9;
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
LABEL_9:
      LOBYTE(v10) = 1;
      return (struct tagWND *)HMValidateHandleNoSecure(v3, v10);
    }
  }
  return 0LL;
}
