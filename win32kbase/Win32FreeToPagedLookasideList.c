/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C0055B50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C00A5738 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C019C5E4 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C019CF8C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall Win32FreeToPagedLookasideList(unsigned int *a1, char *a2, void *a3)
{
  char *v3; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  char *v6; // rdx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  v4 = gpLeakTrackingAllocator;
  if ( !*((_BYTE *)a1 + 5) )
  {
    if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)gpLeakTrackingAllocator + 1),
        (const void *)*a1);
      v3 -= 16;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 15);
    v6 = v3;
    goto LABEL_5;
  }
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 11);
  v8 = 0LL;
  if ( NSInstrumentation::CPointerHashTable::Remove(v7, a2 - 16, &v8) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *((NSInstrumentation::CPrioritizedWriterLock **)v4 + 13),
      (struct NSInstrumentation::CBackTraceStorageUnit *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFFFF8uLL));
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
    v6 = v3 - 16;
LABEL_5:
    NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a1 + 4), v6, a3);
  }
}
