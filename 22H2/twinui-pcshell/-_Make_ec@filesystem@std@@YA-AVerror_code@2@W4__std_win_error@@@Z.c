/*
 * XREFs of ?_Make_ec@filesystem@std@@YA?AVerror_code@2@W4__std_win_error@@@Z @ 0x1801269A8
 * Callers:
 *     ?_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z @ 0x180125F60 (-_Check_convert_result@filesystem@std@@YAHU__std_fs_convert_result@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180127008 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x180127074 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180127F28 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::filesystem::_Make_ec(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !std::_Execute_once(
          (struct std::once_flag *)&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag,
          (int (*)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>,
          &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage) )
  {
    _o_terminate();
    __debugbreak();
  }
  *(_QWORD *)(a1 + 8) = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  result = a1;
  *(_DWORD *)a1 = a2;
  return result;
}
