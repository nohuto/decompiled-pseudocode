char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v2; // xmm6
  __int64 v4; // rax
  char v6; // si
  char v7; // al
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // eax
  char v11; // al
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  int v19; // eax
  int v20; // eax
  __int64 v21; // xmm1_8
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h]

  v2 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 120));
  v28 = 0LL;
  v4 = *(_QWORD *)a2;
  v6 = 0;
  v27 = 0LL;
  if ( *((_DWORD *)this + 13) != (*(unsigned int (__fastcall **)(const struct CFlipToken *))(v4 + 120))(a2) )
  {
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 120LL))(a2);
    v6 = 1;
  }
  v7 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2);
  v8 = *((_DWORD *)this + 46);
  if ( ((v8 >> 12) & 1) != v7 )
  {
    v6 = 1;
    *((_DWORD *)this + 46) ^= (*((_DWORD *)this + 46) ^ ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2) << 12)) & 0x1000;
    v8 = *((_DWORD *)this + 46);
  }
  v9 = *((unsigned __int8 *)a2 + 118);
  if ( (v8 & 1) != v9 )
  {
    v6 = 1;
    *((_DWORD *)this + 46) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)v9) & 1;
  }
  v10 = *((_DWORD *)a2 + 36);
  if ( *((_DWORD *)this + 29) != v10 )
  {
    *((_DWORD *)this + 29) = v10;
    v6 = 1;
  }
  v11 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2);
  v12 = *((_DWORD *)this + 46);
  if ( ((v12 >> 5) & 1) != (v11 != 0) )
  {
    v6 = 1;
    v12 = ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0 ? 0x20 : 0) | *((_DWORD *)this + 46) & 0xFFFFFFDF;
    *((_DWORD *)this + 46) = v12;
  }
  if ( *((float *)this + 17) != v2.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v2;
    v6 = 1;
  }
  v13 = *((unsigned __int8 *)a2 + 136);
  if ( ((v12 >> 2) & 1) != v13 )
  {
    v6 = 1;
    v12 ^= ((unsigned __int8)v12 ^ (unsigned __int8)(4 * v13)) & 4;
    *((_DWORD *)this + 46) = v12;
  }
  v14 = *((_DWORD *)a2 + 53);
  if ( *((_DWORD *)this + 21) != v14 )
  {
    *((_DWORD *)this + 21) = v14;
    v6 = 1;
  }
  v15 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 12) != v15 )
  {
    *((_DWORD *)this + 12) = v15;
    v6 = 1;
  }
  v16 = *((unsigned __int8 *)a2 + 137);
  if ( ((v12 >> 3) & 1) != v16 )
  {
    v6 = 1;
    *((_DWORD *)this + 46) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(8 * v16)) & 8;
  }
  v17 = *(__m128i *)((char *)a2 + 148);
  if ( *(_QWORD *)((char *)this + 100) != *(_QWORD *)((char *)a2 + 148)
    || *(_QWORD *)((char *)this + 108) != _mm_srli_si128(v17, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 100) = v17;
    v6 = 1;
  }
  v18 = *(__m128i *)((char *)a2 + 164);
  if ( *((_QWORD *)this + 21) != *(_QWORD *)((char *)a2 + 164)
    || *((_QWORD *)this + 22) != _mm_srli_si128(v18, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 168) = v18;
    v6 = 1;
  }
  v19 = *((_DWORD *)a2 + 45);
  if ( *((_DWORD *)this + 40) != v19 )
  {
    *((_DWORD *)this + 40) = v19;
    v6 = 1;
  }
  v20 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 41) != v20 )
  {
    *((_DWORD *)this + 41) = v20;
    v6 = 1;
  }
  CFlipToken::GetTransform(a2, (float *)&v27);
  if ( *((float *)this + 30) != *(float *)&v27
    || *((float *)this + 31) != *((float *)&v27 + 1)
    || *((float *)this + 32) != *((float *)&v27 + 2)
    || *((float *)this + 33) != *((float *)&v27 + 3)
    || *((float *)this + 34) != *(float *)&v28
    || *((float *)this + 35) != *((float *)&v28 + 1) )
  {
    v6 = 1;
    v21 = v28;
    *(_OWORD *)((char *)this + 120) = v27;
    *((_QWORD *)this + 17) = v21;
  }
  v22 = *((_DWORD *)a2 + 54);
  if ( *((_DWORD *)this + 24) != v22 )
  {
    *((_DWORD *)this + 24) = v22;
    v6 = 1;
  }
  *((_DWORD *)this + 46) ^= (*((_DWORD *)this + 46) ^ (*((unsigned __int8 *)a2 + 138) << 10)) & 0x400;
  if ( (*((_DWORD *)this + 46) & 0x400) != 0 )
  {
    v23 = *((_DWORD *)a2 + 55);
    *((_DWORD *)this + 94) = v23;
    if ( v23 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        *((_DWORD *)this + 94) = 0;
      }
      else if ( *((_DWORD *)this + 94) == 1 )
      {
        v25 = *((_QWORD *)this + 46);
        *(_OWORD *)v25 = *((_OWORD *)a2 + 14);
        *(_QWORD *)(v25 + 16) = *((_QWORD *)a2 + 30);
        *(_DWORD *)(v25 + 24) = *((_DWORD *)a2 + 62);
      }
      else if ( *((_DWORD *)this + 94) == 2 )
      {
        v24 = *((_QWORD *)this + 46);
        *(_OWORD *)v24 = *((_OWORD *)a2 + 14);
        *(_OWORD *)(v24 + 16) = *((_OWORD *)a2 + 15);
        *(_OWORD *)(v24 + 32) = *((_OWORD *)a2 + 16);
        *(_OWORD *)(v24 + 48) = *((_OWORD *)a2 + 17);
        *(_QWORD *)(v24 + 64) = *((_QWORD *)a2 + 36);
      }
    }
    return 1;
  }
  return v6;
}
