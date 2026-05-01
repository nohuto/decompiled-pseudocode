/*
 * XREFs of ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x180126C74
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1801183D0 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x180116CE0 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BC10 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     __std_fs_directory_iterator_advance @ 0x18014DC54 (__std_fs_directory_iterator_advance.c)
 *     __std_fs_directory_iterator_close @ 0x18014DC88 (__std_fs_directory_iterator_close.c)
 */

// Hidden C++ exception states: #wind=1
DWORD __fastcall std::filesystem::_Dir_enum_impl::_Open_dir(std::filesystem *a1, char a2, _QWORD *a3, _WORD *a4)
{
  __int64 *v8; // rax
  HANDLE FirstFile; // rax
  DWORD result; // eax
  __int64 v11; // rdi
  _QWORD v12[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v13[4]; // [rsp+40h] [rbp-58h] BYREF

  v12[0] = L"*";
  v12[1] = 1LL;
  v8 = (__int64 *)std::filesystem::path::path((__int64)v13, v12);
  std::filesystem::path::operator/=(a1, v8);
  std::wstring::_Tidy_deallocate(v13);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(std::filesystem **)a1;
  _std_fs_directory_iterator_close(*a3);
  FirstFile = FindFirstFileExW((LPCWSTR)a1, FindExInfoBasic, a4, FindExSearchNameMatch, 0LL, 0);
  *a3 = FirstFile;
  if ( FirstFile == (HANDLE)-1LL && (result = GetLastError()) != 0 )
  {
    if ( result == 5 && (a2 & 2) != 0 )
      return 18;
  }
  else
  {
    v11 = *a3;
    while ( a4[22] == 46 && (!a4[23] || a4[23] == 46 && !a4[24]) )
    {
      result = _std_fs_directory_iterator_advance(v11, a4);
      if ( result )
        return result;
    }
    return 0;
  }
  return result;
}
