/*
 * XREFs of CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___ @ 0x18023CEC4
 * Callers:
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x18023EF38 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18005A210 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014E3BC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_ @ 0x18023D48C (_lambda_88358cf897930614284adb3422b4c545_--_lambda_88358cf897930614284adb3422b4c545_.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z @ 0x18023D54C (--_G-$CAsyncTask@UD3D12Resources@CD3DDevice@@@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180240F3C (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

__int64 __fastcall CAsyncTask_CD3DDevice::D3D12Resources_::Start__lambda_88358cf897930614284adb3422b4c545___(
        __int64 a1,
        _QWORD *a2)
{
  char v2; // si
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  void *v9; // rbx
  _QWORD *v10; // rdx
  int LastError; // esi
  __int64 v12; // rdx
  PTP_WORK ThreadpoolWork; // rax
  const char *v14; // r9
  char v16[24]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v17[7]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = 0;
  v5 = DefaultHeap::Alloc(0x60uLL);
  if ( v5 )
  {
    v6 = (__int64 *)lambda_88358cf897930614284adb3422b4c545_::_lambda_88358cf897930614284adb3422b4c545_(v16, a1);
    v17[0] = off_180279FF8;
    v7 = *v6;
    *v6 = 0LL;
    v17[1] = v7;
    v8 = v6[1];
    v6[1] = 0LL;
    v17[2] = v8;
    v18 = v17;
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v6 + 1);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v6);
    *v5 = 0LL;
    v5[8] = 0LL;
    if ( v18 )
      v5[8] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))*v18)(v18, v5 + 1);
    v5[9] = 0LL;
    v5[10] = 0LL;
    *((_DWORD *)v5 + 22) = 0;
    *((_BYTE *)v5 + 92) = 0;
    v2 = 1;
  }
  else
  {
    v5 = 0LL;
  }
  v9 = v5;
  if ( (v2 & 1) != 0 && v18 )
  {
    v10 = v17;
    LOBYTE(v10) = v18 != v17;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v18 + 32LL))(v18, v10);
  }
  if ( !v5 )
  {
    LastError = -2147024882;
    v12 = 52LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
      (const char *)(unsigned int)LastError);
    goto LABEL_18;
  }
  ThreadpoolWork = CreateThreadpoolWork(
                     (PTP_WORK_CALLBACK)_lambda_a704c69ed083326e40d515dc4d6b076b_::_lambda_invoker_cdecl_,
                     v5,
                     0LL);
  wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
    v5,
    ThreadpoolWork);
  if ( *v5 )
  {
    SubmitThreadpoolWork((PTP_WORK)*v5);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x51,
                  (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\AsyncTask.h",
                  v14);
  }
  if ( LastError < 0 )
  {
    v12 = 54LL;
    goto LABEL_16;
  }
  v9 = 0LL;
  *a2 = v5;
  LastError = 0;
LABEL_18:
  if ( v9 )
    CAsyncTask<CD3DDevice::D3D12Resources>::`scalar deleting destructor'(v9);
  return (unsigned int)LastError;
}
