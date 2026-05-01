/*
 * XREFs of __std_fs_directory_iterator_close @ 0x18014DC88
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1801183D0 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x18011B714 (--1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ.c)
 *     ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x18011B73C (--1_Find_file_handle@filesystem@std@@QEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ @ 0x1801262E0 (-_Destroy@-$_Ref_count_obj@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x180126C74 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     <none>
 */

void __fastcall _std_fs_directory_iterator_close(void *a1)
{
  if ( a1 != (void *)-1LL && !FindClose(a1) )
  {
    _o_terminate();
    __debugbreak();
  }
}
