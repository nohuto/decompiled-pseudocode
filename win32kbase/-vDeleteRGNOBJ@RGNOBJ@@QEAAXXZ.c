/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0055800
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001B660 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0092D30 (-Free@-$CTypeIsolation@$0IAAA@$0IA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C00A5738 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C019C5E4 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019CF8C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(RGNOBJ *this)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v5; // r8
  char *v6; // rdi
  unsigned int *v7; // rbp
  NSInstrumentation::CLeakTrackingAllocator *v8; // rsi
  char *v9; // rdx
  __int64 v10; // rcx
  NSInstrumentation::CPointerHashTable *v11; // rcx
  void *v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  if ( !v1 || v1 == *(_QWORD *)(v3 + 6400) )
    goto LABEL_13;
  v6 = *(char **)(v1 + 32);
  if ( v6 )
  {
    if ( *(_DWORD *)(v1 + 24) != 112 )
    {
      if ( *(_DWORD *)(v1 + 24) > 0x70u )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)(v1 + 32));
      goto LABEL_10;
    }
    v7 = *(unsigned int **)(v3 + 6376);
    v8 = gpLeakTrackingAllocator;
    if ( *((_BYTE *)v7 + 5) )
    {
      v11 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
      v12 = 0LL;
      if ( !NSInstrumentation::CPointerHashTable::Remove(v11, v6 - 16, &v12) )
        goto LABEL_10;
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        *((NSInstrumentation::CPrioritizedWriterLock **)v8 + 13),
        (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFF8uLL));
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
      v9 = v6 - 16;
    }
    else
    {
      if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)gpLeakTrackingAllocator + 1),
          (const void *)*v7);
        v6 -= 16;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 15);
      v9 = v6;
    }
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(v7 + 4), v9, v5);
LABEL_10:
    *(_QWORD *)(v1 + 32) = 0LL;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 6504LL) + 56LL);
  if ( v10 )
    NSInstrumentation::CTypeIsolation<32768,128>::Free(v10, v1);
LABEL_13:
  *(_QWORD *)this = 0LL;
}
