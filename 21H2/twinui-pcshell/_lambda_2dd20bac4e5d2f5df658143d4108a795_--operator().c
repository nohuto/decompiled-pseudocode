/*
 * XREFs of _lambda_2dd20bac4e5d2f5df658143d4108a795_::operator() @ 0x180082F44
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___::Run @ 0x180082F30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_303ac4679a068f1792b4af8a56f031e3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCClassicWindowExternal@@@12@$$QEAPEAUIClassicWindow@@@Z @ 0x18008300C (--$Make@VCClassicWindowExternal@@PEAUIClassicWindow@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCCla.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowExternal@@UIClassicWindowContainer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180088CF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindowEx.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_2dd20bac4e5d2f5df658143d4108a795_::operator()(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, __int64, __int64 *); // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD); // rbx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 208LL))(*a1) )
  {
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 128LL);
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 208LL))(*a1);
    return v7(a2, *v8);
  }
  else
  {
    v9 = *a1;
    result = Microsoft::WRL::Details::Make<CClassicWindowExternal,IClassicWindow *>(&v10, &v9);
    v5 = v10;
    if ( v10 )
    {
      v9 = 0LL;
      v6 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a2 + 112LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( v6(a2, v5, &v9) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 200LL))(*a1, v9);
      result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
    if ( v5 )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindowExternal,IClassicWindowContainer,Microsoft::WRL::FtmBase>::Release(v5);
  }
  return result;
}
