/*
 * XREFs of SmFixSingleBitCorruption @ 0x14059D310
 * Callers:
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14059BB04 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 * Callees:
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140225B74 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 */

__int64 __fastcall SmFixSingleBitCorruption(unsigned __int8 *a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 *v10; // rax
  char v11; // cl
  char v12; // bp
  __int64 result; // rax
  unsigned __int8 v14; // [rsp+60h] [rbp+8h]
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v3 = a1 - 1;
  v4 = 8 * a2;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !(8 * a2) )
    return 0LL;
  do
  {
    v10 = v3 + 1;
    v11 = v7 & 7;
    if ( (v7 & 7) != 0 )
      v10 = v3;
    v15 = 0LL;
    v3 = v10;
    v12 = 1 << v11;
    v14 = (1 << v11) ^ *v10;
    *v10 = v14;
    MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v15);
    if ( (_DWORD)v15 == v16 )
    {
      ++v5;
      v6 = v7;
    }
    ++v7;
    *v3 = v14 ^ v12;
  }
  while ( v7 < v4 );
  if ( v5 != 1 )
    return 0LL;
  result = 1LL;
  a1[v6 >> 3] ^= 1 << (v6 & 7);
  return result;
}
