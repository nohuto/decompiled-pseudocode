/*
 * XREFs of RIMIDEAllocateInjectedInfo @ 0x1C019AC4C
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  PVOID v1; // rbx
  __int64 v3; // rax
  __int64 Pool2; // rdi
  __int64 v5; // rbp
  PVOID v7; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  char v11; // r15
  PVOID BackTrace[20]; // [rsp+20h] [rbp-168h] BYREF
  PVOID v13[20]; // [rsp+C0h] [rbp-C8h] BYREF

  v1 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) == 0x6A6E6952
    && (v3 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v3) != 1785620818 )
    {
      if ( ++v3 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(260LL, 112LL);
    if ( !Pool2 )
      return 0LL;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v1,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        v5 = Pool2;
        goto LABEL_12;
      }
      goto LABEL_21;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v1,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_21:
      ExFreePoolWithTag((PVOID)Pool2, 0);
      return 0LL;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_5:
    Pool2 = ExAllocatePool2(260LL, 96LL);
  }
  v5 = Pool2;
  if ( !Pool2 )
    return 0LL;
LABEL_12:
  v7 = gpLeakTrackingAllocator;
  v8 = 8LL * *(unsigned int *)(a1 + 88);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) != 0x6A6E6952
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_16:
    v10 = ExAllocatePool2(260LL, v8);
    goto LABEL_17;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1785620818 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_16;
  }
  v11 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v11 = 1;
    v8 += 16LL;
  }
  v10 = ExAllocatePool2(260LL, v8);
  if ( !v10 )
    goto LABEL_32;
  memset(v13, 0, sizeof(v13));
  RtlCaptureStackBackTrace(0, 0x14u, v13, 0LL);
  if ( !v11 || (unsigned __int64)(v10 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v7,
           v10,
           (struct NSInstrumentation::CBackTrace *)v13) )
    {
      goto LABEL_18;
    }
    goto LABEL_31;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v7,
          (const void *)v10,
          (struct NSInstrumentation::CBackTrace *)v13) )
  {
LABEL_31:
    ExFreePoolWithTag((PVOID)v10, 0);
    goto LABEL_32;
  }
  v10 += 16LL;
LABEL_17:
  if ( !v10 )
  {
LABEL_32:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
    return 0LL;
  }
LABEL_18:
  *(_QWORD *)(Pool2 + 72) = v10;
  return v5;
}
