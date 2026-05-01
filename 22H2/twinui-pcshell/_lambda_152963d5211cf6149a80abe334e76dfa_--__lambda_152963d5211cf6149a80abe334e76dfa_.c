/*
 * XREFs of _lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_ @ 0x180394578
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___::_scalar_deleting_destructor_ @ 0x180395280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_152963d5211cf6149a80abe334e76dfa___--_scala.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1803959E0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_152963d5211cf6149a80abe334e76dfa_::__lambda_152963d5211cf6149a80abe334e76dfa_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[3];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[2];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 1);
  return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
