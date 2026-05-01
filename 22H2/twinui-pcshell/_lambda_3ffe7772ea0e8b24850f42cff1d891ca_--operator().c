/*
 * XREFs of _lambda_3ffe7772ea0e8b24850f42cff1d891ca_::operator() @ 0x1802F5EC8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_3ffe7772ea0e8b24850f42cff1d891ca___1_IInspectable___IInspectable___::Invoke @ 0x1802F70D0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1802F70D0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F86DC (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3ffe7772ea0e8b24850f42cff1d891ca_::operator()(_QWORD *a1, void *a2, void *a3)
{
  struct IWeakReference *v4; // rcx
  void *v5; // rax
  struct IWeakReference *v6; // rcx
  int v7; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+38h] [rbp+10h] BYREF
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v4 = (struct IWeakReference *)a1[1];
  if ( v4 )
  {
    wil::details::weak_query_policy::query(v4, &GUID_e3138dbc_72e8_40ac_a99a_52b78e942e7c, &v11);
    v5 = v11;
  }
  else
  {
    v5 = 0LL;
    v11 = 0LL;
  }
  if ( !v5 )
    goto LABEL_14;
  v6 = *(struct IWeakReference **)(*a1 + 200LL);
  if ( v6 )
  {
    wil::details::weak_query_policy::query(v6, &GUID_0cf8429a_8037_4ebd_83fd_6471d78ca4eb, &v12);
    v6 = (struct IWeakReference *)v12;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v6 && (v7 = ((__int64 (__fastcall *)(struct IWeakReference *))v6->lpVtbl->Resolve)(v6), v8 = v7, v7 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
  }
  else
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    v8 = 0;
  }
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BC,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
      (const char *)(unsigned int)v8);
  else
LABEL_14:
    v8 = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v11);
  return (unsigned int)v8;
}
