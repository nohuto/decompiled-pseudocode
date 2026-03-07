unsigned __int64 __fastcall RtlCopyBitMap(unsigned int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v8; // rcx
  int *v9; // r11
  int *v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  size_t v14; // rdi
  _BYTE *v15; // r9
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  int v18; // esi
  int v19; // edi
  int v20; // r13d
  int v21; // esi
  unsigned __int64 v22; // r14
  int v23; // edi
  unsigned int v24; // eax
  int v25; // r14d
  int v26; // r15d
  int v27; // r10d

  result = *a1;
  v5 = *(_DWORD *)a2 - a3;
  if ( (unsigned int)result <= (unsigned int)v5 )
    v5 = (unsigned int)result;
  if ( v5 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v9 = (int *)*((_QWORD *)a1 + 1);
    result = (unsigned __int64)a3 >> 5;
    v10 = (int *)(v8 + 4 * result);
    if ( v9 > v10 || (result = (unsigned __int64)&v9[(v5 - 1) >> 5], (unsigned __int64)v10 > result) )
    {
      v11 = (unsigned __int64)a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v16 = a3 & 0x1F;
        v17 = 32 - v16;
        v18 = 1 << (32 - v16);
        v19 = 1 << v16;
        if ( v5 < 0x20 )
          goto LABEL_17;
        v20 = *v10;
        v21 = v18 - 1;
        v22 = v5 >> 5;
        v23 = v19 - 1;
        v5 += -32LL * (v5 >> 5);
        do
        {
          *v10++ = ((*v9 & v21) << v16) | v20 & v23;
          v24 = *v9++ & ~v21;
          result = v24 >> v17;
          v20 = result | *v10 & ~v23;
          *v10 = v20;
          --v22;
        }
        while ( v22 );
        v19 = 1 << v16;
        v18 = 1 << (32 - v16);
        if ( v5 )
        {
LABEL_17:
          v25 = *v9;
          v26 = *v10;
          if ( v5 > v17 )
          {
            *v10 = v26 & (v19 - 1) | ((v25 & (v18 - 1)) << v16);
            v27 = 1 << (v5 + v16 - 32);
            result = (*v9 & (unsigned int)((v27 - 1) << v17)) >> v17;
            v10[1] = result | v10[1] & ~(v27 - 1);
          }
          else
          {
            result = ((v25 & ((1 << v5) - 1)) << v16) | v26 & (unsigned int)~(((1 << v5) - 1) << v16);
            *v10 = result;
          }
        }
      }
      else
      {
        v12 = v5;
        v13 = v5 & 7;
        v14 = v12 >> 3;
        if ( v14 )
          result = (unsigned __int64)memmove((void *)(v11 + v8), *((const void **)a1 + 1), v14);
        if ( v13 )
        {
          v15 = (_BYTE *)(v14 + v11 + *(_QWORD *)(a2 + 8));
          *v15 &= ~((1 << v13) - 1);
          result = *((_QWORD *)a1 + 1);
          *v15 |= (unsigned __int8)((1 << v13) - 1) & *(_BYTE *)(v14 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, a3, (unsigned int)v5);
    }
  }
  return result;
}
