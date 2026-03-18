/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x1C00AAD40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A6180 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     IsProcessedByInputService @ 0x1C00ADE20 (IsProcessedByInputService.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  char v17; // si
  __int64 v18; // rdx
  int v19; // r8d
  __int64 v20; // rdi
  int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int16 v25; // ax
  int v26; // r15d
  char v27; // al
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // eax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  unsigned __int64 v36; // rdi
  int v37; // r8d
  __int64 v38; // rax
  int v39; // [rsp+78h] [rbp-39h] BYREF
  int v40; // [rsp+7Ch] [rbp-35h]
  __int64 v41; // [rsp+80h] [rbp-31h] BYREF
  __int64 v42; // [rsp+88h] [rbp-29h] BYREF
  __int64 v43; // [rsp+90h] [rbp-21h] BYREF
  __int128 v44; // [rsp+98h] [rbp-19h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-9h]

  v17 = 1;
  v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464);
  if ( !*(_QWORD *)(v18 + 56)
    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
    && !a4
    && (gafAsyncKeyState[4] & 0x10) != 0
    && (a5 == 9 && (a6 & 1) == 0 || a5 == 27 && (a6 & 2) == 0) )
  {
    v45 = 0LL;
    v44 = 0LL;
    v29 = gpqForeground;
    if ( !gpqForeground )
      v29 = *(_QWORD *)(gptiRit + 432LL);
    ++*(_DWORD *)(v29 + 392);
    PushW32ThreadLock(v29, &v44, UnlockQueue);
    xxxNextWindow(v29, a5);
    PopAndFreeAlwaysW32ThreadLock((__int64)&v44);
    return 0LL;
  }
  if ( !gpqForeground )
  {
    if ( !a4 && ((*gpsi & 0x2000) != 0 || (*gpsi & 0x4000) != 0) && (unsigned __int8)(a5 + 83) <= 6u )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v17 = 0;
      }
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = v17;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v19,
          (unsigned int)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
          4,
          2,
          13,
          (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
      }
      CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      _PostShellHookMsgWorker(
        *(_DWORD *)(gpsi + 928LL),
        12LL,
        (unsigned __int64)(unsigned __int16)(a5 - 165) << 16,
        0LL);
    }
    return 0LL;
  }
  v20 = *(_QWORD *)(gpqForeground + 32LL);
  v21 = a5;
  v22 = *(_QWORD *)(gpqForeground + 96LL);
  v40 = a5;
  if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(v22) )
  {
    v23 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v23) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) != 0 )
      {
        v30 = PtiKbdFromQ(v24);
        if ( !(unsigned int)HasHidTable(v30)
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x400) == 0
          || (unsigned __int8)(a5 + 90) > 0x11u )
        {
          return 1LL;
        }
      }
    }
    v21 = a5;
  }
  if ( a5 == 0xE7 && (a8 & 0x1000) != 0 )
  {
    v21 |= a7 << 16;
    v25 = 0;
    v40 = v21;
  }
  else
  {
    v25 = a7;
  }
  LOWORD(v39) = v25;
  v26 = ((a9 | v25) << 16) | 1;
  if ( v20 )
  {
    if ( *(_DWORD *)(v20 + 24) == a15 && ((a15 - 256) & 0xFFFB) == 0 && *(_QWORD *)(v20 + 32) == v21 )
    {
      v31 = IsProcessedByInputService(v20);
      if ( !v31 && *(_WORD *)(v20 + 42) == HIWORD(v26) )
      {
        if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
          || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
        {
          v32 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL));
          CKeyboardProcessor::ForwardInputToISM(a1 != 0, v39, a8, a10, a13, a12, v32 == 0, a14, a16);
        }
        if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
        {
          *(_QWORD *)(v20 + 40) = (HIWORD(v26) << 16) | (unsigned __int16)(*(_WORD *)(v20 + 40) + 1);
          WakeSomeone(gpqForeground, 0LL, a15, (struct tagQMSG *)v20);
        }
        return 0LL;
      }
    }
  }
  if ( (unsigned __int8)(a5 + 90) > 0x11u )
    goto LABEL_15;
  if ( !a4 && gpqForeground )
  {
    if ( (unsigned __int8)(a5 + 83) <= 2u )
    {
      v33 = *(_QWORD *)(gpqForeground + 112LL);
      if ( v33 || (v33 = *(_QWORD *)(gpqForeground + 120LL)) != 0 )
      {
        v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 432LL);
        if ( v34 )
        {
          v36 = ((unsigned __int64)(unsigned __int16)(a5 - 165) << 16) | (unsigned __int16)GetMouseKeyFlags(v34);
          LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v35,
              v37,
              (unsigned int)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
              4,
              2,
              13,
              (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids);
          }
          CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
          _PostShellHookMsgWorker(*(_DWORD *)(gpsi + 928LL), 12LL, v36, 0LL);
        }
      }
    }
    else
    {
      PostEventMessageEx(*(struct tagTHREADINFO **)(gpqForeground + 96LL), gpqForeground, 0xFu, 0LL, 0, 0LL, a5, a11);
    }
  }
  if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
    || (v38 = PtiKbdFromQ(gpqForeground), !(unsigned int)HasHidTable(v38))
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424) + 832LL) + 100LL) & 0x20) == 0 )
  {
LABEL_15:
    if ( (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL))
      || (unsigned int)GetKeyboardInputRoutingPolicy() == 1 )
    {
      v27 = IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL));
      CKeyboardProcessor::ForwardInputToISM(a1 != 0, v39, a8, a10, a13, a12, v27 == 0, a14, a16);
    }
    if ( !(unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(gpqForeground + 96LL)) )
    {
      PostPendingMouseMove(gpqForeground);
      v42 = 0LL;
      v41 = 0LL;
      v43 = gpqForeground;
      v39 = 0;
      if ( (unsigned int)AdjustPwndPtiPqForDelegation(
                           (unsigned int)&v43,
                           (unsigned int)&v42,
                           (unsigned int)&v41,
                           a15,
                           (__int64)a11,
                           (__int64)&v39) )
        PostInputMessage(gpqForeground, 0LL, a15, v26, a12, 0LL, a14, 0, a11, a13, 0LL, v39, v41);
    }
    return 0LL;
  }
  return 1LL;
}
