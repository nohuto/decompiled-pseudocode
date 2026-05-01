/*
 * XREFs of _lambda_a0f94ce564b248d96bcce93f9fd6f559_::operator() @ 0x180208090
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a0f94ce564b248d96bcce93f9fd6f559___::Run @ 0x180209010 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a0f94ce564b248d96bcce93f9fd6f559___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180099898 (--$query@UIBlueLightReductionManager@BlueLightReduction@Shell@Internal@Windows@@@-$com_ptr_t@UIS.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_a0f94ce564b248d96bcce93f9fd6f559_::operator()(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)a1 + 168LL);
  if ( *(_BYTE *)(a1 + 16) )
  {
    v3 = (_QWORD *)wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
                     v2,
                     (__int64)&v9);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 56LL))(*v3, *(_QWORD *)(a1 + 8));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v4);
  }
  else
  {
    v5 = (_QWORD *)wil::com_ptr_t<IServiceHostComponent,wil::err_exception_policy>::query<Windows::Internal::Shell::BlueLightReduction::IBlueLightReductionManager>(
                     v2,
                     (__int64)&v9);
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 64LL))(*v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x111,
        (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
        (const char *)(unsigned int)v6);
  }
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
}
