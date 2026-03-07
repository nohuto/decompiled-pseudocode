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
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  struct ContainerMouseInput *v25; // r8
  __int64 v26; // r9
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h]
  __int128 v30; // [rsp+60h] [rbp-A0h]
  __int128 v31; // [rsp+70h] [rbp-90h]
  __int128 v32; // [rsp+80h] [rbp-80h]
  __int128 v33; // [rsp+90h] [rbp-70h]
  __int128 v34; // [rsp+A0h] [rbp-60h]
  _OWORD v35[7]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v36[32]; // [rsp+120h] [rbp+20h] BYREF

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
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1208);
    v12 = 0;
    memset(v35, 0, sizeof(v35));
    if ( (v5 & 3) == 3 )
    {
      if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(a4, 4, (struct tagINPUTDEST *)v35) )
      {
        v12 = 1;
LABEL_8:
        if ( (v5 & 1) != 0 || v12 )
        {
          v13 = 0LL;
          if ( v12 )
          {
            v28 = v35[0];
            v30 = v35[2];
            v29 = v35[1];
            v32 = v35[4];
            v14 = v35[6];
            v31 = v35[3];
            v15 = v35[5];
          }
          else
          {
            v16 = *(_OWORD *)((char *)v11 + 40);
            v28 = *(_OWORD *)((char *)v11 + 24);
            v17 = *(_OWORD *)((char *)v11 + 56);
            v29 = v16;
            v18 = *(_OWORD *)((char *)v11 + 72);
            v30 = v17;
            v19 = *(_OWORD *)((char *)v11 + 88);
            v31 = v18;
            v15 = *(_OWORD *)((char *)v11 + 104);
            v32 = v19;
            v14 = *(_OWORD *)((char *)v11 + 120);
          }
          v34 = v14;
          v33 = v15;
          CInputDest::CInputDest((CInputDest *)v36, (const struct tagINPUTDEST *)&v28);
          if ( v12 && !v36[0] )
          {
            CInputDest::SetEmpty((CInputDest *)v36);
            goto LABEL_28;
          }
          switch ( *((_DWORD *)v11 + 42) )
          {
            case 1:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseMoveToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v36,
                (struct tagPOINT *)v11 + 18,
                a5);
              break;
            case 2:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseButtonToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v36,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
            case 3:
              v13 = (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344);
              CMouseProcessor::DeliverMouseWheelToInputDest(
                (CMouseProcessor *)a1,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 344),
                (const struct CInputDest *)v36,
                (struct CMouseProcessor::MouseInputMessage *)((char *)v11 + 144));
              break;
          }
          if ( IsMouseIVEnabled() && isRootPartition(v21, v20, v22, v23) && v13 )
          {
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v13);
            CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
              (CMouseProcessor::ContainerMouseInputBuffer *)(a1 + 3904),
              v24,
              v25,
              v26);
          }
          CInputDest::SetEmpty((CInputDest *)v36);
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
