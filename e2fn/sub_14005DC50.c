__int64 __fastcall sub_14005DC50(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = &off_1400D41D0;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( a2 != a1 + 72 )
    sub_1400011A8((_QWORD *)a2, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96));
  return a2;
}
