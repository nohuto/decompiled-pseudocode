/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x180128BE4
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BC10 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     _anonymous_namespace_::TruncateDisplayName @ 0x18014D244 (_anonymous_namespace_--TruncateDisplayName.c)
 * Callees:
 *     <none>
 */

void **__fastcall std::wstring::push_back(void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 8;
  a1[2] = (void *)(v2 + 1);
  if ( !v3 )
    a1 = (void **)*a1;
  result = 0LL;
  *((_WORD *)a1 + v2) = a2;
  *((_WORD *)a1 + v2 + 1) = 0;
  return result;
}
