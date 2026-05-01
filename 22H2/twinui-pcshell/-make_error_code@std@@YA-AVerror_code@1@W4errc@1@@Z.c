/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4errc@1@@Z @ 0x180128450
 * Callers:
 *     ?_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ @ 0x180127158 (-_Xsystem_error_invalid_argument@filesystem@std@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::make_error_code(__int64 a1)
{
  __int64 result; // rax

  if ( !std::_Execute_once(
          (struct std::once_flag *)&`std::_Immortalize<std::_Generic_error_category>'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_Generic_error_category>,
          &`std::_Immortalize<std::_Generic_error_category>'::`2'::_Storage) )
  {
    _o_terminate();
    __debugbreak();
  }
  *(_DWORD *)a1 = 22;
  result = a1;
  *(_QWORD *)(a1 + 8) = &`std::_Immortalize<std::_Generic_error_category>'::`2'::_Storage;
  return result;
}
