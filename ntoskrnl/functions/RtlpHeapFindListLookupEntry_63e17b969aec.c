_QWORD *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rdi
  unsigned int v6; // r14d
  __int64 v8; // rbx
  int v9; // r13d
  _QWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *i; // rsi
  __int64 v17; // r8
  unsigned int *v18; // r9
  unsigned int v19; // edx
  int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // rcx

  v5 = *(_QWORD **)(a2 + 32);
  v6 = a4 - *(_DWORD *)(a2 + 24);
  v8 = 0LL;
  v9 = a4;
  v12 = (_QWORD *)v5[1];
  if ( v5 == v12 )
    return v5;
  LOBYTE(a4) = a3;
  if ( (int)RtlpHeapListCompare(a1, v12, a5, a4) > 0 )
    return v5;
  LOBYTE(v13) = a3;
  if ( (int)RtlpHeapListCompare(a1, *v5, a5, v13) <= 0 )
    return (_QWORD *)*v5;
  if ( *(_QWORD *)a2 || v9 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v17 = v6 >> 5;
    v18 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v17);
    v19 = *v18 & (-1 << (v6 & 0x1F));
    if ( v19 )
    {
LABEL_19:
      if ( (_WORD)v19 )
      {
        if ( (_BYTE)v19 )
          v20 = *((unsigned __int8 *)RtlpBitsClearLow + (unsigned __int8)v19);
        else
          v20 = *((unsigned __int8 *)RtlpBitsClearLow + BYTE1(v19)) + 8;
      }
      else if ( (v19 & 0xFF0000) != 0 )
      {
        v20 = *((unsigned __int8 *)RtlpBitsClearLow + BYTE2(v19)) + 16;
      }
      else
      {
        v20 = *((unsigned __int8 *)RtlpBitsClearLow + ((unsigned __int64)v19 >> 24)) + 24;
      }
      v21 = 32 * v17 + v20;
      v22 = 2 * v21;
      if ( !*(_DWORD *)(a2 + 12) )
        v22 = v21;
      return *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v22);
    }
    else
    {
      while ( (unsigned int)v17 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
      {
        ++v18;
        LODWORD(v17) = v17 + 1;
        v19 = *v18;
        if ( *v18 )
          goto LABEL_19;
      }
    }
  }
  else
  {
    v15 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v15 = v6;
    for ( i = *(_QWORD **)(*(_QWORD *)(a2 + 48) + 8 * v15); v5 != i; i = (_QWORD *)*i )
    {
      LOBYTE(v14) = a3;
      if ( (int)RtlpHeapListCompare(a1, i, a5, v14) <= 0 )
        return i;
    }
  }
  return (_QWORD *)v8;
}
