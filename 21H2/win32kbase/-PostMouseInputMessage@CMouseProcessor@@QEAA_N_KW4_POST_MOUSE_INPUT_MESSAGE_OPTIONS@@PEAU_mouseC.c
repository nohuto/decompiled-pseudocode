/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01C0E58
 * Callers:
 *     PostMouseInputMessage @ 0x1C01AECE0 (PostMouseInputMessage.c)
 * Callees:
 *     IsMouseIVEnabled @ 0x1C0041518 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C0041628 (isRootPartition.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C004503C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C004B9DC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     PostThreadEvent @ 0x1C01AEDB0 (PostThreadEvent.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01BE83C (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01BEFF8 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BF4A8 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C01CC (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01C2014 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        struct _mouseCursorEvent *a4)
{
  struct CMouseProcessor::MouseInputMessage *v7; // rax
  struct CMouseProcessor::MouseInputMessage *v8; // rdi
  const struct CInputDest *v9; // rbx
  const struct CMouseProcessor::CMouseEvent *v10; // rsi
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v12; // rdx
  struct ContainerMouseInput *v13; // r8

  v7 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 3840),
         a2);
  v8 = v7;
  if ( v7 )
  {
    v9 = (struct CMouseProcessor::MouseInputMessage *)((char *)v7 + 24);
    if ( !*((_DWORD *)v7 + 6) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1234);
    if ( (a3 & 1) == 0 )
      goto LABEL_17;
    v10 = 0LL;
    if ( *((_DWORD *)v8 + 42) == 1 )
    {
      v10 = (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352);
      CMouseProcessor::DeliverMouseMoveToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352),
        v9,
        (struct tagPOINT *)v8 + 18,
        a4);
    }
    else
    {
      if ( *((_DWORD *)v8 + 42) != 2 )
      {
        if ( *((_DWORD *)v8 + 42) == 3 )
        {
          v10 = (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352);
          CMouseProcessor::DeliverMouseWheelToInputDest(
            (CMouseProcessor *)a1,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352),
            v9,
            (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 144));
        }
LABEL_13:
        if ( IsMouseIVEnabled() && isRootPartition() && v10 )
        {
          CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
            v10);
          CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
            (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
            v12,
            v13);
        }
LABEL_17:
        CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v8);
        LOBYTE(v7) = 1;
        return (char)v7;
      }
      v10 = (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352);
      CMouseProcessor::DeliverMouseButtonToInputDest(
        (CMouseProcessor *)a1,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 352),
        v9,
        (struct CMouseProcessor::MouseInputMessage *)((char *)v8 + 144));
    }
    if ( a4 )
    {
      ThreadInfo = CInputDest::GetThreadInfo(v9);
      PostThreadEvent(
        (__int64)ThreadInfo,
        0LL,
        0x20u,
        *(unsigned int *)a4,
        *((unsigned int *)a4 + 1),
        *((_QWORD *)v8 + 22));
    }
    goto LABEL_13;
  }
  return (char)v7;
}
