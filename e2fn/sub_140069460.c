__int64 __fastcall sub_140069460(__int64 a1, __int64 a2, __int64 a3)
{
  sub_1400120E0(a1, a2);
  *(_QWORD *)(a1 + 72) = &off_1400D41D0;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( a3 )
    sub_1400011A8((_QWORD *)(a1 + 72), a3, 0xDuLL);
  *(_QWORD *)a1 = &off_1400D7CD0;
  *(_QWORD *)(a1 + 8) = off_1400D7CF8;
  *(_QWORD *)(a1 + 72) = &off_1400D7D08;
  *(_QWORD *)(a1 + 112) = 0xA5A5A5A5A500000FuLL;
  return a1;
}
