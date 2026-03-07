void *(__fastcall **__fastcall sub_14007B620(__int64 a1, __int64 a2))(CUnknown *__hidden this, unsigned int)
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
  PVOID v15; // rbx
  PVOID v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall **v18)(PVOID); // rdx
  __int64 (__fastcall *v19)(PVOID); // rax
  PVOID v20; // rbx
  PVOID v21; // rdx
  __int64 v22; // rbx
  __int64 (__fastcall **v23)(PVOID); // rdx
  __int64 (__fastcall *v24)(PVOID); // rax
  PVOID v25; // rbx
  PVOID v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 (__fastcall **v30)(PVOID); // rdx
  __int64 (__fastcall *v31)(PVOID); // rax
  PVOID v32; // rdx
  PVOID v33; // rbx
  __int64 v34; // rbx
  __int64 (__fastcall **v35)(PVOID); // rdx
  __int64 (__fastcall *v36)(PVOID); // rax
  PVOID v37; // rbx
  PVOID v38; // rdx
  void *(__fastcall **result)(CUnknown *__hidden, unsigned int); // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 (__fastcall **v43)(PVOID); // rdx
  __int64 (__fastcall *v44)(PVOID); // rax
  PVOID v45; // rbx
  PVOID v46; // rdx
  PVOID v47; // rbx
  __int64 (__fastcall **v48)(PVOID); // [rsp+28h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+30h] [rbp-D8h]
  PVOID v50; // [rsp+38h] [rbp-D0h]
  __int64 v51; // [rsp+40h] [rbp-C8h]
  __int64 v52; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v53)(PVOID); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-A0h]
  __int64 v57; // [rsp+70h] [rbp-98h]
  __int64 (__fastcall **v58)(PVOID); // [rsp+78h] [rbp-90h] BYREF
  __int16 v59; // [rsp+80h] [rbp-88h]
  PVOID v60; // [rsp+88h] [rbp-80h]
  __int64 v61; // [rsp+90h] [rbp-78h]
  __int64 v62; // [rsp+98h] [rbp-70h]
  __int64 (__fastcall **v63)(PVOID); // [rsp+A0h] [rbp-68h] BYREF
  __int16 v64; // [rsp+A8h] [rbp-60h]
  PVOID v65; // [rsp+B0h] [rbp-58h]
  __int64 v66; // [rsp+B8h] [rbp-50h]
  __int64 v67; // [rsp+C0h] [rbp-48h]
  __int64 (__fastcall **v68)(PVOID); // [rsp+C8h] [rbp-40h] BYREF
  __int16 v69; // [rsp+D0h] [rbp-38h]
  PVOID v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  __int64 v72; // [rsp+E8h] [rbp-20h]
  __int64 (__fastcall **v73)(PVOID); // [rsp+F0h] [rbp-18h] BYREF
  __int16 v74; // [rsp+F8h] [rbp-10h]
  PVOID v75; // [rsp+100h] [rbp-8h]
  __int64 v76; // [rsp+108h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+8h]
  __int64 (__fastcall **v78)(PVOID); // [rsp+118h] [rbp+10h] BYREF
  __int16 v79; // [rsp+120h] [rbp+18h]
  PVOID v80; // [rsp+128h] [rbp+20h]
  __int64 v81; // [rsp+130h] [rbp+28h]
  __int64 v82; // [rsp+138h] [rbp+30h]
  __int64 (__fastcall **v83)(PVOID); // [rsp+140h] [rbp+38h] BYREF
  __int16 v84; // [rsp+148h] [rbp+40h]
  PVOID v85; // [rsp+150h] [rbp+48h]
  __int64 v86; // [rsp+158h] [rbp+50h]
  __int64 v87; // [rsp+160h] [rbp+58h]
  __int64 (__fastcall **v88)(PVOID); // [rsp+168h] [rbp+60h] BYREF
  __int16 v89; // [rsp+170h] [rbp+68h]
  PVOID v90; // [rsp+178h] [rbp+70h]
  __int64 v91; // [rsp+180h] [rbp+78h]
  __int64 v92; // [rsp+188h] [rbp+80h]
  __int64 (__fastcall **v93)(PVOID); // [rsp+190h] [rbp+88h] BYREF
  __int16 v94; // [rsp+198h] [rbp+90h]
  PVOID v95; // [rsp+1A0h] [rbp+98h]
  __int64 v96; // [rsp+1A8h] [rbp+A0h]
  __int64 v97; // [rsp+1B0h] [rbp+A8h]
  __int64 (__fastcall **v98)(PVOID); // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 v99; // [rsp+1C0h] [rbp+B8h]
  PVOID v100; // [rsp+1C8h] [rbp+C0h]
  __int64 v101; // [rsp+1D0h] [rbp+C8h]
  __int64 v102; // [rsp+1D8h] [rbp+D0h]
  __int64 (__fastcall **v103)(PVOID); // [rsp+1E0h] [rbp+D8h] BYREF
  __int16 v104; // [rsp+1E8h] [rbp+E0h]
  PVOID v105; // [rsp+1F0h] [rbp+E8h]
  __int64 v106; // [rsp+1F8h] [rbp+F0h]
  __int64 v107; // [rsp+200h] [rbp+F8h]
  __int64 (__fastcall **v108)(PVOID); // [rsp+208h] [rbp+100h] BYREF
  __int16 v109; // [rsp+210h] [rbp+108h]
  PVOID v110; // [rsp+218h] [rbp+110h]
  __int64 v111; // [rsp+220h] [rbp+118h]
  __int64 v112; // [rsp+228h] [rbp+120h]
  __int64 (__fastcall **v113)(PVOID); // [rsp+230h] [rbp+128h] BYREF
  __int16 v114; // [rsp+238h] [rbp+130h]
  PVOID v115; // [rsp+240h] [rbp+138h]
  __int64 v116; // [rsp+248h] [rbp+140h]
  __int64 v117; // [rsp+250h] [rbp+148h]
  __int64 (__fastcall **v118)(PVOID); // [rsp+258h] [rbp+150h] BYREF
  __int64 (__fastcall **v119)(); // [rsp+260h] [rbp+158h]
  unsigned __int64 v120; // [rsp+2A0h] [rbp+198h]
  __int64 v121; // [rsp+2A8h] [rbp+1A0h]
  __int64 v122; // [rsp+2B0h] [rbp+1A8h]
  __int64 (__fastcall **v123)(PVOID); // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 (__fastcall **v124)(); // [rsp+2C0h] [rbp+1B8h]
  unsigned __int64 v125; // [rsp+300h] [rbp+1F8h]
  __int64 v126; // [rsp+308h] [rbp+200h]
  __int64 v127; // [rsp+310h] [rbp+208h]
  __int64 (__fastcall **v128)(PVOID); // [rsp+318h] [rbp+210h] BYREF
  __int64 (__fastcall **v129)(); // [rsp+320h] [rbp+218h]
  unsigned __int64 v130; // [rsp+360h] [rbp+258h]
  __int64 v131; // [rsp+368h] [rbp+260h]
  __int64 v132; // [rsp+370h] [rbp+268h]
  __int64 (__fastcall **v133)(PVOID); // [rsp+378h] [rbp+270h] BYREF
  __int64 (__fastcall **v134)(); // [rsp+380h] [rbp+278h]
  unsigned __int64 v135; // [rsp+3C0h] [rbp+2B8h]
  __int64 v136; // [rsp+3C8h] [rbp+2C0h]
  __int64 v137; // [rsp+3D0h] [rbp+2C8h]
  __int64 (__fastcall **v138)(PVOID); // [rsp+3D8h] [rbp+2D0h] BYREF
  __int64 (__fastcall **v139)(); // [rsp+3E0h] [rbp+2D8h]
  unsigned __int64 v140; // [rsp+420h] [rbp+318h]
  __int64 v141; // [rsp+428h] [rbp+320h]
  __int64 v142; // [rsp+430h] [rbp+328h]
  __int64 (__fastcall **v143)(PVOID); // [rsp+438h] [rbp+330h] BYREF
  __int64 (__fastcall **v144)(); // [rsp+440h] [rbp+338h]
  unsigned __int64 v145; // [rsp+480h] [rbp+378h]
  __int64 v146; // [rsp+488h] [rbp+380h]
  __int64 v147; // [rsp+490h] [rbp+388h]
  __int64 (__fastcall **v148)(PVOID); // [rsp+498h] [rbp+390h] BYREF
  __int64 (__fastcall **v149)(); // [rsp+4A0h] [rbp+398h]
  unsigned __int64 v150; // [rsp+4E0h] [rbp+3D8h]
  __int64 v151; // [rsp+4E8h] [rbp+3E0h]
  __int64 v152; // [rsp+4F0h] [rbp+3E8h]

  v53 = &off_1400D41D0;
  LOWORD(v54) = 0;
  P = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  sub_1400011A8(&v53, (__int64)L"m_queueId", 9uLL);
  v4 = *(unsigned int *)(a1 + 360);
  sub_1400120E0((__int64)&v128, (__int64)&v53);
  v129 = off_1400D5638;
  v132 = 10LL;
  v5 = &off_1400D5610;
  v128 = &off_1400D5610;
  v130 = 0xA5A5A5A5A5000012uLL;
  v131 = v4;
  v53 = &off_1400D41D0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v128;
  }
  v6 = v5[4];
  P = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v6)(&v128, a2);
  v58 = &off_1400D41D0;
  v59 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  sub_1400011A8(&v58, (__int64)qword_1400B6F30, 1uLL);
  v7 = v60;
  v8 = &unk_1400D44E0;
  v9 = &unk_1400D44E0;
  if ( v60 )
    v9 = v60;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v9, 2 * v61);
  v58 = &off_1400D41D0;
  if ( v7 )
    ExFreePool(v7);
  v60 = 0LL;
  v129 = off_1400D5638;
  v61 = 0LL;
  v62 = 0LL;
  v128 = &off_1400D5610;
  sub_140005CFC(&v128);
  v63 = &off_1400D41D0;
  v64 = 0;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  sub_1400011A8(&v63, (__int64)L"m_queueLength", 0xDuLL);
  v10 = *(unsigned int *)(a1 + 476);
  sub_1400120E0((__int64)&v133, (__int64)&v63);
  v134 = off_1400D5638;
  v11 = &off_1400D5610;
  v133 = &off_1400D5610;
  v135 = 0xA5A5A5A5A5000012uLL;
  v136 = v10;
  v137 = 10LL;
  v63 = &off_1400D41D0;
  if ( v65 )
  {
    ExFreePool(v65);
    v11 = v133;
  }
  v12 = v11[4];
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v12)(&v133, a2);
  v68 = &off_1400D41D0;
  v69 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  sub_1400011A8(&v68, (__int64)qword_1400B6F30, 1uLL);
  v13 = v70;
  v14 = &unk_1400D44E0;
  if ( v70 )
    v14 = v70;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v14, 2 * v71);
  v68 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v70 = 0LL;
  v134 = off_1400D5638;
  v71 = 0LL;
  v72 = 0LL;
  v133 = &off_1400D5610;
  sub_140005CFC(&v133);
  v73 = &off_1400D41D0;
  v74 = 0;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  sub_1400011A8(&v73, (__int64)L"-------------------------\n Ring Info\n -------------------------\n", 0x40uLL);
  v15 = v75;
  v16 = &unk_1400D44E0;
  if ( v75 )
    v16 = v75;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v16, 2 * v76);
  v73 = &off_1400D41D0;
  if ( v15 )
    ExFreePool(v15);
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = &off_1400D41D0;
  v79 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  sub_1400011A8(&v78, (__int64)L"m_ringPosition", 0xEuLL);
  v17 = *(unsigned int *)(a1 + 480);
  sub_1400120E0((__int64)&v138, (__int64)&v78);
  v139 = off_1400D5638;
  v18 = &off_1400D5610;
  v138 = &off_1400D5610;
  v140 = 0xA5A5A5A5A5000012uLL;
  v141 = v17;
  v142 = 10LL;
  v78 = &off_1400D41D0;
  if ( v80 )
  {
    ExFreePool(v80);
    v18 = v138;
  }
  v19 = v18[4];
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v19)(&v138, a2);
  v83 = &off_1400D41D0;
  v84 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  sub_1400011A8(&v83, (__int64)qword_1400B6F30, 1uLL);
  v20 = v85;
  v21 = &unk_1400D44E0;
  if ( v85 )
    v21 = v85;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v21, 2 * v86);
  v83 = &off_1400D41D0;
  if ( v20 )
    ExFreePool(v20);
  v85 = 0LL;
  v139 = off_1400D5638;
  v86 = 0LL;
  v87 = 0LL;
  v138 = &off_1400D5610;
  sub_140005CFC(&v138);
  v88 = &off_1400D41D0;
  v89 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  sub_1400011A8(&v88, (__int64)L"m_HwHead", 8uLL);
  v22 = *(unsigned int *)(a1 + 484);
  sub_1400120E0((__int64)&v143, (__int64)&v88);
  v144 = off_1400D5638;
  v23 = &off_1400D5610;
  v143 = &off_1400D5610;
  v145 = 0xA5A5A5A5A5000012uLL;
  v146 = v22;
  v147 = 10LL;
  v88 = &off_1400D41D0;
  if ( v90 )
  {
    ExFreePool(v90);
    v23 = v143;
  }
  v24 = v23[4];
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v24)(&v143, a2);
  v93 = &off_1400D41D0;
  v94 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  sub_1400011A8(&v93, (__int64)qword_1400B6F30, 1uLL);
  v25 = v95;
  v26 = &unk_1400D44E0;
  if ( v95 )
    v26 = v95;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v26, 2 * v96);
  v93 = &off_1400D41D0;
  if ( v25 )
    ExFreePool(v25);
  v95 = 0LL;
  v144 = off_1400D5638;
  v96 = 0LL;
  v97 = 0LL;
  v143 = &off_1400D5610;
  sub_140005CFC(&v143);
  v27 = *(_QWORD *)(a1 + 392);
  v28 = *(_QWORD *)(v27 + 8);
  if ( v28 && !*(_DWORD *)(v27 + 20) )
  {
    v29 = *(unsigned int *)(*(unsigned int *)(a1 + 364) + v28);
    if ( (_DWORD)v29 == -1 && *(_DWORD *)(*(_QWORD *)(v27 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 8LL))(v27, 3LL, 0xFFFFFFFFLL);
    }
    else
    {
      v98 = &off_1400D41D0;
      v99 = 0;
      v100 = 0LL;
      v101 = 0LL;
      v102 = 0LL;
      sub_1400011A8(&v98, (__int64)L"Register_m_HwHeadRegister", 0x19uLL);
      sub_1400120E0((__int64)&v118, (__int64)&v98);
      v119 = off_1400D5638;
      v30 = &off_1400D5610;
      v118 = &off_1400D5610;
      v120 = 0xA5A5A5A5A5000012uLL;
      v121 = v29;
      v122 = 10LL;
      v98 = &off_1400D41D0;
      if ( v100 )
      {
        ExFreePool(v100);
        v30 = v118;
      }
      v31 = v30[4];
      v100 = 0LL;
      v101 = 0LL;
      v102 = 0LL;
      v122 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v31)(&v118, a2);
      v103 = &off_1400D41D0;
      v104 = 0;
      v105 = 0LL;
      v106 = 0LL;
      v107 = 0LL;
      sub_1400011A8(&v103, (__int64)qword_1400B6F30, 1uLL);
      v32 = v105;
      if ( v105 )
      {
        v33 = v105;
      }
      else
      {
        v32 = &unk_1400D44E0;
        v33 = 0LL;
      }
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v32, 2 * v106);
      v103 = &off_1400D41D0;
      if ( v33 )
        ExFreePool(v33);
      v105 = 0LL;
      v119 = off_1400D5638;
      v106 = 0LL;
      v107 = 0LL;
      v118 = &off_1400D5610;
      sub_140005CFC(&v118);
    }
  }
  v108 = &off_1400D41D0;
  v109 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  sub_1400011A8(&v108, (__int64)L"m_HwTail", 8uLL);
  v34 = *(unsigned int *)(a1 + 488);
  sub_1400120E0((__int64)&v148, (__int64)&v108);
  v149 = off_1400D5638;
  v35 = &off_1400D5610;
  v148 = &off_1400D5610;
  v150 = 0xA5A5A5A5A5000012uLL;
  v151 = v34;
  v152 = 10LL;
  v108 = &off_1400D41D0;
  if ( v110 )
  {
    ExFreePool(v110);
    v35 = v148;
  }
  v36 = v35[4];
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v36)(&v148, a2);
  v113 = &off_1400D41D0;
  v114 = 0;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  sub_1400011A8(&v113, (__int64)qword_1400B6F30, 1uLL);
  v37 = v115;
  v38 = &unk_1400D44E0;
  if ( v115 )
    v38 = v115;
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v38, 2 * v116);
  v113 = &off_1400D41D0;
  if ( v37 )
    ExFreePool(v37);
  v115 = 0LL;
  v149 = off_1400D5638;
  v116 = 0LL;
  v117 = 0LL;
  v148 = &off_1400D5610;
  result = sub_140005CFC(&v148);
  v40 = *(_QWORD *)(a1 + 392);
  v41 = *(_QWORD *)(v40 + 8);
  if ( v41 && !*(_DWORD *)(v40 + 20) )
  {
    v42 = *(unsigned int *)(*(unsigned int *)(a1 + 368) + v41);
    if ( (_DWORD)v42 == -1 && *(_DWORD *)(*(_QWORD *)(v40 + 8) + 8LL) == -1 )
    {
      result = (void *(__fastcall **)(CUnknown *__hidden, unsigned int))(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 8LL))(
                                                                          v40,
                                                                          3LL);
    }
    else
    {
      v48 = &off_1400D41D0;
      LOWORD(v49) = 0;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      sub_1400011A8(&v48, (__int64)L"Register_m_HwTailRegister", 0x19uLL);
      sub_1400120E0((__int64)&v123, (__int64)&v48);
      v124 = off_1400D5638;
      v43 = &off_1400D5610;
      v123 = &off_1400D5610;
      v125 = 0xA5A5A5A5A5000012uLL;
      v126 = v42;
      v127 = 10LL;
      if ( v50 )
      {
        ExFreePool(v50);
        v43 = v123;
      }
      v44 = v43[4];
      v127 = 16LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(PVOID), __int64))v44)(&v123, a2);
      v48 = &off_1400D41D0;
      LOWORD(v49) = 0;
      v50 = 0LL;
      v51 = 0LL;
      v52 = 0LL;
      sub_1400011A8(&v48, (__int64)qword_1400B6F30, 1uLL);
      v45 = v50;
      v46 = &unk_1400D44E0;
      if ( v50 )
        v46 = v50;
      (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v46, 2 * v51);
      if ( v45 )
        ExFreePool(v45);
      v123 = &off_1400D5610;
      v124 = off_1400D5638;
      result = sub_140005CFC(&v123);
    }
  }
  if ( *(_QWORD *)(a1 + 440) )
  {
    v48 = &off_1400D41D0;
    LOWORD(v49) = 0;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    sub_1400011A8(&v48, (__int64)L"-------------------------\n Counters\n -------------------------\n", 0x3FuLL);
    v47 = v50;
    if ( v50 )
      v8 = v50;
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v8, 2 * v51);
    if ( v47 )
      ExFreePool(v47);
    return (void *(__fastcall **)(CUnknown *__hidden, unsigned int))(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 440) + 8LL))(
                                                                      *(_QWORD *)(a1 + 440),
                                                                      a2);
  }
  return result;
}
