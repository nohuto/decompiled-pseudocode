/*
 * XREFs of RecordPnpNotification @ 0x1C0164D70
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

void __fastcall RecordPnpNotification(int a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // ebp
  __int64 v4; // r12
  PVOID v8; // rsi
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  signed __int64 Pool2; // rbx
  unsigned __int32 v12; // r9d
  __int64 v13; // r8
  unsigned __int16 *v14; // rdx
  char v15; // r14
  __int64 v16; // r9
  __int64 v17; // r10
  char v18; // cl
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( gpPnpNotificationRecord )
    goto LABEL_10;
  v8 = gpLeakTrackingAllocator;
  v9 = 200LL * gdwPnpNotificationRecSize;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707355) != 0x70707355
    || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_6:
    Pool2 = ExAllocatePool2(260LL, v9);
    goto LABEL_7;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1886417749 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_6;
  }
  v15 = 0;
  if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
  {
    v15 = 1;
    v9 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v9);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v8,
                              Pool2,
                              BackTrace) )
      {
        Pool2 += 16LL;
LABEL_7:
        if ( !Pool2 )
          return;
        goto LABEL_8;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v8,
                                 Pool2,
                                 BackTrace) )
    {
LABEL_8:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpPnpNotificationRecord, Pool2, 0LL) )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
LABEL_10:
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)&giPnpSeq, 1u);
      *((_DWORD *)gpPnpNotificationRecord + 50 * (v12 % gdwPnpNotificationRecSize)) = v12 + 1;
      v13 = 200LL * (v12 % gdwPnpNotificationRecSize);
      *(_DWORD *)((char *)gpPnpNotificationRecord + v13 + 128) = (MEMORY[0xFFFFF78000000320]
                                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_QWORD *)((char *)gpPnpNotificationRecord + v13 + 8) = KeGetCurrentThread();
      *(_DWORD *)((char *)gpPnpNotificationRecord + v13 + 4) = a1;
      if ( a1 )
      {
        if ( a1 == 8 || a1 == 24 || !a2 )
        {
LABEL_31:
          *((_BYTE *)gpPnpNotificationRecord + v13 + v3 + 32) = 0;
          *(_QWORD *)((char *)gpPnpNotificationRecord + v13 + 16) = a2;
          *(_QWORD *)((char *)gpPnpNotificationRecord + v13 + 24) = v4;
          *(_QWORD *)((char *)gpPnpNotificationRecord + v13 + 112) = a3;
          *(_QWORD *)((char *)gpPnpNotificationRecord + v13 + 120) = 0LL;
          RtlWalkFrameChain((PVOID *)((char *)gpPnpNotificationRecord + v13 + 136), 8u, 0);
          return;
        }
        v4 = *(_QWORD *)a2;
        v14 = a2 + 104;
      }
      else
      {
        v14 = a2;
        a2 = 0LL;
      }
      if ( v14 && *((_QWORD *)v14 + 1) )
      {
        v16 = v13;
        v17 = 0LL;
        do
        {
          if ( v3 >= *v14 >> 1 )
            break;
          ++v3;
          v18 = *(_BYTE *)(v17 + *((_QWORD *)v14 + 1));
          v17 += 2LL;
          *((_BYTE *)gpPnpNotificationRecord + v16 + 32) = v18;
          ++v16;
        }
        while ( v3 < 0x4F );
      }
      goto LABEL_31;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
}
