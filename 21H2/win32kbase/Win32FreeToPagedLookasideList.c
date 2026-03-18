/*
 * XREFs of Win32FreeToPagedLookasideList @ 0x1C00240E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

unsigned __int8 __fastcall Win32FreeToPagedLookasideList(__int64 a1, struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *v2; // rdi
  NSInstrumentation::CPrioritizedWriterLock **v3; // rsi
  union _SLIST_HEADER *v5; // rcx
  unsigned __int8 result; // al
  __int64 (__fastcall *v7)(struct _SLIST_ENTRY *); // rax
  NSInstrumentation::CPointerHashTable *v8; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
  if ( *(_BYTE *)a1 )
  {
    v8 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    v9 = 0LL;
    v2 = a2 - 1;
    result = NSInstrumentation::CPointerHashTable::Remove(v8, &a2[-1], (void **)&v9);
    if ( !result )
      return result;
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      v3[8],
      v9);
    ++*(_DWORD *)(a1 + 44);
    v5 = (union _SLIST_HEADER *)(a1 + 16);
  }
  else
  {
    ++*(_DWORD *)(a1 + 44);
    v5 = (union _SLIST_HEADER *)(a1 + 16);
  }
  if ( ExQueryDepthSList(v5) < *(_WORD *)(a1 + 32) )
    return (unsigned __int8)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 16), v2);
  v7 = *(__int64 (__fastcall **)(struct _SLIST_ENTRY *))(a1 + 72);
  ++*(_DWORD *)(a1 + 48);
  return v7(v2);
}
