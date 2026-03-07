__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl::Materialize_BamoCompObjectDiagnosticsRootProxy(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoPeerImpl *this,
        unsigned int a2,
        __int64 a3,
        const char *a4)
{
  struct DiagnosticCallbacks_AutoBamos::BamoPeer *v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  const char *v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-38h]
  _BYTE v17[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct BamoCompObjectDiagnosticsRootProxy *v19; // [rsp+60h] [rbp+8h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL),
    a3,
    a4);
  v7 = CreateCompObjectDiagnosticsRootProxy(v6, &v19);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      3941LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v7,
      v16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    v8,
    v9,
    v10);
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      3946LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      v11);
  v12 = (*(__int64 (__fastcall **)(struct BamoCompObjectDiagnosticsRootProxy *))(*(_QWORD *)v19 + 56LL))(v19);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v12 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v12 + 24) = a2;
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v13 + 40LL))(
          v13,
          *((unsigned int *)this + 9),
          a2,
          v12);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      5235LL,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\diagnosticcallbacks\\objfre\\amd64\\diagnosticcallbacks.bamo.h",
      (const char *)(unsigned int)v14,
      v16);
  return 0LL;
}
