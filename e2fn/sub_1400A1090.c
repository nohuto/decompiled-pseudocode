__int64 __fastcall sub_1400A1090(__int64 a1, __int64 a2, unsigned int a3, __m128i *a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  __m128i v10; // xmm2
  __int64 v11; // xmm0_8
  PVOID **v12; // xmm2_8
  __int64 v13; // rsi
  __int64 v14; // rbx
  _QWORD *v15; // xmm2_8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 result; // rax
  PVOID *v19; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+78h] [rbp-8h]

  v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( P != (PVOID *)a4 )
  {
    v8 = a4[2].m128i_i64[0];
    v9 = v21;
    a4[2].m128i_i64[0] = 0LL;
    v10 = *a4;
    v22 = v8;
    v11 = a4[1].m128i_i64[0];
    *(__m128i *)P = v10;
    v12 = (PVOID **)_mm_srli_si128(v10, 8).m128i_u64[0];
    v21 = v11;
    *a4 = 0LL;
    a4[1].m128i_i64[0] = v9;
    if ( v12 )
      *v12 = P;
    if ( P[0] )
      *((_QWORD *)P[0] + 1) = P;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v14 = *(_QWORD *)(v13 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v23 = *(_OWORD *)P;
  v25 = v22;
  v15 = (_QWORD *)_mm_srli_si128(*(__m128i *)P, 8).m128i_u64[0];
  v22 = 0LL;
  v24 = v21;
  v21 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( v15 )
    *v15 = &v23;
  if ( (_QWORD)v23 )
    *(_QWORD *)(v23 + 8) = &v23;
  v16 = sub_140071FCC(v13, &v23);
  if ( v16 )
  {
    LOBYTE(v17) = a5;
    (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v16 + 48LL))(v16, a2, a3, v17);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
  result = v22;
  if ( v22 )
  {
    v19 = (PVOID *)P[1];
    do
    {
      if ( result == 1 )
      {
        P[1] = 0LL;
        P[0] = 0LL;
      }
      else if ( v19 == P[0] )
      {
        *((_QWORD *)*v19 + 1) = P;
        P[0] = *v19;
      }
      else
      {
        P[1] = v19[1];
        *(_QWORD *)v19[1] = P;
      }
      *v19 = 0LL;
      v19[1] = 0LL;
      ExFreePool(v19);
      v19 = (PVOID *)P[1];
      result = v22 - 1;
      v22 = result;
    }
    while ( result );
  }
  while ( a4[2].m128i_i64[0] )
    result = sub_1400A4398(a4, a4->m128i_i64[1]);
  a4->m128i_i64[0] = 0LL;
  a4->m128i_i64[1] = 0LL;
  return result;
}
