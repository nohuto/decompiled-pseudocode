__int64 __fastcall sub_1400A0CB0(__int64 a1, __m128i *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  __m128i v7; // xmm2
  __int64 v8; // xmm0_8
  PVOID **v9; // xmm2_8
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // xmm2_8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 result; // rax
  PVOID *v17; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v19; // [rsp+30h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+68h] [rbp-8h]

  v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( P != (PVOID *)a2 )
  {
    v5 = a2[2].m128i_i64[0];
    v6 = v19;
    a2[2].m128i_i64[0] = 0LL;
    v7 = *a2;
    v20 = v5;
    v8 = a2[1].m128i_i64[0];
    *(__m128i *)P = v7;
    v9 = (PVOID **)_mm_srli_si128(v7, 8).m128i_u64[0];
    v19 = v8;
    *a2 = 0LL;
    a2[1].m128i_i64[0] = v6;
    if ( v9 )
      *v9 = P;
    if ( P[0] )
      *((_QWORD *)P[0] + 1) = P;
  }
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(v10 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v21 = *(_OWORD *)P;
  v23 = v20;
  v12 = (_QWORD *)_mm_srli_si128(*(__m128i *)P, 8).m128i_u64[0];
  v20 = 0LL;
  v22 = v19;
  v19 = 0LL;
  *(_OWORD *)P = 0LL;
  if ( v12 )
    *v12 = &v21;
  if ( (_QWORD)v21 )
    *(_QWORD *)(v21 + 8) = &v21;
  v13 = sub_140071FCC(v10, &v21);
  v15 = v13;
  if ( v13 )
  {
    LOBYTE(v14) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v14);
  }
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v14, v15);
  result = v20;
  if ( v20 )
  {
    v17 = (PVOID *)P[1];
    do
    {
      if ( result == 1 )
      {
        P[1] = 0LL;
        P[0] = 0LL;
      }
      else if ( v17 == P[0] )
      {
        *((_QWORD *)*v17 + 1) = P;
        P[0] = *v17;
      }
      else
      {
        P[1] = v17[1];
        *(_QWORD *)v17[1] = P;
      }
      *v17 = 0LL;
      v17[1] = 0LL;
      ExFreePool(v17);
      v17 = (PVOID *)P[1];
      result = v20 - 1;
      v20 = result;
    }
    while ( result );
  }
  while ( a2[2].m128i_i64[0] )
    result = sub_1400A4398(a2, a2->m128i_i64[1]);
  a2->m128i_i64[0] = 0LL;
  a2->m128i_i64[1] = 0LL;
  return result;
}
