/*
 * XREFs of UserPostNKAPCBuffer @ 0x1C0144100
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall UserPostNKAPCBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size)
{
  PVOID v6; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 Pool2; // rdi
  char v15; // si
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C8h] BYREF

  v6 = gpLeakTrackingAllocator;
  v11 = (unsigned int)Size + 88LL;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x616E7355) != 0x616E7355
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_5:
    Pool2 = ExAllocatePool2(68LL, v11);
    goto LABEL_6;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1634628437 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_5;
  }
  v15 = 0;
  if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
  {
    v15 = 1;
    v11 = (unsigned int)Size + 104LL;
  }
  Pool2 = ExAllocatePool2(68LL, v11);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v6,
                            Pool2,
                            BackTrace) )
    {
      Pool2 += 16LL;
LABEL_6:
      if ( !Pool2 )
        return 0LL;
      goto LABEL_7;
    }
LABEL_18:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v6,
                           Pool2,
                           BackTrace) )
    goto LABEL_18;
LABEL_7:
  memmove((void *)(Pool2 + 88), Src, (unsigned int)Size);
  KeInitializeApc(Pool2, a1, 0LL, a2, a3, a4, 0, Pool2 + 88);
  if ( (unsigned __int8)KeInsertQueueApc(Pool2, Pool2, 0LL, 0LL) )
    return 1LL;
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  return 0LL;
}
