/*
 * XREFs of ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34
 * Callers:
 *     UserDeleteW32Thread @ 0x1C0019A70 (UserDeleteW32Thread.c)
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B8EAC (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x1C0141A04 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     NullifyLookasideRef @ 0x1C0141C84 (NullifyLookasideRef.c)
 *     UnlockQueue @ 0x1C0141DE0 (UnlockQueue.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C0152A1C (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     Win32UAFMFreeToPagedLookasideList @ 0x1C0167630 (Win32UAFMFreeToPagedLookasideList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        struct _SLIST_ENTRY *a3)
{
  struct _SLIST_ENTRY *v3; // rdi
  NSInstrumentation::CPrioritizedWriterLock **v4; // rsi
  union _SLIST_HEADER *v6; // rcx
  void (__fastcall *v7)(struct _SLIST_ENTRY *); // rax
  NSInstrumentation::CPointerHashTable *v8; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = a3;
  v4 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
  if ( *a2 )
  {
    v8 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    v9 = 0LL;
    v3 = a3 - 1;
    if ( !NSInstrumentation::CPointerHashTable::Remove(v8, &a3[-1], (void **)&v9) )
      return;
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      v4[8],
      v9);
    ++*((_DWORD *)a2 + 11);
    v6 = (union _SLIST_HEADER *)(a2 + 16);
  }
  else
  {
    ++*((_DWORD *)a2 + 11);
    v6 = (union _SLIST_HEADER *)(a2 + 16);
  }
  if ( ExQueryDepthSList(v6) >= *((_WORD *)a2 + 16) )
  {
    v7 = (void (__fastcall *)(struct _SLIST_ENTRY *))*((_QWORD *)a2 + 9);
    ++*((_DWORD *)a2 + 12);
    v7(v3);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)a2 + 1, v3);
  }
}
