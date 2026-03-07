void *(__fastcall **__fastcall sub_140085E40(_QWORD *a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (__fastcall **v7)(PVOID); // rax
  __int64 (__fastcall *v8)(PVOID); // rax
  PVOID v9; // rdx
  PVOID v10; // r15
  PVOID v11; // rbx
  PVOID v12; // rbx
  PVOID v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall **v15)(PVOID); // rax
  __int64 (__fastcall *v16)(PVOID); // rax
  PVOID v17; // rdx
  PVOID v18; // rbx
  __int64 v19; // rbx
  __int64 (__fastcall **v20)(PVOID); // rax
  __int64 (__fastcall *v21)(PVOID); // rax
  PVOID v22; // rdx
  PVOID v23; // rbx
  __int64 v24; // rbx
  __int64 (__fastcall **v25)(PVOID); // rax
  __int64 (__fastcall *v26)(PVOID); // rax
  PVOID v27; // rbx
  PVOID v28; // rdx
  __int64 v29; // rbx
  __int64 (__fastcall **v30)(PVOID); // rax
  __int64 (__fastcall *v31)(PVOID); // rax
  PVOID v32; // rbx
  PVOID v33; // rdx
  __int64 v34; // rbx
  __int64 (__fastcall **v35)(PVOID); // rax
  PVOID v36; // rbx
  __int64 (__fastcall **v38)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v39; // [rsp+30h] [rbp-D8h]
  PVOID v40; // [rsp+38h] [rbp-D0h]
  __int64 v41; // [rsp+40h] [rbp-C8h]
  __int64 v42; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v43)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-B0h]
  PVOID v45; // [rsp+60h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-A0h]
  __int64 v47; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v48)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v49; // [rsp+80h] [rbp-88h]
  PVOID P; // [rsp+88h] [rbp-80h]
  __int64 v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v53)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v54; // [rsp+A8h] [rbp-60h]
  PVOID v55; // [rsp+B0h] [rbp-58h]
  __int64 v56; // [rsp+B8h] [rbp-50h]
  __int64 v57; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v58)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v59; // [rsp+D0h] [rbp-38h]
  PVOID v60; // [rsp+D8h] [rbp-30h]
  __int64 v61; // [rsp+E0h] [rbp-28h]
  __int64 v62; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v63)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v64; // [rsp+F8h] [rbp-10h]
  PVOID v65; // [rsp+100h] [rbp-8h]
  __int64 v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v68)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v69; // [rsp+120h] [rbp+18h]
  PVOID v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  __int64 v72; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v73)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v74; // [rsp+148h] [rbp+40h]
  PVOID v75; // [rsp+150h] [rbp+48h]
  __int64 v76; // [rsp+158h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v78)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v79; // [rsp+170h] [rbp+68h]
  PVOID v80; // [rsp+178h] [rbp+70h]
  __int64 v81; // [rsp+180h] [rbp+78h]
  __int64 v82; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v83)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v84; // [rsp+198h] [rbp+90h]
  PVOID v85; // [rsp+1A0h] [rbp+98h]
  __int64 v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v88)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v89; // [rsp+1C0h] [rbp+B8h]
  PVOID v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  __int64 v92; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v93)(PVOID); // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 (__fastcall **v94)(); // [rsp+1F0h] [rbp+E8h]
  unsigned __int64 v95; // [rsp+230h] [rbp+128h]
  __int64 v96; // [rsp+238h] [rbp+130h]
  __int64 v97; // [rsp+240h] [rbp+138h]
  __int64 (__fastcall **v98)(PVOID); // [rsp+248h] [rbp+140h] BYREF
  __int64 (__fastcall **v99)(); // [rsp+250h] [rbp+148h]
  unsigned __int64 v100; // [rsp+290h] [rbp+188h]
  __int64 v101; // [rsp+298h] [rbp+190h]
  __int64 v102; // [rsp+2A0h] [rbp+198h]
  __int64 (__fastcall **v103)(PVOID); // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 (__fastcall **v104)(); // [rsp+2B0h] [rbp+1A8h]
  unsigned __int64 v105; // [rsp+2F0h] [rbp+1E8h]
  __int64 v106; // [rsp+2F8h] [rbp+1F0h]
  __int64 v107; // [rsp+300h] [rbp+1F8h]
  __int64 (__fastcall **v108)(PVOID); // [rsp+308h] [rbp+200h] BYREF
  __int64 (__fastcall **v109)(); // [rsp+310h] [rbp+208h]
  unsigned __int64 v110; // [rsp+350h] [rbp+248h]
  __int64 v111; // [rsp+358h] [rbp+250h]
  __int64 v112; // [rsp+360h] [rbp+258h]
  __int64 (__fastcall **v113)(PVOID); // [rsp+368h] [rbp+260h] BYREF
  __int64 (__fastcall **v114)(); // [rsp+370h] [rbp+268h]
  unsigned __int64 v115; // [rsp+3B0h] [rbp+2A8h]
  __int64 v116; // [rsp+3B8h] [rbp+2B0h]
  __int64 v117; // [rsp+3C0h] [rbp+2B8h]

  v3 = a1[64];
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v49 = 0;
    v48 = &off_1400D41D0;
    P = 0LL;
    v51 = 0LL;
    v6 = v5;
    v52 = 0LL;
    sub_1400011A8(&v48, (__int64)L"baseAddress", 0xBuLL);
    sub_1400120E0((__int64)&v98, (__int64)&v48);
    v99 = off_1400D4720;
    v7 = &off_1400D46F8;
    v102 = 10LL;
    v98 = &off_1400D46F8;
    v100 = 0xA5A5A5A5A5000012uLL;
    v101 = v6;
    v48 = &off_1400D41D0;
    if ( P )
    {
      ExFreePool(P);
      v7 = v98;
    }
    v8 = v7[4];
    P = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v102 = 16LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v8)(&v98, a2);
    v53 = &off_1400D41D0;
    v54 = 0;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    sub_1400011A8(&v53, (__int64)qword_1400B6F30, 1uLL);
    v9 = v55;
    v10 = &unk_1400D44E0;
    if ( v55 )
    {
      v11 = v55;
    }
    else
    {
      v9 = &unk_1400D44E0;
      v11 = 0LL;
    }
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v56);
    v53 = &off_1400D41D0;
    if ( v11 )
      ExFreePool(v11);
    v55 = 0LL;
    v99 = off_1400D4720;
    v56 = 0LL;
    v57 = 0LL;
    v98 = &off_1400D46F8;
    sub_140005CFC(&v98);
  }
  else
  {
    LOWORD(v39) = 0;
    v38 = &off_1400D41D0;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    sub_1400011A8(&v38, (__int64)L"Descriptors buffer is null\n", 0x1BuLL);
    v12 = v40;
    v10 = &unk_1400D44E0;
    v13 = &unk_1400D44E0;
    if ( v40 )
      v13 = v40;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v13, 2 * v41);
    v38 = &off_1400D41D0;
    if ( v12 )
      ExFreePool(v12);
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
  }
  v58 = &off_1400D41D0;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  sub_1400011A8(&v58, (__int64)L"st_populateFragmentCounter", 0x1AuLL);
  v14 = a1[74];
  sub_1400120E0((__int64)&v103, (__int64)&v58);
  v107 = 10LL;
  v104 = off_1400D4720;
  v15 = &off_1400D46F8;
  v103 = &off_1400D46F8;
  v105 = 0xA5A5A5A5A5000012uLL;
  v106 = v14;
  v58 = &off_1400D41D0;
  if ( v60 )
  {
    ExFreePool(v60);
    v15 = v103;
  }
  v16 = v15[4];
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v16)(&v103, a2);
  v63 = &off_1400D41D0;
  v64 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  sub_1400011A8(&v63, (__int64)qword_1400B6F30, 1uLL);
  v17 = v65;
  if ( v65 )
  {
    v18 = v65;
  }
  else
  {
    v17 = &unk_1400D44E0;
    v18 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v66);
  v63 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v65 = 0LL;
  v104 = off_1400D4720;
  v66 = 0LL;
  v67 = 0LL;
  v103 = &off_1400D46F8;
  sub_140005CFC(&v103);
  v68 = &off_1400D41D0;
  v69 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  sub_1400011A8(&v68, (__int64)L"st_populateSendPacketsCounter", 0x1DuLL);
  v19 = a1[75];
  sub_1400120E0((__int64)&v108, (__int64)&v68);
  v112 = 10LL;
  v109 = off_1400D4720;
  v20 = &off_1400D46F8;
  v108 = &off_1400D46F8;
  v110 = 0xA5A5A5A5A5000012uLL;
  v111 = v19;
  v68 = &off_1400D41D0;
  if ( v70 )
  {
    ExFreePool(v70);
    v20 = v108;
  }
  v21 = v20[4];
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v21)(&v108, a2);
  v73 = &off_1400D41D0;
  v74 = 0;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  sub_1400011A8(&v73, (__int64)qword_1400B6F30, 1uLL);
  v22 = v75;
  if ( v75 )
  {
    v23 = v75;
  }
  else
  {
    v22 = &unk_1400D44E0;
    v23 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2 * v76);
  v73 = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
  v75 = 0LL;
  v109 = off_1400D4720;
  v76 = 0LL;
  v77 = 0LL;
  v108 = &off_1400D46F8;
  sub_140005CFC(&v108);
  v78 = &off_1400D41D0;
  v79 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  sub_1400011A8(&v78, (__int64)L"st_nonCompletedFramesCounter", 0x1CuLL);
  v24 = a1[76];
  sub_1400120E0((__int64)&v113, (__int64)&v78);
  v117 = 10LL;
  v114 = off_1400D4720;
  v25 = &off_1400D46F8;
  v113 = &off_1400D46F8;
  v115 = 0xA5A5A5A5A5000012uLL;
  v116 = v24;
  v78 = &off_1400D41D0;
  if ( v80 )
  {
    ExFreePool(v80);
    v25 = v113;
  }
  v26 = v25[4];
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v26)(&v113, a2);
  v83 = &off_1400D41D0;
  v84 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  sub_1400011A8(&v83, (__int64)qword_1400B6F30, 1uLL);
  v27 = v85;
  v28 = &unk_1400D44E0;
  if ( v85 )
    v28 = v85;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v28, 2 * v86);
  v83 = &off_1400D41D0;
  if ( v27 )
    ExFreePool(v27);
  v85 = 0LL;
  v114 = off_1400D4720;
  v86 = 0LL;
  v87 = 0LL;
  v113 = &off_1400D46F8;
  sub_140005CFC(&v113);
  v88 = &off_1400D41D0;
  v89 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  sub_1400011A8(&v88, (__int64)L"st_contextDescriptorChangedCounter", 0x22uLL);
  v29 = a1[77];
  sub_1400120E0((__int64)&v93, (__int64)&v88);
  v97 = 10LL;
  v94 = off_1400D4720;
  v30 = &off_1400D46F8;
  v93 = &off_1400D46F8;
  v95 = 0xA5A5A5A5A5000012uLL;
  v96 = v29;
  v88 = &off_1400D41D0;
  if ( v90 )
  {
    ExFreePool(v90);
    v30 = v93;
  }
  v31 = v30[4];
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v31)(&v93, a2);
  v43 = &off_1400D41D0;
  LOWORD(v44) = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  sub_1400011A8(&v43, (__int64)qword_1400B6F30, 1uLL);
  v32 = v45;
  v33 = &unk_1400D44E0;
  if ( v45 )
    v33 = v45;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v33, 2 * v46);
  v43 = &off_1400D41D0;
  if ( v32 )
    ExFreePool(v32);
  v45 = 0LL;
  v94 = off_1400D4720;
  v46 = 0LL;
  v47 = 0LL;
  v93 = &off_1400D46F8;
  sub_140005CFC(&v93);
  v43 = &off_1400D41D0;
  LOWORD(v44) = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  sub_1400011A8(&v43, (__int64)L"st_getLastTransmittedCalledWhileQueueEmptyCounter", 0x31uLL);
  v34 = a1[78];
  sub_1400120E0((__int64)&v93, (__int64)&v43);
  v97 = 10LL;
  v94 = off_1400D4720;
  v35 = &off_1400D46F8;
  v93 = &off_1400D46F8;
  v95 = 0xA5A5A5A5A5000012uLL;
  v96 = v34;
  if ( v45 )
  {
    ExFreePool(v45);
    v35 = v93;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v35[4])(&v93, a2);
  v38 = &off_1400D41D0;
  LOWORD(v39) = 0;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  sub_1400011A8(&v38, (__int64)qword_1400B6F30, 1uLL);
  v36 = v40;
  if ( v40 )
    v10 = v40;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v10, 2 * v41);
  if ( v36 )
    ExFreePool(v36);
  v93 = &off_1400D46F8;
  v94 = off_1400D4720;
  sub_140005CFC(&v93);
  return sub_14007B620((__int64)a1, a2);
}
