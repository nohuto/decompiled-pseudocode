/*
 * XREFs of ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D866C
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C46C0 (-DereferencePointerInputFrameAndMessageData@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     IsInputThread @ 0x1C0037C40 (IsInputThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C003D410 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC6E4 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C00E7E48 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01CB830 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01CD5C8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE088 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8878 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UnreferenceFrameAndMessageData(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r14d
  unsigned __int64 i; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  CTouchProcessor *v17; // rcx
  CTouchProcessor *v18; // rcx
  int v19; // ebp
  const struct CPointerMsgData *PrevMsgId; // rax

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !IsInputThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v9 = *((unsigned int *)gptiCurrent + 122);
  if ( (v9 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v5, v7);
  v10 = *((unsigned int *)a2 + 12);
  v11 = 0;
  for ( i = *((_QWORD *)a2 + 30); v11 < (unsigned int)v10; i += 480LL )
  {
    v13 = *((_QWORD *)a2 + 30) + 480 * v10;
    if ( i >= v13 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v5, v7);
    if ( *((_DWORD *)a2 + 56) == 2 )
    {
      if ( (*(_DWORD *)i & 0x2000) == 0 )
      {
        if ( (*(_DWORD *)i & 2) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v5, v7);
        if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)i) != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
        if ( *(_QWORD *)(i + 16) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14, v16);
        CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v11);
      }
    }
    else if ( !IsCurrentProcessDwm(v13, v5, v7, v8)
           || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)i) && (*(_DWORD *)(i + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(i + 16)
        || (v18 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                         v17,
                                                         a2,
                                                         (const struct CPointerInfoNode *)i)
                                     + 35),
            ((unsigned __int8)v18 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)i) )
          CTouchProcessor::FreePointerInfoNode(this, v5, *((unsigned int *)a2 + 10), v11);
      }
      else
      {
        v19 = *(_DWORD *)(i + 180) & 2;
        if ( (*(_DWORD *)(i + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v18, *(_QWORD *)(i + 16), v7);
          if ( PrevMsgId )
          {
            if ( (*((_DWORD *)PrevMsgId + 9) & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData(this, PrevMsgId, 1LL);
          }
        }
        if ( !v19 )
          CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(i + 16), 1LL);
      }
    }
    v10 = *((unsigned int *)a2 + 12);
    ++v11;
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a2, v7);
}
