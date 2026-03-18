/*
 * XREFs of UserReAllocPool @ 0x1C008AE00
 * Callers:
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0050170 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01FD138 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C017A3C0 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

__int64 __fastcall UserReAllocPool(char *Src, size_t Size, unsigned __int64 a3, int a4)
{
  PVOID v4; // rbp
  size_t v6; // rdi
  unsigned __int64 v8; // rdx
  __int64 Pool2; // rbx
  NSInstrumentation::CPrioritizedWriterLock **v10; // rdi
  NSInstrumentation::CPointerHashTable *v11; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v12; // rcx
  char *v13; // rcx
  __int64 v15; // rax
  char v16; // r14
  char *v17; // [rsp+20h] [rbp-D8h] BYREF
  PVOID BackTrace[20]; // [rsp+30h] [rbp-C8h] BYREF
  struct NSInstrumentation::CBackTraceStorageUnit *v19; // [rsp+110h] [rbp+18h] BYREF

  v4 = gpLeakTrackingAllocator;
  v6 = a3;
  v8 = a3;
  if ( (a4 & *((_DWORD *)gpLeakTrackingAllocator + 10)) != a4 || (v15 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, a3);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v15) != a4 )
  {
    if ( ++v15 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v16 = 0;
  if ( a3 < 0x1000 || (a3 & 0xFFF) != 0 )
  {
    v16 = 1;
    v8 = a3 + 16;
  }
  Pool2 = ExAllocatePool2(260LL, v8);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
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
    goto LABEL_24;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           BackTrace) )
  {
LABEL_24:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
LABEL_4:
  if ( Size <= v6 )
    v6 = Size;
  memmove((void *)Pool2, Src, v6);
  if ( Src )
  {
    v10 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
    v19 = 0LL;
    v17 = Src;
    v11 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    if ( v11
      && ((unsigned __int16)Src & 0xFFFu) >= 0x10uLL
      && NSInstrumentation::CPointerHashTable::Remove(v11, Src - 16, (void **)&v19) )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        v10[8],
        v19);
      v13 = Src - 16;
    }
    else
    {
      v12 = v10[7];
      if ( v12 && (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v12, &v17, &v19) )
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
          v10[8],
          v19);
      v13 = Src;
    }
    ExFreePoolWithTag(v13, 0);
  }
  return Pool2;
}
