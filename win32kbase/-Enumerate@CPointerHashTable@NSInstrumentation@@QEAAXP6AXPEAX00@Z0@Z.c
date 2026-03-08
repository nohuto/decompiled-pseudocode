/*
 * XREFs of ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1C019BFEC
 * Callers:
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x1C00D4B20 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C019B098 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 *     ?PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z @ 0x1C019B6B8 (-PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NSInstrumentation::CPointerHashTable::Enumerate(
        NSInstrumentation::CPointerHashTable *this,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  unsigned int v3; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx

  v3 = *((_DWORD *)this + 12);
  if ( v3 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v8 >= *((_DWORD *)this + 10) )
        break;
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)(v9 + 16LL * v8);
      if ( v10 )
      {
        ((void (__fastcall *)(__int64, _QWORD, void *))a2)(v10, *(_QWORD *)(v9 + 16LL * v8 + 8), a3);
        ++v7;
      }
      ++v8;
    }
    while ( v7 < v3 );
  }
}
