void __fastcall sub_14004E750(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 (__fastcall **v5)(PVOID); // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  PVOID v7; // rbx
  PVOID v8; // rsi
  PVOID v9; // rdx
  __int64 v10; // rbx
  __int64 (__fastcall **v11)(PVOID); // rdx
  __int64 (__fastcall *v12)(PVOID); // rax
  PVOID v13; // rbx
  PVOID v14; // rdx
  __int64 v15; // rax
  PVOID v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 (__fastcall **v19)(PVOID); // rax
  __int64 (__fastcall *v20)(PVOID); // rax
  PVOID v21; // rdx
  PVOID v22; // rbx
  __int64 v23; // rbx
  __int64 (__fastcall **v24)(PVOID); // rdx
  PVOID v25; // rbx
  __int64 (__fastcall **v26)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D8h]
  PVOID v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C8h]
  __int64 v30; // [rsp+48h] [rbp-C0h]
  __int128 v31; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v35)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v36; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v40)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v41; // [rsp+A8h] [rbp-60h]
  PVOID v42; // [rsp+B0h] [rbp-58h]
  __int64 v43; // [rsp+B8h] [rbp-50h]
  __int64 v44; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v45)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v46; // [rsp+D0h] [rbp-38h]
  PVOID v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  __int64 v49; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v50)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v51; // [rsp+F8h] [rbp-10h]
  PVOID v52; // [rsp+100h] [rbp-8h]
  __int64 v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v55)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int64 (__fastcall **v56)(); // [rsp+120h] [rbp+18h]
  unsigned __int64 v57; // [rsp+160h] [rbp+58h]
  __int64 v58; // [rsp+168h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+68h]
  __int64 (__fastcall **v60)(PVOID); // [rsp+178h] [rbp+70h] BYREF
  __int16 v61; // [rsp+180h] [rbp+78h]
  PVOID v62; // [rsp+188h] [rbp+80h]
  __int64 v63; // [rsp+190h] [rbp+88h]
  __int64 v64; // [rsp+198h] [rbp+90h]
  __int64 (__fastcall **v65[2])(PVOID); // [rsp+1A0h] [rbp+98h] BYREF
  PVOID v66; // [rsp+1B0h] [rbp+A8h]
  __int64 v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  __int64 (__fastcall **v69)(PVOID); // [rsp+1C8h] [rbp+C0h] BYREF
  PVOID v70; // [rsp+1D8h] [rbp+D0h]
  __int64 v71; // [rsp+1E0h] [rbp+D8h]
  __int64 v72; // [rsp+1E8h] [rbp+E0h]
  __int128 v73; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v74; // [rsp+208h] [rbp+100h]
  __int64 (__fastcall **v75)(PVOID); // [rsp+218h] [rbp+110h] BYREF
  __int64 (__fastcall **v76)(); // [rsp+220h] [rbp+118h]
  unsigned __int64 v77; // [rsp+260h] [rbp+158h]
  BOOL v78; // [rsp+268h] [rbp+160h]
  __int64 (__fastcall **v79)(PVOID); // [rsp+278h] [rbp+170h] BYREF
  __int64 (__fastcall **v80)(); // [rsp+280h] [rbp+178h]
  unsigned __int64 v81; // [rsp+2C0h] [rbp+1B8h]
  __int64 v82; // [rsp+2C8h] [rbp+1C0h]
  __int64 v83; // [rsp+2D0h] [rbp+1C8h]
  _BYTE v84[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  PVOID v85; // [rsp+2E8h] [rbp+1E0h]
  __int64 v86; // [rsp+2F0h] [rbp+1E8h]

  v35 = &off_1400D41D0;
  v36 = 0;
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  sub_1400011A8(&v35, (__int64)L"m_autoReset", 0xBuLL);
  v4 = *(_BYTE *)(a1 + 420);
  sub_1400120E0((__int64)&v75, (__int64)&v35);
  v76 = off_1400D59C0;
  v35 = &off_1400D41D0;
  v5 = &off_1400D5998;
  v75 = &off_1400D5998;
  v77 = 0xA5A5A5A5A5000013uLL;
  v78 = v4 != 0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v75;
  }
  v6 = (void (__fastcall *)(__int64, __int64))v5[4];
  P = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( v6 == sub_140007740 )
    sub_140007740((__int64)&v75, a2);
  else
    v6((__int64)&v75, a2);
  v40 = &off_1400D41D0;
  v41 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  sub_1400011A8(&v40, (__int64)qword_1400B6F30, 1uLL);
  v7 = v42;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v42 )
    v9 = v42;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v43);
  v40 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v42 = 0LL;
  v76 = off_1400D59C0;
  v43 = 0LL;
  v44 = 0LL;
  v75 = &off_1400D5998;
  sub_140005CFC(&v75);
  v45 = &off_1400D41D0;
  v46 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  sub_1400011A8(&v45, (__int64)L"m_interruptMask", 0xFuLL);
  v10 = *(unsigned int *)(a1 + 424);
  sub_1400120E0((__int64)&v79, (__int64)&v45);
  v80 = off_1400D5638;
  v83 = 10LL;
  v11 = &off_1400D5610;
  v79 = &off_1400D5610;
  v81 = 0xA5A5A5A5A5000012uLL;
  v82 = v10;
  v45 = &off_1400D41D0;
  if ( v47 )
  {
    ExFreePool(v47);
    v11 = v79;
  }
  v12 = v11[4];
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v83 = 16LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v79, a2);
  v50 = &off_1400D41D0;
  v51 = 0;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  sub_1400011A8(&v50, (__int64)qword_1400B6F30, 1uLL);
  v13 = v52;
  v14 = &unk_1400D44E0;
  if ( v52 )
    v14 = v52;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v53);
  v50 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v52 = 0LL;
  v80 = off_1400D5638;
  v53 = 0LL;
  v54 = 0LL;
  v79 = &off_1400D5610;
  sub_140005CFC(&v79);
  *(_QWORD *)&v31 = *(_QWORD *)(a1 + 488);
  *((_QWORD *)&v31 + 1) = 10LL;
  v32 = (PVOID)10;
  v73 = v31;
  v74 = 10LL;
  sub_14000139C((__int64)v65, (__int64 *)&v73);
  v15 = sub_14004BA74((__int64)&v69, (__int64)L"Num Callbacks = ", v65);
  sub_14002D2AC((__int64)v84, v15, (__int64)qword_1400B6F30);
  v69 = &off_1400D41D0;
  if ( v70 )
    ExFreePool(v70);
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v65[0] = &off_1400D41D0;
  if ( v66 )
    ExFreePool(v66);
  v16 = &unk_1400D44E0;
  v66 = 0LL;
  if ( v85 )
    v16 = v85;
  v67 = 0LL;
  v17 = *(_QWORD *)a2;
  v68 = 0LL;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(v17 + 8))(a2, v16, 2 * v86);
  *(_QWORD *)&v31 = &off_1400D41D0;
  WORD4(v31) = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  sub_1400011A8(&v31, (__int64)L"m_dpcCounter", 0xCuLL);
  v18 = *(_QWORD *)(a1 + 496);
  sub_1400120E0((__int64)&v55, (__int64)&v31);
  v59 = 10LL;
  v56 = off_1400D4720;
  v19 = &off_1400D46F8;
  v55 = &off_1400D46F8;
  v57 = 0xA5A5A5A5A5000012uLL;
  v58 = v18;
  *(_QWORD *)&v31 = &off_1400D41D0;
  if ( v32 )
  {
    ExFreePool(v32);
    v19 = v55;
  }
  v20 = v19[4];
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v20)(&v55, a2);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)qword_1400B6F30, 1uLL);
  v21 = v28;
  if ( v28 )
  {
    v22 = v28;
  }
  else
  {
    v21 = &unk_1400D44E0;
    v22 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2 * v29);
  v26 = &off_1400D41D0;
  if ( v22 )
    ExFreePool(v22);
  v28 = 0LL;
  v55 = &off_1400D46F8;
  v29 = 0LL;
  v56 = off_1400D4720;
  v30 = 0LL;
  sub_140005CFC(&v55);
  v26 = &off_1400D41D0;
  LOWORD(v27) = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  sub_1400011A8(&v26, (__int64)L"m_throttlingRateUsec", 0x14uLL);
  v23 = *(unsigned int *)(a1 + 508);
  sub_1400120E0((__int64)&v55, (__int64)&v26);
  v56 = off_1400D5638;
  v24 = &off_1400D5610;
  v55 = &off_1400D5610;
  v57 = 0xA5A5A5A5A5000012uLL;
  v58 = v23;
  v59 = 10LL;
  if ( v28 )
  {
    ExFreePool(v28);
    v24 = v55;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v24[4])(&v55, a2);
  v60 = &off_1400D41D0;
  v61 = 0;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  sub_1400011A8(&v60, (__int64)qword_1400B6F30, 1uLL);
  v25 = v62;
  if ( v62 )
    v8 = v62;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v63);
  if ( v25 )
    ExFreePool(v25);
  v55 = &off_1400D5610;
  v56 = off_1400D5638;
  sub_140005CFC(&v55);
  if ( v85 )
    ExFreePool(v85);
}
