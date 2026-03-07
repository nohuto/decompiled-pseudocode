void __fastcall sub_140052480(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rax
  PVOID v6; // rbx
  PVOID v7; // rdx
  PVOID v8; // rbx
  PVOID v9; // rdx
  unsigned int v10; // esi
  __int64 *v11; // r15
  __int64 v12; // rax
  void *v13; // rdx
  __int64 v14; // rax
  PVOID v15; // rbx
  PVOID v16; // rbx
  PVOID v17; // rdx
  __int64 (__fastcall **v18)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h]
  PVOID P; // [rsp+38h] [rbp-D0h]
  __int64 v21; // [rsp+40h] [rbp-C8h]
  __int64 v22; // [rsp+48h] [rbp-C0h]
  _BYTE v23[24]; // [rsp+50h] [rbp-B8h]
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+78h] [rbp-90h]
  _BYTE v26[16]; // [rsp+88h] [rbp-80h] BYREF
  PVOID v27; // [rsp+98h] [rbp-70h]
  unsigned __int64 v28; // [rsp+A0h] [rbp-68h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+B8h] [rbp-50h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+C0h] [rbp-48h]
  unsigned __int64 v31; // [rsp+100h] [rbp-8h]
  __int64 v32; // [rsp+108h] [rbp+0h]
  __int64 v33; // [rsp+110h] [rbp+8h]

  v18 = &off_1400D41D0;
  LOWORD(v19) = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"m_dpcCounter", 0xCuLL);
  v4 = *(_QWORD *)(a1 + 936);
  sub_1400120E0((__int64)&v29, (__int64)&v18);
  v33 = 10LL;
  v30 = off_1400D4720;
  v5 = &off_1400D46F8;
  v29 = &off_1400D46F8;
  v31 = 0xA5A5A5A5A5000012uLL;
  v32 = v4;
  if ( P )
  {
    ExFreePool(P);
    v5 = v29;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v5[4])(&v29, a2);
  v18 = &off_1400D41D0;
  LOWORD(v19) = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)qword_1400B6F30, 1uLL);
  v6 = P;
  v7 = &unk_1400D44E0;
  if ( P )
    v7 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v21);
  if ( v6 )
    ExFreePool(v6);
  v29 = &off_1400D46F8;
  v30 = off_1400D4720;
  sub_140005CFC(&v29);
  sub_140003990(a2, 0);
  v18 = &off_1400D41D0;
  LOWORD(v19) = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"Interrupt Asserted Counters:\n", 0x1DuLL);
  v8 = P;
  v9 = &unk_1400D44E0;
  if ( P )
    v9 = P;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v21);
  if ( v8 )
    ExFreePool(v8);
  v10 = 0;
  v11 = (__int64 *)(a1 + 944);
  do
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 360) + 32LL))(
           *(_QWORD *)(a1 + 360),
           v10) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 360) + 24LL))(*(_QWORD *)(a1 + 360), v10);
      v13 = &unk_1400D44E0;
      if ( *(_QWORD *)(v12 + 16) )
        v13 = *(void **)(v12 + 16);
      (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2LL * *(_QWORD *)(v12 + 24));
      LOWORD(v19) = 0;
      v18 = &off_1400D41D0;
      P = 0LL;
      v21 = 0LL;
      v22 = 0LL;
      sub_1400011A8(&v18, (__int64)L" = ", 3uLL);
      v14 = *v11;
      *(__m128i *)&v23[8] = _mm_load_si128((const __m128i *)&xmmword_1400D76C0);
      *(_QWORD *)v23 = v14;
      v24 = *(_OWORD *)v23;
      v25 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v23[8], *(__m128d *)&v23[8]);
      sub_140050BEC((__int64)v26, (__int64)&v24);
      v15 = v27;
      if ( P )
        sub_140001480(&v18, (__int64)v27, v28);
      else
        sub_1400011A8(&v18, (__int64)v27, v28);
      if ( v15 )
        ExFreePool(v15);
      if ( P )
        sub_140001480(&v18, (__int64)qword_1400B6F30, 1LL);
      else
        sub_1400011A8(&v18, (__int64)qword_1400B6F30, 1uLL);
      v16 = P;
      v17 = &unk_1400D44E0;
      if ( P )
        v17 = P;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v21);
      if ( v16 )
        ExFreePool(v16);
    }
    ++v10;
    ++v11;
  }
  while ( v10 < 0x20 );
}
