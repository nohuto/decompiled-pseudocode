/*
 * XREFs of _lambda_48084b1ec6f75312154089ee08312ce7_::operator() @ 0x18029F6D8
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7__Windows::Internal::CMarshaledInterfaceResult_Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults___::Run @ 0x1802A4BE0 (Windows--Internal--COperationLambdaVar_0__lambda_48084b1ec6f75312154089ee08312ce7___ea_1802A4BE0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180078D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18029D294 (--$GetActivationFactory@UIGetCurrentActivityForViewOperationResultsFactory@Activities@Data@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_48084b1ec6f75312154089ee08312ce7_::operator()(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  const char *v10; // r9
  __int64 result; // rax
  __int64 *v12[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v16; // [rsp+88h] [rbp+20h] BYREF

  try
  {
    wil::GetActivationFactory<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResultsFactory>(
      (const WCHAR *)&v16,
      a2,
      a3);
    v15 = 0LL;
    v5 = *v16;
    v15 = 0LL;
    *(_OWORD *)v13 = *(_OWORD *)(a1 + 8);
    v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, __int64, _QWORD, __int64 *))(v5 + 48))(
           v16,
           *(_QWORD *)a1,
           v13,
           1LL,
           0LL,
           &v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        315LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v6);
    v7 = v15;
    v12[0] = (__int64 *)(a2 + 16);
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(v12);
    v9 = v8;
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
      RoGetAgileReference(0LL, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, v7, v9);
    }
    else
    {
      v13[0] = 0LL;
      v12[0] = (__int64 *)*v8;
      *v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    }
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*v16 + 16))(v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x140,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v10);
  }
  return result;
}
