__int64 __fastcall sub_140053644(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // r8
  __int64 v6; // rdx

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( a1 != a2 )
    sub_1400011A8((_QWORD *)a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  v5 = *(_QWORD *)(a3 + 24);
  v6 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)(a1 + 16) )
    sub_140001480((_QWORD *)a1, v6, v5);
  else
    sub_1400011A8((_QWORD *)a1, v6, v5);
  return a1;
}
