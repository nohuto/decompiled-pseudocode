__int64 __fastcall RtlpCopyBitMapTailToHeadEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  const void **v7; // rbx
  size_t v8; // r10
  int v9; // r9d
  char v10; // cl
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // rcx
  __int64 *v14; // r15
  unsigned __int64 *v15; // rsi
  __int64 *v16; // r8
  __int64 v17; // rbp
  char v18; // bl
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // r8
  __int64 v24; // rbx
  char v25; // di
  __int64 v26; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = (_QWORD *)(a2 + 8);
  v6 = a3 >> 3;
  v7 = (const void **)(a1 + 8);
  if ( (a3 & 7) != 0 )
  {
    v10 = a4;
    v11 = a4 >> 6;
    v12 = a3 & 0x3F;
    v13 = v10 & 0x3F;
    v14 = (__int64 *)(*v5 + 8 * (v11 + (a3 >> 6)));
    result = (__int64)*v7;
    v15 = (unsigned __int64 *)v14;
    v16 = (__int64 *)((char *)*v7 + 8 * v11);
    if ( v13 )
    {
      v17 = *v16;
      v18 = 64 - v12;
      if ( v13 > 64 - v12 )
      {
        v14[1] = v14[1] & ~((1LL << ((unsigned __int8)v12 + (unsigned __int8)v13 - 64)) - 1) | ((v17 & (unsigned __int64)(((1LL << ((unsigned __int8)v12 + (unsigned __int8)v13 - 64)) - 1) << v18)) >> v18);
        v22 = (*v16 & ((1LL << v18) - 1)) << v12;
        v21 = (1LL << v12) - 1;
      }
      else
      {
        v19 = (1LL << v13) - 1;
        v20 = v17 & v19;
        v21 = ~(v19 << v12);
        v22 = v20 << v12;
      }
      result = v22 | *v14 & v21;
      *v14 = result;
    }
    v23 = v16 - 1;
    if ( v11 )
    {
      v24 = *v14;
      v25 = 64 - v12;
      do
      {
        *v15-- = ((~((1LL << v25) - 1) & (unsigned __int64)*v23) >> v25) | v24 & ~((1LL << v12) - 1);
        v26 = *v23--;
        result = (((1LL << v25) - 1) & v26) << v12;
        v24 = result | ((1LL << v12) - 1) & *v15;
        *v15 = v24;
        --v11;
      }
      while ( v11 );
    }
  }
  else
  {
    v8 = a4 >> 3;
    v9 = a4 & 7;
    if ( v9 )
    {
      result = (__int64)*v7;
      *(_BYTE *)(*v5 + v6 + v8) = ((1 << v9) - 1) & *((_BYTE *)*v7 + v8) | *(_BYTE *)(*v5 + v6 + v8) & ~((1 << v9) - 1);
    }
    if ( v8 )
      return (__int64)memmove((void *)(v6 + *v5), *v7, v8);
  }
  return result;
}
