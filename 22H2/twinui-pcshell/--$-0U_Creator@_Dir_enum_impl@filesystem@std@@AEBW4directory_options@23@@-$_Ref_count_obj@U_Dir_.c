/*
 * XREFs of ??$?0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@QEAA@$$QEAU_Creator@_Dir_enum_impl@filesystem@1@AEBW4directory_options@41@@Z @ 0x180116A18
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x180118260 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126DE0 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802653EC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<std::filesystem::_Dir_enum_impl>::_Ref_count_obj<std::filesystem::_Dir_enum_impl>(
        __int64 a1,
        __int64 a2)
{
  std::filesystem::_Dir_enum_impl *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<std::filesystem::_Dir_enum_impl>::`vftable';
  v4 = (std::filesystem::_Dir_enum_impl *)(a1 + 16);
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  v5 = a1 + 48;
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  v6 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = -1LL;
  *((_QWORD *)v4 + 8) = v6;
  std::wstring::operator=(v5, a2);
  std::filesystem::_Dir_enum_impl::_Refresh(v4, (const struct __std_fs_find_data *)(a2 + 40));
  return a1;
}
