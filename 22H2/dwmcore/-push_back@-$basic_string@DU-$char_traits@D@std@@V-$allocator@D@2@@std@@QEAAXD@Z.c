/*
 * XREFs of ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18004D444
 * Callers:
 *     ?AppendVarInt@Base853Encoder@@QEAAXI@Z @ 0x18004D0E4 (-AppendVarInt@Base853Encoder@@QEAAXI@Z.c)
 *     ?EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ @ 0x18004D3E8 (-EnsureZeroesAreSerialized@Base853Encoder@@AEAAXXZ.c)
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x180198A20 (-to_bytes@-$wstring_convert@V-$codecvt_utf8_utf16@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$alloc.c)
 * Callees:
 *     <none>
 */

const void **__fastcall std::string::push_back(const void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  const void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 0x10;
  result = (const void **)(v2 + 1);
  a1[2] = (const void *)(v2 + 1);
  if ( !v3 )
    a1 = (const void **)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
