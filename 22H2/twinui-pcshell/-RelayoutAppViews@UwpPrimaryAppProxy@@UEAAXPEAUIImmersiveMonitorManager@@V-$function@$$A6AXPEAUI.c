/*
 * XREFs of ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180393FD4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C328 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpPrimaryAppProxy::RelayoutAppViews(RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  RTL_SRWLOCK *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v10[88]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a1 + 5;
  AcquireSRWLockShared(a1 + 5);
  v7 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
         (__int64)v10,
         a3);
  UwpPrimaryAppProxy::RelayoutAppViewsInternal(a1, a2, v7);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  v9 = *(_QWORD *)(a3 + 56);
  if ( v9 )
  {
    LOBYTE(v8) = v9 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v8);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
