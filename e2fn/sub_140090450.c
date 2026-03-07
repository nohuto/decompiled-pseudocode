__int64 __fastcall sub_140090450(__int64 a1, __int64 a2)
{
  char v4; // bl
  __int64 (__fastcall **v5)(PVOID); // rdx
  void (__fastcall *v6)(__int64, __int64); // rax
  PVOID v7; // rdx
  PVOID v8; // rbx
  char v9; // bl
  __int64 (__fastcall **v10)(PVOID); // rdx
  void (__fastcall *v11)(__int64, __int64); // rax
  PVOID v12; // rdx
  PVOID v13; // rbx
  char v14; // bl
  __int64 (__fastcall **v15)(PVOID); // rdx
  void (__fastcall *v16)(__int64, __int64); // rax
  PVOID v17; // rdx
  PVOID v18; // rbx
  char v19; // bl
  __int64 (__fastcall **v20)(PVOID); // rdx
  void (__fastcall *v21)(__int64, __int64); // rax
  PVOID v22; // rdx
  PVOID v23; // rbx
  char v24; // bl
  __int64 (__fastcall **v25)(PVOID); // rdx
  void (__fastcall *v26)(__int64, __int64); // rax
  PVOID v27; // rdx
  PVOID v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbx
  bool v31; // zf
  __int64 v32; // rdx
  unsigned __int64 *v33; // rdi
  unsigned int v34; // r15d
  unsigned __int8 *v35; // rbx
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // r12
  PVOID v38; // r14
  PVOID v39; // rdx
  PVOID v40; // r14
  PVOID v41; // rdx
  PVOID v42; // r14
  PVOID v43; // rdx
  unsigned int v44; // eax
  PVOID v45; // r14
  PVOID v46; // rdx
  __int64 v47; // rax
  void *v48; // rdx
  unsigned __int64 v49; // r8
  __int64 *v50; // rdx
  PVOID v51; // r14
  PVOID v52; // rdx
  __int64 v53; // rax
  void *v54; // rdx
  PVOID v55; // r14
  PVOID v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rbx
  __int128 v60; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v61; // [rsp+40h] [rbp-C0h]
  __int64 v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h]
  __int128 v64; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h]
  __int64 v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall **v68)(PVOID); // [rsp+88h] [rbp-78h] BYREF
  __int16 v69; // [rsp+90h] [rbp-70h]
  PVOID v70; // [rsp+98h] [rbp-68h]
  __int64 v71; // [rsp+A0h] [rbp-60h]
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  _QWORD v74[2]; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v75; // [rsp+C8h] [rbp-38h]
  __int64 v76; // [rsp+D0h] [rbp-30h]
  __int64 v77; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall **v78)(PVOID); // [rsp+E0h] [rbp-20h] BYREF
  PVOID v79; // [rsp+E8h] [rbp-18h]
  PVOID v80; // [rsp+F0h] [rbp-10h]
  __int64 v81; // [rsp+F8h] [rbp-8h]
  __int64 v82; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall **v83)(PVOID); // [rsp+108h] [rbp+8h] BYREF
  __int16 v84; // [rsp+110h] [rbp+10h]
  PVOID v85; // [rsp+118h] [rbp+18h]
  __int64 v86; // [rsp+120h] [rbp+20h]
  __int64 v87; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall **v88)(PVOID); // [rsp+130h] [rbp+30h] BYREF
  __int16 v89; // [rsp+138h] [rbp+38h]
  PVOID v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]
  __int64 v92; // [rsp+150h] [rbp+50h]
  __int64 (__fastcall **v93)(PVOID); // [rsp+158h] [rbp+58h] BYREF
  __int16 v94; // [rsp+160h] [rbp+60h]
  PVOID v95; // [rsp+168h] [rbp+68h]
  __int64 v96; // [rsp+170h] [rbp+70h]
  __int64 v97; // [rsp+178h] [rbp+78h]
  __int64 (__fastcall **v98)(PVOID); // [rsp+180h] [rbp+80h] BYREF
  __int16 v99; // [rsp+188h] [rbp+88h]
  PVOID v100; // [rsp+190h] [rbp+90h]
  __int64 v101; // [rsp+198h] [rbp+98h]
  __int64 v102; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall **v103)(PVOID); // [rsp+1A8h] [rbp+A8h] BYREF
  __int16 v104; // [rsp+1B0h] [rbp+B0h]
  PVOID v105; // [rsp+1B8h] [rbp+B8h]
  __int64 v106; // [rsp+1C0h] [rbp+C0h]
  __int64 v107; // [rsp+1C8h] [rbp+C8h]
  __int64 (__fastcall **v108)(PVOID); // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v109; // [rsp+1D8h] [rbp+D8h]
  PVOID v110; // [rsp+1E0h] [rbp+E0h]
  __int64 v111; // [rsp+1E8h] [rbp+E8h]
  __int64 v112; // [rsp+1F0h] [rbp+F0h]
  __int64 v113; // [rsp+1F8h] [rbp+F8h]
  __int64 v114; // [rsp+200h] [rbp+100h]
  __int64 v115; // [rsp+208h] [rbp+108h]
  __int64 v116; // [rsp+220h] [rbp+120h] BYREF
  int v117; // [rsp+228h] [rbp+128h]
  __int64 (__fastcall **v118)(PVOID); // [rsp+230h] [rbp+130h] BYREF
  __int64 (__fastcall **v119)(); // [rsp+238h] [rbp+138h]
  unsigned __int64 v120; // [rsp+278h] [rbp+178h]
  BOOL v121; // [rsp+280h] [rbp+180h]
  __int64 v122; // [rsp+290h] [rbp+190h] BYREF
  PVOID v123; // [rsp+298h] [rbp+198h]
  unsigned __int64 v124; // [rsp+2A0h] [rbp+1A0h]
  _BYTE v125[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  PVOID v126; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall **v127)(PVOID); // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 (__fastcall **v128)(); // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 v129; // [rsp+328h] [rbp+228h]
  BOOL v130; // [rsp+330h] [rbp+230h]
  __int64 (__fastcall **v131)(PVOID); // [rsp+340h] [rbp+240h] BYREF
  __int64 (__fastcall **v132)(); // [rsp+348h] [rbp+248h]
  unsigned __int64 v133; // [rsp+388h] [rbp+288h]
  BOOL v134; // [rsp+390h] [rbp+290h]
  __int64 (__fastcall **v135)(PVOID); // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 (__fastcall **v136)(); // [rsp+3A8h] [rbp+2A8h]
  unsigned __int64 v137; // [rsp+3E8h] [rbp+2E8h]
  BOOL v138; // [rsp+3F0h] [rbp+2F0h]
  unsigned int v139; // [rsp+450h] [rbp+350h]
  unsigned __int64 v140; // [rsp+458h] [rbp+358h]
  __int64 v141; // [rsp+468h] [rbp+368h]

  *(_QWORD *)&v64 = &off_1400D41D0;
  WORD4(v64) = 0;
  P = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  sub_1400011A8(&v64, (__int64)L"m_magicPacketWakeEnabled", 0x18uLL);
  v4 = *(_BYTE *)(a1 + 360);
  sub_1400120E0((__int64)&v127, (__int64)&v64);
  *(_QWORD *)&v64 = &off_1400D41D0;
  v128 = off_1400D59C0;
  v5 = &off_1400D5998;
  v127 = &off_1400D5998;
  v129 = 0xA5A5A5A5A5000013uLL;
  v130 = v4 != 0;
  if ( P )
  {
    ExFreePool(P);
    v5 = v127;
  }
  v6 = (void (__fastcall *)(__int64, __int64))v5[4];
  P = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  if ( v6 == sub_140007740 )
    sub_140007740((__int64)&v127, a2);
  else
    v6((__int64)&v127, a2);
  v83 = &off_1400D41D0;
  v84 = 0;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  sub_1400011A8(&v83, (__int64)qword_1400B6F30, 1uLL);
  v7 = v85;
  if ( v85 )
  {
    v8 = v85;
  }
  else
  {
    v7 = &unk_1400D44E0;
    v8 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v7, 2 * v86);
  v83 = &off_1400D41D0;
  if ( v8 )
    ExFreePool(v8);
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v127 = &off_1400D5998;
  v128 = off_1400D59C0;
  sub_140005CFC(&v127);
  v88 = &off_1400D41D0;
  v89 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  sub_1400011A8(&v88, (__int64)L"m_linkStatusChangeWakeByCableConnect", 0x24uLL);
  v9 = *(_BYTE *)(a1 + 361);
  sub_1400120E0((__int64)&v131, (__int64)&v88);
  v132 = off_1400D59C0;
  v10 = &off_1400D5998;
  v88 = &off_1400D41D0;
  v131 = &off_1400D5998;
  v133 = 0xA5A5A5A5A5000013uLL;
  v134 = v9 != 0;
  if ( v90 )
  {
    ExFreePool(v90);
    v10 = v131;
  }
  v11 = (void (__fastcall *)(__int64, __int64))v10[4];
  v90 = 0LL;
  v91 = 0LL;
  v92 = 0LL;
  if ( v11 == sub_140007740 )
    sub_140007740((__int64)&v131, a2);
  else
    v11((__int64)&v131, a2);
  v93 = &off_1400D41D0;
  v94 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  sub_1400011A8(&v93, (__int64)qword_1400B6F30, 1uLL);
  v12 = v95;
  if ( v95 )
  {
    v13 = v95;
  }
  else
  {
    v12 = &unk_1400D44E0;
    v13 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v12, 2 * v96);
  v93 = &off_1400D41D0;
  if ( v13 )
    ExFreePool(v13);
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v131 = &off_1400D5998;
  v132 = off_1400D59C0;
  sub_140005CFC(&v131);
  v98 = &off_1400D41D0;
  v99 = 0;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  sub_1400011A8(&v98, (__int64)L"m_linkStatusChangeWakeByCableDisconnect", 0x27uLL);
  v14 = *(_BYTE *)(a1 + 362);
  sub_1400120E0((__int64)&v135, (__int64)&v98);
  v136 = off_1400D59C0;
  v15 = &off_1400D5998;
  v98 = &off_1400D41D0;
  v135 = &off_1400D5998;
  v137 = 0xA5A5A5A5A5000013uLL;
  v138 = v14 != 0;
  if ( v100 )
  {
    ExFreePool(v100);
    v15 = v135;
  }
  v16 = (void (__fastcall *)(__int64, __int64))v15[4];
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  if ( v16 == sub_140007740 )
    sub_140007740((__int64)&v135, a2);
  else
    v16((__int64)&v135, a2);
  v103 = &off_1400D41D0;
  v104 = 0;
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  sub_1400011A8(&v103, (__int64)qword_1400B6F30, 1uLL);
  v17 = v105;
  if ( v105 )
  {
    v18 = v105;
  }
  else
  {
    v17 = &unk_1400D44E0;
    v18 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v17, 2 * v106);
  v103 = &off_1400D41D0;
  if ( v18 )
    ExFreePool(v18);
  v105 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v135 = &off_1400D5998;
  v136 = off_1400D59C0;
  sub_140005CFC(&v135);
  v108 = &off_1400D41D0;
  v109 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  sub_1400011A8(&v108, (__int64)L"m_packetFilterWakeEnabled", 0x19uLL);
  v19 = *(_BYTE *)(a1 + 363);
  sub_1400120E0((__int64)&v118, (__int64)&v108);
  v119 = off_1400D59C0;
  v20 = &off_1400D5998;
  v108 = &off_1400D41D0;
  v118 = &off_1400D5998;
  v120 = 0xA5A5A5A5A5000013uLL;
  v121 = v19 != 0;
  if ( v110 )
  {
    ExFreePool(v110);
    v20 = v118;
  }
  v21 = (void (__fastcall *)(__int64, __int64))v20[4];
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  if ( v21 == sub_140007740 )
    sub_140007740((__int64)&v118, a2);
  else
    v21((__int64)&v118, a2);
  v68 = &off_1400D41D0;
  v69 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  sub_1400011A8(&v68, (__int64)qword_1400B6F30, 1uLL);
  v22 = v70;
  if ( v70 )
  {
    v23 = v70;
  }
  else
  {
    v22 = &unk_1400D44E0;
    v23 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v22, 2 * v71);
  v68 = &off_1400D41D0;
  if ( v23 )
    ExFreePool(v23);
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v118 = &off_1400D5998;
  v119 = off_1400D59C0;
  sub_140005CFC(&v118);
  v68 = &off_1400D41D0;
  v69 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  sub_1400011A8(&v68, (__int64)L"m_bitmapPatternsWakeEnabled", 0x1BuLL);
  v24 = *(_BYTE *)(a1 + 364);
  sub_1400120E0((__int64)&v118, (__int64)&v68);
  v119 = off_1400D59C0;
  v25 = &off_1400D5998;
  v118 = &off_1400D5998;
  v120 = 0xA5A5A5A5A5000013uLL;
  v121 = v24 != 0;
  if ( v70 )
  {
    ExFreePool(v70);
    v25 = v118;
  }
  v26 = (void (__fastcall *)(__int64, __int64))v25[4];
  if ( v26 == sub_140007740 )
    sub_140007740((__int64)&v118, a2);
  else
    v26((__int64)&v118, a2);
  v78 = &off_1400D41D0;
  LOWORD(v79) = 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  sub_1400011A8(&v78, (__int64)qword_1400B6F30, 1uLL);
  v27 = v80;
  if ( v80 )
  {
    v28 = v80;
  }
  else
  {
    v27 = &unk_1400D44E0;
    v28 = 0LL;
  }
  (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v27, 2 * v81);
  if ( v28 )
    ExFreePool(v28);
  v118 = &off_1400D5998;
  v119 = off_1400D59C0;
  sub_140005CFC(&v118);
  v114 = *(_QWORD *)(a1 + 384);
  v29 = v114;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v30 = *(_QWORD *)(a1 + 408);
  v31 = *(_QWORD *)(a1 + 496) == 0LL;
  v32 = v30;
  v73 = v30;
  if ( !v31 )
    v32 = a1 + 400;
  v113 = v32;
  if ( v30 != v32 )
  {
    HIDWORD(v115) = 10;
    do
    {
      sub_14008FE98(&v122, (_QWORD *)(v30 + 24));
      sub_14008058C(&v78, (_QWORD *)(v30 + 56));
      v33 = (unsigned __int64 *)v123;
      v34 = 0;
      v35 = (unsigned __int8 *)v79;
      v36 = 0LL;
      v37 = v124;
      do
      {
        if ( v36 >= v37 )
          sub_140072758(113, 0x239u, v34, v37, 0);
        if ( v36 + 1 >= v37 )
          sub_140072758(113, 0x239u, v34 + 1, v37, 0);
        v140 = *v33;
        WORD4(v60) = 0;
        v61 = 0LL;
        v62 = 0LL;
        v139 = v35[v36 >> 1];
        *(_QWORD *)&v60 = &off_1400D41D0;
        v63 = 0LL;
        sub_1400011A8(&v60, (__int64)qword_1400B7400, 1uLL);
        v38 = v61;
        v39 = &unk_1400D44E0;
        if ( v61 )
          v39 = v61;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v39, 2 * v62);
        if ( v38 )
          ExFreePool(v38);
        v117 = 10;
        LODWORD(v115) = 8 * v34;
        v116 = v115;
        sub_1400042F0((__int64)v74, (int *)&v116);
        v40 = v75;
        v41 = &unk_1400D44E0;
        if ( v75 )
          v41 = v75;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v41, 2 * v76);
        if ( v40 )
          ExFreePool(v40);
        WORD4(v60) = 0;
        *(_QWORD *)&v60 = &off_1400D41D0;
        v61 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        sub_1400011A8(&v60, (__int64)L"] ", 2uLL);
        v42 = v61;
        v43 = &unk_1400D44E0;
        if ( v61 )
          v43 = v61;
        (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v43, 2 * v62);
        if ( v42 )
          ExFreePool(v42);
        LOBYTE(v44) = v139;
        v141 = 8LL;
        do
        {
          *(_QWORD *)&v60 = &off_1400D41D0;
          WORD4(v60) = 0;
          v61 = 0LL;
          v62 = 0LL;
          v63 = 0LL;
          if ( (v44 & 1) != 0 )
          {
            sub_1400011A8(&v60, (__int64)L"{0x", 3uLL);
            v45 = v61;
            v46 = &unk_1400D44E0;
            if ( v61 )
              v46 = v61;
            (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v46, 2 * v62);
            if ( v45 )
              ExFreePool(v45);
            *(_QWORD *)&v64 = (unsigned __int8)v140;
            *((_QWORD *)&v64 + 1) = 16LL;
            P = (PVOID)10;
            v60 = v64;
            v61 = (PVOID)10;
            sub_14000139C((__int64)v125, (__int64 *)&v60);
            v47 = sub_1400A8CF8(v74, v125, 2LL);
            v48 = &unk_1400D44E0;
            if ( *(_QWORD *)(v47 + 16) )
              v48 = *(void **)(v47 + 16);
            (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(
              a2,
              v48,
              2LL * *(_QWORD *)(v47 + 24));
            v74[0] = &off_1400D41D0;
            if ( v75 )
              ExFreePool(v75);
            v75 = 0LL;
            v76 = 0LL;
            v77 = 0LL;
            if ( v126 )
              ExFreePool(v126);
            v49 = 2LL;
            v50 = (__int64 *)L"} ";
          }
          else
          {
            sub_1400011A8(&v60, (__int64)L"0x", 2uLL);
            v51 = v61;
            v52 = &unk_1400D44E0;
            if ( v61 )
              v52 = v61;
            (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v52, 2 * v62);
            if ( v51 )
              ExFreePool(v51);
            *(_QWORD *)&v64 = (unsigned __int8)v140;
            *((_QWORD *)&v64 + 1) = 16LL;
            P = (PVOID)10;
            v60 = v64;
            v61 = (PVOID)10;
            sub_14000139C((__int64)v125, (__int64 *)&v60);
            v53 = sub_1400A8CF8(v74, v125, 2LL);
            v54 = &unk_1400D44E0;
            if ( *(_QWORD *)(v53 + 16) )
              v54 = *(void **)(v53 + 16);
            (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a2 + 8LL))(
              a2,
              v54,
              2LL * *(_QWORD *)(v53 + 24));
            v74[0] = &off_1400D41D0;
            if ( v75 )
              ExFreePool(v75);
            v75 = 0LL;
            v76 = 0LL;
            v77 = 0LL;
            if ( v126 )
              ExFreePool(v126);
            v49 = 1LL;
            v50 = qword_1400B7720;
          }
          *(_QWORD *)&v60 = &off_1400D41D0;
          WORD4(v60) = 0;
          v61 = 0LL;
          v62 = 0LL;
          v63 = 0LL;
          sub_1400011A8(&v60, (__int64)v50, v49);
          v55 = v61;
          v56 = &unk_1400D44E0;
          if ( v61 )
            v56 = v61;
          (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)a2 + 8LL))(a2, v56, 2 * v62);
          if ( v55 )
            ExFreePool(v55);
          v140 >>= 8;
          v44 = v139 >> 1;
          v31 = v141-- == 1;
          v139 >>= 1;
        }
        while ( !v31 );
        sub_140003840(a2, 0);
        v37 = v124;
        v34 += 2;
        v35 = (unsigned __int8 *)v79;
        v36 += 2LL;
        ++v33;
      }
      while ( v34 < 0x20 );
      v57 = v113;
      v58 = v73;
      if ( v79 )
        ExFreePool(v79);
      if ( v123 )
        ExFreePool(v123);
      v30 = *(_QWORD *)(v58 + 8);
      v73 = v30;
    }
    while ( v30 != v57 );
    v29 = v114;
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29);
}
