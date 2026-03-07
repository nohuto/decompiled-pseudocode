__int64 __fastcall sub_140007BD4(__int64 a1, __int64 a2)
{
  PVOID v4; // rbx
  __int128 v6; // [rsp+28h] [rbp-19h]
  __int128 v7; // [rsp+48h] [rbp+7h] BYREF
  __int64 v8; // [rsp+58h] [rbp+17h]
  _BYTE v9[16]; // [rsp+68h] [rbp+27h] BYREF
  PVOID P; // [rsp+78h] [rbp+37h]
  unsigned __int64 v11; // [rsp+80h] [rbp+3Fh]

  *(_QWORD *)a1 = &off_1400D41D0;
  *(_WORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_1400011A8((_QWORD *)a1, (__int64)L"Length = ", 9uLL);
  *(_QWORD *)&v6 = *(_QWORD *)(a2 + 32);
  *((_QWORD *)&v6 + 1) = 10LL;
  v7 = v6;
  v8 = 10LL;
  sub_14000139C((__int64)v9, (__int64 *)&v7);
  v4 = P;
  if ( *(_QWORD *)(a1 + 16) )
    sub_140001480((_QWORD *)a1, (__int64)P, v11);
  else
    sub_1400011A8((_QWORD *)a1, (__int64)P, v11);
  if ( v4 )
    ExFreePool(v4);
  return a1;
}
