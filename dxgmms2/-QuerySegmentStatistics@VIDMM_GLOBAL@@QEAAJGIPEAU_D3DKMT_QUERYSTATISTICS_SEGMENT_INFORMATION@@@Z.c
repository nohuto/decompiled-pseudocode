__int64 __fastcall VIDMM_GLOBAL::QuerySegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_SEGMENT_INFORMATION *a4)
{
  unsigned int v4; // r11d
  __int64 v6; // r10
  __int64 v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v16; // eax
  unsigned __int64 v17; // rcx

  v4 = *((_DWORD *)this + 1754);
  if ( a2 >= v4 )
  {
    WdLogSingleEntry2(3LL, a2, v4);
    return 3221225485LL;
  }
  if ( a3 >= *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 32) )
    return 3221225485LL;
  _mm_lfence();
  v6 = 5LL;
  v7 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (a3 + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28)));
  v8 = (_QWORD *)((char *)a4 + 48);
  *(_QWORD *)a4 = *(_QWORD *)(v7 + 208);
  *((_QWORD *)a4 + 1) = *(_QWORD *)(v7 + 216);
  *((_QWORD *)a4 + 2) = *(_QWORD *)(v7 + 224);
  *((_QWORD *)a4 + 3) = *(_QWORD *)(v7 + 312);
  *((_DWORD *)a4 + 8) = *(_DWORD *)(v7 + 320);
  *((_DWORD *)a4 + 9) = *(_DWORD *)(v7 + 324);
  do
  {
    *v8 = *(_QWORD *)((char *)v8 + v7 + 312 - (_QWORD)a4 - 32);
    ++v8;
    --v6;
  }
  while ( v6 );
  v9 = 0LL;
  if ( (*(_DWORD *)(v7 + 80) & 1) != 0 || (v10 = 0, (*(_DWORD *)(v7 + 80) & 0x1001) != 0) )
    v10 = 1;
  *((_DWORD *)a4 + 10) = v10;
  *((_QWORD *)a4 + 11) = *(_QWORD *)(v7 + 128);
  v11 = *((_QWORD *)a4 + 12) ^ (*((_DWORD *)a4 + 24) ^ (*(_DWORD *)(v7 + 80) >> 7)) & 1LL;
  *((_QWORD *)a4 + 12) = v11;
  v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v7 + 80) >> 7)) & 2;
  *((_QWORD *)a4 + 12) = v12;
  *((_QWORD *)a4 + 12) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v7 + 80) >> 7)) & 4;
  v13 = *(_DWORD *)(v7 + 80);
  if ( (v13 & 0x1001) != 0 || (v13 & 0x40) != 0 )
    v9 = 1LL;
  v14 = v9 | *((_QWORD *)a4 + 13) & 0xFFFFFFFFFFFFFFFEuLL;
  *((_QWORD *)a4 + 13) = v14;
  v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v7 + 80) >> 20)) & 2;
  *((_QWORD *)a4 + 13) = v15;
  v16 = *(_DWORD *)(v7 + 80);
  if ( (v16 & 1) != 0 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFC3uLL;
  }
  else if ( (v16 & 0x1000) != 0 )
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFC3uLL | 8;
  }
  else
  {
    v17 = v15 & 0xFFFFFFFFFFFFFFC3uLL | 4;
  }
  *((_QWORD *)a4 + 13) = v17;
  return 0LL;
}
