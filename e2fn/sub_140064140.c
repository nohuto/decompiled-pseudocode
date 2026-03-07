void *(__fastcall **__fastcall sub_140064140(_QWORD *a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rax
  __int64 (__fastcall *v6)(PVOID); // rax
  PVOID v7; // rbx
  PVOID v8; // r14
  PVOID v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rax
  __int64 (__fastcall *v12)(PVOID); // rax
  PVOID v13; // rbx
  PVOID v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall **v16)(PVOID); // rax
  __int64 (__fastcall *v17)(PVOID); // rax
  PVOID v18; // rbx
  PVOID v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall **v21)(PVOID); // rax
  PVOID v22; // rbx
  __int64 (__fastcall **v24)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-D8h]
  PVOID v26; // [rsp+38h] [rbp-D0h]
  __int64 v27; // [rsp+40h] [rbp-C8h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v29)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h]
  __int64 v33; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v34)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v35; // [rsp+80h] [rbp-88h]
  PVOID v36; // [rsp+88h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v39)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v40; // [rsp+A8h] [rbp-60h]
  PVOID v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v44)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v45; // [rsp+D0h] [rbp-38h]
  PVOID v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  __int64 v48; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v49)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v50; // [rsp+F8h] [rbp-10h]
  PVOID v51; // [rsp+100h] [rbp-8h]
  __int64 v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v54)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int64 (__fastcall **v55)(); // [rsp+120h] [rbp+18h]
  unsigned __int64 v56; // [rsp+160h] [rbp+58h]
  __int64 v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 (__fastcall **v59)(PVOID); // [rsp+178h] [rbp+70h] BYREF
  __int16 v60; // [rsp+180h] [rbp+78h]
  PVOID v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  __int64 v63; // [rsp+198h] [rbp+90h]
  __int64 (__fastcall **v64)(PVOID); // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 (__fastcall **v65)(); // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 v66; // [rsp+1F0h] [rbp+E8h]
  __int64 v67; // [rsp+1F8h] [rbp+F0h]
  __int64 v68; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v69)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int64 (__fastcall **v70)(); // [rsp+210h] [rbp+108h]
  unsigned __int64 v71; // [rsp+250h] [rbp+148h]
  __int64 v72; // [rsp+258h] [rbp+150h]
  __int64 v73; // [rsp+260h] [rbp+158h]

  v29 = &off_1400D41D0;
  LOWORD(v30) = 0;
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  sub_1400011A8(&v29, (__int64)L"st_startCount", 0xDuLL);
  v4 = a1[49];
  sub_1400120E0((__int64)&v64, (__int64)&v29);
  v68 = 10LL;
  v65 = off_1400D4720;
  v29 = &off_1400D41D0;
  v5 = &off_1400D46F8;
  v64 = &off_1400D46F8;
  v66 = 0xA5A5A5A5A5000012uLL;
  v67 = v4;
  if ( P )
  {
    ExFreePool(P);
    v5 = v64;
  }
  v6 = v5[4];
  P = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v6)(&v64, a2);
  v34 = &off_1400D41D0;
  v35 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  sub_1400011A8(&v34, (__int64)qword_1400B6F30, 1uLL);
  v7 = v36;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v36 )
    v9 = v36;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v37);
  v34 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v36 = 0LL;
  v65 = off_1400D4720;
  v37 = 0LL;
  v38 = 0LL;
  v64 = &off_1400D46F8;
  sub_140005CFC(&v64);
  v39 = &off_1400D41D0;
  v40 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  sub_1400011A8(&v39, (__int64)L"st_expirationCount", 0x12uLL);
  v10 = a1[50];
  sub_1400120E0((__int64)&v69, (__int64)&v39);
  v73 = 10LL;
  v70 = off_1400D4720;
  v11 = &off_1400D46F8;
  v69 = &off_1400D46F8;
  v71 = 0xA5A5A5A5A5000012uLL;
  v72 = v10;
  v39 = &off_1400D41D0;
  if ( v41 )
  {
    ExFreePool(v41);
    v11 = v69;
  }
  v12 = v11[4];
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v69, a2);
  v44 = &off_1400D41D0;
  v45 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  sub_1400011A8(&v44, (__int64)qword_1400B6F30, 1uLL);
  v13 = v46;
  v14 = &unk_1400D44E0;
  if ( v46 )
    v14 = v46;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v47);
  v44 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v46 = 0LL;
  v70 = off_1400D4720;
  v47 = 0LL;
  v48 = 0LL;
  v69 = &off_1400D46F8;
  sub_140005CFC(&v69);
  v49 = &off_1400D41D0;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  sub_1400011A8(&v49, (__int64)L"st_stopAsyncCount", 0x11uLL);
  v15 = a1[51];
  sub_1400120E0((__int64)&v54, (__int64)&v49);
  v58 = 10LL;
  v55 = off_1400D4720;
  v16 = &off_1400D46F8;
  v54 = &off_1400D46F8;
  v56 = 0xA5A5A5A5A5000012uLL;
  v57 = v15;
  v49 = &off_1400D41D0;
  if ( v51 )
  {
    ExFreePool(v51);
    v16 = v54;
  }
  v17 = v16[4];
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v17)(&v54, a2);
  v24 = &off_1400D41D0;
  LOWORD(v25) = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_1400011A8(&v24, (__int64)qword_1400B6F30, 1uLL);
  v18 = v26;
  v19 = &unk_1400D44E0;
  if ( v26 )
    v19 = v26;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v27);
  v24 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v26 = 0LL;
  v55 = off_1400D4720;
  v27 = 0LL;
  v28 = 0LL;
  v54 = &off_1400D46F8;
  sub_140005CFC(&v54);
  v24 = &off_1400D41D0;
  LOWORD(v25) = 0;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_1400011A8(&v24, (__int64)L"st_stopStopSynchronouslyCount", 0x1DuLL);
  v20 = a1[52];
  sub_1400120E0((__int64)&v54, (__int64)&v24);
  v58 = 10LL;
  v21 = &off_1400D46F8;
  v54 = &off_1400D46F8;
  v55 = off_1400D4720;
  v56 = 0xA5A5A5A5A5000012uLL;
  v57 = v20;
  if ( v26 )
  {
    ExFreePool(v26);
    v21 = v54;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v21[4])(&v54, a2);
  v59 = &off_1400D41D0;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  sub_1400011A8(&v59, (__int64)qword_1400B6F30, 1uLL);
  v22 = v61;
  if ( v61 )
    v8 = v61;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v62);
  if ( v22 )
    ExFreePool(v22);
  v54 = &off_1400D46F8;
  v55 = off_1400D4720;
  return sub_140005CFC(&v54);
}
