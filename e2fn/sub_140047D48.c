__int64 __fastcall sub_140047D48(_QWORD *a1)
{
  _QWORD *v1; // r14
  __int64 *v2; // rbx
  int v3; // r12d
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // esi
  void *v7; // r15
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  void *v15; // rsi
  void *v16; // rdi
  void *v17; // rax
  __int64 v18; // rax
  int v19; // edx
  void *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  void *v23; // rdi
  __int64 v24; // rax
  void *v25; // rsi
  void *v26; // rax
  __int64 v27; // rax
  void *v28; // rdx
  void *v29; // rax
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  char v32; // si
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rsi
  void *v35; // rax
  void *v36; // rbx
  void *v37; // rax
  void *v38; // rdx
  void *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  void *v42; // rax
  __int64 v43; // rax
  void *v44; // rdx
  void *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  void *v48; // rax
  __int64 v49; // rax
  void *v50; // rdx
  void *v51; // rax
  volatile signed __int32 *v52; // rbx
  __int64 v53; // rdi
  volatile signed __int32 *v54; // rbx
  _QWORD *v55; // rdi
  void *v56; // rbx
  void *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rax
  void *v62; // rdx
  void *v63; // rax
  volatile signed __int32 *v64; // rbx
  volatile signed __int32 *v65; // rbx
  void *v66; // rdi
  void *v67; // rax
  __int64 v68; // rax
  void *v69; // rdx
  void *v70; // rax
  volatile signed __int32 *v71; // rbx
  volatile signed __int32 *v72; // rbx
  __int64 v73; // rsi
  void *v74; // rdi
  void *v75; // rax
  __int64 v76; // rax
  void *v77; // rdx
  void *v78; // rax
  volatile signed __int32 *v79; // rbx
  void *v80; // rsi
  void *v81; // rdi
  void *v82; // rax
  __int64 v83; // rax
  int v84; // edx
  void *v85; // rax
  volatile signed __int32 *v86; // rbx
  __int64 v87; // rbx
  void *v88; // r13
  void *v89; // rdi
  void *v90; // rdx
  void *v91; // rax
  void *v92; // rbx
  __int64 v93; // rax
  int v94; // edx
  void *v95; // rax
  volatile signed __int32 *v96; // rbx
  volatile signed __int32 *v97; // rbx
  __int64 v99; // [rsp+30h] [rbp-D8h]
  __int64 v100; // [rsp+30h] [rbp-D8h]
  __int64 v101; // [rsp+30h] [rbp-D8h]
  __int64 v102; // [rsp+38h] [rbp-D0h]
  __int64 v103; // [rsp+38h] [rbp-D0h]
  __int64 v104; // [rsp+38h] [rbp-D0h]
  __int64 *v105; // [rsp+58h] [rbp-B0h]
  __int64 v106; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v107; // [rsp+68h] [rbp-A0h]
  __int64 v108; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v109; // [rsp+78h] [rbp-90h]
  _QWORD *v110; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v111; // [rsp+88h] [rbp-80h]
  __int64 (__fastcall **v112)(PVOID); // [rsp+90h] [rbp-78h] BYREF
  __int16 v113; // [rsp+98h] [rbp-70h]
  PVOID v114; // [rsp+A0h] [rbp-68h]
  __int64 v115; // [rsp+A8h] [rbp-60h]
  __int64 v116; // [rsp+B0h] [rbp-58h]
  __int64 (__fastcall **v117)(PVOID); // [rsp+B8h] [rbp-50h] BYREF
  __int16 v118; // [rsp+C0h] [rbp-48h]
  PVOID v119; // [rsp+C8h] [rbp-40h]
  __int64 v120; // [rsp+D0h] [rbp-38h]
  __int64 v121; // [rsp+D8h] [rbp-30h]
  char v122[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v123; // [rsp+E8h] [rbp-20h]
  char v124[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v125; // [rsp+F8h] [rbp-10h]
  char v126[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v127; // [rsp+108h] [rbp+0h]
  char v128[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v129; // [rsp+118h] [rbp+10h]
  char v130[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v131; // [rsp+128h] [rbp+20h]
  char v132[8]; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v133; // [rsp+138h] [rbp+30h]
  char v134[8]; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v135; // [rsp+148h] [rbp+40h]
  char v136[8]; // [rsp+150h] [rbp+48h] BYREF
  volatile signed __int32 *v137; // [rsp+158h] [rbp+50h]
  char v138[8]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v139; // [rsp+168h] [rbp+60h]
  char v140[8]; // [rsp+170h] [rbp+68h] BYREF
  volatile signed __int32 *v141; // [rsp+178h] [rbp+70h]
  char v142[8]; // [rsp+180h] [rbp+78h] BYREF
  volatile signed __int32 *v143; // [rsp+188h] [rbp+80h]
  char v144[8]; // [rsp+190h] [rbp+88h] BYREF
  volatile signed __int32 *v145; // [rsp+198h] [rbp+90h]
  char v146[8]; // [rsp+1A0h] [rbp+98h] BYREF
  volatile signed __int32 *v147; // [rsp+1A8h] [rbp+A0h]
  char v148[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  volatile signed __int32 *v149; // [rsp+1B8h] [rbp+B0h]
  char v150[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  volatile signed __int32 *v151; // [rsp+1C8h] [rbp+C0h]
  char v152[8]; // [rsp+1D0h] [rbp+C8h] BYREF
  volatile signed __int32 *v153; // [rsp+1D8h] [rbp+D0h]
  char v154[8]; // [rsp+1E0h] [rbp+D8h] BYREF
  volatile signed __int32 *v155; // [rsp+1E8h] [rbp+E0h]
  char v156[8]; // [rsp+1F0h] [rbp+E8h] BYREF
  volatile signed __int32 *v157; // [rsp+1F8h] [rbp+F0h]
  char v158[8]; // [rsp+200h] [rbp+F8h] BYREF
  volatile signed __int32 *v159; // [rsp+208h] [rbp+100h]
  char v160[8]; // [rsp+210h] [rbp+108h] BYREF
  volatile signed __int32 *v161; // [rsp+218h] [rbp+110h]
  char v162[8]; // [rsp+220h] [rbp+118h] BYREF
  volatile signed __int32 *v163; // [rsp+228h] [rbp+120h]
  __int64 (__fastcall **v164)(PVOID); // [rsp+230h] [rbp+128h] BYREF
  PVOID P; // [rsp+240h] [rbp+138h]
  __int64 (__fastcall **v166)(PVOID); // [rsp+258h] [rbp+150h] BYREF
  PVOID v167; // [rsp+268h] [rbp+160h]
  __int64 (__fastcall **v168)(PVOID); // [rsp+280h] [rbp+178h] BYREF
  PVOID v169; // [rsp+290h] [rbp+188h]
  __int64 (__fastcall **v170)(PVOID); // [rsp+2A8h] [rbp+1A0h] BYREF
  PVOID v171; // [rsp+2B8h] [rbp+1B0h]
  __int64 (__fastcall **v172)(); // [rsp+2D0h] [rbp+1C8h] BYREF
  int v173; // [rsp+2D8h] [rbp+1D0h]
  __int16 v174; // [rsp+2DCh] [rbp+1D4h]
  _BYTE v175[16]; // [rsp+2E0h] [rbp+1D8h] BYREF

  v110 = a1;
  v1 = a1;
  v2 = 0LL;
  v3 = 0;
  v105 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::InitializeMacAddress",
             (__int64)v1);
      if ( v5 )
        v2 = v5;
      v105 = v2;
    }
  }
  v6 = sub_140049070(v1, v1 + 47);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v122) + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **))(v1[7] + 24LL))(v1 + 7, &v110);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(v1[22] + 16LL),
        v11,
        14,
        41,
        (__int64)&unk_1400D72A0,
        (__int64)v7,
        (__int64)v8,
        (__int64)L"ReadMacAddress(m_permanentMacAddress)",
        v6);
      LOBYTE(v3) = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v111;
      LOBYTE(v3) = v3 & 0xFD;
      if ( v111 )
      {
        if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v123;
      if ( v123 )
      {
        if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_140008F3C((int)v1, (__int64)L"ReadMacAddress(m_permanentMacAddress)", 394, 158, v6);
    goto LABEL_221;
  }
  if ( (unsigned __int8)sub_1400892D8(v1 + 47) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v15 = &unk_1400D44E0;
      v16 = &unk_1400D44E0;
      v17 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v126) + 16LL);
      if ( v17 )
        v16 = v17;
      v18 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v124);
      LOBYTE(v19) = 2;
      v20 = *(void **)(*(_QWORD *)v18 + 16LL);
      if ( v20 )
        v15 = v20;
      sub_1400A3320(
        *(_QWORD *)(v1[22] + 16LL),
        v19,
        14,
        42,
        (__int64)&unk_1400D72A0,
        (__int64)v15,
        (__int64)v16,
        (__int64)qword_1400B7720);
      LOBYTE(v3) = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v21 = v125;
      LOBYTE(v3) = v3 & 0xF7;
      if ( v125 )
      {
        if ( _InterlockedExchangeAdd(v125 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v3 & 4) == 0 )
      goto LABEL_199;
    v22 = v127;
LABEL_195:
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
        if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
LABEL_199:
    v6 = -1073741661;
    goto LABEL_221;
  }
  v23 = &unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(PVOID)))(v1[47] + 24LL))(v1 + 47, &v164);
    v25 = &unk_1400D44E0;
    if ( *(_QWORD *)(v24 + 16) )
      v25 = *(void **)(v24 + 16);
    v26 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v130) + 16LL);
    if ( v26 )
      v23 = v26;
    v27 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v128);
    v28 = &unk_1400D44E0;
    v29 = *(void **)(*(_QWORD *)v27 + 16LL);
    if ( v29 )
      v28 = v29;
    v99 = (__int64)v28;
    LOBYTE(v28) = 4;
    sub_1400A9338(
      *(_QWORD *)(v1[22] + 16LL),
      (_DWORD)v28,
      14,
      43,
      (__int64)&unk_1400D72A0,
      v99,
      (__int64)v23,
      (__int64)qword_1400B7720,
      (__int64)v25);
    v3 = 112;
    v23 = &unk_1400D44E0;
  }
  if ( (v3 & 0x40) != 0 )
  {
    v30 = v129;
    v3 &= ~0x40u;
    if ( v129 )
    {
      if ( _InterlockedExchangeAdd(v129 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
  }
  if ( (v3 & 0x20) != 0 )
  {
    v31 = v131;
    v3 &= ~0x20u;
    if ( v131 )
    {
      if ( _InterlockedExchangeAdd(v131 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
  }
  if ( (v3 & 0x10) != 0 )
  {
    v3 &= ~0x10u;
    v164 = &off_1400D41D0;
    if ( P )
      ExFreePool(P);
  }
  sub_140088BF0(v1 + 49, v1 + 47);
  v117 = &off_1400D41D0;
  v118 = 0;
  v119 = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  sub_1400011A8(&v117, (__int64)L"SystemMacAddressPassthrough", 0x1BuLL);
  sub_1400A27D4(&v106, v1 + 14);
  v32 = sub_14003E2F0(v106, (__int64)&v117, v106 + 16);
  if ( v107 )
  {
    if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
    {
      v33 = v107;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v107 + 8LL))(v107);
      if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v107 + 16LL))(v107);
    }
  }
  if ( v119 )
    ExFreePool(v119);
  if ( v32 )
  {
    v172 = off_1400D69E8;
    v173 = 0;
    v174 = 0;
    if ( (unsigned int)sub_1400494E0(v1, &v172) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0x3000u;
        v48 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v142) + 16LL);
        if ( v48 )
          v23 = v48;
        v49 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v140);
        v50 = &unk_1400D44E0;
        v51 = *(void **)(*(_QWORD *)v49 + 16LL);
        if ( v51 )
          v50 = v51;
        v100 = (__int64)v50;
        LOBYTE(v50) = 4;
        sub_1400A3320(
          *(_QWORD *)(v1[22] + 16LL),
          (_DWORD)v50,
          14,
          46,
          (__int64)&unk_1400D72A0,
          v100,
          (__int64)v23,
          (__int64)qword_1400B7720);
      }
      if ( (v3 & 0x2000) != 0 )
      {
        v52 = v141;
        v3 &= ~0x2000u;
        if ( v141 )
        {
          if ( _InterlockedExchangeAdd(v141 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
            if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
      }
      if ( (v3 & 0x1000) != 0 )
      {
        v47 = v143;
        v3 &= ~0x1000u;
        goto LABEL_117;
      }
    }
    else
    {
      if ( !(unsigned __int8)sub_1400892D8(&v172) )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v3 |= 0x380u;
          v34 = *(_QWORD *)(v1[22] + 16LL);
          v35 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v132) + 16LL);
          if ( v35 )
            v23 = v35;
          v36 = &unk_1400D44E0;
          v37 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v134) + 16LL);
          if ( v37 )
            v36 = v37;
          v38 = *(void **)(sub_140089420(&v172, &v166) + 16);
          v39 = &unk_1400D44E0;
          if ( v38 )
            v39 = v38;
          LOBYTE(v38) = 4;
          sub_1400A9338(
            v34,
            (_DWORD)v38,
            14,
            44,
            (__int64)&unk_1400D72A0,
            (__int64)v23,
            (__int64)v36,
            (__int64)qword_1400B7720,
            (__int64)v39);
        }
        if ( (v3 & 0x200) != 0 )
        {
          v40 = v133;
          v3 &= ~0x200u;
          if ( v133 )
          {
            if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        if ( (v3 & 0x100) != 0 )
        {
          v41 = v135;
          v3 &= ~0x100u;
          if ( v135 )
          {
            if ( _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
              if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
            }
          }
        }
        if ( (v3 & 0x80u) != 0 )
        {
          v3 &= ~0x80u;
          v166 = &off_1400D41D0;
          if ( v167 )
            ExFreePool(v167);
        }
        sub_140088BF0(v1 + 49, &v172);
        goto LABEL_121;
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v3 |= 0xC00u;
        v42 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v136) + 16LL);
        if ( v42 )
          v23 = v42;
        v43 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v138);
        v44 = &unk_1400D44E0;
        v45 = *(void **)(*(_QWORD *)v43 + 16LL);
        if ( v45 )
          v44 = v45;
        v102 = (__int64)v44;
        LOBYTE(v44) = 4;
        sub_1400A3320(
          *(_QWORD *)(v1[22] + 16LL),
          (_DWORD)v44,
          14,
          45,
          (__int64)&unk_1400D72A0,
          (__int64)v23,
          v102,
          (__int64)qword_1400B7720);
      }
      if ( (v3 & 0x800) != 0 )
      {
        v46 = v137;
        v3 &= ~0x800u;
        if ( v137 )
        {
          if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      if ( (v3 & 0x400) != 0 )
      {
        v47 = v139;
        v3 &= ~0x400u;
LABEL_117:
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
    }
  }
LABEL_121:
  v6 = 0;
  v112 = &off_1400D41D0;
  v113 = 0;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  sub_1400011A8(&v112, (__int64)L"LocalAdministeredMacAddress", 0x1BuLL);
  sub_1400A27D4(&v108, v1 + 14);
  v53 = sub_140047C90(v108 + 736, (__int64)&v112);
  if ( v109 )
  {
    if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
    {
      v54 = v109;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v109 + 8LL))(v109);
      if ( !_InterlockedDecrement(v54 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v109 + 16LL))(v109);
    }
  }
  if ( v114 )
    ExFreePool(v114);
  if ( v53 )
  {
    sub_140088B98(v175, v53);
    if ( !(unsigned __int8)sub_1400892D8(v175) )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v55 = v1 + 7;
        v3 |= 0x1C000u;
        v56 = &unk_1400D44E0;
        v57 = &unk_1400D44E0;
        v58 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v144);
        v59 = *(_QWORD *)(v1[22] + 16LL);
        if ( *(_QWORD *)(v58 + 16) )
          v57 = *(void **)(v58 + 16);
        v60 = sub_140089420(v175, &v168);
        if ( *(_QWORD *)(v60 + 16) )
          v56 = *(void **)(v60 + 16);
        v61 = (*(__int64 (__fastcall **)(_QWORD *, char *))(*v55 + 16LL))(v55, v146);
        v62 = &unk_1400D44E0;
        v63 = *(void **)(*(_QWORD *)v61 + 16LL);
        if ( v63 )
          v62 = v63;
        v103 = (__int64)v62;
        LOBYTE(v62) = 4;
        sub_1400A9338(
          v59,
          (_DWORD)v62,
          14,
          47,
          (__int64)&unk_1400D72A0,
          (__int64)v57,
          v103,
          (__int64)qword_1400B7720,
          (__int64)v56);
        v1 = v110;
        v6 = 0;
      }
      if ( (v3 & 0x10000) != 0 )
      {
        v64 = v145;
        v3 &= ~0x10000u;
        if ( v145 )
        {
          if ( _InterlockedExchangeAdd(v145 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
            if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
          }
        }
      }
      if ( (v3 & 0x8000) != 0 )
      {
        v65 = v147;
        v3 &= ~0x8000u;
        if ( v147 )
        {
          if ( _InterlockedExchangeAdd(v147 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
            if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
          }
        }
      }
      if ( (v3 & 0x4000) != 0 )
      {
        v3 &= ~0x4000u;
        v168 = &off_1400D41D0;
        if ( v169 )
          ExFreePool(v169);
      }
      sub_140088BF0(v1 + 49, v175);
      goto LABEL_181;
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x60000u;
      v66 = &unk_1400D44E0;
      v67 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v150) + 16LL);
      if ( v67 )
        v66 = v67;
      v68 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v148);
      v69 = &unk_1400D44E0;
      v6 = 0;
      v70 = *(void **)(*(_QWORD *)v68 + 16LL);
      if ( v70 )
        v69 = v70;
      v101 = (__int64)v69;
      LOBYTE(v69) = 4;
      sub_1400A3320(
        *(_QWORD *)(v1[22] + 16LL),
        (_DWORD)v69,
        14,
        48,
        (__int64)&unk_1400D72A0,
        v101,
        (__int64)v66,
        (__int64)qword_1400B7720);
    }
    if ( (v3 & 0x40000) != 0 )
    {
      v71 = v149;
      v3 &= ~0x40000u;
      if ( v149 )
      {
        if ( !_InterlockedDecrement(v149 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
          if ( !_InterlockedDecrement(v71 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
        }
      }
    }
    if ( (v3 & 0x20000) != 0 )
    {
      v72 = v151;
      v3 &= ~0x20000u;
LABEL_177:
      if ( v72 )
      {
        if ( !_InterlockedDecrement(v72 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
          if ( !_InterlockedDecrement(v72 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
        }
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x180000u;
      v73 = *(_QWORD *)(v1[22] + 16LL);
      v74 = &unk_1400D44E0;
      v75 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v152) + 16LL);
      if ( v75 )
        v74 = v75;
      v76 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v154);
      v77 = &unk_1400D44E0;
      v78 = *(void **)(*(_QWORD *)v76 + 16LL);
      if ( v78 )
        v77 = v78;
      v104 = (__int64)v77;
      LOBYTE(v77) = 4;
      sub_1400A3320(v73, (_DWORD)v77, 14, 49, (__int64)&unk_1400D72A0, (__int64)v74, v104, (__int64)qword_1400B7720);
      v6 = 0;
    }
    if ( (v3 & 0x100000) != 0 )
    {
      v79 = v153;
      v3 &= ~0x100000u;
      if ( v153 )
      {
        if ( !_InterlockedDecrement(v153 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
          if ( !_InterlockedDecrement(v79 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
        }
      }
    }
    if ( (v3 & 0x80000) != 0 )
    {
      v72 = v155;
      v3 &= ~0x80000u;
      goto LABEL_177;
    }
  }
LABEL_181:
  if ( (unsigned __int8)sub_1400892D8(v1 + 49) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x600000u;
      v80 = &unk_1400D44E0;
      v81 = &unk_1400D44E0;
      v82 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v156) + 16LL);
      if ( v82 )
        v81 = v82;
      v83 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v158);
      LOBYTE(v84) = 2;
      v85 = *(void **)(*(_QWORD *)v83 + 16LL);
      if ( v85 )
        v80 = v85;
      sub_1400A3320(
        *(_QWORD *)(v1[22] + 16LL),
        v84,
        14,
        50,
        (__int64)&unk_1400D72A0,
        (__int64)v81,
        (__int64)v80,
        (__int64)qword_1400B7720);
    }
    if ( (v3 & 0x400000) != 0 )
    {
      v86 = v157;
      v3 &= ~0x400000u;
      if ( v157 )
      {
        if ( _InterlockedExchangeAdd(v157 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
          if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
        }
      }
    }
    if ( (v3 & 0x200000) == 0 )
      goto LABEL_199;
    v22 = v159;
    goto LABEL_195;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v3 |= 0x3800000u;
    v87 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 16LL))(v1 + 7, v162);
    v88 = &unk_1400D44E0;
    v89 = &unk_1400D44E0;
    v90 = *(void **)((*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(PVOID)))(v1[49] + 24LL))(
                       v1 + 49,
                       &v170)
                   + 16);
    v91 = *(void **)(v87 + 16);
    v92 = &unk_1400D44E0;
    if ( v90 )
      v89 = v90;
    if ( v91 )
      v92 = v91;
    v93 = (*(__int64 (__fastcall **)(_QWORD *, char *))(v1[7] + 24LL))(v1 + 7, v160);
    v6 = 0;
    LOBYTE(v94) = 4;
    v95 = *(void **)(*(_QWORD *)v93 + 16LL);
    if ( v95 )
      v88 = v95;
    sub_1400A9338(
      *(_QWORD *)(v1[22] + 16LL),
      v94,
      14,
      51,
      (__int64)&unk_1400D72A0,
      (__int64)v88,
      (__int64)v92,
      (__int64)qword_1400B7720,
      (__int64)v89);
  }
  if ( (v3 & 0x2000000) != 0 )
  {
    v96 = v161;
    v3 &= ~0x2000000u;
    if ( v161 )
    {
      if ( _InterlockedExchangeAdd(v161 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 8LL))(v96);
        if ( _InterlockedExchangeAdd(v96 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v96 + 16LL))(v96);
      }
    }
  }
  if ( (v3 & 0x1000000) != 0 )
  {
    v97 = v163;
    v3 &= ~0x1000000u;
    if ( v163 )
    {
      if ( _InterlockedExchangeAdd(v163 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v97 + 8LL))(v97);
        if ( _InterlockedExchangeAdd(v97 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v97 + 16LL))(v97);
      }
    }
  }
  if ( (v3 & 0x800000) != 0 )
  {
    v170 = &off_1400D41D0;
    if ( v171 )
      ExFreePool(v171);
  }
LABEL_221:
  if ( v105 )
  {
    sub_140005840(v105);
    ExFreePool(v105);
  }
  return v6;
}
