/*
 * XREFs of ?GetForegroundOperations@WindowEventDispatcher@@UEAA?AV?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803256D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x180022A34 (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 */

_QWORD *__fastcall WindowEventDispatcher::GetForegroundOperations(__int64 a1, _QWORD *a2)
{
  wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
    a2,
    *(_QWORD *)(a1 + 288));
  return a2;
}
