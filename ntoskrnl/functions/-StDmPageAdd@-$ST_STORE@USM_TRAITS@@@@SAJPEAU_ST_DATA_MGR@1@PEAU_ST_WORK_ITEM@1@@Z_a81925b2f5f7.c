__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageAdd(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm1
  __int64 v4; // xmm0_8
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int v12; // eax
  int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 result; // rax
  __m128i v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  unsigned int v20; // [rsp+68h] [rbp+28h] BYREF

  v2 = *(__m128i *)(a2 + 8);
  v20 = 0;
  v4 = *(_QWORD *)(a2 + 24);
  v18 = v2;
  v19 = v4;
  v6 = SmMapPage(_mm_srli_si128(v2, 8).m128i_u64[0], &v20);
  v7 = v2.m128i_i32[0];
  if ( v6 )
  {
    if ( v2.m128i_i32[0] < 0 )
    {
      v9 = v20;
      v10 = 1;
    }
    else
    {
      v9 = 0;
      v10 = v20 >> 12;
    }
    for ( v18.m128i_i64[1] = v6; ; v18.m128i_i64[1] += 4096LL )
    {
      v11 = v7 >= 0 ? 1 : (v9 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      v20 = v11;
      do
      {
        v12 = ST_STORE<SM_TRAITS>::StDmpSinglePageAdd(a1, &v18, a2, &v20);
        v8 = v12;
      }
      while ( v12 == -1073741267 );
      if ( v12 )
        break;
      v18.m128i_i32[0] ^= (v18.m128i_i32[0] ^ ((v18.m128i_i32[0] & 0xFFFFFFF8) + 8)) & 0x3FFFFFF8;
      v7 = v18.m128i_i32[0];
      if ( (((unsigned __int32)v18.m128i_i32[0] >> 3) & 0x7FFFFFF) >= v10 )
        goto LABEL_17;
      LODWORD(v19) = v19 + 1;
    }
    v7 = v18.m128i_i32[0];
    if ( v12 == -1073741818 )
    {
      v7 = v18.m128i_i32[0] & 0xC0000007;
      goto LABEL_23;
    }
LABEL_17:
    v13 = ((unsigned int)v7 >> 3) & 0x7FFFFFF;
    if ( v13 )
    {
      v14 = *(_QWORD *)(a1 + 1816);
      if ( v14 )
      {
        v15 = v14 + 24;
        v16 = *(_DWORD **)v15;
        if ( MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(v15 + 16) )
          v16 = (_DWORD *)StIoCountsMovePeriod(v15, MEMORY[0xFFFFF78000000008], v8);
        *v16 += v13;
        v7 = v18.m128i_i32[0];
      }
      LODWORD(v8) = 0;
    }
  }
  else
  {
    LODWORD(v8) = -1073741670;
  }
LABEL_23:
  result = (unsigned int)v8;
  *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ v7) & 0x3FFFFFF8;
  return result;
}
