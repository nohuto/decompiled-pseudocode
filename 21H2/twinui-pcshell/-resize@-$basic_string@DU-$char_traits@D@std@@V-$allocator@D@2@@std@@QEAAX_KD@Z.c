/*
 * XREFs of ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x180128C80
 * Callers:
 *     ??$_Convert_wide_to_narrow@U?$char_traits@D@std@@V?$allocator@D@2@@filesystem@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@W4__std_code_page@@V?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@D@1@@Z @ 0x180118154 (--$_Convert_wide_to_narrow@U-$char_traits@D@std@@V-$allocator@D@2@@filesystem@std@@YA-AV-$basic_.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180128670 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::string::resize(void **a1, _BYTE *a2, __int64 a3)
{
  void **result; // rax

  result = a1 + 2;
  if ( a2 > a1[2] )
    return std::string::append(a1, a2 - (_BYTE *)*result, a3);
  if ( (unsigned __int64)a1[3] >= 0x10 )
    a1 = (void **)*a1;
  *result = a2;
  a2[(_QWORD)a1] = 0;
  return result;
}
