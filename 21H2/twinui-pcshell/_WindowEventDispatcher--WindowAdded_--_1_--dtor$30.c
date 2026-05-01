/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$30 @ 0x180174260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D038 (--1-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_30(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 136) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 136) &= ~4u;
    return wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::~com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>((__int64 *)(a2 + 392));
  }
  return result;
}
