/*
 * XREFs of ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4
 * Callers:
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C44C8 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 * Callees:
 *     ApiSetEditionDelQEntry @ 0x1C0001AA0 (ApiSetEditionDelQEntry.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC7A4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTraceBeginPointerFrameCoalesce @ 0x1C014C6B0 (EtwTraceBeginPointerFrameCoalesce.c)
 *     EtwTraceEndPointerFrameCoalesce @ 0x1C014CD70 (EtwTraceEndPointerFrameCoalesce.c)
 *     ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BE9C0 (-CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C01BEA8C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z @ 0x1C01C0928 (-CoalesceMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@_K@Z.c)
 *     ?CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@KH@Z @ 0x1C01C0B70 (-CoalesceNodeWithPrevious@CTouchProcessor@@AEAA_KPEBUCPointerInputFrame@@0PEAUCPointerInfoNode@@.c)
 *     ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01C5834 (-FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z.c)
 *     ?GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z @ 0x1C01C8E60 (-GetCoalesceInfo@CTouchProcessor@@AEAAPEAUtagCPointerCoalesceInfo@@K@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE108 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z @ 0x1C01D807C (-TrackCoalesceOnReassign@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@W4CPointerCoalesce@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCPointerCoalesceInfo *__fastcall CTouchProcessor::CoalesceQFrames(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        struct CPointerQFrame *a3,
        struct CPointerInputFrame *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  struct tagCPointerCoalesceInfo *result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r14
  unsigned int v19; // ecx
  int v20; // r12d
  unsigned int v21; // r13d
  unsigned int CanCoalesceNodeWithPrevious; // ebx
  const struct CPointerInfoNode *v23; // rsi
  unsigned __int64 v24; // rcx
  int v25; // r8d
  struct tagQMSG *NodeQueuedMessage; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct tagQMSG *v30; // rbx
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // r12d
  __int64 v37; // rdx
  unsigned __int64 v38; // rsi
  unsigned int v39; // ebx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct tagQ *v43; // rcx
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r8
  struct tagQ *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  unsigned int v52; // [rsp+34h] [rbp-Ch]
  struct tagQ *v53; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v55; // [rsp+90h] [rbp+50h] BYREF
  struct CPointerInputFrame *v56; // [rsp+98h] [rbp+58h]

  v56 = a4;
  v53 = 0LL;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2, (__int64)a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v9, (__int64)a4, v10) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  v14 = *((_DWORD *)a3 + 35);
  if ( (v14 & 4) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 35);
  }
  if ( (v14 & 1) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    v14 = *((_DWORD *)a3 + 35);
  }
  if ( (v14 & 8) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( *(_DWORD *)a3 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  result = CTouchProcessor::GetCoalesceInfo((CTouchProcessor *)this, *((_DWORD *)a3 + 34));
  v18 = (__int64)result;
  if ( result )
  {
    v19 = *((_DWORD *)a2 + 12);
    v20 = 0;
    v21 = 0;
    v55 = 1;
    CanCoalesceNodeWithPrevious = 1;
    v23 = (const struct CPointerInfoNode *)*((_QWORD *)a2 + 30);
    if ( v19 )
    {
      do
      {
        v24 = *((_QWORD *)a2 + 30) + 480LL * v19;
        if ( (unsigned __int64)v23 >= v24 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v16, v17);
        if ( *((_DWORD *)v23 + 2) == *(_DWORD *)a3 )
        {
          if ( (*(_DWORD *)v23 & 0x2000) != 0 || (unsigned int)CPointerInfoNode::IsFullyReleased(v23) )
          {
            if ( !(unsigned int)CTouchProcessor::CanCoalesceIgnoreNode(this, v56, v23, (enum CPointerCoalesce *)&v55) )
            {
              if ( v55 != 3 && v55 != 20 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v16, v17);
              goto LABEL_70;
            }
          }
          else
          {
            v53 = 0LL;
            NodeQueuedMessage = CTouchProcessor::FindNodeQueuedMessage((CTouchProcessor *)this, v23, v25, &v53);
            v30 = NodeQueuedMessage;
            if ( !NodeQueuedMessage )
            {
              v55 = 15;
              goto LABEL_70;
            }
            if ( !*((_QWORD *)NodeQueuedMessage + 1) )
            {
              v55 = 18;
              goto LABEL_70;
            }
            if ( !v53 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
            v31 = *(_DWORD *)(v18 + 4);
            if ( v21 < v31 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
              v31 = *(_DWORD *)(v18 + 4);
            }
            if ( v31 >= *(_DWORD *)v18 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
              v31 = *(_DWORD *)(v18 + 4);
            }
            *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v31) = v53;
            v32 = 2LL * *(unsigned int *)(v18 + 4);
            *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * (unsigned int)(*(_DWORD *)(v18 + 4))++ + 8) = v30;
            if ( *(_DWORD *)(v18 + 4) > *(_DWORD *)v18 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, 2LL * v31, v29);
            CanCoalesceNodeWithPrevious = CTouchProcessor::CanCoalesceNodeWithPrevious(
                                            this,
                                            v56,
                                            v23,
                                            v30,
                                            a3,
                                            (enum CPointerCoalesce *)&v55);
            if ( !CanCoalesceNodeWithPrevious )
              goto LABEL_71;
            v20 = 1;
          }
        }
        v19 = *((_DWORD *)a2 + 12);
        ++v21;
        v23 = (const struct CPointerInfoNode *)((char *)v23 + 480);
      }
      while ( v21 < v19 );
      if ( !v20 )
        goto LABEL_69;
      v34 = *((unsigned int *)a3 + 34);
      if ( (_DWORD)v34 != *(_DWORD *)(*((_QWORD *)a3 + 19) + 136LL) )
      {
        v55 = 17;
        goto LABEL_70;
      }
      if ( *(_DWORD *)(v18 + 4) > (unsigned int)v34 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v16, v17);
      if ( v55 != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v16, v17);
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 1LL);
      v36 = 0;
      v37 = *((unsigned int *)a2 + 12);
      v38 = *((_QWORD *)a2 + 30);
      if ( (_DWORD)v37 )
      {
        v52 = CanCoalesceNodeWithPrevious;
        v39 = 0;
        do
        {
          v40 = *((_QWORD *)a2 + 30) + 480LL * (unsigned int)v37;
          if ( v38 >= v40 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v37, v35);
          if ( *(_DWORD *)(v38 + 8) == *(_DWORD *)a3
            && (*(_DWORD *)v38 & 0x2000) == 0
            && !(unsigned int)CPointerInfoNode::IsFullyReleased((CPointerInfoNode *)v38) )
          {
            if ( v39 > v36 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v35);
            if ( v39 >= *(_DWORD *)(v18 + 4) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v42, v41, v35);
            v43 = *(struct tagQ **)(*(_QWORD *)(v18 + 8) + 16LL * v39);
            v53 = v43;
            v44 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL * v39 + 8);
            if ( *(_QWORD *)(v38 + 16) != *(_QWORD *)(v44 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, 2LL * v39, v35);
            CTouchProcessor::CoalesceNodeWithPrevious(this, a2, v56, (struct CPointerInfoNode *)v38, v36, 1);
            if ( *(_QWORD *)(v38 + 16) == *(_QWORD *)(v44 + 40) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v45, v47);
            InputTraceLogging::Delivery::CoalesceMessage(*(const struct tagQMSG **)(v44 + 8), *(_QWORD *)(v44 + 136));
            *(_QWORD *)(*(_QWORD *)(v44 + 8) + 136LL) = *(_QWORD *)(v44 + 136);
            v49 = v53;
            if ( *((_QWORD *)v53 + 10) == v44 )
            {
              *((_QWORD *)v53 + 10) = 0LL;
              v49 = v53;
            }
            ApiSetEditionDelQEntry((__int64)v49 + 24, v44, v48);
            ++v39;
          }
          v37 = *((unsigned int *)a2 + 12);
          ++v36;
          v38 += 480LL;
        }
        while ( v36 < (unsigned int)v37 );
        CanCoalesceNodeWithPrevious = v52;
      }
      EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a2 + 10), v37, 1LL);
    }
    else
    {
LABEL_69:
      v55 = 19;
LABEL_70:
      CanCoalesceNodeWithPrevious = 0;
    }
LABEL_71:
    v50 = v55;
    v51 = *((_DWORD *)a3 + 35) & 0xFFFFFFF9 | (2
                                             * ((2 * (CanCoalesceNodeWithPrevious & 1)) | CanCoalesceNodeWithPrevious & 1));
    *((_DWORD *)a3 + 35) = v51;
    CTouchProcessor::TrackCoalesceOnReassign(v51, a3, v50);
    return (struct tagCPointerCoalesceInfo *)CanCoalesceNodeWithPrevious;
  }
  return result;
}
