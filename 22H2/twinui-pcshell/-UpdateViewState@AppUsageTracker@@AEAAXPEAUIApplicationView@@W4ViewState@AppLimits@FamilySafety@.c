/*
 * XREFs of ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C73C4
 * Callers:
 *     ?EnumerateExistingViews@AppUsageTracker@@UEAAXXZ @ 0x1804C6CE0 (-EnumerateExistingViews@AppUsageTracker@@UEAAXXZ.c)
 *     ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804C70F0 (-OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804C61A8 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall AppUsageTracker::UpdateViewState(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // r9
  _DWORD *v9; // rcx
  bool v10; // bp
  __int64 v12[5]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 || (v13 = 0, (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v13), v13) )
  {
    v10 = *(_DWORD *)(a1 + 104) == 1;
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v12);
    if ( v12[0] )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 80) + 24LL))(
        *(_QWORD *)(a1 + 80),
        a2,
        a3,
        *(_QWORD *)(a1 + 96),
        v10);
    }
    else
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v14);
      if ( v14 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, bool))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          a2,
          a3,
          *(_QWORD *)(a1 + 96),
          v10);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
    }
    LODWORD(v7) = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v12);
  }
  else
  {
    v7 = wil::details::static_lazy<AppUsageTelemetry>::get(
           v6,
           _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_);
    v9 = (_DWORD *)v7[1];
    if ( *v9 > 5u )
    {
      v14 = (__int64)L"Filtered out active view not in switchers";
      LODWORD(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                      (__int64)v9,
                      (unsigned __int8 *)dword_18059EFEA,
                      0LL,
                      v8,
                      (const WCHAR **)&v14);
    }
  }
  return (int)v7;
}
