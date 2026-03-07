__int64 __fastcall DiagnosticCallbacksManager::SetBootstrapProxy(
        DiagnosticCallbacksManager *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  void (__fastcall **v4)(_QWORD); // rax
  int (__fastcall *v5)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
  v4 = *(void (__fastcall ***)(_QWORD))a2;
  v13 = 0LL;
  v5 = (int (__fastcall *)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))v4[2];
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  if ( v5(a2, &GUID_04ee6573_94fb_9d69_ad96_7b14cfe9246a, &v13) < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\diagnosticcallbacksmanager.cpp",
      (const char *)0x87B2080CLL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 2276591628LL;
  }
  else
  {
    v6 = v13 + 24;
    if ( !v13 )
      v6 = 32LL;
    v12 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)v6 + 16LL))
                    + 36);
    v7 = std::map<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>::_Try_emplace<unsigned int const &,>(
           (__int64 *)this + 32,
           (__int64)v10,
           &v12);
    Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>::operator=((__int64 *)(*(_QWORD *)v7 + 40LL), &v13);
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    return 0LL;
  }
}
