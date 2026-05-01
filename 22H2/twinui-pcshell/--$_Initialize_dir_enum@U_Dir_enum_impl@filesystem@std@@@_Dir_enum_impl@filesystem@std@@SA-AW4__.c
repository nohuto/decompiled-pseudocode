/*
 * XREFs of ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x180118260
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F1B0 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??$?0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@QEAA@$$QEAU_Creator@_Dir_enum_impl@filesystem@1@AEBW4directory_options@41@@Z @ 0x180116A18 (--$-0U_Creator@_Dir_enum_impl@filesystem@std@@AEBW4directory_options@23@@-$_Ref_count_obj@U_Dir_.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x180126B04 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     __std_fs_directory_iterator_close @ 0x18014DB18 (__std_fs_directory_iterator_close.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+20h] [rbp-E0h]
  void *v8; // [rsp+20h] [rbp-E0h]
  _QWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v11[592]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+2A8h] [rbp+1A8h]

  std::wstring::wstring((__int64)v9);
  v10 = -1LL;
  v2 = std::filesystem::_Dir_enum_impl::_Open_dir(v9, 0LL, &v10, v11);
  if ( v2 )
  {
    LOBYTE(v7) = 0;
    if ( v2 != 18 )
    {
      HIDWORD(v7) = v2;
      goto LABEL_6;
    }
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  HIDWORD(v7) = 0;
LABEL_6:
  v12 = v7;
  if ( (_BYTE)v7 )
  {
    v8 = operator new(0x58uLL);
    v3 = std::_Ref_count_obj<std::filesystem::_Dir_enum_impl>::_Ref_count_obj<std::filesystem::_Dir_enum_impl>(
           (__int64)v8,
           (__int64)v9);
    *a1 = v3 + 16;
    v4 = (std::_Ref_count_base *)a1[1];
    a1[1] = v3;
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
  v5 = HIDWORD(v12);
  _std_fs_directory_iterator_close(v10);
  std::wstring::_Tidy_deallocate(v9);
  return v5;
}
