void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v8; // r15d
  unsigned __int64 i; // rbx
  unsigned __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  CTouchProcessor *v12; // rcx
  CTouchProcessor *v13; // rcx
  int v14; // r14d
  struct CPointerMsgData *PrevMsgId; // rax
  CTouchProcessor *v16; // rcx
  struct CPointerMsgData *v17; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8390);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8397);
  if ( (*((_DWORD *)gptiCurrent + 122) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8398);
  v7 = *((unsigned int *)a2 + 12);
  v8 = 0;
  for ( i = *((_QWORD *)a2 + 30); v8 < (unsigned int)v7; i += 480LL )
  {
    v10 = *((_QWORD *)a2 + 30) + 480 * v7;
    if ( i >= v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8412);
    if ( (unsigned int)(*((_DWORD *)a2 + 56) - 1) <= 1 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8429);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8430);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8431);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v8);
      }
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v10, v4, v5, v6);
      if ( !CurrentProcess
        || CurrentProcess != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v13 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v12,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 35),
              ((unsigned __int8)v13 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v4, *((_DWORD *)a2 + 10), v8);
        }
        else
        {
          v14 = *(_DWORD *)(i + 180) & 2;
          if ( (*(_DWORD *)(i + 180) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v13, *(_QWORD *)(i + 16));
            v17 = PrevMsgId;
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v16, (__int64)PrevMsgId) + 9) & 0x40) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, v17, 1LL);
            }
          }
          if ( !v14 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v7 = *((unsigned int *)a2 + 12);
    ++v8;
  }
  ApiSetEditionEdgyResetDataFrames(a2);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2);
}
