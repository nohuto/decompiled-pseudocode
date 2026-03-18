/*
 * XREFs of FreeObject @ 0x1C0027670
 * Callers:
 *     HmgAlloc @ 0x1C001E6F0 (HmgAlloc.c)
 *     HmgFree @ 0x1C0087080 (HmgFree.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00BEE40 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00D96B4 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DBD84 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall FreeObject(struct _SLIST_ENTRY *a1, int a2)
{
  struct _SLIST_ENTRY *v2; // rdi
  NSInstrumentation::CPrioritizedWriterLock **v3; // rsi
  void * near *v4; // rbx
  NSInstrumentation::CPointerHashTable *v5; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( *((__int16 *)&a1->Next + 7) >= 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      a1);
    return;
  }
  v3 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
  v4 = (&pHmgLookAsideList)[a2];
  if ( *(_BYTE *)v4 )
  {
    v5 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
    --v2;
    v6 = 0LL;
    if ( !NSInstrumentation::CPointerHashTable::Remove(v5, v2, (void **)&v6) )
      return;
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      v3[8],
      v6);
  }
  ++*((_DWORD *)v4 + 11);
  if ( ExQueryDepthSList((PSLIST_HEADER)v4 + 1) >= *((_WORD *)v4 + 16) )
  {
    ++*((_DWORD *)v4 + 12);
    ((void (__fastcall *)(struct _SLIST_ENTRY *))v4[9])(v2);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v4 + 1, v2);
  }
}
