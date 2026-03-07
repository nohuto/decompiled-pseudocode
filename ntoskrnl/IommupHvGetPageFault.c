__int64 __fastcall IommupHvGetPageFault(
        unsigned int *a1,
        _DWORD *a2,
        _QWORD *a3,
        _WORD *a4,
        unsigned __int64 *a5,
        __int64 *a6)
{
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  __int64 v11; // r10
  __int64 v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __m128i v19; // [rsp+20h] [rbp-28h]
  __int128 v20; // [rsp+30h] [rbp-18h]

  v8 = **((_QWORD **)a1 + 1);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 9LL) )
      ((void (__fastcall *)(_QWORD))qword_140C62258)(*a1);
    return 0LL;
  }
  else
  {
    v9 = *((_QWORD *)a1 + 2);
    v10 = 0;
    v11 = 32LL * (unsigned int)v8;
    if ( (_DWORD)v8 != 127 )
      v10 = v8 + 1;
    v19 = *(__m128i *)(v11 + v9);
    v12 = _mm_srli_si128(v19, 8).m128i_u64[0];
    v20 = *(_OWORD *)(v11 + v9 + 16);
    **((_DWORD **)a1 + 1) = v10;
    if ( v12 >= 0 )
    {
      if ( (v12 & 0x400) != 0 )
        v14 = ((unsigned __int64)v12 >> 11) & 0xFFFFF;
      else
        LODWORD(v14) = -1;
      *a2 = v14;
      *a3 = v19.m128i_i64[0];
      *a4 = v12 & 0x1FF;
      *a5 = v20 & 0xFFFFFFFFFFFFF000uLL;
      v15 = v20 & 1 | 2;
      if ( (v20 & 2) == 0 )
        v15 = v20 & 1;
      v16 = v15 | 4;
      if ( (v20 & 4) == 0 )
        v16 = v15;
      v17 = v16 | 8;
      if ( (v20 & 8) == 0 )
        v17 = v16;
      v13 = v17 | 0x10;
      if ( (v12 & 0x200) == 0 )
        v13 = v17;
    }
    else
    {
      *a2 = -1;
      *a3 = 0LL;
      *a4 = -1;
      *a5 = 0LL;
      v13 = 32LL;
    }
    *a6 = v13;
    return 1LL;
  }
}
