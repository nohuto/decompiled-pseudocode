/*
 * XREFs of _lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::operator() @ 0x180358E5C
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___::Run @ 0x18035B060 (XamlExplorerHostWindowCreatedCallback__lambda_e6f1dea95eb706d4d1f25363c8f9b29f___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801E8E24 (--$_Emplace_reallocate@AEBV-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@-$vector@V-$ComPt.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_e6f1dea95eb706d4d1f25363c8f9b29f_::operator()(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 **v7; // rbx
  __int64 *v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+18h]

  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 8) + 232LL);
  AcquireSRWLockExclusive(v4);
  v12 = v4;
  v10 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v6 = v5(a2, &GUID_f8e82291_6438_4724_8220_b95054cbeac9, &v10);
  if ( v6 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v6);
  v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v7 = *(__int64 ***)(a1 + 8);
  v8 = v7[26];
  if ( v7[27] == v8 )
  {
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow> const &>(
      v7 + 25,
      v8,
      (__int64 *)&v11);
  }
  else
  {
    *v8 = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    ++v7[26];
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
