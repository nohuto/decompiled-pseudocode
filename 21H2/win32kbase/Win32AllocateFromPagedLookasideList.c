/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C0026280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  PVOID v1; // r14
  __int64 v2; // rbx
  __int64 v4; // rdi
  struct _SLIST_ENTRY *v5; // rsi
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  v2 = a1 + 16;
  ++*(_DWORD *)(a1 + 36);
  v4 = 0LL;
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 16));
  if ( v5
    || (v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v2 + 48),
        v7 = *(unsigned int *)(v2 + 44),
        v8 = *(unsigned int *)(v2 + 40),
        v9 = *(unsigned int *)(v2 + 36),
        ++*(_DWORD *)(v2 + 24),
        (v5 = (struct _SLIST_ENTRY *)v6(v9, v7, v8)) != 0LL) )
  {
    if ( *(_BYTE *)a1 )
    {
      memset(BackTrace, 0, sizeof(BackTrace));
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              v5,
                              BackTrace) )
      {
        return v5 + 1;
      }
      else
      {
        ++*(_DWORD *)(v2 + 28);
        if ( ExQueryDepthSList((PSLIST_HEADER)v2) < *(_WORD *)(v2 + 16) )
        {
          ExpInterlockedPushEntrySList((PSLIST_HEADER)v2, v5);
        }
        else
        {
          ++*(_DWORD *)(v2 + 32);
          (*(void (__fastcall **)(struct _SLIST_ENTRY *))(v2 + 56))(v5);
        }
      }
    }
    else
    {
      return v5;
    }
  }
  return (struct _SLIST_ENTRY *)v4;
}
