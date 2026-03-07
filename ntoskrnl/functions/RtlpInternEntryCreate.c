_WORD *__fastcall RtlpInternEntryCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  _WORD *v7; // rax
  unsigned __int64 v8; // rdi
  _WORD *v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  __int64 v15; // rsi
  char *v16; // rbx

  v4 = a4 - *(_QWORD *)a2;
  if ( (unsigned __int64)(*(_QWORD *)a2 - 32LL) > 0xFFE0 || v4 > 0x40000000 )
    return 0LL;
  v7 = (_WORD *)(**(__int64 (__fastcall ***)(__int64, __int64))(a1 + 16))(a1, a4);
  v8 = 0LL;
  v9 = v7;
  if ( v7 )
  {
    memset(v7, 0, *(_QWORD *)a2);
    v9[12] = *(_WORD *)a2;
    v10 = (*((_QWORD *)v9 + 3) ^ (v4 << 16)) & 0x3FFFFFFF0000LL;
    *((_QWORD *)v9 + 1) = a3;
    *((_QWORD *)v9 + 3) ^= v10;
    *((_QWORD *)v9 + 2) = 1LL;
    *(_DWORD *)(a2 + 24) |= 1u;
    v11 = (unsigned __int16)*((_DWORD *)v9 + 6);
    if ( *(_QWORD *)(a2 + 16) )
    {
      v12 = 0LL;
      do
      {
        v13 = *(_QWORD *)(a2 + 8);
        v14 = v11;
        v15 = *(_QWORD *)(v12 + v13 + 24)
            - ((*(_QWORD *)(v12 + v13 + 24) - 1LL) & (*(_QWORD *)(v12 + v13 + 24) + v11 - 1))
            + v11
            - 1;
        if ( v15 != v14 )
          memset((char *)v9 + v14, 0, v15 - v14);
        v16 = (char *)v9 + v15;
        memmove((char *)v9 + v15, *(const void **)(v12 + v13), *(_QWORD *)(v12 + v13 + 16));
        v11 = *(_QWORD *)(v12 + v13 + 16) + v15;
        ++v8;
        *(_QWORD *)(v12 + v13 + 8) = v16;
        v12 += 32LL;
      }
      while ( v8 < *(_QWORD *)(a2 + 16) );
    }
    return v9;
  }
  return (_WORD *)v8;
}
