unsigned __int64 __fastcall RtlpCopyBitMapTailToHead(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rsi
  const void **v7; // rbx
  unsigned __int64 v8; // r11
  char v9; // r10
  unsigned __int64 v10; // r10
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int *v13; // r15
  unsigned int *v14; // rsi
  int *v15; // r9
  int v16; // ebp
  char v17; // bl
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int *v22; // r9
  unsigned int v23; // ebx
  int v24; // r15d
  size_t v25; // r9
  int v26; // r10d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = (_QWORD *)(a2 + 8);
  v6 = (unsigned __int64)a3 >> 3;
  v7 = (const void **)(a1 + 8);
  v8 = a3;
  v9 = a4;
  if ( (a3 & 7) != 0 )
  {
    v10 = (unsigned __int64)a4 >> 5;
    v11 = a3 & 0x1F;
    v12 = a4 & 0x1F;
    v13 = (unsigned int *)(*v5 + 4 * (v10 + (v8 >> 5)));
    result = (unsigned __int64)*v7;
    v14 = v13;
    v15 = (int *)((char *)*v7 + 4 * v10);
    if ( v12 )
    {
      v16 = *v15;
      v17 = 32 - v11;
      if ( v12 > 32 - v11 )
      {
        v13[1] = v13[1] & ~((1 << (v11 + v12 - 32)) - 1) | ((v16 & (unsigned int)(((1 << (v11 + v12 - 32)) - 1) << v17)) >> v17);
        v21 = (*v15 & ((1 << v17) - 1)) << v11;
        v20 = (1 << v11) - 1;
      }
      else
      {
        v18 = (1 << v12) - 1;
        v19 = v16 & v18;
        v20 = ~(v18 << v11);
        v21 = v19 << v11;
      }
      result = v21 | *v13 & v20;
      *v13 = result;
    }
    v22 = v15 - 1;
    if ( v10 )
    {
      v23 = *v13;
      v24 = 1 << (32 - v11);
      do
      {
        *v14-- = ((*v22 & (unsigned int)~(v24 - 1)) >> (32 - v11)) | v23 & ~((1 << v11) - 1);
        result = (*v22-- & (unsigned int)(v24 - 1)) << v11;
        v23 = result | ((1 << v11) - 1) & *v14;
        *v14 = v23;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    v25 = (unsigned __int64)a4 >> 3;
    v26 = v9 & 7;
    if ( v26 )
    {
      result = (unsigned __int64)*v7;
      *(_BYTE *)(*v5 + v6 + v25) = ((1 << v26) - 1) & *((_BYTE *)*v7 + v25) | *(_BYTE *)(*v5 + v6 + v25) & ~((1 << v26) - 1);
    }
    if ( v25 )
      return (unsigned __int64)memmove((void *)(v6 + *v5), *v7, v25);
  }
  return result;
}
