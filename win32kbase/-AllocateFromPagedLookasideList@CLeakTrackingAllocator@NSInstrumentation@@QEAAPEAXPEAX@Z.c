/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C009D8BC
 * Callers:
 *     GreCreateRectRgnIndirect @ 0x1C0050B70 (GreCreateRectRgnIndirect.c)
 *     AllocateObject @ 0x1C0052FA0 (AllocateObject.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C0053130 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C0053290 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0056850 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     AllocQueue @ 0x1C0078C60 (AllocQueue.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     Win32UAFMAllocateFromPagedLookasideList @ 0x1C017D350 (Win32UAFMAllocateFromPagedLookasideList.c)
 * Callees:
 *     ?PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z @ 0x1C00A55E4 (-PlatformAllocateFromPagedLookasideList@NSInstrumentation@@YAPEAXPEAX@Z.c)
 *     ?PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z @ 0x1C00A5738 (-PlatformFreeToPagedLookasideList@NSInstrumentation@@YAXPEAX0@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ?LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C540 (-LookupInterlockedIncrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

_QWORD *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  NSInstrumentation *v2; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rsi
  void *v7; // r8
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v2 = (NSInstrumentation *)(a2 + 16);
  v3 = gpLeakTrackingAllocator;
  if ( a2[5] )
  {
    v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
    if ( v6 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v3,
                              v6,
                              (unsigned __int8)a2[4],
                              BackTrace) )
        return v6 + 2;
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      NSInstrumentation::PlatformFreeToPagedLookasideList((NSInstrumentation *)(a2 + 16), v6, v7);
    }
    return 0LL;
  }
  if ( (*(_DWORD *)gpLeakTrackingAllocator & 0xFFFFFFFD) != 0 )
  {
    v6 = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
    if ( v6 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
      NSInstrumentation::CPointerHashTable::LookupInterlockedIncrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        (const void *)*(unsigned int *)a2);
      *v6 = *(unsigned int *)a2;
      return v6 + 2;
    }
    return 0LL;
  }
  result = NSInstrumentation::PlatformAllocateFromPagedLookasideList(v2, a2);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
  return result;
}
