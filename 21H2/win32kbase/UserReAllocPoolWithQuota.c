/*
 * XREFs of UserReAllocPoolWithQuota @ 0x1C00AF750
 * Callers:
 *     FastGetProfileKeysW @ 0x1C01491C0 (FastGetProfileKeysW.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall UserReAllocPoolWithQuota(void *a1, size_t Size, unsigned __int64 a3, int a4)
{
  PVOID v4; // rsi
  size_t v6; // rdi
  unsigned __int64 v8; // rdx
  __int64 Pool2; // rbx
  __int64 v11; // rax
  char v12; // r14
  PVOID BackTrace[20]; // [rsp+20h] [rbp-B8h] BYREF

  v4 = gpLeakTrackingAllocator;
  v6 = a3;
  v8 = a3;
  if ( (a4 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a4 || (v11 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(261LL, a3);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != a4 )
  {
    if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v12 = 0;
  if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 = a3 + 16;
  }
  Pool2 = ExAllocatePool2(261LL, v8);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v12 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v4,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_3:
      if ( !Pool2 )
        return Pool2;
      goto LABEL_4;
    }
    goto LABEL_21;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_21:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_4:
  if ( Size <= v6 )
    v6 = Size;
  memmove((void *)Pool2, a1, v6);
  if ( a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)a1);
  return Pool2;
}
