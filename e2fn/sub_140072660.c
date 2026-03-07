__int64 __fastcall sub_140072660(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  PVOID v5; // rdi
  __int128 v7; // [rsp+28h] [rbp-19h]
  __int128 v8; // [rsp+48h] [rbp+7h] BYREF
  __int64 v9; // [rsp+58h] [rbp+17h]
  _BYTE v10[16]; // [rsp+68h] [rbp+27h] BYREF
  PVOID P; // [rsp+78h] [rbp+37h]
  unsigned __int64 v12; // [rsp+80h] [rbp+3Fh]

  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a2 = &off_1400D41D0;
  *(_WORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  if ( a2 != v3 )
    sub_1400011A8((_QWORD *)a2, *(_QWORD *)(v3 + 16), *(_QWORD *)(v3 + 24));
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)L", Object UID: ", 14LL);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)L", Object UID: ", 0xEuLL);
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v7 + 1) = 10LL;
  v8 = v7;
  v9 = 10LL;
  sub_14000139C((__int64)v10, (__int64 *)&v8);
  v5 = P;
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, (__int64)P, v12);
  else
    sub_1400011A8((_QWORD *)a2, (__int64)P, v12);
  if ( v5 )
    ExFreePool(v5);
  return a2;
}
