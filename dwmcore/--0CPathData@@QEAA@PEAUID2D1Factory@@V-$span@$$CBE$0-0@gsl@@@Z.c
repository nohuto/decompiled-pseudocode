__int64 __fastcall CPathData::CPathData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  _QWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF
  char v11; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1 + 16;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CPathData::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_BYTE *)(a1 + 72) = 0;
  v6 = *a3;
  std::vector<unsigned char>::reserve(v3, *a3);
  v7 = *(_QWORD *)(a1 + 24);
  v9[0] = a3[1];
  v10[0] = v9[0];
  v10[2] = v9[0];
  v9[1] = v6 + v9[0];
  v9[2] = v6 + v9[0];
  v10[1] = v6 + v9[0];
  std::vector<unsigned char>::insert<gsl::details::span_iterator<unsigned char const>,0>(
    v3,
    (unsigned int)&v11,
    v7,
    (unsigned int)v10,
    (__int64)v9);
  return a1;
}
