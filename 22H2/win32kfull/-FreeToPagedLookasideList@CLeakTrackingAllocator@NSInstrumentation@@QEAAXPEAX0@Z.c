/*
 * XREFs of ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C02DD3BC
 * Callers:
 *     Win32UAFMFreeToPagedLookasideListImpl @ 0x1C021FE40 (Win32UAFMFreeToPagedLookasideListImpl.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C009F5D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C02DDEC8 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2,
        struct _SLIST_ENTRY *a3)
{
  struct _SLIST_ENTRY *v3; // rdi
  __int64 v4; // rsi
  union _SLIST_HEADER *v6; // rcx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  void (__fastcall *v8)(struct _SLIST_ENTRY *); // rax
  struct NSInstrumentation::CBackTraceStorageUnit *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = a3;
  v4 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  if ( *a2 )
  {
    v7 = *(NSInstrumentation::CPointerHashTable **)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels + 48LL);
    v9 = 0LL;
    v3 = a3 - 1;
    if ( !NSInstrumentation::CPointerHashTable::Remove(v7, (unsigned __int64)&a3[-1], (void **)&v9) )
      return;
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *(NSInstrumentation::CPrioritizedWriterLock **)(v4 + 64),
      v9);
    ++*((_DWORD *)a2 + 11);
    v6 = (union _SLIST_HEADER *)(a2 + 16);
  }
  else
  {
    ++*((_DWORD *)a2 + 11);
    v6 = (union _SLIST_HEADER *)(a2 + 16);
  }
  if ( ExQueryDepthSList(v6) < *((_WORD *)a2 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)a2 + 1, v3);
  }
  else
  {
    v8 = (void (__fastcall *)(struct _SLIST_ENTRY *))*((_QWORD *)a2 + 9);
    ++*((_DWORD *)a2 + 12);
    v8(v3);
  }
}
