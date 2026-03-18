/*
 * XREFs of PostInputMessage @ 0x1C00AB69C
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0001838 (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0001A18 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C0003AF8 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C009B5F0 (EditionPostRawMouseInputMessage.c)
 *     EditionPostInputMessage @ 0x1C00A9D30 (EditionPostInputMessage.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C00AAD40 (EditionHandleAndPostKeyEvent.c)
 *     EditionPostMouseMoveToQ @ 0x1C00AB330 (EditionPostMouseMoveToQ.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01D0B1C (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D3E94 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01DCA70 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01E8F50 (PostPointerEventMessage.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C021CF44 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C005806C (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00A9974 (IsAdaptiveQueueDetachExempted.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00ABB1C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00AC048 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C00AC37C (IsPointerInputMessageWithState.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     DwmAsyncNotifyInputActivity @ 0x1C00AC9F8 (DwmAsyncNotifyInputActivity.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C00AD78C (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C0116FD4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C0117934 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall PostInputMessage(
        struct tagQ *a1,
        struct tagWND *a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        char a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        void *a11,
        struct tagUIPI_INFO *a12,
        int a13,
        __int64 a14)
{
  int v14; // ebx
  struct tagINPUT_MESSAGE_SOURCE *v16; // r15
  BOOL v19; // r13d
  __int64 v20; // rsi
  unsigned __int64 v21; // r12
  __int64 result; // rax
  __int64 v23; // rsi
  int v24; // ebx
  char v25; // dl
  unsigned int v26; // ecx
  __int64 v27; // rcx
  unsigned __int64 v28; // r8
  void *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // rbx
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  struct _KEVENT *v36; // rcx
  __int64 v37; // rax
  int v38; // [rsp+20h] [rbp-88h]
  unsigned int v39; // [rsp+28h] [rbp-80h]
  struct tagTHREADINFO *v40; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+C8h] [rbp+20h] BYREF

  v41 = a4;
  v14 = a13;
  v16 = a10;
  v40 = (struct tagTHREADINFO *)(a14 & -(__int64)(a13 != 0));
  v19 = a10 && *((_DWORD *)a10 + 1) == 2;
  v20 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 97) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v21 = a7;
  if ( (a9 & 1) == 0 && v20 && (*(_DWORD *)(v20 + 100) & 2) == 0 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = (const struct tagQMSG *)GetCoalesceableMouseMessage(a3, &v41, v20, v16);
    v23 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage, v21);
      CleanInputMessage(a3, (struct tagQMSG *)v23);
LABEL_9:
      v24 = (*(_DWORD *)(v23 + 100) ^ (32 * v14)) & 0x20;
      *(_QWORD *)(v23 + 136) = v21;
      *(_DWORD *)(v23 + 100) ^= v24;
      if ( v21 )
      {
        v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v25,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)a1 + 24,
            v38,
            v39,
            0x14u,
            (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids);
      }
      if ( a2 )
        v26 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL);
      else
        v26 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(a1) + 424) + 280LL);
      StoreQMessage((struct tagQMSG *)v23, a2, a3, v41, a5, a6, v21, 0, a8, a9, v16, v26, a11, a12);
      InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v23, a1);
      if ( (unsigned int)IsPointerInputMessageWithState(a3) )
        CTouchProcessor::MarkPointerMessageGenerated(
          gpTouchProcessor,
          a3,
          *(_QWORD *)(v23 + 40),
          -__CFSHR__(*(_DWORD *)(v23 + 100), 6),
          (void *)v23);
      if ( (unsigned int)IsMiPMouseMessage(a3) )
      {
        if ( v16 )
        {
          if ( (unsigned int)IsGenuineMouseInput(v16) )
          {
            *(_DWORD *)(v23 + 100) |= 0x400u;
            if ( a2 )
              *(_DWORD *)(v23 + 100) ^= (*(_DWORD *)(v23 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                                   a2,
                                                                                   *(struct tagWND **)(v23 + 128),
                                                                                   v28) << 12)) & 0x1000;
          }
        }
      }
      if ( !v19 )
      {
        if ( a3 == 255 )
        {
LABEL_28:
          if ( a3 - 256 > 1 && a3 != 522 && a3 != 526 )
            goto LABEL_31;
          goto LABEL_33;
        }
        if ( tagQ::AreMultipleThreadsAttached(a1) )
        {
          v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464);
          if ( !*(_QWORD *)(v27 + 48) )
          {
            v27 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464);
            if ( !*(_QWORD *)(v27 + 56) )
            {
              v32 = 0;
              if ( a2 && (v34 = *((_QWORD *)a2 + 2), a2 == *(struct tagWND **)(v34 + 1392)) )
              {
                v32 = 1;
              }
              else
              {
                v33 = *((_QWORD *)a1 + 15);
                if ( !v33 )
                  goto LABEL_26;
                v34 = *(_QWORD *)(v33 + 16);
                if ( v33 != *(_QWORD *)(v34 + 1392) )
                  goto LABEL_26;
              }
              if ( v34 && !IsAdaptiveQueueDetachExempted(v34, v30, v31) )
              {
                if ( a3 != 260 && a3 != 513 && a3 != 516 && a3 != 519 )
                {
                  if ( a3 <= 0x209 )
                  {
LABEL_27:
                    if ( a3 != 514 )
                      goto LABEL_28;
LABEL_33:
                    v29 = (void *)ReferenceDwmApiPort(v27);
                    DwmAsyncNotifyInputActivity(v29);
                    goto LABEL_31;
                  }
                  if ( a3 > 0x20B && a3 != 526 )
                  {
                    if ( a3 == 581 )
                    {
                      if ( v32 )
                      {
                        v36 = *(struct _KEVENT **)(*((_QWORD *)a2 + 2) + 1384LL);
                      }
                      else
                      {
                        v37 = *(_QWORD *)(v34 + 672);
                        if ( !v37 || (*(_DWORD *)(v37 + 200) & 0x100000) == 0 )
                          goto LABEL_31;
                        v36 = *(struct _KEVENT **)(v34 + 1384);
                      }
                      KeSetEvent(v36, 1, 0);
LABEL_31:
                      WakeSomeone(a1, v40, a3, (struct tagQMSG *)v23);
                      return 1LL;
                    }
                    if ( a3 != 582 )
                      goto LABEL_31;
                  }
                }
                KeSetEvent(*(PRKEVENT *)(v34 + 1384), 1, 0);
              }
            }
          }
        }
      }
LABEL_26:
      if ( a3 == 513 )
        goto LABEL_33;
      goto LABEL_27;
    }
  }
  result = (__int64)AllocQEntryEx((struct tagQ *)((char *)a1 + 24), 0LL, 0);
  v23 = result;
  if ( result )
    goto LABEL_9;
  return result;
}
