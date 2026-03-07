void __fastcall sub_1400A17A4(__int64 a1, __int64 a2)
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
  __int64 (__fastcall **v13)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h]
  PVOID v15; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v16; // [rsp+40h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v18)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v23)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v24; // [rsp+80h] [rbp-88h]
  PVOID v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  __int64 v27; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v28)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v29; // [rsp+A8h] [rbp-60h]
  PVOID v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v33)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v34; // [rsp+D0h] [rbp-38h]
  PVOID v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v38)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v39; // [rsp+F8h] [rbp-10h]
  PVOID v40; // [rsp+100h] [rbp-8h]
  __int64 v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v43)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v44; // [rsp+120h] [rbp+18h]
  PVOID v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  __int64 v47; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v48)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v49; // [rsp+148h] [rbp+40h]
  PVOID v50; // [rsp+150h] [rbp+48h]
  __int64 v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v53)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v54; // [rsp+170h] [rbp+68h]
  __int128 v55; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v57)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v58; // [rsp+198h] [rbp+90h]
  PVOID v59; // [rsp+1A0h] [rbp+98h]
  __int64 v60; // [rsp+1A8h] [rbp+A0h]
  __int64 v61; // [rsp+1B0h] [rbp+A8h]
  _QWORD v62[10]; // [rsp+1B8h] [rbp+B0h] BYREF

  v57 = &off_1400D41D0;
  v58 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  sub_1400011A8(&v57, (__int64)L"]\n", 2uLL);
  v13 = &off_1400D41D0;
  LOWORD(v14) = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  sub_1400011A8(&v13, (__int64)qword_1400B7400, 1uLL);
  v48 = &off_1400D41D0;
  v49 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  sub_1400011A8(&v48, (__int64)L"] [Description: ", 0x10uLL);
  v43 = &off_1400D41D0;
  v44 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  sub_1400011A8(&v43, (__int64)L"] [Serialized As: ", 0x12uLL);
  v38 = &off_1400D41D0;
  v39 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)L"] [Importance: ", 0xFuLL);
  v33 = &off_1400D41D0;
  v34 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  sub_1400011A8(&v33, (__int64)qword_1400CE8A0, 1uLL);
  v28 = &off_1400D41D0;
  v29 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  sub_1400011A8(&v28, (__int64)L"[Object]", 8uLL);
  v23 = &off_1400D41D0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  sub_1400011A8(&v23, (__int64)L"[Info]", 6uLL);
  v18 = &off_1400D41D0;
  LOWORD(v19) = 0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"[SubInfo]", 9uLL);
  v4 = v15;
  v53 = &off_1400D41D0;
  v54 = 0;
  v56 = 0LL;
  v55 = 0LL;
  if ( !v15 || (v5 = v16) == 0 )
  {
    v7 = (_WORD *)v55;
    goto LABEL_10;
  }
  v6 = sub_140001070(&v53, v16, 0LL);
  v7 = (_WORD *)v55;
  if ( v6 )
  {
LABEL_10:
    v8 = *((_QWORD *)&v55 + 1);
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
  v62[0] = a2;
  v11 = *(_QWORD *)(a1 + 16);
  v62[1] = &v28;
  v62[2] = &v48;
  v62[3] = &v43;
  v62[4] = &v33;
  v62[5] = &v38;
  v62[6] = &v57;
  v62[7] = &v18;
  v62[8] = &v23;
  v12 = *(_QWORD *)(v11 + 328);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v17 = v56;
  v13 = &off_1400D41D0;
  LOWORD(v14) = 0;
  v15 = v7;
  v16 = v8;
  sub_14009F3E8(v11, (__int64)v62, &v13);
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
  v38 = &off_1400D41D0;
  if ( v40 )
    ExFreePool(v40);
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = &off_1400D41D0;
  if ( v45 )
    ExFreePool(v45);
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = &off_1400D41D0;
  if ( v50 )
    ExFreePool(v50);
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( v4 )
    ExFreePool(v4);
  v57 = &off_1400D41D0;
  if ( v59 )
    ExFreePool(v59);
}
