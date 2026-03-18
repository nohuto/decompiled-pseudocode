/*
 * XREFs of rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z @ 0x1C00E66FE (-DbgDumpNode@@YAXKPEAUtagRIMPOINTERINFONODE@@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01A7B2C (rimReclaimHoldingFrame.c)
 *     ApiSetEtwTraceBeginPointerFrameCommit @ 0x1C020C68C (ApiSetEtwTraceBeginPointerFrameCommit.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimGetCompleteFrameAndReleaseHoldingFrame(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *HoldingFrame; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  int v12; // eax
  __int64 v13; // r15
  unsigned int v14; // r14d
  PVOID v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 Pool2; // rdi
  __int64 v19; // r13
  unsigned int v20; // ebp
  __int64 i; // r14
  __int64 v22; // r12
  _OWORD *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // r14
  char v26; // r12
  __int64 v27; // r8
  int v28; // eax
  unsigned int v29; // eax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  HoldingFrame = rimFindHoldingFrame(a1, a2);
  if ( !HoldingFrame )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
  if ( !*((_DWORD *)HoldingFrame + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
  if ( HoldingFrame[3] != *(_QWORD *)(a2 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
  v9 = *((unsigned int *)HoldingFrame + 10);
  if ( !(_DWORD)v9 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v9, v8);
    v9 = *((unsigned int *)HoldingFrame + 10);
  }
  if ( (_DWORD)v9 != *((_DWORD *)HoldingFrame + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v9, v8);
    v9 = *((unsigned int *)HoldingFrame + 10);
  }
  ApiSetEtwTraceBeginPointerFrameCommit(v6, v9);
  v10 = HoldingFrame[7];
  v11 = 0LL;
  while ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 4);
    v10 = *(_QWORD *)(v10 + 16);
    v11 = (__int64 *)(((v12 + 7) & 0xFFFFFFF8) + (_DWORD)v11 + 24);
  }
  v13 = (unsigned int)(192 * *((_DWORD *)HoldingFrame + 10));
  v14 = (_DWORD)v11 + v13 + 240;
  if ( !v14 )
    goto LABEL_47;
  v15 = gpLeakTrackingAllocator;
  v16 = v14;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x66637352) != 0x66637352
    || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_19:
    Pool2 = ExAllocatePool2(260LL, v14);
    goto LABEL_20;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1717793618 )
  {
    if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_19;
  }
  v26 = 0;
  if ( v14 < 0x1000uLL || (v14 & 0xFFF) != 0 )
  {
    v26 = 1;
    v16 = v14 + 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v16);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v26 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v15,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
LABEL_20:
        v19 = Pool2;
        if ( !Pool2 )
          goto LABEL_47;
        goto LABEL_21;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v15,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      v19 = Pool2;
LABEL_21:
      *(_DWORD *)Pool2 = v14;
      *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
      v20 = 0;
      *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
      *(_DWORD *)(Pool2 + 24) = *((_DWORD *)HoldingFrame + 10);
      v10 = HoldingFrame[3];
      *(_QWORD *)(Pool2 + 32) = v10;
      *(_QWORD *)(Pool2 + 48) = HoldingFrame[4];
      *(_QWORD *)(Pool2 + 232) = Pool2 + 240;
      for ( i = HoldingFrame[9]; v20 < *((_DWORD *)HoldingFrame + 10); i += 192LL )
      {
        v22 = 192LL * v20;
        v23 = (_OWORD *)(v22 + *(_QWORD *)(Pool2 + 232));
        *v23 = *(_OWORD *)i;
        v23[1] = *(_OWORD *)(i + 16);
        v23[2] = *(_OWORD *)(i + 32);
        v23[3] = *(_OWORD *)(i + 48);
        v23[4] = *(_OWORD *)(i + 64);
        v23[5] = *(_OWORD *)(i + 80);
        v23[6] = *(_OWORD *)(i + 96);
        v23[7] = *(_OWORD *)(i + 112);
        v23[8] = *(_OWORD *)(i + 128);
        v23[9] = *(_OWORD *)(i + 144);
        v23[10] = *(_OWORD *)(i + 160);
        v23[11] = *(_OWORD *)(i + 176);
        DbgDumpNode(v20, (struct tagRIMPOINTERINFONODE *)i);
        if ( i == HoldingFrame[10] )
        {
          v10 = v22 + *(_QWORD *)(Pool2 + 232);
          *(_QWORD *)(Pool2 + 216) = v10;
        }
        ++v20;
      }
      *(_DWORD *)(Pool2 + 28) = *((_DWORD *)HoldingFrame + 12);
      if ( HoldingFrame[7] )
      {
        v24 = *(_QWORD *)(Pool2 + 232) + v13;
        *(_QWORD *)(v19 + 224) = v24;
        v25 = HoldingFrame[7];
        while ( v25 )
        {
          while ( 1 )
          {
            *(_DWORD *)v24 = *(_DWORD *)v25;
            *(_DWORD *)(v24 + 4) = *(_DWORD *)(v25 + 4);
            *(_QWORD *)(v24 + 8) = v24 + 24;
            memmove((void *)(v24 + 24), *(const void **)(v25 + 8), *(unsigned int *)(v25 + 4));
            v11 = (__int64 *)(v25 + 16);
            v28 = *(_DWORD *)(v25 + 4) + 7;
            *(_QWORD *)(v24 + 16) = 0LL;
            v25 = *(_QWORD *)(v25 + 16);
            v29 = (v28 & 0xFFFFFFF8) + 24;
            v10 = 0LL;
            if ( v25 )
            {
              v10 = v24 + v29;
              *(_QWORD *)(v24 + 16) = v10;
              v25 = *v11;
            }
            v24 = v10;
            if ( !v10 )
              break;
            if ( !v25 )
              goto LABEL_44;
          }
          if ( !v25 )
            break;
LABEL_44:
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v11, v27);
        }
      }
      v3 = 1;
      *a3 = Pool2;
      goto LABEL_47;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
LABEL_47:
  rimReclaimHoldingFrame(v10, v11, HoldingFrame);
  return v3;
}
