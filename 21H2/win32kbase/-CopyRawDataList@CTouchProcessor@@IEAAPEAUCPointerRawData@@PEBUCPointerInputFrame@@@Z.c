/*
 * XREFs of ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01C32A4
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01C2E94 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01C63B8 (-FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z.c)
 */

struct CPointerRawData *__fastcall CTouchProcessor::CopyRawDataList(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int64 v2; // rsi
  __int64 v3; // r13
  struct CPointerRawData *v4; // rbp
  PVOID v6; // rdi
  __int64 v7; // rax
  __int64 Pool2; // rbx
  _DWORD *v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  char v13; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-168h] BYREF
  PVOID v16[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v2 = *((_QWORD *)a2 + 29);
  v3 = 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    if ( !v2 )
      return v4;
    v6 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64727355) != 0x64727355
      || (v7 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
LABEL_7:
      Pool2 = ExAllocatePool2(260LL, 32LL);
LABEL_8:
      if ( !Pool2 )
        goto LABEL_38;
      goto LABEL_9;
    }
    while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1685222229 )
    {
      if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_7;
    }
    Pool2 = ExAllocatePool2(260LL, 48LL);
    if ( !Pool2 )
      goto LABEL_21;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v6,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
LABEL_20:
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_21:
        Pool2 = 0LL;
        goto LABEL_38;
      }
      Pool2 += 16LL;
      goto LABEL_8;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
            (__int64)v6,
            Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_20;
LABEL_9:
    v9 = gpLeakTrackingAllocator;
    *(_OWORD *)Pool2 = *(_OWORD *)v2;
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(v2 + 16);
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    v10 = *(unsigned int *)(v2 + 8);
    if ( (v9[10] & 0x64727355) == 0x64727355 )
    {
      v11 = 0LL;
      if ( v9[11] )
        break;
    }
LABEL_13:
    v12 = ExAllocatePool2(260LL, v10);
LABEL_14:
    *(_QWORD *)(Pool2 + 16) = v12;
    if ( !v12 )
      goto LABEL_38;
LABEL_15:
    memmove((void *)v12, *(const void **)(v2 + 16), *(unsigned int *)(v2 + 8));
    if ( v3 )
      *(_QWORD *)(v3 + 24) = Pool2;
    else
      v4 = (struct CPointerRawData *)Pool2;
    v2 = *(_QWORD *)(v2 + 24);
    v3 = Pool2;
  }
  while ( v9[v11] != 1685222229 )
  {
    if ( ++v11 >= (unsigned __int64)(unsigned int)v9[11] )
      goto LABEL_13;
  }
  v13 = 0;
  if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
  {
    v13 = 1;
    v10 += 16LL;
  }
  v12 = ExAllocatePool2(260LL, v10);
  if ( !v12 )
    goto LABEL_37;
  memset(v16, 0, sizeof(v16));
  RtlCaptureStackBackTrace(0, 0x14u, v16, 0LL);
  if ( v13 && (unsigned __int64)(v12 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v9,
            (const void *)v12,
            (struct NSInstrumentation::CBackTrace *)v16) )
      goto LABEL_36;
    v12 += 16LL;
    goto LABEL_14;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
         (__int64)v9,
         v12,
         (struct NSInstrumentation::CBackTrace *)v16) )
  {
    *(_QWORD *)(Pool2 + 16) = v12;
    goto LABEL_15;
  }
LABEL_36:
  ExFreePoolWithTag((PVOID)v12, 0);
LABEL_37:
  *(_QWORD *)(Pool2 + 16) = 0LL;
LABEL_38:
  if ( v4 )
    CTouchProcessor::FreePointerRawDataList(this, v4);
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  return 0LL;
}
