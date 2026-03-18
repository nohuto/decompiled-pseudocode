/*
 * XREFs of ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0023D60
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C001C600 (-bCompute@DC@@QEAAHXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C002F130 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0024250 (-Free@-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall RGNOBJ::vDeleteRGNOBJ(RGNOBJ *this)
{
  __int64 v1; // rbx
  struct _SLIST_ENTRY *v3; // r14
  void *v4; // rbp
  NSInstrumentation::CPrioritizedWriterLock **v5; // r15
  __int64 v6; // rcx
  NSInstrumentation::CPointerHashTable *v7; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( !*(_QWORD *)this || (struct REGION *)v1 == prgnDefault )
  {
    *(_QWORD *)this = 0LL;
    return;
  }
  v3 = *(struct _SLIST_ENTRY **)(v1 + 88);
  if ( v3 )
  {
    if ( *(_DWORD *)(v1 + 24) != 112 )
    {
      if ( *(_DWORD *)(v1 + 24) > 0x70u )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v3);
      goto LABEL_9;
    }
    v4 = RGNMEMOBJ::s_pSCANLookAsideList;
    v5 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
    if ( *(_BYTE *)RGNMEMOBJ::s_pSCANLookAsideList )
    {
      v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
      --v3;
      v8 = 0LL;
      if ( !NSInstrumentation::CPointerHashTable::Remove(v7, v3, (void **)&v8) )
      {
LABEL_9:
        *(_QWORD *)(v1 + 88) = 0LL;
        goto LABEL_10;
      }
      NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
        v5[8],
        v8);
    }
    ++*((_DWORD *)v4 + 11);
    if ( ExQueryDepthSList((PSLIST_HEADER)v4 + 1) >= *((_WORD *)v4 + 16) )
    {
      ++*((_DWORD *)v4 + 12);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *))v4 + 9))(v3);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v4 + 1, v3);
    }
    goto LABEL_9;
  }
LABEL_10:
  v6 = *((_QWORD *)gpTypeIsolation + 7);
  if ( v6 )
    NSInstrumentation::CTypeIsolation<28672,112>::Free(v6, v1);
  *(_QWORD *)this = 0LL;
}
