/*
 * XREFs of sub_18004D600 @ 0x18004D600
 * Callers:
 *     sub_1800483B0 @ 0x1800483B0 (sub_1800483B0.c)
 * Callees:
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_180122F24 @ 0x180122F24 (sub_180122F24.c)
 */

__int64 __fastcall sub_18004D600(unsigned __int64 *a1, unsigned int a2)
{
  int *v2; // rsi
  unsigned __int64 *v4; // r14
  __int64 v5; // rbp
  unsigned __int64 *v6; // r15
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+64h] [rbp+1Ch]

  v13 = 0;
  v2 = &v13;
  v14 = 1;
  v4 = a1 + 207;
  v5 = 2LL;
  v6 = a1 + 209;
  v7 = a1 + 211;
  do
  {
    v8 = *v2;
    v9 = sub_1800233B0(v4, v8);
    sub_180122F24(v9, a2);
    v10 = sub_1800233B0(v6, v8);
    sub_180122F24(v10, a2);
    v11 = sub_1800233B0(v7, v8);
    result = sub_180122F24(v11, a2);
    ++v2;
    --v5;
  }
  while ( v5 );
  return result;
}
