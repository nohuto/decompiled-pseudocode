__int64 __fastcall sub_14008AF60(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *v6; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1400D9A08;
  *(_WORD *)(a1 + 16) = 0;
  v6 = (_QWORD *)(a1 + 8);
  v6[2] = 0LL;
  *v6 = &off_1400D41D0;
  v6[3] = 0LL;
  v6[4] = 0LL;
  if ( v6 != a2 )
    sub_1400011A8(v6, a2[2], a2[3]);
  *(_QWORD *)(a1 + 48) = &off_1400D41D0;
  *(_WORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( a1 + 48 != a3 )
    sub_1400011A8((_QWORD *)(a1 + 48), *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 24));
  *(_QWORD *)(a1 + 96) = a5;
  result = a1;
  *(_DWORD *)(a1 + 88) = a4;
  return result;
}
