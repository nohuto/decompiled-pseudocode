__int64 __fastcall sub_14008C394(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rdx

  v5 = *(_QWORD *)(a1 + 24);
  if ( a3 < v5 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = v5 - a3;
    *(_WORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    if ( a4 < v8 )
      v8 = a4;
    *(_QWORD *)(a2 + 24) = 0LL;
    v9 = v7 + 2 * a3;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)a2 = &off_1400D41D0;
    if ( v9 )
    {
      _mm_lfence();
      sub_1400011A8((_QWORD *)a2, v9, v8);
    }
  }
  else
  {
    *(_WORD *)(a2 + 8) = 0;
    *(_QWORD *)a2 = &off_1400D41D0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return a2;
}
