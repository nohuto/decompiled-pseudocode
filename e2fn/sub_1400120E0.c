__int64 __fastcall sub_1400120E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  *(_QWORD *)a1 = &off_1400D46C0;
  *(_QWORD *)(a1 + 8) = &off_1400D46E8;
  *(_QWORD *)(a1 + 16) = 0xA5A5A5A5A500000EuLL;
  v3 = a1 + 24;
  *(_QWORD *)v3 = &off_1400D41D0;
  *(_WORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(v3 + 32) = 0LL;
  if ( v3 != a2 )
    sub_1400011A8((_QWORD *)v3, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
