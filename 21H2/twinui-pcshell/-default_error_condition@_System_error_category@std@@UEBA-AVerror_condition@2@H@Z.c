/*
 * XREFs of ?default_error_condition@_System_error_category@std@@UEBA?AVerror_condition@2@H@Z @ 0x1801279C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_System_error_category::default_error_condition(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdi
  void *v5; // rsi

  v3 = a3;
  LODWORD(v5) = std::_Winerror_map(a3);
  if ( (_DWORD)v5 )
  {
    v3 = (unsigned __int64)&`std::_Immortalize<std::_Generic_error_category>'::`2'::_Storage;
    if ( std::_Execute_once(
           (struct std::once_flag *)&`std::_Immortalize<std::_Generic_error_category>'::`2'::_Flag,
           (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_Generic_error_category>,
           &`std::_Immortalize<std::_Generic_error_category>'::`2'::_Storage) )
    {
LABEL_6:
      *(_DWORD *)a2 = (_DWORD)v5;
      *(_QWORD *)(a2 + 8) = v3;
      return a2;
    }
LABEL_5:
    _o_terminate();
    goto LABEL_6;
  }
  v5 = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  if ( !std::_Execute_once(
          (struct std::once_flag *)&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>,
          &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage) )
    goto LABEL_5;
  *(_DWORD *)a2 = v3;
  *(_QWORD *)(a2 + 8) = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  return a2;
}
