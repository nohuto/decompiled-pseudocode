/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D8380
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C14C0 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C01D8CC0 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00E4078 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C00E4326 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C00E47EE (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1C01C3C64 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C3DC4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01C9E18 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8320 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8778 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned int v7; // r15d
  unsigned __int64 i; // rbx
  unsigned __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  CTouchProcessor *v11; // rcx
  CTouchProcessor *v12; // rcx
  int v13; // ebp
  struct CPointerMsgData *PrevMsgId; // rax
  CTouchProcessor *v15; // rcx
  struct CPointerMsgData *v16; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8299);
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8306);
  if ( (*((_DWORD *)gptiCurrent + 122) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8307);
  v6 = *((unsigned int *)a2 + 12);
  v7 = 0;
  for ( i = *((_QWORD *)a2 + 30); v7 < (unsigned int)v6; i += 480LL )
  {
    v9 = *((_QWORD *)a2 + 30) + 480 * v6;
    if ( i >= v9 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8321);
    if ( (unsigned int)(*((_DWORD *)a2 + 56) - 1) <= 1 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8338);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) > 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8339);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8340);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v7);
      }
    }
    else
    {
      CurrentProcess = PsGetCurrentProcess(v9, v4, v5);
      if ( !CurrentProcess
        || CurrentProcess != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels
        || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
      {
        if ( !*(_QWORD *)(i + 16)
          || (v12 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                           v11,
                                                           a2,
                                                           (const struct CPointerInfoNode *)i)
                                       + 35),
              ((unsigned __int8)v12 & 4) != 0) )
        {
          if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
            CTouchProcessor::FreePointerInfoNode(this, v4, *((_DWORD *)a2 + 10), v7);
        }
        else
        {
          v13 = *(_DWORD *)(i + 180) & 2;
          if ( (*(_DWORD *)(i + 180) & 1) == 0 )
          {
            PrevMsgId = CTouchProcessor::GetPrevMsgId(v12, *(_QWORD *)(i + 16));
            v16 = PrevMsgId;
            if ( PrevMsgId )
            {
              if ( (*((_DWORD *)CTouchProcessor::GetNonConstMsgData(v15, (__int64)PrevMsgId) + 9) & 0x40) != 0 )
                CTouchProcessor::UnreferenceMsgData(this, v16, 1LL);
            }
          }
          if ( !v13 )
            CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
        }
      }
    }
    v6 = *((unsigned int *)a2 + 12);
    ++v7;
  }
  if ( qword_1C0296B20 && (int)qword_1C0296B20() >= 0 && qword_1C0296B28 )
    qword_1C0296B28(a2);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2);
}
