/*
 * XREFs of ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x1803942A4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x18044AD2C (-FindAppView@UwpPrimaryAppProxy@@AEAA-AV-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types.c)
 *     ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C6B8 (-RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18044D3B4 (-erase@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UwpPrimaryAppProxy::RemoveView(RTL_SRWLOCK *a1, struct IUnknown *a2, __int64 *a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // rcx
  _BYTE v15[72]; // [rsp+28h] [rbp-60h] BYREF
  struct IUnknown **v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

  v17 = a4;
  v8 = a1 + 5;
  AcquireSRWLockExclusive(a1 + 5);
  UwpPrimaryAppProxy::FindAppView((__int64)a1, &v16, a2);
  if ( v16 == a1[7].Ptr )
  {
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v14 = *(_QWORD *)(a4 + 56);
    if ( v14 )
    {
      LOBYTE(v9) = v14 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v9);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 0;
  }
  else
  {
    std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::erase(&a1[6], &v16);
    if ( a1[6].Ptr == a1[7].Ptr )
    {
      a1[9].Ptr = (PVOID)-1LL;
    }
    else
    {
      v11 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
              (__int64)v15,
              a4);
      UwpPrimaryAppProxy::RelayoutAppViewsInternal((__int64)a1, a3, v11);
    }
    if ( v8 )
      ReleaseSRWLockExclusive(v8);
    v12 = *(_QWORD *)(a4 + 56);
    if ( v12 )
    {
      LOBYTE(v10) = v12 != a4;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v10);
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    return 1;
  }
}
