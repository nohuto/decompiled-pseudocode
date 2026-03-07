_QWORD *__fastcall sub_140001A98(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  PVOID v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  PVOID v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  PVOID v17; // rdi
  __int128 v19; // [rsp+28h] [rbp-29h]
  __int128 v20; // [rsp+28h] [rbp-29h]
  __int128 v21; // [rsp+28h] [rbp-29h]
  __int128 v22; // [rsp+28h] [rbp-29h]
  __int128 v23; // [rsp+48h] [rbp-9h] BYREF
  __int64 v24; // [rsp+58h] [rbp+7h]
  _BYTE v25[16]; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+78h] [rbp+27h]
  unsigned __int64 v27; // [rsp+80h] [rbp+2Fh]

  *((_QWORD *)&v19 + 1) = 10LL;
  v24 = 10LL;
  v5 = a2 / 0x3E8 / 0x3C;
  *(_QWORD *)&v19 = v5 / 0x3C;
  v6 = a2 % 0x3E8;
  v23 = v19;
  v7 = a2 / 0x3E8 % 0x3C;
  v8 = v5 % 0x3C;
  sub_14000139C((__int64)a1, (__int64 *)&v23);
  v9 = *(_QWORD *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v10, v9);
  else
    sub_1400011A8(a1, v10, v9);
  *(_QWORD *)&v20 = v8;
  *((_QWORD *)&v20 + 1) = 10LL;
  v23 = v20;
  v24 = 10LL;
  sub_14000139C((__int64)v25, (__int64 *)&v23);
  v11 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v27);
  else
    sub_1400011A8(a1, (__int64)P, v27);
  if ( v11 )
    ExFreePool(v11);
  v12 = *(_QWORD *)(a3 + 24);
  v13 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v13, v12);
  else
    sub_1400011A8(a1, v13, v12);
  *(_QWORD *)&v21 = v7;
  *((_QWORD *)&v21 + 1) = 10LL;
  v23 = v21;
  v24 = 10LL;
  sub_14000139C((__int64)v25, (__int64 *)&v23);
  v14 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v27);
  else
    sub_1400011A8(a1, (__int64)P, v27);
  if ( v14 )
    ExFreePool(v14);
  v15 = *(_QWORD *)(a3 + 24);
  v16 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v16, v15);
  else
    sub_1400011A8(a1, v16, v15);
  *(_QWORD *)&v22 = v6;
  *((_QWORD *)&v22 + 1) = 10LL;
  v23 = v22;
  v24 = 10LL;
  sub_14000139C((__int64)v25, (__int64 *)&v23);
  v17 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v27);
  else
    sub_1400011A8(a1, (__int64)P, v27);
  if ( v17 )
    ExFreePool(v17);
  return a1;
}
