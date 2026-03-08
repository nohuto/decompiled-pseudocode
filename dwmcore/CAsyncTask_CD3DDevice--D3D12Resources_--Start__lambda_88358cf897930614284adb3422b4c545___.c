/*
 * XREFs of CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x180288B2C
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18028A06C (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180196B80 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_ @ 0x180288D7C (_lambda_88358cf897930614284adb3422b4c545_--_lambda_88358cf897930614284adb3422b4c545_.c)
 *     ??0?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAA@$$QEAV?$function@$$A6AJPEAUD3D12Resources@CD3DDevice@@@Z@std@@@Z @ 0x180288DE8 (--0-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@AEAA@$$QEAV-$function@$$A6AJPEAUD3D12Resources@CD3.c)
 *     ??1?$unique_ptr@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U?$default_delete@V?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@@std@@@std@@QEAA@XZ @ 0x180288F50 (--1-$unique_ptr@V-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@U-$default_delete@V-$CAsyncTask@UD3D.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x18028B910 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
        __int64 a1,
        PTP_WORK **a2)
{
  LPVOID v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  PTP_WORK *v8; // rbx
  _QWORD *v9; // rdx
  PTP_WORK ThreadpoolWork; // rax
  const char *v11; // r9
  int LastError; // eax
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  PTP_WORK *v17; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v19[7]; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  LODWORD(v17) = 0;
  v4 = DefaultHeap::Alloc(0x68uLL);
  if ( !v4 )
  {
    v17 = 0LL;
LABEL_9:
    v13 = -2147024882;
    v15 = 52LL;
    v14 = 2147942414LL;
    goto LABEL_10;
  }
  v5 = (__int64 *)lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_(v18, a1);
  v19[0] = off_1802C9DA8;
  v6 = *v5;
  *v5 = 0LL;
  v19[1] = v6;
  v7 = v5[1];
  v5[1] = 0LL;
  v19[2] = v7;
  v20 = v19;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v5 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v5);
  v8 = (PTP_WORK *)CAsyncTask<CD3DDevice::D3D12Resources>::CAsyncTask<CD3DDevice::D3D12Resources>(v4, v19);
  v17 = v8;
  if ( v20 )
  {
    v9 = v19;
    LOBYTE(v9) = v20 != v19;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v20 + 32LL))(v20, v9);
  }
  if ( !v8 )
    goto LABEL_9;
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)_lambda_a704c69ed083326e40d515dc4d6b076b_::_lambda_invoker_cdecl_,
                     v8,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    v8,
    ThreadpoolWork);
  if ( *v8 )
  {
    SubmitThreadpoolWork(*v8);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x51,
                  (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
                  v11);
    v13 = LastError;
    if ( LastError < 0 )
    {
      v14 = (unsigned int)LastError;
      v15 = 54LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
        (const char *)v14);
      std::unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>::~unique_ptr<CAsyncTask<CD3DDevice::D3D12Resources>>(&v17);
      return v13;
    }
  }
  *a2 = v8;
  return 0LL;
}
