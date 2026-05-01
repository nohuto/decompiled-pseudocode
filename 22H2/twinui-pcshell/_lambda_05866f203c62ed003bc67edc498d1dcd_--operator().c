/*
 * XREFs of _lambda_05866f203c62ed003bc67edc498d1dcd_::operator() @ 0x18007A378
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_05866f203c62ed003bc67edc498d1dcd___::Run @ 0x18007A350 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_05866f203c62ed003bc67edc498d1dcd___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800CB5DC (--$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UIApp.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_05866f203c62ed003bc67edc498d1dcd_::operator()(__int64 a1)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppView,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewPreview>(
    *(_QWORD *)a1 + 104LL,
    &v6);
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 72LL))(
         v6,
         **(_QWORD **)(a1 + 8),
         **(_QWORD **)(a1 + 16));
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F6,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v2,
      v4);
    JUMPOUT(0x18019F6D2LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
