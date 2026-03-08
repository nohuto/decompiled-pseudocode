/*
 * XREFs of ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C019B248
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C019B098 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 *     ?PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z @ 0x1C019B6B8 (-PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C019A6D0 (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

void __fastcall NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
        __int64 a1,
        void (__fastcall *a2)(__int64, _QWORD, __int64),
        __int64 a3)
{
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rcx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 28));
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  if ( *(_QWORD *)(a1 + 40) )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(_QWORD *)(v8 + 16LL * v7);
      if ( v9 )
      {
        a2(v9, *(_QWORD *)(v8 + 16LL * v7 + 8), a3);
        ++v6;
      }
      ++v7;
    }
    while ( (unsigned __int64)v6 < *(_QWORD *)(a1 + 40) );
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
