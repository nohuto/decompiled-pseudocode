/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01F8CB4
 * Callers:
 *     PostMouseInputMessage @ 0x1C01E8838 (PostMouseInputMessage.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001C28 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     isRootPartition @ 0x1C004FEE8 (isRootPartition.c)
 *     IsMouseIVEnabled @ 0x1C0052D74 (IsMouseIVEnabled.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0057458 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01F4DEC (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01F57E0 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F632C (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F663C (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01F6E3C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z @ 0x1C01F8F24 (-PostMouseInputMessage@Mouse@InputTraceLogging@@SAX_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAX@Z.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FAE14 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        void *a4,
        struct _mouseCursorEvent *a5)
{
  char v5; // r12
  struct CMouseProcessor::MouseInputMessage *v9; // rax
  char v10; // bl
  struct CMouseProcessor::MouseInputMessage *v11; // rdi
  char v12; // r14
  const struct CMouseProcessor::CMouseEvent *v13; // rsi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rdx
  struct ContainerMouseInput *v21; // r8
  __int64 v22; // r9
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B0h]
  __int128 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _OWORD v31[7]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v32[32]; // [rsp+120h] [rbp+20h] BYREF

  v5 = a3;
  InputTraceLogging::Mouse::PostMouseInputMessage(a2, a3, a4);
  v9 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 3848),
         a2);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    if ( !*((_DWORD *)v9 + 6) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1210);
    v12 = 0;
    memset(v31, 0, sizeof(v31));
    if ( (v5 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4u, (struct tagINPUTDEST *)v31) )
      {
        v12 = 1;
LABEL_8:
        if ( (v5 & 1) != 0 || v12 )
        {
          v13 = 0LL;
          if ( v12 )
          {
            v24 = v31[0];
            v26 = v31[2];
            v25 = v31[1];
            v28 = v31[4];
            v14 = v31[6];
            v27 = v31[3];
            v15 = v31[5];
          }
          else
          {
            v16 = *(_OWORD *)((char *)v11 + 40);
            v24 = *(_OWORD *)((char *)v11 + 24);
            v17 = *(_OWORD *)((char *)v11 + 56);
            v25 = v16;
            v18 = *(_OWORD *)((char *)v11 + 72);
            v26 = v17;
            v19 = *(_OWORD *)((char *)v11 + 88);
            v27 = v18;
            v15 = *(_OWORD *)((char *)v11 + 104);
            v28 = v19;
            v14 = *(_OWORD *)((char *)v11 + 120);
          }
          v30 = v14;
          v29 = v15;
          CInputDest::CInputDest((CInputDest *)v32, (const struct tagINPUTDEST *)&v24);
          if ( v12 && !v32[0] )
          {
            CInputDest::SetEmpty((CInputDest *)v32);
            goto LABEL_28;
          }
          switch ( *((_DWORD *)v11 + 42) )
          {
            case 1:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseMoveToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v32,
                (struct tagPOINT *)v11 + 18,
                a5);
              break;
            case 2:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v32,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
            case 3:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v32,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
          }
          if ( IsMouseIVEnabled() && isRootPartition() && v13 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v13);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v20,
              v21,
              v22);
          }
          CInputDest::SetEmpty((CInputDest *)v32);
        }
        v10 = 1;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_8;
    }
LABEL_28:
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v11);
    LOBYTE(v9) = v10;
  }
  return (char)v9;
}
