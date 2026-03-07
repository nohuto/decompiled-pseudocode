unsigned __int64 __fastcall RtlCopyBitMapEx(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  unsigned __int64 *v17; // r11
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // r13
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // r15
  __int64 v27; // r10

  result = *(_QWORD *)a1;
  v6 = *a2 - a3;
  if ( *(_QWORD *)a1 <= v6 )
    v6 = *(_QWORD *)a1;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = *(__int64 **)(a1 + 8);
    result = a3 >> 6;
    v9 = v7 + 8 * (a3 >> 6);
    if ( (unsigned __int64)v8 <= v9 && (result = (unsigned __int64)&v8[(v6 - 1) >> 6], v9 <= result) )
    {
      return RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v6);
    }
    else
    {
      v10 = a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x3F;
        v16 = 64 - v15;
        v17 = (unsigned __int64 *)(v7 + 8 * (a3 >> 6));
        v18 = 1LL << (64 - (unsigned __int8)v15);
        v19 = 1LL << v15;
        if ( v6 < 0x40 )
          goto LABEL_17;
        v20 = *v17;
        v21 = v18 - 1;
        v22 = v6 >> 6;
        v23 = v19 - 1;
        v6 += -64LL * (v6 >> 6);
        do
        {
          *v17++ = ((v21 & *v8) << v15) | v20 & v23;
          v24 = ~v21 & *v8++;
          result = v24 >> v16;
          v20 = result | *v17 & ~v23;
          *v17 = v20;
          --v22;
        }
        while ( v22 );
        v19 = 1LL << v15;
        v18 = 1LL << (64 - (unsigned __int8)v15);
        if ( v6 )
        {
LABEL_17:
          v25 = *v8;
          v26 = *v17;
          if ( v6 > v16 )
          {
            *v17 = v26 & (v19 - 1) | ((v25 & (v18 - 1)) << v15);
            v27 = 1LL << ((unsigned __int8)v6 + (unsigned __int8)v15 - 64);
            result = (*v8 & (unsigned __int64)((v27 - 1) << v16)) >> v16;
            v17[1] = result | v17[1] & ~(v27 - 1);
          }
          else
          {
            result = ((v25 & ((1LL << v6) - 1)) << v15) | v26 & ~(((1LL << v6) - 1) << v15);
            *v17 = result;
          }
        }
      }
      else
      {
        v11 = v6;
        v12 = v6 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v10 + v7), *(const void **)(a1 + 8), v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(v13 + v10 + a2[1]);
          *v14 &= ~((1 << v12) - 1);
          result = *(_QWORD *)(a1 + 8);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
  }
  return result;
}
