_QWORD *__fastcall sub_1400017B4(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // r15
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  PVOID v16; // rdi
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  PVOID v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // rdx
  PVOID v22; // rdi
  unsigned __int64 v23; // r8
  __int64 v24; // rdx
  PVOID v25; // rdi
  __int128 v27; // [rsp+28h] [rbp-29h]
  __int128 v28; // [rsp+28h] [rbp-29h]
  __int128 v29; // [rsp+28h] [rbp-29h]
  __int128 v30; // [rsp+28h] [rbp-29h]
  __int128 v31; // [rsp+28h] [rbp-29h]
  __int128 v32; // [rsp+48h] [rbp-9h] BYREF
  __int64 v33; // [rsp+58h] [rbp+7h]
  _BYTE v34[16]; // [rsp+68h] [rbp+17h] BYREF
  PVOID P; // [rsp+78h] [rbp+27h]
  unsigned __int64 v36; // [rsp+80h] [rbp+2Fh]

  v6 = a2 / 0x3E8;
  v7 = (a2 / 0x3E8 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v8 = (v7 + ((v6 - v7) >> 1)) >> 9;
  v9 = v8 / 0x3C;
  *(_QWORD *)&v27 = v8 / 0x3C / 0x3C;
  v10 = a2 - 1000 * v6;
  v11 = v6 - 1000 * v8;
  v12 = v8 % 0x3C;
  v13 = v9 - 60 * v27;
  *((_QWORD *)&v27 + 1) = 10LL;
  v32 = v27;
  v33 = 10LL;
  sub_14000139C((__int64)a1, (__int64 *)&v32);
  v14 = *(_QWORD *)(a3 + 24);
  v15 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v15, v14);
  else
    sub_1400011A8(a1, v15, v14);
  *(_QWORD *)&v28 = v13;
  *((_QWORD *)&v28 + 1) = 10LL;
  v32 = v28;
  v33 = 10LL;
  sub_14000139C((__int64)v34, (__int64 *)&v32);
  v16 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v36);
  else
    sub_1400011A8(a1, (__int64)P, v36);
  if ( v16 )
    ExFreePool(v16);
  v17 = *(_QWORD *)(a3 + 24);
  v18 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v18, v17);
  else
    sub_1400011A8(a1, v18, v17);
  *(_QWORD *)&v29 = v12;
  *((_QWORD *)&v29 + 1) = 10LL;
  v32 = v29;
  v33 = 10LL;
  sub_14000139C((__int64)v34, (__int64 *)&v32);
  v19 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v36);
  else
    sub_1400011A8(a1, (__int64)P, v36);
  if ( v19 )
    ExFreePool(v19);
  v20 = *(_QWORD *)(a3 + 24);
  v21 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v21, v20);
  else
    sub_1400011A8(a1, v21, v20);
  *(_QWORD *)&v30 = v11;
  *((_QWORD *)&v30 + 1) = 10LL;
  v32 = v30;
  v33 = 10LL;
  sub_14000139C((__int64)v34, (__int64 *)&v32);
  v22 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v36);
  else
    sub_1400011A8(a1, (__int64)P, v36);
  if ( v22 )
    ExFreePool(v22);
  v23 = *(_QWORD *)(a3 + 24);
  v24 = *(_QWORD *)(a3 + 16);
  if ( a1[2] )
    sub_140001480(a1, v24, v23);
  else
    sub_1400011A8(a1, v24, v23);
  *(_QWORD *)&v31 = v10;
  *((_QWORD *)&v31 + 1) = 10LL;
  v32 = v31;
  v33 = 10LL;
  sub_14000139C((__int64)v34, (__int64 *)&v32);
  v25 = P;
  if ( a1[2] )
    sub_140001480(a1, (__int64)P, v36);
  else
    sub_1400011A8(a1, (__int64)P, v36);
  if ( v25 )
    ExFreePool(v25);
  return a1;
}
