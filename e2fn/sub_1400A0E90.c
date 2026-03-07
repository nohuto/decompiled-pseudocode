__int64 __fastcall sub_1400A0E90(__int64 a1, __int64 a2, unsigned int a3, __m128i *a4)
{
  __int64 v7; // rax
  __int64 v8; // xmm1_8
  __m128i v9; // xmm2
  __int64 v10; // xmm0_8
  PVOID **v11; // xmm2_8
  __int64 v12; // rsi
  __int64 v13; // rbx
  _QWORD *v14; // xmm2_8
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 result; // rax
  PVOID *v18; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+78h] [rbp-8h]

  v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( P != (PVOID *)a4 )
  {
    v7 = a4[2].m128i_i64[0];
    v8 = v20;
    a4[2].m128i_i64[0] = 0LL;
    v9 = *a4;
    v21 = v7;
    v10 = a4[1].m128i_i64[0];
    *(__m128i *)P = v9;
    v11 = (PVOID **)_mm_srli_si128(v9, 8).m128i_u64[0];
    v20 = v10;
    *a4 = 0LL;
    a4[1].m128i_i64[0] = v8;
    if ( v11 )
      *v11 = P;
    if ( P[0] )
      *((_QWORD *)P[0] + 1) = P;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(v12 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v22 = *(_OWORD *)P;
  v24 = v21;
  v14 = (_QWORD *)_mm_srli_si128(*(__m128i *)P, 8).m128i_u64[0];
  v21 = 0LL;
  v23 = v20;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( v14 )
    *v14 = &v22;
  if ( (_QWORD)v22 )
    *(_QWORD *)(v22 + 8) = &v22;
  v15 = sub_140071FCC(v12, &v22);
  if ( v15 )
  {
    LOBYTE(v16) = 1;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v15 + 48LL))(v15, a2, a3, v16);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
  result = v21;
  if ( v21 )
  {
    v18 = (PVOID *)P[1];
    do
    {
      if ( result == 1 )
      {
        P[1] = 0LL;
        P[0] = 0LL;
      }
      else if ( v18 == P[0] )
      {
        *((_QWORD *)*v18 + 1) = P;
        P[0] = *v18;
      }
      else
      {
        P[1] = v18[1];
        *(_QWORD *)v18[1] = P;
      }
      *v18 = 0LL;
      v18[1] = 0LL;
      ExFreePool(v18);
      v18 = (PVOID *)P[1];
      result = v21 - 1;
      v21 = result;
    }
    while ( result );
  }
  while ( a4[2].m128i_i64[0] )
    result = sub_1400A4398(a4, a4->m128i_i64[1]);
  a4->m128i_i64[0] = 0LL;
  a4->m128i_i64[1] = 0LL;
  return result;
}
