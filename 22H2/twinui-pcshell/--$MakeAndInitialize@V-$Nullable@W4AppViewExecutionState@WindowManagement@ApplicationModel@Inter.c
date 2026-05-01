/*
 * XREFs of ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18008508C
 * Callers:
 *     _lambda_946ff4b2cd2342ecd6351b66005f8fb8_::operator() @ 0x180025C58 (_lambda_946ff4b2cd2342ecd6351b66005f8fb8_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@QEAA@XZ @ 0x18008511C (--0-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
        _QWORD *a1,
        int *a2)
{
  unsigned int v2; // edi
  void *v5; // rax
  _DWORD *v6; // rax
  int v7; // ecx
  _DWORD *v8; // rbx
  _DWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = (_DWORD *)details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>(v5);
    v7 = *a2;
    v8 = v6;
    v10 = v6;
    v6[16] = v7;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
