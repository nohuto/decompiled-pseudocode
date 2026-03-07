__int64 __fastcall sub_14008B014(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v8 = a1 + 8;
  *(_QWORD *)a1 = &off_1400D99D8;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 8) = off_1400D4D58;
  v9 = a1 + 48;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)v9 = &off_1400D41D0;
  *(_WORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0LL;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 32) = 0LL;
  if ( v9 != a3 )
    sub_1400011A8((_QWORD *)v9, *(_QWORD *)(a3 + 16), *(_QWORD *)(a3 + 24));
  *(_QWORD *)(a1 + 96) = a5;
  *(_DWORD *)(a1 + 88) = a4;
  if ( v8 != a2 )
  {
    sub_1400B30BC(v8, a2);
    v10 = *(_QWORD *)(v8 + 32);
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 32) = v10;
  }
  return a1;
}
