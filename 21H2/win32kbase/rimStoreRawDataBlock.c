/*
 * XREFs of rimStoreRawDataBlock @ 0x1C01A7F84
 * Callers:
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimStoreRawDataBlock(__int64 a1, __int64 a2, const void *a3, unsigned int a4, __int64 a5, _DWORD *a6)
{
  unsigned __int64 v6; // r13
  int v8; // eax
  PVOID v9; // rbx
  __int64 v10; // rax
  __int64 Pool2; // rdi
  __int64 v12; // rsi
  PVOID v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  char v17; // r13
  void *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  PVOID BackTrace[20]; // [rsp+20h] [rbp-178h] BYREF
  PVOID v24[27]; // [rsp+C0h] [rbp-D8h] BYREF

  v6 = a4;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *a6 = 0;
  if ( a3 )
  {
    v8 = *(_DWORD *)(a5 + 48);
    *a6 = v8 + 1;
    if ( v8 != -1 )
    {
      v9 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64727352) != 0x64727352
        || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_9:
        Pool2 = ExAllocatePool2(260LL, 24LL);
        goto LABEL_10;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1685222226 )
      {
        if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_9;
      }
      Pool2 = ExAllocatePool2(260LL, 40LL);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v9,
                 Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v12 = Pool2;
            goto LABEL_11;
          }
LABEL_24:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return;
        }
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                (__int64)v9,
                (const void *)Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
          goto LABEL_24;
        Pool2 += 16LL;
LABEL_10:
        v12 = Pool2;
        if ( !Pool2 )
          return;
LABEL_11:
        v13 = gpLeakTrackingAllocator;
        v14 = v6;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64727352) != 0x64727352
          || (v15 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
        {
LABEL_15:
          v16 = ExAllocatePool2(260LL, v6);
          goto LABEL_16;
        }
        while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != 1685222226 )
        {
          if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_15;
        }
        v17 = 0;
        if ( v14 < 0x1000 || (v14 & 0xFFF) != 0 )
        {
          v17 = 1;
          v14 += 16LL;
        }
        v16 = ExAllocatePool2(260LL, v14);
        if ( v16 )
        {
          memset(v24, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, v24, 0LL);
          if ( v17 && (unsigned __int64)(v16 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v13,
                   (const void *)v16,
                   (struct NSInstrumentation::CBackTrace *)v24) )
            {
              v16 += 16LL;
              goto LABEL_30;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v13,
                      v16,
                      (struct NSInstrumentation::CBackTrace *)v24) )
          {
            goto LABEL_30;
          }
          ExFreePoolWithTag((PVOID)v16, 0);
        }
        v16 = 0LL;
LABEL_30:
        LODWORD(v6) = a4;
LABEL_16:
        *(_QWORD *)(Pool2 + 8) = v16;
        if ( v16 )
        {
          v18 = *(void **)(v12 + 8);
          *(_DWORD *)v12 = *a6;
          *(_DWORD *)(v12 + 4) = v6;
          memmove(v18, a3, (unsigned int)v6);
          *(_QWORD *)(v12 + 16) = 0LL;
          v22 = *(_QWORD *)(a5 + 64);
          if ( v22 )
          {
            *(_QWORD *)(v22 + 16) = v12;
          }
          else
          {
            if ( *(_DWORD *)(a5 + 48) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
            if ( *(_QWORD *)(a5 + 56) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
            *(_QWORD *)(a5 + 56) = v12;
          }
          *(_QWORD *)(a5 + 64) = v12;
          *(_DWORD *)(a5 + 48) = *a6;
        }
        else
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            (char *)Pool2);
        }
      }
    }
  }
}
