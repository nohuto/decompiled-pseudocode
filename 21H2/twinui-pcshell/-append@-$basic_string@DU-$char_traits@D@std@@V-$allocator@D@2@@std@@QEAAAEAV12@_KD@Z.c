/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1801275A0
 * Callers:
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_KD@Z @ 0x180128C80 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_KD@Z.c)
 * Callees:
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1801196F4 (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

void **__fastcall std::string::append(void **Src, size_t Size, __int64 a3)
{
  _BYTE *v5; // rcx
  bool v6; // cf
  void *v7; // rax
  char *v8; // rbx
  void **result; // rax

  v5 = Src[2];
  if ( Size > (_BYTE *)Src[3] - v5 )
    return std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
             Src,
             Size,
             a3,
             Size);
  v6 = (unsigned __int64)Src[3] < 0x10;
  Src[2] = &v5[Size];
  v7 = Src;
  if ( !v6 )
    v7 = *Src;
  v8 = &v5[(_QWORD)v7];
  memset_0(&v5[(_QWORD)v7], 0, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
