__int64 __fastcall sub_140014170(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v5; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+38h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    v5 = __PAIR64__(v3, *(_QWORD *)(a1 + 80));
    if ( (unsigned int)v3 > 0xA )
      LODWORD(v3) = 10;
    v6 = v3;
    sub_1400042F0(a2, (int *)&v5);
  }
  else
  {
    *(_WORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)a2 = &off_1400D41D0;
    sub_1400011A8((_QWORD *)a2, (__int64)L"Invalid", 7uLL);
  }
  return a2;
}
