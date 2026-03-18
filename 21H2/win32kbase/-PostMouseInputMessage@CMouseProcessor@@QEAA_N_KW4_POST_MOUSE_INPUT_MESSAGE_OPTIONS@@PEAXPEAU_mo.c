/*
 * XREFs of ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C01FB240
 * Callers:
 *     PostMouseInputMessage @ 0x1C01E81D8 (PostMouseInputMessage.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     IsMouseIVEnabled @ 0x1C0038414 (IsMouseIVEnabled.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C0040DAC (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z @ 0x1C01F90B0 (--_GMouseInputMessage@CMouseProcessor@@QEAAPEAXI@Z.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C01F96B0 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01F9E20 (-DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputD.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01FA61C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     ?ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z @ 0x1C01FC678 (-ResolveIdToMessage@BufferedMouseInputList@CMouseProcessor@@QEAAPEAUMouseInputMessage@2@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::PostMouseInputMessage(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        void *a4,
        struct _mouseCursorEvent *a5)
{
  struct CMouseProcessor::MouseInputMessage *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // bl
  struct CMouseProcessor::MouseInputMessage *v13; // rdi
  char v14; // r14
  const struct CMouseProcessor::CMouseEvent *v15; // rsi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // rdx
  struct ContainerMouseInput *v23; // r8
  __int128 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v26; // [rsp+40h] [rbp-C0h]
  __int128 v27; // [rsp+50h] [rbp-B0h]
  __int128 v28; // [rsp+60h] [rbp-A0h]
  __int128 v29; // [rsp+70h] [rbp-90h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  _OWORD v32[7]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v33[32]; // [rsp+110h] [rbp+10h] BYREF

  v8 = CMouseProcessor::BufferedMouseInputList::ResolveIdToMessage(
         (CMouseProcessor::BufferedMouseInputList *)(a1 + 3848),
         a2);
  v12 = 0;
  v13 = v8;
  if ( v8 )
  {
    if ( !*((_DWORD *)v8 + 6) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v14 = 0;
    memset(v32, 0, sizeof(v32));
    if ( (a3 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4u, (struct tagINPUTDEST *)v32) )
      {
        v14 = 1;
LABEL_8:
        if ( (a3 & 1) != 0 || v14 )
        {
          v15 = 0LL;
          if ( v14 )
          {
            v25 = v32[0];
            v27 = v32[2];
            v26 = v32[1];
            v29 = v32[4];
            v16 = v32[6];
            v28 = v32[3];
            v17 = v32[5];
          }
          else
          {
            v18 = *(_OWORD *)((char *)v13 + 40);
            v25 = *(_OWORD *)((char *)v13 + 24);
            v19 = *(_OWORD *)((char *)v13 + 56);
            v26 = v18;
            v20 = *(_OWORD *)((char *)v13 + 72);
            v27 = v19;
            v21 = *(_OWORD *)((char *)v13 + 88);
            v28 = v20;
            v17 = *(_OWORD *)((char *)v13 + 104);
            v29 = v21;
            v16 = *(_OWORD *)((char *)v13 + 120);
          }
          v31 = v16;
          v30 = v17;
          CInputDest::CInputDest((CInputDest *)v33, (const struct tagINPUTDEST *)&v25);
          if ( v14 && !v33[0] )
          {
            CInputDest::SetEmpty((CInputDest *)v33);
            goto LABEL_28;
          }
          switch ( *((_DWORD *)v13 + 42) )
          {
            case 1:
              v15 = (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344);
              CMouseProcessor::DeliverMouseMoveToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344),
                (const struct CInputDest *)v33,
                (struct tagPOINT *)v13 + 18,
                a5);
              break;
            case 2:
              v15 = (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344),
                (const struct CInputDest *)v33,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 144));
              break;
            case 3:
              v15 = (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 344),
                (const struct CInputDest *)v33,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v13 + 144));
              break;
          }
          if ( IsMouseIVEnabled() && isRootPartition() && v15 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v15);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v22,
              v23);
          }
          CInputDest::SetEmpty((CInputDest *)v33);
        }
        v12 = 1;
      }
    }
    else if ( !a4 )
    {
      goto LABEL_8;
    }
LABEL_28:
    CMouseProcessor::MouseInputMessage::`scalar deleting destructor'(v13);
    LOBYTE(v8) = v12;
  }
  return (char)v8;
}
