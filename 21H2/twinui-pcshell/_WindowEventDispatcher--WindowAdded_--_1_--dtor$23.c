/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$23 @ 0x1801741E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_23(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 136) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    return wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 112));
  }
  return result;
}
