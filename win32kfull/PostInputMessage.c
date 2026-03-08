/*
 * XREFs of PostInputMessage @ 0x1C0037A48
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0008F6C (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     EditionPostInputMessage @ 0x1C0009890 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x1C0037070 (EditionPostMouseMoveToQ.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x1C00D6620 (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0142A40 (EditionPostRawMouseInputMessage.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01AA924 (-PostHidInput@@YAHPEAUDEVICEINFO@@PEAXKPEAUtagQ@@PEAUtagWND@@_K@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01ABEC0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z @ 0x1C01AC288 (-PostRawMouseInputToBackgroundListener@@YAXPEAUtagPROCESS_HID_TABLE@@PEAXPEBUtagRAWMOUSE@@_KK@Z.c)
 *     EditionPostMouseWheelToForeground @ 0x1C01B78F0 (EditionPostMouseWheelToForeground.c)
 *     PostPointerEventMessage @ 0x1C01C4440 (PostPointerEventMessage.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C020311C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0006DD8 (IsAdaptiveQueueDetachExempted.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C0007904 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C0037EC0 (-PostInputMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00390F4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0048A50 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0072420 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C00E10F4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?CleanInputMessage@@YAXIPEAUtagQMSG@@@Z @ 0x1C00E66E8 (-CleanInputMessage@@YAXIPEAUtagQMSG@@@Z.c)
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
        unsigned int a9,
        struct tagINPUT_MESSAGE_SOURCE *a10,
        void *a11,
        struct tagUIPI_INFO *a12,
        int a13,
        char a14,
        __int64 a15)
{
  char v15; // r15
  struct tagINPUT_MESSAGE_SOURCE *v17; // rdi
  BOOL v20; // r13d
  __int64 v21; // rbx
  unsigned __int64 v22; // r12
  const struct tagQMSG *CoalesceableMouseMessage; // rax
  __int64 v24; // rbx
  int v25; // edx
  int v26; // r8d
  unsigned int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // r15d
  unsigned int v31; // ecx
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  struct _KEVENT *v39; // rcx
  __int64 v40; // rax
  struct tagTHREADINFO *v41; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v42; // [rsp+C8h] [rbp+20h] BYREF

  v42 = a4;
  v15 = a13;
  v17 = a10;
  v41 = (struct tagTHREADINFO *)(a15 & -(__int64)(a13 != 0));
  v20 = a10 && *((_DWORD *)a10 + 1) == 2;
  v21 = *((_QWORD *)a1 + 4);
  if ( (*((_DWORD *)a1 + 99) & 1) != 0 )
    PostUpdateKeyStateEvent(a1);
  v22 = a7;
  if ( (a9 & 1) == 0 && v21 && (*(_DWORD *)(v21 + 100) & 2) == 0 && (a3 == 512 || a3 == 522 || a3 == 526) )
  {
    CoalesceableMouseMessage = (const struct tagQMSG *)GetCoalesceableMouseMessage(a3, &v42, v21, v17);
    v24 = (__int64)CoalesceableMouseMessage;
    if ( CoalesceableMouseMessage )
    {
      InputTraceLogging::Delivery::CoalesceMessage(CoalesceableMouseMessage, v22);
      CleanInputMessage(a3, (struct tagQMSG *)v24);
      goto LABEL_15;
    }
  }
  result = AllocQEntryEx((char *)a1 + 24, 0LL, 1LL);
  v24 = result;
  if ( result )
  {
LABEL_15:
    v27 = *(_DWORD *)(v24 + 100) & 0xF7FFFFDF;
    v28 = a14 & 1;
    *(_QWORD *)(v24 + 136) = v22;
    v29 = v15 & 1 | (v28 << 22);
    v30 = 0;
    *(_DWORD *)(v24 + 100) = v27 | (32 * v29);
    if ( v22 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qiqdd(WPP_GLOBAL_Control->AttachedDevice, v25, v26, (_DWORD)a1 + 24);
      }
    }
    if ( a2 )
    {
      v31 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL);
    }
    else
    {
      v33 = *((_QWORD *)a1 + 16);
      if ( v33 )
        v34 = *(_QWORD *)(v33 + 16);
      else
        v34 = *((_QWORD *)a1 + 13);
      v31 = *(_DWORD *)(*(_QWORD *)(v34 + 424) + 280LL);
    }
    StoreQMessage((struct tagQMSG *)v24, a2, a3, v42, a5, a6, v22, 0, a8, a9, v17, v31, a11, a12);
    InputTraceLogging::Delivery::PostInputMessage((const struct tagQMSG *)v24, a1);
    if ( (unsigned int)IsPointerInputMessage(a3) && a3 != 595 )
    {
      v36 = SGDGetUserSessionState(v35);
      CTouchProcessor::MarkPointerMessageGenerated(
        *(CTouchProcessor **)(v36 + 3424),
        a3,
        *(_QWORD *)(v24 + 40),
        -__CFSHR__(*(_DWORD *)(v24 + 100), 6),
        (void *)v24);
    }
    if ( (unsigned int)IsMiPMouseMessage(a3) )
    {
      if ( v17 )
      {
        if ( (unsigned int)IsGenuineMouseInput(v17) )
        {
          *(_DWORD *)(v24 + 100) |= 0x400u;
          if ( a2 )
            *(_DWORD *)(v24 + 100) ^= (*(_DWORD *)(v24 + 100) ^ ((unsigned int)InputTransform::OnInput(
                                                                                 (struct _EX_PUSH_LOCK **)a2,
                                                                                 *(struct tagWND **)(v24 + 128)) << 12)) & 0x1000;
        }
      }
    }
    if ( v20
      || a3 == 255
      || !tagQ::AreMultipleThreadsAttached(a1)
      || *(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 48LL)
      || *(_QWORD *)(*((_QWORD *)PtiCurrentShared() + 58) + 56LL) )
    {
      goto LABEL_67;
    }
    if ( a2 && (v37 = (_QWORD *)*((_QWORD *)a2 + 2), a2 == (struct tagWND *)v37[179]) )
    {
      v30 = 1;
    }
    else
    {
      v38 = *((_QWORD *)a1 + 16);
      if ( !v38 )
        goto LABEL_67;
      v37 = *(_QWORD **)(v38 + 16);
      if ( v38 != v37[179] )
        goto LABEL_67;
    }
    if ( !v37 || (unsigned int)IsAdaptiveQueueDetachExempted((__int64)v37) )
    {
LABEL_67:
      WakeSomeone(a1, v41, a3, (struct tagQMSG *)v24);
      return 1LL;
    }
    if ( a3 != 260 && a3 != 513 && a3 != 516 && a3 != 519 && a3 != 522 && a3 != 523 && a3 != 526 )
    {
      if ( a3 == 581 )
      {
        if ( v30 )
        {
          v39 = *(struct _KEVENT **)(*((_QWORD *)a2 + 2) + 1424LL);
LABEL_66:
          KeSetEvent(v39, 1, 0);
          goto LABEL_67;
        }
        v40 = v37[84];
        if ( !v40 || (*(_DWORD *)(v40 + 200) & 0x80000) == 0 )
          goto LABEL_67;
      }
      else if ( a3 != 582 )
      {
        goto LABEL_67;
      }
    }
    v39 = (struct _KEVENT *)v37[178];
    goto LABEL_66;
  }
  return result;
}
