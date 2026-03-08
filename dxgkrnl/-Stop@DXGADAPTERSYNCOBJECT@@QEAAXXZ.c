/*
 * XREFs of ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x1C01D4758
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C0186C00 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02BD19C (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1C034ABD4 (-Destroy@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z @ 0x1C0047F60 (-ReleaseReference@DXG_SIGNAL_GUEST_CPU_EVENT@@SAXPEAU1@@Z.c)
 *     ?DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z @ 0x1C02C1794 (-DdiDestroyCpuEvent@ADAPTER_RENDER@@QEAAJQEAX@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::Stop(DXGADAPTERSYNCOBJECT *this)
{
  signed __int64 v1; // rdi
  __int64 v3; // rax
  void *v4; // rdx

  v1 = *((_QWORD *)this + 4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, 0LL, v1) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      v4 = *(void **)(v3 + 32);
      if ( v4 )
        ADAPTER_RENDER::DdiDestroyCpuEvent(*((ADAPTER_RENDER **)this + 2), v4);
      DXG_SIGNAL_GUEST_CPU_EVENT::ReleaseReference(*((struct DXG_SIGNAL_GUEST_CPU_EVENT **)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    (*(void (__fastcall **)(signed __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 616LL))(v1);
  }
}
