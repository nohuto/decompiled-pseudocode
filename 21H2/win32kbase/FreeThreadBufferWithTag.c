/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C0082710
 * Callers:
 *     <none>
 * Callees:
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C017A3C0 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx
  NSInstrumentation::CPrioritizedWriterLock **v4; // rdi
  NSInstrumentation::CPointerHashTable *v5; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v6; // rcx
  _QWORD *v7; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (_QWORD *)(a1 - 32);
  if ( a1 != 32 )
  {
    KeEnterCriticalRegion();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    v1[1] = v1;
    *v1 = v1;
    KeLeaveCriticalRegion();
    v4 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
    v9 = v1;
    v8 = 0LL;
    v5 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    if ( v5
      && ((unsigned __int16)v1 & 0xFFFu) >= 0x10uLL
      && NSInstrumentation::CPointerHashTable::Remove(v5, v1 - 2, (void **)&v8) )
    {
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        v4[8],
        v8);
      v7 = v1 - 2;
    }
    else
    {
      v6 = v4[7];
      if ( v6 )
      {
        if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v6, &v9, &v8) )
          NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
            v4[8],
            v8);
      }
      v7 = v1;
    }
    ExFreePoolWithTag(v7, 0);
  }
}
