/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x180128BAC
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126D94 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180129030 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::string::push_back(void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 0x10;
  result = (void **)(v2 + 1);
  a1[2] = (void *)(v2 + 1);
  if ( !v3 )
    a1 = (void **)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
