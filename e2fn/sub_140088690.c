__int64 __fastcall sub_140088690(_BYTE *a1, __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int16 v19; // [rsp+20h] [rbp-69h] BYREF
  char v20; // [rsp+22h] [rbp-67h]
  _QWORD v21[2]; // [rsp+30h] [rbp-59h] BYREF
  PVOID P; // [rsp+40h] [rbp-49h]
  __int64 v23; // [rsp+48h] [rbp-41h]
  __int64 v24; // [rsp+50h] [rbp-39h]
  __int64 (__fastcall **v25)(PVOID); // [rsp+58h] [rbp-31h] BYREF
  __int16 v26; // [rsp+60h] [rbp-29h]
  PVOID v27; // [rsp+68h] [rbp-21h]
  unsigned __int64 v28; // [rsp+70h] [rbp-19h]
  __int64 v29; // [rsp+78h] [rbp-11h]
  _BYTE v30[16]; // [rsp+80h] [rbp-9h] BYREF
  PVOID v31; // [rsp+90h] [rbp+7h]
  __int16 v32; // [rsp+F0h] [rbp+67h] BYREF
  char v33; // [rsp+F2h] [rbp+69h]
  __int16 v34; // [rsp+F8h] [rbp+6Fh]
  __int16 v35; // [rsp+100h] [rbp+77h] BYREF
  char v36; // [rsp+102h] [rbp+79h]

  v25 = &off_1400D41D0;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  sub_1400011A8(&v25, (__int64)qword_1400B7580, 1uLL);
  *(_QWORD *)a2 = &off_1400D41D0;
  v4 = a1 + 9;
  *(_WORD *)(a2 + 8) = 0;
  v5 = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  HIBYTE(v32) = 16;
  HIBYTE(v34) = 16;
  do
  {
    LOBYTE(v32) = *(v4 - 1);
    v35 = v32;
    v36 = 10;
    sub_140022394((__int64)v30, (unsigned __int8 *)&v35);
    v6 = sub_1400A8CF8(v21, v30, 2LL);
    v7 = *(_QWORD *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 16);
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v8, v7);
    else
      sub_1400011A8((_QWORD *)a2, v8, v7);
    v21[0] = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    if ( v31 )
      ExFreePool(v31);
    LOBYTE(v34) = *v4;
    v19 = v34;
    v20 = 10;
    sub_140022394((__int64)v30, (unsigned __int8 *)&v19);
    v9 = sub_1400A8CF8(v21, v30, 2LL);
    v10 = *(_QWORD *)(v9 + 24);
    v11 = *(_QWORD *)(v9 + 16);
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, v11, v10);
    else
      sub_1400011A8((_QWORD *)a2, v11, v10);
    v21[0] = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
    P = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    if ( v31 )
      ExFreePool(v31);
    if ( *(_QWORD *)(a2 + 16) )
      sub_140001480((_QWORD *)a2, (__int64)v27, v28);
    else
      sub_1400011A8((_QWORD *)a2, (__int64)v27, v28);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  LOBYTE(v32) = a1[22];
  HIBYTE(v32) = 16;
  v33 = 10;
  sub_140022394((__int64)v30, (unsigned __int8 *)&v32);
  v12 = sub_1400A8CF8(v21, v30, 2LL);
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(v12 + 16);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v14, v13);
  else
    sub_1400011A8((_QWORD *)a2, v14, v13);
  v21[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( v31 )
    ExFreePool(v31);
  LOBYTE(v32) = a1[23];
  HIBYTE(v32) = 16;
  v33 = 10;
  sub_140022394((__int64)v30, (unsigned __int8 *)&v32);
  v15 = sub_1400A8CF8(v21, v30, 2LL);
  v16 = *(_QWORD *)(v15 + 24);
  v17 = *(_QWORD *)(v15 + 16);
  if ( *(_QWORD *)(a2 + 16) )
    sub_140001480((_QWORD *)a2, v17, v16);
  else
    sub_1400011A8((_QWORD *)a2, v17, v16);
  v21[0] = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( v31 )
    ExFreePool(v31);
  if ( v27 )
    ExFreePool(v27);
  return a2;
}
