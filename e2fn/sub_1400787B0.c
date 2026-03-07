__int64 __fastcall sub_1400787B0(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 (__fastcall **v5)(PVOID); // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  PVOID v7; // rbx
  PVOID v8; // r14
  PVOID v9; // rdx
  char v10; // bl
  __int64 (__fastcall **v11)(PVOID); // rdx
  void (__fastcall *v12)(__int64, __int64); // rax
  PVOID v13; // rbx
  PVOID v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall **v16)(PVOID); // rax
  __int64 (__fastcall *v17)(PVOID); // rax
  PVOID v18; // rbx
  PVOID v19; // rdx
  __int64 v20; // rbx
  __int64 (__fastcall **v21)(PVOID); // rdx
  __int64 (__fastcall *v22)(PVOID); // rax
  PVOID v23; // rbx
  PVOID v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall **v26)(PVOID); // rdx
  __int64 (__fastcall *v27)(PVOID); // rax
  PVOID v28; // rbx
  PVOID v29; // rdx
  __int64 v30; // rbx
  __int64 (__fastcall **v31)(PVOID); // rdx
  __int64 (__fastcall *v32)(PVOID); // rax
  PVOID v33; // rbx
  PVOID v34; // rdx
  __int64 v35; // rbx
  __int64 (__fastcall **v36)(PVOID); // rax
  __int64 (__fastcall *v37)(PVOID); // rax
  PVOID v38; // rbx
  PVOID v39; // rdx
  __int64 v40; // rbx
  __int64 (__fastcall **v41)(PVOID); // rax
  PVOID v42; // rbx
  __int64 (__fastcall **v44)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h]
  PVOID v46; // [rsp+38h] [rbp-D0h]
  __int64 v47; // [rsp+40h] [rbp-C8h]
  __int64 v48; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v49)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v54)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v55; // [rsp+80h] [rbp-88h]
  PVOID v56; // [rsp+88h] [rbp-80h]
  __int64 v57; // [rsp+90h] [rbp-78h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v59)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v60; // [rsp+A8h] [rbp-60h]
  PVOID v61; // [rsp+B0h] [rbp-58h]
  __int64 v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v64)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v65; // [rsp+D0h] [rbp-38h]
  PVOID v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  __int64 v68; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v69)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v70; // [rsp+F8h] [rbp-10h]
  PVOID v71; // [rsp+100h] [rbp-8h]
  __int64 v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v74)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v75; // [rsp+120h] [rbp+18h]
  PVOID v76; // [rsp+128h] [rbp+20h]
  __int64 v77; // [rsp+130h] [rbp+28h]
  __int64 v78; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v79)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v80; // [rsp+148h] [rbp+40h]
  PVOID v81; // [rsp+150h] [rbp+48h]
  __int64 v82; // [rsp+158h] [rbp+50h]
  __int64 v83; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v84)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v85; // [rsp+170h] [rbp+68h]
  PVOID v86; // [rsp+178h] [rbp+70h]
  __int64 v87; // [rsp+180h] [rbp+78h]
  __int64 v88; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v89)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v90; // [rsp+198h] [rbp+90h]
  PVOID v91; // [rsp+1A0h] [rbp+98h]
  __int64 v92; // [rsp+1A8h] [rbp+A0h]
  __int64 v93; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v94)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v95; // [rsp+1C0h] [rbp+B8h]
  PVOID v96; // [rsp+1C8h] [rbp+C0h]
  __int64 v97; // [rsp+1D0h] [rbp+C8h]
  __int64 v98; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v99)(PVOID); // [rsp+1E0h] [rbp+D8h] BYREF
  __int16 v100; // [rsp+1E8h] [rbp+E0h]
  PVOID v101; // [rsp+1F0h] [rbp+E8h]
  __int64 v102; // [rsp+1F8h] [rbp+F0h]
  __int64 v103; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v104)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int16 v105; // [rsp+210h] [rbp+108h]
  PVOID v106; // [rsp+218h] [rbp+110h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  __int64 v108; // [rsp+228h] [rbp+120h]
  __int64 (__fastcall **v109)(PVOID); // [rsp+230h] [rbp+128h] BYREF
  __int16 v110; // [rsp+238h] [rbp+130h]
  PVOID v111; // [rsp+240h] [rbp+138h]
  __int64 v112; // [rsp+248h] [rbp+140h]
  __int64 v113; // [rsp+250h] [rbp+148h]
  __int64 (__fastcall **v114)(PVOID); // [rsp+258h] [rbp+150h] BYREF
  __int64 (__fastcall **v115)(); // [rsp+260h] [rbp+158h]
  unsigned __int64 v116; // [rsp+2A0h] [rbp+198h]
  __int64 v117; // [rsp+2A8h] [rbp+1A0h]
  __int64 v118; // [rsp+2B0h] [rbp+1A8h]
  __int64 (__fastcall **v119)(PVOID); // [rsp+2B8h] [rbp+1B0h] BYREF
  __int16 v120; // [rsp+2C0h] [rbp+1B8h]
  PVOID v121; // [rsp+2C8h] [rbp+1C0h]
  __int64 v122; // [rsp+2D0h] [rbp+1C8h]
  __int64 v123; // [rsp+2D8h] [rbp+1D0h]
  __int64 (__fastcall **v124)(PVOID); // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 (__fastcall **v125)(); // [rsp+2F0h] [rbp+1E8h]
  unsigned __int64 v126; // [rsp+330h] [rbp+228h]
  BOOL v127; // [rsp+338h] [rbp+230h]
  __int64 (__fastcall **v128)(PVOID); // [rsp+348h] [rbp+240h] BYREF
  __int64 (__fastcall **v129)(); // [rsp+350h] [rbp+248h]
  unsigned __int64 v130; // [rsp+390h] [rbp+288h]
  BOOL v131; // [rsp+398h] [rbp+290h]
  __int64 (__fastcall **v132)(PVOID); // [rsp+3A8h] [rbp+2A0h] BYREF
  __int64 (__fastcall **v133)(); // [rsp+3B0h] [rbp+2A8h]
  unsigned __int64 v134; // [rsp+3F0h] [rbp+2E8h]
  __int64 v135; // [rsp+3F8h] [rbp+2F0h]
  __int64 v136; // [rsp+400h] [rbp+2F8h]
  __int64 (__fastcall **v137)(PVOID); // [rsp+408h] [rbp+300h] BYREF
  __int64 (__fastcall **v138)(); // [rsp+410h] [rbp+308h]
  unsigned __int64 v139; // [rsp+450h] [rbp+348h]
  __int64 v140; // [rsp+458h] [rbp+350h]
  __int64 v141; // [rsp+460h] [rbp+358h]
  __int64 (__fastcall **v142)(PVOID); // [rsp+468h] [rbp+360h] BYREF
  __int64 (__fastcall **v143)(); // [rsp+470h] [rbp+368h]
  unsigned __int64 v144; // [rsp+4B0h] [rbp+3A8h]
  __int64 v145; // [rsp+4B8h] [rbp+3B0h]
  __int64 v146; // [rsp+4C0h] [rbp+3B8h]
  __int64 (__fastcall **v147)(PVOID); // [rsp+4C8h] [rbp+3C0h] BYREF
  __int64 (__fastcall **v148)(); // [rsp+4D0h] [rbp+3C8h]
  unsigned __int64 v149; // [rsp+510h] [rbp+408h]
  __int64 v150; // [rsp+518h] [rbp+410h]
  __int64 v151; // [rsp+520h] [rbp+418h]

  v49 = &off_1400D41D0;
  LOWORD(v50) = 0;
  P = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  sub_1400011A8(&v49, (__int64)L"surpriseRemovalSupported", 0x18uLL);
  v4 = **(_BYTE **)(a1 + 136);
  sub_1400120E0((__int64)&v124, (__int64)&v49);
  v124 = &off_1400D5998;
  v5 = &off_1400D5998;
  v49 = &off_1400D41D0;
  v125 = off_1400D59C0;
  v126 = 0xA5A5A5A5A5000013uLL;
  v127 = v4 != 0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v124;
  }
  v6 = (void (__fastcall *)(__int64, __int64))v5[4];
  P = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( v6 == sub_140007740 )
    sub_140007740((__int64)&v124, a2);
  else
    v6((__int64)&v124, a2);
  v54 = &off_1400D41D0;
  v55 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  sub_1400011A8(&v54, (__int64)qword_1400B6F30, 1uLL);
  v7 = v56;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v56 )
    v9 = v56;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v57);
  v54 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v56 = 0LL;
  v124 = &off_1400D5998;
  v57 = 0LL;
  v125 = off_1400D59C0;
  v58 = 0LL;
  sub_140005CFC(&v124);
  v59 = &off_1400D41D0;
  v60 = 0;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  sub_1400011A8(&v59, (__int64)L"d3ColdSupported", 0xFuLL);
  v10 = *(_BYTE *)(*(_QWORD *)(a1 + 136) + 1LL);
  sub_1400120E0((__int64)&v128, (__int64)&v59);
  v128 = &off_1400D5998;
  v11 = &off_1400D5998;
  v59 = &off_1400D41D0;
  v129 = off_1400D59C0;
  v130 = 0xA5A5A5A5A5000013uLL;
  v131 = v10 != 0;
  if ( v61 )
  {
    ExFreePool(v61);
    v11 = v128;
  }
  v12 = (void (__fastcall *)(__int64, __int64))v11[4];
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  if ( v12 == sub_140007740 )
    sub_140007740((__int64)&v128, a2);
  else
    v12((__int64)&v128, a2);
  v64 = &off_1400D41D0;
  v65 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  sub_1400011A8(&v64, (__int64)qword_1400B6F30, 1uLL);
  v13 = v66;
  v14 = &unk_1400D44E0;
  if ( v66 )
    v14 = v66;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v67);
  v64 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v66 = 0LL;
  v128 = &off_1400D5998;
  v67 = 0LL;
  v129 = off_1400D59C0;
  v68 = 0LL;
  sub_140005CFC(&v128);
  v69 = &off_1400D41D0;
  v70 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  sub_1400011A8(&v69, (__int64)L"maxLinkSpeed", 0xCuLL);
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL);
  sub_1400120E0((__int64)&v132, (__int64)&v69);
  v136 = 10LL;
  v133 = off_1400D4720;
  v69 = &off_1400D41D0;
  v16 = &off_1400D46F8;
  v132 = &off_1400D46F8;
  v134 = 0xA5A5A5A5A5000012uLL;
  v135 = v15;
  if ( v71 )
  {
    ExFreePool(v71);
    v16 = v132;
  }
  v17 = v16[4];
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v17)(&v132, a2);
  v74 = &off_1400D41D0;
  v75 = 0;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  sub_1400011A8(&v74, (__int64)qword_1400B6F30, 1uLL);
  v18 = v76;
  v19 = &unk_1400D44E0;
  if ( v76 )
    v19 = v76;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v19, 2 * v77);
  v74 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v76 = 0LL;
  v133 = off_1400D4720;
  v77 = 0LL;
  v78 = 0LL;
  v132 = &off_1400D46F8;
  sub_140005CFC(&v132);
  v79 = &off_1400D41D0;
  v80 = 0;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  sub_1400011A8(&v79, (__int64)L"numTxQueues", 0xBuLL);
  v20 = *(unsigned int *)(*(_QWORD *)(a1 + 136) + 16LL);
  sub_1400120E0((__int64)&v137, (__int64)&v79);
  v138 = off_1400D5638;
  v141 = 10LL;
  v21 = &off_1400D5610;
  v137 = &off_1400D5610;
  v139 = 0xA5A5A5A5A5000012uLL;
  v140 = v20;
  v79 = &off_1400D41D0;
  if ( v81 )
  {
    ExFreePool(v81);
    v21 = v137;
  }
  v22 = v21[4];
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v22)(&v137, a2);
  v84 = &off_1400D41D0;
  v85 = 0;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  sub_1400011A8(&v84, (__int64)qword_1400B6F30, 1uLL);
  v23 = v86;
  v24 = &unk_1400D44E0;
  if ( v86 )
    v24 = v86;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v24, 2 * v87);
  v84 = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
  v86 = 0LL;
  v138 = off_1400D5638;
  v87 = 0LL;
  v88 = 0LL;
  v137 = &off_1400D5610;
  sub_140005CFC(&v137);
  v89 = &off_1400D41D0;
  v90 = 0;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  sub_1400011A8(&v89, (__int64)L"maxTxFragments", 0xEuLL);
  v25 = *(unsigned int *)(*(_QWORD *)(a1 + 136) + 20LL);
  sub_1400120E0((__int64)&v142, (__int64)&v89);
  v143 = off_1400D5638;
  v26 = &off_1400D5610;
  v142 = &off_1400D5610;
  v144 = 0xA5A5A5A5A5000012uLL;
  v145 = v25;
  v146 = 10LL;
  v89 = &off_1400D41D0;
  if ( v91 )
  {
    ExFreePool(v91);
    v26 = v142;
  }
  v27 = v26[4];
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v27)(&v142, a2);
  v94 = &off_1400D41D0;
  v95 = 0;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  sub_1400011A8(&v94, (__int64)qword_1400B6F30, 1uLL);
  v28 = v96;
  v29 = &unk_1400D44E0;
  if ( v96 )
    v29 = v96;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v29, 2 * v97);
  v94 = &off_1400D41D0;
  if ( v28 )
    ExFreePool(v28);
  v96 = 0LL;
  v143 = off_1400D5638;
  v97 = 0LL;
  v98 = 0LL;
  v142 = &off_1400D5610;
  sub_140005CFC(&v142);
  v99 = &off_1400D41D0;
  v100 = 0;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  sub_1400011A8(&v99, (__int64)L"numRxQueues", 0xBuLL);
  v30 = *(unsigned int *)(*(_QWORD *)(a1 + 136) + 24LL);
  sub_1400120E0((__int64)&v147, (__int64)&v99);
  v148 = off_1400D5638;
  v31 = &off_1400D5610;
  v147 = &off_1400D5610;
  v149 = 0xA5A5A5A5A5000012uLL;
  v150 = v30;
  v151 = 10LL;
  v99 = &off_1400D41D0;
  if ( v101 )
  {
    ExFreePool(v101);
    v31 = v147;
  }
  v32 = v31[4];
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v32)(&v147, a2);
  v104 = &off_1400D41D0;
  v105 = 0;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  sub_1400011A8(&v104, (__int64)qword_1400B6F30, 1uLL);
  v33 = v106;
  v34 = &unk_1400D44E0;
  if ( v106 )
    v34 = v106;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v34, 2 * v107);
  v104 = &off_1400D41D0;
  if ( v33 )
    ExFreePool(v33);
  v106 = 0LL;
  v148 = off_1400D5638;
  v107 = 0LL;
  v108 = 0LL;
  v147 = &off_1400D5610;
  sub_140005CFC(&v147);
  v109 = &off_1400D41D0;
  v110 = 0;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  sub_1400011A8(&v109, (__int64)L"txBufferFragmentAlignment", 0x19uLL);
  v35 = *(unsigned int *)(*(_QWORD *)(a1 + 136) + 28LL);
  sub_1400120E0((__int64)&v114, (__int64)&v109);
  v118 = 10LL;
  v115 = off_1400D4720;
  v109 = &off_1400D41D0;
  v36 = &off_1400D46F8;
  v114 = &off_1400D46F8;
  v116 = 0xA5A5A5A5A5000012uLL;
  v117 = v35;
  if ( v111 )
  {
    ExFreePool(v111);
    v36 = v114;
  }
  v37 = v36[4];
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v37)(&v114, a2);
  v44 = &off_1400D41D0;
  LOWORD(v45) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  sub_1400011A8(&v44, (__int64)qword_1400B6F30, 1uLL);
  v38 = v46;
  v39 = &unk_1400D44E0;
  if ( v46 )
    v39 = v46;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v39, 2 * v47);
  v44 = &off_1400D41D0;
  if ( v38 )
    ExFreePool(v38);
  v46 = 0LL;
  v115 = off_1400D4720;
  v47 = 0LL;
  v48 = 0LL;
  v114 = &off_1400D46F8;
  sub_140005CFC(&v114);
  v44 = &off_1400D41D0;
  LOWORD(v45) = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  sub_1400011A8(&v44, (__int64)L"rxBufferFragmentAlignment", 0x19uLL);
  v40 = *(unsigned int *)(*(_QWORD *)(a1 + 136) + 32LL);
  sub_1400120E0((__int64)&v114, (__int64)&v44);
  v118 = 10LL;
  v115 = off_1400D4720;
  v41 = &off_1400D46F8;
  v114 = &off_1400D46F8;
  v116 = 0xA5A5A5A5A5000012uLL;
  v117 = v40;
  if ( v46 )
  {
    ExFreePool(v46);
    v41 = v114;
  }
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v41[4])(&v114, a2);
  v119 = &off_1400D41D0;
  v120 = 0;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  sub_1400011A8(&v119, (__int64)qword_1400B6F30, 1uLL);
  v42 = v121;
  if ( v121 )
    v8 = v121;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v122);
  if ( v42 )
    ExFreePool(v42);
  v114 = &off_1400D46F8;
  v115 = off_1400D4720;
  sub_140005CFC(&v114);
  sub_140003990(a2, 0);
  sub_140077AFC(a1, a2);
  sub_140003990(a2, 0);
  return sub_1400795F8(a1, a2);
}
