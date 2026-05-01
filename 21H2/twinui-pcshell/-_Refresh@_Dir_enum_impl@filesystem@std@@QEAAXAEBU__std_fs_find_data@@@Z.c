/*
 * XREFs of ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126F50
 * Callers:
 *     ??$?0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@QEAA@$$QEAU_Creator@_Dir_enum_impl@filesystem@1@AEBW4directory_options@41@@Z @ 0x180116B88 (--$-0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@-$_Ref_count_obj@U_Dir_.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180125F84 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x180116CE0 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BC10 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1801264D0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180127F7C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::filesystem::_Dir_enum_impl::_Refresh(
        std::filesystem::_Dir_enum_impl *this,
        const struct __std_fs_find_data *a2)
{
  std::filesystem *v2; // rbx
  char *v3; // rdx
  __int64 v4; // rax
  const unsigned __int16 *v5; // r8
  std::filesystem *v6; // rdi
  const unsigned __int16 *filename; // rax
  _QWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9[4]; // [rsp+38h] [rbp-30h] BYREF

  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 7) = 6;
  if ( (*(_DWORD *)a2 & 0x400) == 0 )
  {
    *((_QWORD *)this + 1) = *((unsigned int *)a2 + 8) + ((unsigned __int64)*((unsigned int *)a2 + 7) << 32);
    *(_QWORD *)this = *(_QWORD *)((char *)a2 + 20);
    *((_DWORD *)this + 7) = 46;
  }
  v2 = (std::filesystem::_Dir_enum_impl *)((char *)this + 32);
  v3 = (char *)a2 + 44;
  v8[0] = v3;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)&v3[2 * v4] );
  v8[1] = v4;
  std::filesystem::path::path((__int64)v9, v8);
  v6 = v2;
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v6 = *(std::filesystem **)v2;
  filename = std::filesystem::_Find_filename(v6, (const unsigned __int16 *)v6 + *((_QWORD *)v2 + 2), v5);
  std::wstring::erase(v2, ((char *)filename - (char *)v6) >> 1);
  std::filesystem::path::operator/=(v2, v9);
  std::wstring::_Tidy_deallocate(v9);
}
