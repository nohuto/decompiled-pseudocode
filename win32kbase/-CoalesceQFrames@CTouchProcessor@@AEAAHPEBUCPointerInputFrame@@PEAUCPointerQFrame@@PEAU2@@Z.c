/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01EC428
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01F0154 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C0006730 (ApiSetEditionDelQEntry.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C0161AA0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C0162320 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01E9F94 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01EA0CC (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01EBD78 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01EBFCC (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01F1888 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01F5BC4 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01FB918 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01FB96C (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C0206AB0 (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  unsigned int v4; // r13d
  __int64 v9; // rcx
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int CanCoalesceNodeWithPrevious; // ebx
  const struct CPointerInfoNode *v14; // rsi
  int v15; // r12d
  struct tagQ *v16; // rdx
  int v17; // r8d
  struct tagQMSG *NodeQueuedMessage; // rbx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  unsigned __int64 v22; // rsi
  unsigned int v23; // ebx
  __int64 v24; // r13
  __int64 v25; // r8
  struct tagQ *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned int v29; // [rsp+44h] [rbp-Ch]
  struct tagQ *v30; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp+50h] BYREF
  struct CPointerInputFrame *v33; // [rsp+A8h] [rbp+58h]

  v33 = a4;
  v4 = 0;
  v30 = 0LL;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15410);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15412);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15413);
  if ( (*((_DWORD *)a3 + 35) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15414);
  if ( (*((_DWORD *)a3 + 35) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15415);
  if ( (*((_DWORD *)a3 + 35) & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15416);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15417);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v11 = (__int64)result;
  if ( !result )
    return result;
  v12 = *((_DWORD *)a2 + 12);
  v32 = 1;
  CanCoalesceNodeWithPrevious = 1;
  v14 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
  v15 = 0;
  if ( !v12 )
  {
LABEL_71:
    v32 = 19;
LABEL_72:
    CanCoalesceNodeWithPrevious = 0;
    goto LABEL_73;
  }
  do
  {
    if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v12 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15445);
    if ( *((_DWORD *)v14 + 2) != *(_DWORD *)a3 )
      goto LABEL_35;
    if ( (*(_DWORD *)v14 & 0x2000) == 0 && !(unsigned int)CPointerInfoNode::IsFullyReleased(v14) )
    {
      v30 = v16;
      NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v14, v17, &v30);
      if ( NodeQueuedMessage )
      {
        if ( *((_QWORD *)NodeQueuedMessage + 1) )
        {
          if ( !v30 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15514);
          if ( v4 < *(_DWORD *)(v11 + 4) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15515);
          if ( *(_DWORD *)(v11 + 4) >= *(_DWORD *)v11 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15516);
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * *(unsigned int *)(v11 + 4)) = v30;
          *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v11 + 4))++ + 8) = NodeQueuedMessage;
          if ( *(_DWORD *)(v11 + 4) > *(_DWORD *)v11 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15520);
          CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                          this,
                                          v33,
                                          v14,
                                          NodeQueuedMessage,
                                          a3,
                                          (enum CPointerCoalesce *)&v32);
          if ( !CanCoalesceNodeWithPrevious )
            goto LABEL_73;
          v15 = 1;
          goto LABEL_35;
        }
        v32 = 18;
      }
      else
      {
        v32 = 15;
      }
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
    if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v33, v14, (enum CPointerCoalesce *)&v32) )
    {
      if ( v32 != 3 && v32 != 20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15483);
      CanCoalesceNodeWithPrevious = 0;
      goto LABEL_73;
    }
LABEL_35:
    v12 = *((_DWORD *)a2 + 12);
    ++v4;
    v14 = (const struct CPointerInfoNode *)((char *)v14 + 480);
  }
  while ( v4 < v12 );
  if ( !v15 )
    goto LABEL_71;
  v19 = *((_DWORD *)a3 + 34);
  if ( v19 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
  {
    v32 = 17;
    goto LABEL_72;
  }
  if ( *(_DWORD *)(v11 + 4) > v19 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15566);
  if ( v32 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15567);
  EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 1LL);
  v20 = *((_DWORD *)a2 + 12);
  v21 = 0;
  v22 = *((_QWORD *)a2 + 30);
  if ( v20 )
  {
    v29 = CanCoalesceNodeWithPrevious;
    v23 = 0;
    do
    {
      if ( v22 >= *((_QWORD *)a2 + 30) + 480 * (unsigned __int64)v20 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15577);
      if ( *(_DWORD *)(v22 + 8) == *(_DWORD *)a3
        && (*(_DWORD *)v22 & 0x2000) == 0
        && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v22) )
      {
        if ( v23 > v21 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15596);
        if ( v23 >= *(_DWORD *)(v11 + 4) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15597);
        v30 = *(struct tagQ **)(*(_QWORD *)(v11 + 8) + 16LL * v23);
        v24 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL * v23 + 8);
        if ( *(_QWORD *)(v22 + 16) != *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15600);
        CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v33, (struct CPointerInfoNode *)v22, v21, 1);
        if ( *(_QWORD *)(v22 + 16) == *(_QWORD *)(v24 + 40) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15608);
        InputTraceLogging::Delivery::CoalesceMessage(*(const struct tagQMSG **)(v24 + 8));
        *(_QWORD *)(*(_QWORD *)(v24 + 8) + 136LL) = *(_QWORD *)(v24 + 136);
        v26 = v30;
        if ( *((_QWORD *)v30 + 11) == v24 )
        {
          *((_QWORD *)v30 + 11) = 0LL;
          v26 = v30;
        }
        ApiSetEditionDelQEntry((__int64)v26 + 24, v24, v25);
        ++v23;
      }
      v20 = *((_DWORD *)a2 + 12);
      ++v21;
      v22 += 480LL;
    }
    while ( v21 < v20 );
    CanCoalesceNodeWithPrevious = v29;
  }
  EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v20, 1LL);
LABEL_73:
  v27 = v32;
  v28 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2
                                           * ((2 * (CanCoalesceNodeWithPrevious & 1)) | CanCoalesceNodeWithPrevious & 1));
  *((_DWORD *)a3 + 35) = v28;
  CTouchProcessor::TrackCoalesceOnReassign(v28, a3, v27);
  return (struct tagCPointerCoalesceInfo *)CanCoalesceNodeWithPrevious;
}
