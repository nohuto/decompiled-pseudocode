/*
 * XREFs of ?SuspendMemorySegments@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02BD4FC
 * Callers:
 *     DxgkSuspendMemorySegments @ 0x1C02BE73C (DxgkSuspendMemorySegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0180040 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendMemorySegments(ADAPTER_RENDER *this)
{
  int v2; // edi

  ADAPTER_RENDER::FlushScheduler((__int64)this, 6u, 0xFFFFFFFF, 1);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 88LL))(*((_QWORD *)this + 96));
  if ( v2 < 0 )
    ADAPTER_RENDER::FlushScheduler((__int64)this, 7u, 0xFFFFFFFF, 1);
  return (unsigned int)v2;
}
