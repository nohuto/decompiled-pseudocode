__int64 __fastcall sub_1400A0AD0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // xmm1_8
  __m128i v5; // xmm2
  __int64 v6; // xmm0_8
  PVOID **v7; // xmm2_8
  __int64 v8; // rsi
  __int64 v9; // rbx
  _QWORD *v10; // xmm2_8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  PVOID *v15; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+68h] [rbp-8h]

  v17 = 0LL;
  v18 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( P != (PVOID *)a2 )
  {
    v3 = a2[2].m128i_i64[0];
    v4 = v17;
    a2[2].m128i_i64[0] = 0LL;
    v5 = *a2;
    v18 = v3;
    v6 = a2[1].m128i_i64[0];
    *(__m128i *)P = v5;
    v7 = (PVOID **)_mm_srli_si128(v5, 8).m128i_u64[0];
    v17 = v6;
    *a2 = 0LL;
    a2[1].m128i_i64[0] = v4;
    if ( v7 )
      *v7 = P;
    if ( P[0] )
      *((_QWORD *)P[0] + 1) = P;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v19 = *(_OWORD *)P;
  v21 = v18;
  v10 = (_QWORD *)_mm_srli_si128(*(__m128i *)P, 8).m128i_u64[0];
  v18 = 0LL;
  v20 = v17;
  v17 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( v10 )
    *v10 = &v19;
  if ( (_QWORD)v19 )
    *(_QWORD *)(v19 + 8) = &v19;
  v11 = sub_140071FCC(v8, &v19);
  v13 = v11;
  if ( v11 )
  {
    LOBYTE(v12) = 1;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 8LL))(v11, v12);
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v12, v13);
  result = v18;
  if ( v18 )
  {
    v15 = (PVOID *)P[1];
    do
    {
      if ( result == 1 )
      {
        P[1] = 0LL;
        P[0] = 0LL;
      }
      else if ( v15 == P[0] )
      {
        *((_QWORD *)*v15 + 1) = P;
        P[0] = *v15;
      }
      else
      {
        P[1] = v15[1];
        *(_QWORD *)v15[1] = P;
      }
      *v15 = 0LL;
      v15[1] = 0LL;
      ExFreePool(v15);
      v15 = (PVOID *)P[1];
      result = v18 - 1;
      v18 = result;
    }
    while ( result );
  }
  while ( a2[2].m128i_i64[0] )
    result = sub_1400A4398(a2, a2->m128i_i64[1]);
  a2->m128i_i64[0] = 0LL;
  a2->m128i_i64[1] = 0LL;
  return result;
}
