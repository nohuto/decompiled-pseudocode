/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C008B020
 * Callers:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0026860 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     AllocQueue @ 0x1C002CFE0 (AllocQueue.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x1C008EF30 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1C0167560 (Win32UAFMAllocateFromPagedLookasideList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  PVOID v2; // rbp
  union _SLIST_HEADER *v3; // rbx
  struct _SLIST_ENTRY *v5; // rdi
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = (union _SLIST_HEADER *)(a2 + 16);
  ++*((_DWORD *)a2 + 9);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a2 + 1);
  if ( !v5 )
  {
    Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v3[3].Alignment;
    v7 = *((unsigned int *)&v3[2].HeaderX64 + 3);
    v8 = *((unsigned int *)&v3[2].HeaderX64 + 2);
    v9 = *((unsigned int *)&v3[2].HeaderX64 + 1);
    ++*((_DWORD *)&v3[1].HeaderX64 + 2);
    v5 = (struct _SLIST_ENTRY *)Alignment(v9, v7, v8);
    if ( !v5 )
      return 0LL;
  }
  if ( !*a2 )
    return v5;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v2,
                           v5,
                           BackTrace) )
  {
    ++*((_DWORD *)&v3[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v3) < LOWORD(v3[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v3, v5);
    }
    else
    {
      ++LODWORD(v3[2].Alignment);
      ((void (__fastcall *)(struct _SLIST_ENTRY *))v3[3].Region)(v5);
    }
    return 0LL;
  }
  return v5 + 1;
}
