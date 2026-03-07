__int64 __fastcall SmFixSingleBitCorruption(unsigned __int8 *a1, unsigned __int64 a2, int a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int8 *v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int8 *v11; // rax
  char v12; // cl
  unsigned __int8 v13; // bp
  __int64 result; // rax
  char v15; // [rsp+60h] [rbp+8h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  v17 = a3;
  v4 = 0LL;
  v5 = 8 * a2;
  v6 = 0LL;
  v7 = a1 - 1;
  v8 = 0LL;
  if ( !(8 * a2) )
    return 0LL;
  do
  {
    v11 = v7 + 1;
    v12 = v8 & 7;
    if ( (v8 & 7) != 0 )
      v11 = v7;
    v16 = 0LL;
    v7 = v11;
    v15 = 1 << v12;
    v13 = *v11 ^ (1 << v12);
    *v11 = v13;
    MetroHash64::Hash(a1, a2, (unsigned __int8 *const)&v16, a4);
    if ( (_DWORD)v16 == v17 )
    {
      ++v4;
      v6 = v8;
    }
    ++v8;
    *v7 = v15 ^ v13;
  }
  while ( v8 < v5 );
  if ( v4 != 1 )
    return 0LL;
  result = 1LL;
  a1[v6 >> 3] ^= 1 << (v6 & 7);
  return result;
}
