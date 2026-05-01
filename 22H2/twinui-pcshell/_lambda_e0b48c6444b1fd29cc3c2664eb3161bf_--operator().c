/*
 * XREFs of _lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator() @ 0x180388170
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___::Invoke @ 0x18038AD60 (CAsyncCallbackWithLambda__lambda_1e52c7d2e1e6d5a227d45010f0b86b73___--Invoke.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$query@UIAllUpViewHostInternal@@@?$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAllUpViewHostInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB77C (--$query@UIAllUpViewHostInternal@@@-$com_ptr_t@UIMultitaskingViewHost@@Uerr_exception_policy@wil.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator()(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v1 = Platform::Details::ResolveWeakReference(&_uuidof__AVXamlAllUpViewController__, a1);
  v5 = v1;
  v2 = (_QWORD *)__abi_winrt_ptr_ctor(v1);
  v6 = v2;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 )
  {
    v3 = (_QWORD *)wil::com_ptr_t<IMultitaskingViewHost,wil::err_exception_policy>::query<IAllUpViewHostInternal>(
                     v2 + 7,
                     (__int64)&v5);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 48LL))(*v3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  }
  return 0LL;
}
