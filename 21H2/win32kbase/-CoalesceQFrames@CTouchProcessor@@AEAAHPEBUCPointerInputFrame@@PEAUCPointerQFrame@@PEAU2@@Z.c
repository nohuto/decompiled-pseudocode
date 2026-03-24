/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C018A584
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018D06C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C0001CB0 (ApiSetEditionDelQEntry.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CCF60 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C01218D0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0122050 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01889EC (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188B24 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0189FB4 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C018A128 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C018E6BC (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C0191850 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0196934 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C019F3B0 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v4; // r12d
  __int64 v9; // rcx
  int v10; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned int v14; // ebx
  const struct CPointerInfoNode *v15; // rsi
  int v16; // r14d
  struct tagQ *v17; // rdx
  int v18; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  struct tagQMSG *v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // r12d
  unsigned __int64 v25; // rsi
  unsigned int v26; // ebx
  __int64 v27; // r14
  __int64 v28; // rdx
  struct tagQ *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int CanCoalesceNodeWithPrevious; // [rsp+30h] [rbp-20h]
  struct tagQ *v33; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v36; // [rsp+A8h] [rbp+58h]

  v36 = a4;
  v4 = 0;
  v33 = 0LL;
  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14654);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14656);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14657);
  v10 = *((_DWORD *)a3 + 35);
  if ( (v10 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14658);
    v10 = *((_DWORD *)a3 + 35);
  }
  if ( (v10 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14659);
    v10 = *((_DWORD *)a3 + 35);
  }
  if ( (v10 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14660);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14661);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v12 = (__int64)result;
  if ( !result )
    return result;
  v13 = *((unsigned int *)a2 + 12);
  v14 = 1;
  v35 = 1;
  v15 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 17);
  v16 = 0;
  CanCoalesceNodeWithPrevious = 1;
  if ( !(_DWORD)v13 )
    goto LABEL_46;
  while ( 1 )
  {
    if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 17) + 480 * v13 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14689);
    if ( *((_DWORD *)v15 + 2) == *(_DWORD *)a3 )
    {
      if ( (*(_DWORD *)v15 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v15) )
      {
        v33 = v17;
        NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v15, v18, &v33);
        v20 = NodeQueuedMessage;
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            if ( !v33 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14758);
            v21 = *(_DWORD *)(v12 + 4);
            if ( v4 < v21 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14759);
              v21 = *(_DWORD *)(v12 + 4);
            }
            if ( v21 >= *(_DWORD *)v12 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14760);
              v21 = *(_DWORD *)(v12 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v21) = v33;
            *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v12 + 4))++ + 8) = v20;
            if ( *(_DWORD *)(v12 + 4) > *(_DWORD *)v12 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14764);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            this,
                                            v36,
                                            v15,
                                            v20,
                                            a3,
                                            (enum CPointerCoalesce *)&v35);
            v14 = CanCoalesceNodeWithPrevious;
            if ( !CanCoalesceNodeWithPrevious )
              goto LABEL_76;
            v16 = 1;
            goto LABEL_35;
          }
          v35 = 18;
        }
        else
        {
          v35 = 15;
        }
        v14 = 0;
        goto LABEL_76;
      }
      if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v36, v15, (enum CPointerCoalesce *)&v35) )
        break;
    }
LABEL_35:
    v13 = *((unsigned int *)a2 + 12);
    ++v4;
    v15 = (const struct CPointerInfoNode *)((char *)v15 + 480);
    if ( v4 >= (unsigned int)v13 )
      goto LABEL_44;
  }
  if ( v35 != 3 && v35 != 20 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14727);
  v14 = 0;
  CanCoalesceNodeWithPrevious = 0;
LABEL_44:
  if ( v14 )
  {
    if ( !v16 )
    {
LABEL_46:
      v35 = 19;
      v14 = 0;
      CanCoalesceNodeWithPrevious = 0;
    }
    if ( v14 )
    {
      v22 = *((_DWORD *)a3 + 34);
      if ( v22 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
      {
        v14 = 0;
        v35 = 17;
        CanCoalesceNodeWithPrevious = 0;
      }
      if ( v14 )
      {
        if ( *(_DWORD *)(v12 + 4) > v22 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14810);
        if ( v35 != 1 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14811);
        EtwTraceBeginPointerFrameCoalesce(*((_DWORD *)a2 + 10), *((_DWORD *)a2 + 12), 1);
        v23 = *((_DWORD *)a2 + 12);
        v24 = 0;
        v25 = *((_QWORD *)a2 + 17);
        if ( v23 )
        {
          v26 = 0;
          do
          {
            if ( v25 >= *((_QWORD *)a2 + 17) + 480 * (unsigned __int64)v23 )
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14821);
            if ( *(_DWORD *)(v25 + 8) == *(_DWORD *)a3
              && (*(_DWORD *)v25 & 0x2000) == 0
              && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v25) )
            {
              if ( v26 > v24 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14840);
              if ( v26 >= *(_DWORD *)(v12 + 4) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14841);
              v33 = *(struct tagQ **)(*(_QWORD *)(v12 + 8) + 16LL * v26);
              v27 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL * v26 + 8);
              if ( *(_QWORD *)(v25 + 16) != *(_QWORD *)(v27 + 40) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14844);
              CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v36, (struct CPointerInfoNode *)v25, v24, 1);
              if ( *(_QWORD *)(v25 + 16) == *(_QWORD *)(v27 + 40) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 14852);
              InputTraceLogging::Delivery::CoalesceMessage((const struct tagQMSG *)v27, v28);
              v29 = v33;
              if ( *((_QWORD *)v33 + 10) == v27 )
              {
                *((_QWORD *)v33 + 10) = 0LL;
                v29 = v33;
              }
              ApiSetEditionDelQEntry((__int64)v29 + 24, v27);
              ++v26;
            }
            v23 = *((_DWORD *)a2 + 12);
            ++v24;
            v25 += 480LL;
          }
          while ( v24 < v23 );
          v14 = CanCoalesceNodeWithPrevious;
        }
        EtwTraceEndPointerFrameCoalesce(*((_DWORD *)a2 + 10), v23, 1);
      }
    }
  }
LABEL_76:
  v30 = v35;
  v31 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2 * ((2 * (v14 & 1)) | v14 & 1));
  *((_DWORD *)a3 + 35) = v31;
  CTouchProcessor::TrackCoalesceOnReassign(v31, a3, v30);
  return (struct tagCPointerCoalesceInfo *)v14;
}
