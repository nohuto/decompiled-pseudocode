/*
 * XREFs of ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BC10
 * Callers:
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x18011BA40 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x180126C74 (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126F50 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180126524 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z @ 0x1801269B8 (-_Has_drive_letter_prefix@filesystem@std@@YA_NQEBG0@Z.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180127F7C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180128BE4 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x18020B628 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1802499A4 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028EE30 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

std::filesystem *__fastcall std::filesystem::path::operator/=(std::filesystem *Src, __int64 *a2)
{
  std::filesystem *v3; // rcx
  __int64 v4; // rdi
  std::filesystem *v5; // rcx
  const unsigned __int16 *v6; // r8
  std::filesystem *v7; // r11
  const unsigned __int16 *v9; // rax
  const unsigned __int16 *v10; // rcx
  std::filesystem *v11; // r14
  std::filesystem *v12; // r15
  __int64 v13; // rax
  const unsigned __int16 *v14; // r12
  const unsigned __int16 *v15; // rdi
  const unsigned __int16 *root_name_end; // r13
  const unsigned __int16 *v17; // r8
  const unsigned __int16 *v18; // rax
  const unsigned __int16 *v19; // rsi
  __int64 v20; // rdx

  v3 = (std::filesystem *)a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v3 = (std::filesystem *)*a2;
  v4 = a2[2];
  if ( std::filesystem::_Has_drive_letter_prefix(
         v3,
         (const unsigned __int16 *const)v3 + v4,
         (const unsigned __int16 *const)v3 + v4) )
  {
    if ( v4 >= 3 && (*((_WORD *)v5 + 2) == 92 || *((_WORD *)v5 + 2) == 47) )
      goto LABEL_7;
LABEL_10:
    v11 = Src;
    if ( *((_QWORD *)Src + 3) >= 8uLL )
      v11 = *(std::filesystem **)Src;
    v12 = v7;
    v13 = *((_QWORD *)Src + 2);
    v14 = (const unsigned __int16 *)((char *)v11 + 2 * v13);
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v12 = *(std::filesystem **)v7;
    v15 = (const unsigned __int16 *)((char *)v12 + 2 * v4);
    root_name_end = std::filesystem::_Find_root_name_end(v11, (const unsigned __int16 *const)v11 + v13, v6);
    v18 = std::filesystem::_Find_root_name_end(v12, v15, v17);
    v19 = v18;
    v20 = ((char *)root_name_end - (char *)v11) >> 1;
    if ( v12 != (std::filesystem *)v18
      && (unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(
                         v11,
                         v20,
                         v12,
                         ((char *)v18 - (char *)v12) >> 1) )
    {
      goto LABEL_7;
    }
    if ( v19 != v15 && (*v19 == 92 || *v19 == 47) )
    {
      std::wstring::erase(Src, ((char *)root_name_end - (char *)v11) >> 1);
LABEL_26:
      std::wstring::append(Src);
      return Src;
    }
    if ( root_name_end == v14 )
    {
      if ( v20 < 3 )
        goto LABEL_26;
    }
    else if ( *(v14 - 1) == 92 || *(v14 - 1) == 47 )
    {
      goto LABEL_26;
    }
    std::wstring::push_back(Src, 92LL);
    goto LABEL_26;
  }
  v9 = std::filesystem::_Find_root_name_end(v5, v6, v6);
  if ( v10 == v9 )
    goto LABEL_10;
LABEL_7:
  std::wstring::operator=(Src, v7);
  return Src;
}
