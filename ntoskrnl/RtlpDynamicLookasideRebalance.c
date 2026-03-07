__int64 __fastcall RtlpDynamicLookasideRebalance(__int64 *a1)
{
  unsigned int v1; // r11d
  size_t v2; // rsi
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r10
  unsigned __int8 v7; // cf
  unsigned int v8; // r9d
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r11d
  int v15; // r11d
  _BYTE Base[4]; // [rsp+20h] [rbp-218h] BYREF
  char v17; // [rsp+24h] [rbp-214h] BYREF

  v1 = 0;
  v2 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v2 )
  {
    v4 = &v17;
    v5 = *a1;
    v6 = (__int64)a1 + 84;
    do
    {
      v7 = _bittest64(&v5, v1);
      *((_DWORD *)v4 - 1) = v1;
      v8 = -1;
      v6 += 64LL;
      v4 += 8;
      v9 = -1;
      if ( *(_DWORD *)(v6 - 64) + (unsigned int)v7 - *(_DWORD *)(v6 - 48) >= v7 )
        v8 = *(_DWORD *)(v6 - 64) + v7 - *(_DWORD *)(v6 - 48);
      if ( v8 + *(_DWORD *)(v6 - 56) - *(_DWORD *)(v6 - 40) >= v8 )
        v9 = v8 + *(_DWORD *)(v6 - 56) - *(_DWORD *)(v6 - 40);
      ++v1;
      *((_DWORD *)v4 - 2) = v9;
    }
    while ( v1 < (unsigned int)v2 );
  }
  qsort(Base, v2, 8uLL, RtlpDynamicLookasideBucketCompare);
  result = *((unsigned int *)a1 + 3);
  v11 = 0LL;
  if ( (_DWORD)result )
  {
    v12 = (unsigned int *)Base;
    v13 = (unsigned int)result;
    do
    {
      if ( v12[1] >= 0x19 )
      {
        result = *v12;
        v11 |= 1LL << result;
      }
      v12 += 2;
      --v13;
    }
    while ( v13 );
  }
  v14 = 0;
  for ( *a1 = v11; v14 < *((_DWORD *)a1 + 2); v14 = v15 + 1 )
    result = RtlpLookasideAdjustDepth(&a1[8 * v14 + 8], !_bittest64(&v11, v14));
  return result;
}
