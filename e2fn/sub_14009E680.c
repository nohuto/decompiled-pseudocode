void __fastcall sub_14009E680(_QWORD *a1, __int64 a2, int a3)
{
  PVOID v6; // r14
  void *v7; // rdx
  PVOID v8; // rbx
  PVOID v9; // rdx
  PVOID v10; // rbx
  __int128 v11; // [rsp+28h] [rbp-29h] BYREF
  PVOID P; // [rsp+38h] [rbp-19h]
  __int64 v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  _BYTE v15[24]; // [rsp+58h] [rbp+7h]
  _BYTE v16[16]; // [rsp+70h] [rbp+1Fh] BYREF
  PVOID v17; // [rsp+80h] [rbp+2Fh]
  __int64 v18; // [rsp+88h] [rbp+37h]

  sub_14009E60C((__int64)a1);
  if ( !a3 )
  {
    v6 = &unk_1400D44E0;
    v7 = &unk_1400D44E0;
    if ( a1[4] )
      v7 = (void *)a1[4];
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2LL * a1[5]);
    WORD4(v11) = 0;
    *(_QWORD *)&v11 = &off_1400D41D0;
    P = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    sub_1400011A8(&v11, (__int64)L" = ", 3uLL);
    v8 = P;
    v9 = &unk_1400D44E0;
    if ( P )
      v9 = P;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v13);
    if ( v8 )
      ExFreePool(v8);
    *(_QWORD *)v15 = a1[10] - a1[11];
    *(__m128i *)&v15[8] = _mm_load_si128((const __m128i *)&xmmword_1400D76C0);
    v11 = *(_OWORD *)v15;
    P = (PVOID)*(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v15[8], *(__m128d *)&v15[8]);
    sub_140050BEC((__int64)v16, (__int64)&v11);
    v10 = v17;
    if ( v17 )
      v6 = v17;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v6, 2 * v18);
    if ( v10 )
      ExFreePool(v10);
  }
}
