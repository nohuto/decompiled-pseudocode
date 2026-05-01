/*
 * XREFs of ?RelayoutAppViewsInternal@UwpPrimaryAppProxy@@AEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C328
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044B3C0 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C230 (-RelayoutAppViews@UwpPrimaryAppProxy@@UEAAXPEAUIImmersiveMonitorManager@@V-$function@$$A6AXPEAUI.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x18044C500 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??R_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_@@QEBAXAEBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800D6458 (--R_lambda_280d05e5955ef1ef6fea1bffa32e8a2c_@@QEBAXAEBV-$com_ptr_t@UIApplicationView@@Uerr_excep.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x18044AFD0 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpPrimaryAppProxy::RelayoutAppViewsInternal(__int64 a1, __int64 *a2, __int64 a3)
{
  _QWORD **v5; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  v18 = a3;
  UwpPrimaryAppProxy::GetSortedConnectedMonitors(a1, v12, a2);
  v5 = (_QWORD **)v12[0];
  v13 = *(_QWORD *)v12[0];
  *(_QWORD *)&v14 = &v13;
  *((_QWORD *)&v14 + 1) = v12;
  v15 = a3;
  v6 = *(_QWORD **)(a1 + 56);
  v16 = v14;
  v17 = a3;
  v7 = *(_QWORD **)(a1 + 48);
  if ( v7 != v6 )
  {
    do
      _lambda_280d05e5955ef1ef6fea1bffa32e8a2c_::operator()((__int64 **)&v16, v7++);
    while ( v7 != v6 );
    v5 = (_QWORD **)v12[0];
  }
  *v5[1] = 0LL;
  v8 = *v5;
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)*v8;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8 + 2);
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x18);
      v8 = v9;
    }
    while ( v9 );
  }
  std::_Deallocate<16,0>(v12[0], (const struct std::nothrow_t *)0x18);
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
