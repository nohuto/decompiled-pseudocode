void *(__fastcall **__fastcall sub_14006CE40(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v4; // rbx
  __int64 (__fastcall **v5)(PVOID); // rdx
  __int64 (__fastcall *v6)(PVOID); // rax
  PVOID v7; // rbx
  PVOID v8; // r14
  PVOID v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rdx
  __int64 (__fastcall *v12)(PVOID); // rax
  PVOID v13; // rbx
  PVOID v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall **v16)(PVOID); // rax
  __int64 (__fastcall *v17)(PVOID); // rax
  PVOID v18; // rdx
  PVOID v19; // rbx
  __int64 v20; // rbx
  __int64 (__fastcall **v21)(PVOID); // rax
  PVOID v22; // rbx
  PVOID v23; // rdx
  PVOID v24; // rbx
  __int64 (__fastcall **v26)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D8h]
  PVOID v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v31)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h]
  PVOID v33; // [rsp+60h] [rbp-A8h]
  __int64 v34; // [rsp+68h] [rbp-A0h]
  __int64 v35; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v36)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v37; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int64 v40; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v41)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v42; // [rsp+A8h] [rbp-60h]
  PVOID v43; // [rsp+B0h] [rbp-58h]
  __int64 v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v46)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v47; // [rsp+D0h] [rbp-38h]
  PVOID v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v51)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v52; // [rsp+F8h] [rbp-10h]
  PVOID v53; // [rsp+100h] [rbp-8h]
  __int64 v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v56)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v57; // [rsp+120h] [rbp+18h]
  PVOID v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  __int64 v60; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v61)(PVOID); // [rsp+148h] [rbp+40h] BYREF
  __int64 (__fastcall **v62)(); // [rsp+150h] [rbp+48h]
  unsigned __int64 v63; // [rsp+190h] [rbp+88h]
  __int64 v64; // [rsp+198h] [rbp+90h]
  __int64 v65; // [rsp+1A0h] [rbp+98h]
  __int64 (__fastcall **v66)(PVOID); // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 (__fastcall **v67)(); // [rsp+1B0h] [rbp+A8h]
  unsigned __int64 v68; // [rsp+1F0h] [rbp+E8h]
  __int64 v69; // [rsp+1F8h] [rbp+F0h]
  __int64 v70; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v71)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+210h] [rbp+108h]
  unsigned __int64 v73; // [rsp+250h] [rbp+148h]
  __int64 v74; // [rsp+258h] [rbp+150h]
  __int64 v75; // [rsp+260h] [rbp+158h]
  _QWORD v76[11]; // [rsp+268h] [rbp+160h] BYREF
  PVOID v77; // [rsp+2C0h] [rbp+1B8h]
  __int128 v78; // [rsp+2C8h] [rbp+1C0h]

  v36 = &off_1400D41D0;
  v37 = 0;
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  sub_1400011A8(&v36, (__int64)L"m_resourceId", 0xCuLL);
  v4 = *(unsigned int *)(a1 + 440);
  sub_1400120E0((__int64)&v66, (__int64)&v36);
  v67 = off_1400D5638;
  v70 = 10LL;
  v5 = &off_1400D5610;
  v66 = &off_1400D5610;
  v68 = 0xA5A5A5A5A5000012uLL;
  v69 = v4;
  v36 = &off_1400D41D0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v66;
  }
  v6 = v5[4];
  P = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v6)(&v66, a2);
  v41 = &off_1400D41D0;
  v42 = 0;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  sub_1400011A8(&v41, (__int64)qword_1400B6F30, 1uLL);
  v7 = v43;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v43 )
    v9 = v43;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v44);
  v41 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v43 = 0LL;
  v67 = off_1400D5638;
  v44 = 0LL;
  v45 = 0LL;
  v66 = &off_1400D5610;
  sub_140005CFC(&v66);
  v46 = &off_1400D41D0;
  v47 = 0;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  sub_1400011A8(&v46, (__int64)L"m_messageId", 0xBuLL);
  v10 = *(unsigned int *)(a1 + 444);
  sub_1400120E0((__int64)&v71, (__int64)&v46);
  v72 = off_1400D5638;
  v11 = &off_1400D5610;
  v71 = &off_1400D5610;
  v73 = 0xA5A5A5A5A5000012uLL;
  v74 = v10;
  v75 = 10LL;
  v46 = &off_1400D41D0;
  if ( v48 )
  {
    ExFreePool(v48);
    v11 = v71;
  }
  v12 = v11[4];
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v71, a2);
  v51 = &off_1400D41D0;
  v52 = 0;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  sub_1400011A8(&v51, (__int64)qword_1400B6F30, 1uLL);
  v13 = v53;
  v14 = &unk_1400D44E0;
  if ( v53 )
    v14 = v53;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v54);
  v51 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v53 = 0LL;
  v72 = off_1400D5638;
  v54 = 0LL;
  v55 = 0LL;
  v71 = &off_1400D5610;
  sub_140005CFC(&v71);
  v56 = &off_1400D41D0;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  sub_1400011A8(&v56, (__int64)L"m_isrCounter", 0xCuLL);
  v15 = *(_QWORD *)(a1 + 480);
  sub_1400120E0((__int64)&v61, (__int64)&v56);
  v65 = 10LL;
  v62 = off_1400D4720;
  v56 = &off_1400D41D0;
  v16 = &off_1400D46F8;
  v61 = &off_1400D46F8;
  v63 = 0xA5A5A5A5A5000012uLL;
  v64 = v15;
  if ( v58 )
  {
    ExFreePool(v58);
    v16 = v61;
  }
  v17 = v16[4];
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v17)(&v61, a2);
  v31 = &off_1400D41D0;
  LOWORD(v32) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  sub_1400011A8(&v31, (__int64)qword_1400B6F30, 1uLL);
  v18 = v33;
  if ( v33 )
  {
    v19 = v33;
  }
  else
  {
    v18 = &unk_1400D44E0;
    v19 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v18, 2 * v34);
  v31 = &off_1400D41D0;
  if ( v19 )
    ExFreePool(v19);
  v33 = 0LL;
  v62 = off_1400D4720;
  v34 = 0LL;
  v35 = 0LL;
  v61 = &off_1400D46F8;
  sub_140005CFC(&v61);
  v31 = &off_1400D41D0;
  LOWORD(v32) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  sub_1400011A8(&v31, (__int64)L"m_dpcCounter", 0xCuLL);
  v20 = *(_QWORD *)(a1 + 472);
  sub_1400120E0((__int64)&v61, (__int64)&v31);
  v65 = 10LL;
  v62 = off_1400D4720;
  v21 = &off_1400D46F8;
  v61 = &off_1400D46F8;
  v63 = 0xA5A5A5A5A5000012uLL;
  v64 = v20;
  if ( v33 )
  {
    ExFreePool(v33);
    v21 = v61;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v21[4])(&v61, a2);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)qword_1400B6F30, 1uLL);
  v22 = v28;
  v23 = &unk_1400D44E0;
  if ( v28 )
    v23 = v28;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v23, 2 * v29);
  if ( v22 )
    ExFreePool(v22);
  v61 = &off_1400D46F8;
  v62 = off_1400D4720;
  sub_140005CFC(&v61);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)L"m_owner", 7uLL);
  sub_14005C154((__int64)v76, (__int64)&v26, a1 + 400);
  if ( v28 )
    ExFreePool(v28);
  (*(void (__fastcall **)(_QWORD *, __int64))(v76[0] + 32LL))(v76, a2);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)qword_1400B6F30, 1uLL);
  v24 = v28;
  if ( v28 )
    v8 = v28;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v29);
  if ( v24 )
    ExFreePool(v24);
  v76[0] = &off_1400D7CD0;
  v76[1] = off_1400D7CF8;
  v76[9] = &off_1400D41D0;
  if ( v77 )
    ExFreePool(v77);
  v77 = 0LL;
  v78 = 0LL;
  return sub_140005CFC(v76);
}
