__int64 __fastcall sub_1400078B0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-48h]
  __int128 v6; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 80);
    *((_QWORD *)&v5 + 1) = v3;
    if ( v3 > 0xA )
      v3 = 10LL;
    v6 = v5;
    v7 = v3;
    sub_14000139C(a2, (__int64 *)&v6);
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
