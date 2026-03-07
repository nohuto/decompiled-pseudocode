__int64 __fastcall sub_14008AE68(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rcx
  __int64 result; // rax

  *(_QWORD *)a1 = off_1400D9A00;
  *(_QWORD *)(a1 + 8) = &off_1400D99F0;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 8);
  v7 = a1 + 24;
  *(_QWORD *)v7 = &off_1400D41D0;
  *(_WORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  if ( v7 != a3 )
    sub_1400011A8((_QWORD *)v7, *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 24));
  *(_QWORD *)(a1 + 72) = a5;
  result = a1;
  *(_DWORD *)(a1 + 64) = a4;
  return result;
}
