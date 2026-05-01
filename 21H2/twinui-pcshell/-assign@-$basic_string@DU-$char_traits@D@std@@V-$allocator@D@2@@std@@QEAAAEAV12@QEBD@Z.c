/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x180127618
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18011A49C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180128670 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ??$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@Z @ 0x1801193E0 (--$_Reallocate_for@V_lambda_66f57f934f28d61049862f64df852ff0_@@PEBD@-$basic_string@DU-$char_trai.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, _BYTE *a2, __int64 a3)
{
  _QWORD *v3; // rbx
  size_t v4; // rdi
  void *v5; // rsi

  v3 = a1;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > a1[3] )
    return (_QWORD *)std::string::_Reallocate_for<_lambda_66f57f934f28d61049862f64df852ff0_,char const *>(
                       (__int64)a1,
                       v4,
                       a3,
                       a2);
  v5 = a1;
  if ( a1[3] >= 0x10uLL )
    v5 = (void *)*a1;
  a1[2] = v4;
  memmove_0(v5, a2, v4);
  *((_BYTE *)v5 + v4) = 0;
  return v3;
}
