__int64 __fastcall HvlpHandleIommuFaultMessage(__int64 a1)
{
  int v1; // edx
  char v3; // al
  int v4; // edx
  int v5; // ecx
  __int128 v7; // [rsp+20h] [rbp-40h] BYREF
  __int128 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 8);
  v10 = 0LL;
  v3 = (unsigned __int8)v1 >> 2;
  v4 = v1 & 1;
  v7 = 0LL;
  BYTE4(v7) = v3 & 1;
  v8 = 0LL;
  LODWORD(v7) = 2;
  v9 = 0LL;
  DWORD2(v8) = v4 | _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFFE;
  if ( v4 )
    *(_QWORD *)&v8 = *(_QWORD *)(a1 + 32);
  v5 = -(*(_DWORD *)a1 != 0);
  DWORD2(v9) = *(unsigned __int16 *)(a1 + 26);
  *(_QWORD *)&v9 = *(_QWORD *)(a1 + 40);
  HIDWORD(v8) = 6 - v5;
  return ((__int64 (__fastcall *)(_QWORD, __int128 *))qword_140C01E40)(*(unsigned __int16 *)(a1 + 24), &v7);
}
