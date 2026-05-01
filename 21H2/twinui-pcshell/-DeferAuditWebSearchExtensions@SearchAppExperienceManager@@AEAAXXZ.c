/*
 * XREFs of ?DeferAuditWebSearchExtensions@SearchAppExperienceManager@@AEAAXXZ @ 0x1800A2F64
 * Callers:
 *     wistd::__function::__func__lambda_f1de74b7f5ed30a104689ffba30e5c1b__void___cdecl(void)_::operator() @ 0x1800A1D60 (wistd--__function--__func__lambda_f1de74b7f5ed30a104689ffba30e5c1b__void___cdecl(void)_--operato.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180265DF4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SearchAppExperienceManager::DeferAuditWebSearchExtensions(SearchAppExperienceManager *this)
{
  unsigned int v1; // esi
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 166);
  v2 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v3);
    v2 = v4;
    *v4 = off_1805019C8;
  }
  v5 = SHTaskPoolQueueTask(3LL, 2LL, v1, 0LL, v2, 0LL);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x93A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
}
