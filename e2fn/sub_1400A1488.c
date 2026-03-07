void __fastcall sub_1400A1488(__int64 a1, __int64 a2)
{
  _WORD *v4; // r15
  unsigned __int64 v5; // rbx
  int v6; // eax
  _WORD *v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 (__fastcall **v13)(PVOID); // [rsp+20h] [rbp-E0h] BYREF
  __int16 v14; // [rsp+28h] [rbp-D8h]
  PVOID v15; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int64 (__fastcall **v18)(PVOID); // [rsp+48h] [rbp-B8h] BYREF
  __int16 v19; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall **v23)(PVOID); // [rsp+70h] [rbp-90h] BYREF
  __int16 v24; // [rsp+78h] [rbp-88h]
  PVOID v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+98h] [rbp-68h] BYREF
  __int16 v29; // [rsp+A0h] [rbp-60h]
  PVOID v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+C0h] [rbp-40h] BYREF
  __int16 v34; // [rsp+C8h] [rbp-38h]
  PVOID v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+E8h] [rbp-18h] BYREF
  __int16 v39; // [rsp+F0h] [rbp-10h]
  __int128 v40; // [rsp+F8h] [rbp-8h]
  __int64 v41; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall **v42)(PVOID); // [rsp+110h] [rbp+10h] BYREF
  __int16 v43; // [rsp+118h] [rbp+18h]
  PVOID v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  __int64 v46; // [rsp+130h] [rbp+30h]
  _QWORD v47[7]; // [rsp+138h] [rbp+38h] BYREF

  v42 = &off_1400D41D0;
  v43 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  sub_1400011A8(&v42, (__int64)L"]\n", 2uLL);
  v13 = &off_1400D41D0;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)qword_1400B7400, 1uLL);
  v33 = &off_1400D41D0;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  sub_1400011A8(&v33, (__int64)L"] [Description: ", 0x10uLL);
  v28 = &off_1400D41D0;
  v29 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v28, (__int64)L"] [Serialized As: ", 0x12uLL);
  v23 = &off_1400D41D0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)L"] [Importance: ", 0xFuLL);
  v18 = &off_1400D41D0;
  v19 = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)qword_1400CE8A0, 1uLL);
  v4 = v15;
  v38 = &off_1400D41D0;
  v39 = 0;
  v41 = 0LL;
  v40 = 0LL;
  if ( !v15 || (v5 = v16) == 0 )
  {
    v7 = (_WORD *)v40;
    goto LABEL_10;
  }
  v6 = sub_140001070(&v38, v16, 0LL);
  v7 = (_WORD *)v40;
  if ( v6 )
  {
LABEL_10:
    v8 = *((_QWORD *)&v40 + 1);
    goto LABEL_11;
  }
  v8 = 0LL;
  if ( v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = v4[v8];
      if ( !v10 )
        break;
      v7[v8] = v10;
      v8 = v9 + 1;
      v9 = v8;
    }
    while ( v8 < v5 );
  }
  v7[v5] = 0;
LABEL_11:
  v47[0] = a2;
  v11 = *(_QWORD *)(a1 + 16);
  v47[1] = &v33;
  v47[2] = &v28;
  v47[3] = &v18;
  v47[4] = &v23;
  v47[5] = &v42;
  v12 = *(_QWORD *)(v11 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v17 = v41;
  v13 = &off_1400D41D0;
  v14 = 0;
  v15 = v7;
  v16 = v8;
  sub_14009F140(v11, (__int64)v47, &v13);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
  v18 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = &off_1400D41D0;
  if ( v25 )
    ExFreePool(v25);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = &off_1400D41D0;
  if ( v30 )
    ExFreePool(v30);
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = &off_1400D41D0;
  if ( v35 )
    ExFreePool(v35);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( v4 )
    ExFreePool(v4);
  v42 = &off_1400D41D0;
  if ( v44 )
    ExFreePool(v44);
}
