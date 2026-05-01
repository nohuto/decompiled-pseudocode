/*
 * XREFs of ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x180127F7C
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BC10 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x180126F50 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?_Check_offset@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBAX_K@Z @ 0x18025D060 (-_Check_offset@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBAX_K@Z.c)
 */

_QWORD *__fastcall std::wstring::erase(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax

  std::_String_val<std::_Simple_types<unsigned short>>::_Check_offset();
  v4 = a1;
  if ( a1[3] >= 8uLL )
    v4 = (_QWORD *)*a1;
  a1[2] = a2;
  *((_WORD *)v4 + a2) = 0;
  return a1;
}
