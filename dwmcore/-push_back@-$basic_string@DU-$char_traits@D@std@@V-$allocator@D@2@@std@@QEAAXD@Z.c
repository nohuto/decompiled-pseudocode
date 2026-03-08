/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18010CC2C
 * Callers:
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18010CAC8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?EncodeBlock@Base853Encoder@@AEAAXXZ @ 0x18010CB24 (-EncodeBlock@Base853Encoder@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::push_back(_QWORD *a1, char a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  __int64 result; // rax

  v2 = a1[2];
  if ( v2 >= a1[3] )
    return std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(a1);
  v3 = a1[3] < 0x10uLL;
  result = v2 + 1;
  a1[2] = v2 + 1;
  if ( !v3 )
    a1 = (_QWORD *)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
