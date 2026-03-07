__int64 __fastcall sub_14003F4B8(__int64 a1, int a2, int a3)
{
  int v5; // r15d
  void *v6; // rdi
  _QWORD *Pool2; // rax
  _QWORD *v8; // rax
  unsigned int v9; // esi
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  void *v18; // r14
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  void *v23; // rax
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  void *v26; // r14
  void *v27; // rdi
  void *v28; // rax
  __int64 v29; // rax
  int v30; // edx
  void *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  void *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  void *v39; // rax
  void *v40; // rcx
  void *v41; // rdx
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  void *v44; // rdi
  void *v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  void *v48; // rdx
  void *v49; // rax
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  void *v52; // rdi
  void *v53; // rax
  __int64 v54; // rax
  void *v55; // rdx
  void *v56; // rax
  volatile signed __int32 *v57; // rbx
  volatile signed __int32 *v58; // rbx
  __int64 v59; // rsi
  void *v60; // rdi
  void *v61; // rax
  __int64 v62; // rax
  void *v63; // rdx
  void *v64; // rax
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  __int64 v67; // rdi
  __int64 v68; // rax
  void *v69; // r8
  void *v70; // rdx
  void *v71; // rax
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  void *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  void *v77; // rdx
  void *v78; // rax
  volatile signed __int32 *v79; // rbx
  volatile signed __int32 *v80; // rbx
  __int64 v81; // rsi
  void *v82; // rdi
  void *v83; // rax
  __int64 v84; // rax
  void *v85; // rdx
  void *v86; // rax
  volatile signed __int32 *v87; // rbx
  volatile signed __int32 *v88; // rbx
  void *v89; // rsi
  void *v90; // rdi
  void *v91; // rax
  __int64 v92; // rax
  int v93; // edx
  void *v94; // rax
  volatile signed __int32 *v95; // rbx
  __int16 v96; // r8
  __int16 v97; // ax
  __int16 v98; // r8
  void *v99; // r12
  void *v100; // rdi
  void *v101; // rax
  __int64 v102; // rax
  int v103; // edx
  void *v104; // rax
  volatile signed __int32 *v105; // rbx
  volatile signed __int32 *v106; // rbx
  void *v107; // r12
  void *v108; // rdi
  void *v109; // rax
  __int64 v110; // rax
  int v111; // edx
  void *v112; // rax
  volatile signed __int32 *v113; // rbx
  volatile signed __int32 *v114; // rbx
  void *v115; // r12
  void *v116; // rdi
  void *v117; // rax
  __int64 v118; // rax
  int v119; // edx
  void *v120; // rax
  volatile signed __int32 *v121; // rbx
  volatile signed __int32 *v122; // rbx
  PVOID v123; // rbx
  __int64 v125; // [rsp+30h] [rbp-D8h]
  __int64 v126; // [rsp+30h] [rbp-D8h]
  __int64 v127; // [rsp+30h] [rbp-D8h]
  __int64 v128; // [rsp+38h] [rbp-D0h]
  __int64 v129; // [rsp+38h] [rbp-D0h]
  __int64 v130; // [rsp+38h] [rbp-D0h]
  __int64 v131; // [rsp+38h] [rbp-D0h]
  __int16 v132; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v133; // [rsp+5Ch] [rbp-ACh] BYREF
  PVOID P; // [rsp+60h] [rbp-A8h]
  __int64 v135; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v136; // [rsp+70h] [rbp-98h]
  __int64 v137; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v138; // [rsp+80h] [rbp-88h]
  _BYTE v139[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v140; // [rsp+90h] [rbp-78h]
  _BYTE v141[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v142; // [rsp+A0h] [rbp-68h]
  _BYTE v143[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v144; // [rsp+B0h] [rbp-58h]
  _BYTE v145[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v146; // [rsp+C0h] [rbp-48h]
  _BYTE v147[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v148; // [rsp+D0h] [rbp-38h]
  _BYTE v149[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v150; // [rsp+E0h] [rbp-28h]
  _BYTE v151[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v152; // [rsp+F0h] [rbp-18h]
  _BYTE v153[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v154; // [rsp+100h] [rbp-8h]
  _BYTE v155[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v156; // [rsp+110h] [rbp+8h]
  _BYTE v157[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v158; // [rsp+120h] [rbp+18h]
  _BYTE v159[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v160; // [rsp+130h] [rbp+28h]
  _BYTE v161[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v162; // [rsp+140h] [rbp+38h]
  _BYTE v163[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v164; // [rsp+150h] [rbp+48h]
  _BYTE v165[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v166; // [rsp+160h] [rbp+58h]
  _BYTE v167[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v168; // [rsp+170h] [rbp+68h]
  _BYTE v169[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v170; // [rsp+180h] [rbp+78h]
  _BYTE v171[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v172; // [rsp+190h] [rbp+88h]
  _BYTE v173[8]; // [rsp+198h] [rbp+90h] BYREF
  volatile signed __int32 *v174; // [rsp+1A0h] [rbp+98h]
  _BYTE v175[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 *v176; // [rsp+1B0h] [rbp+A8h]
  _BYTE v177[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v178; // [rsp+1C0h] [rbp+B8h]
  _BYTE v179[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v180; // [rsp+1D0h] [rbp+C8h]
  _BYTE v181[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  volatile signed __int32 *v182; // [rsp+1E0h] [rbp+D8h]
  _BYTE v183[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  volatile signed __int32 *v184; // [rsp+1F0h] [rbp+E8h]
  _BYTE v185[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  volatile signed __int32 *v186; // [rsp+200h] [rbp+F8h]
  _BYTE v187[8]; // [rsp+208h] [rbp+100h] BYREF
  volatile signed __int32 *v188; // [rsp+210h] [rbp+108h]
  _BYTE v189[8]; // [rsp+218h] [rbp+110h] BYREF
  volatile signed __int32 *v190; // [rsp+220h] [rbp+118h]
  char v191; // [rsp+270h] [rbp+168h]
  int v193; // [rsp+280h] [rbp+178h] BYREF

  v191 = a2;
  v193 = 0;
  v5 = 0;
  v6 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::ConfigureAutoNegotiation", a1);
      if ( v8 )
        v6 = v8;
      P = v6;
    }
  }
  LOWORD(v193) = 0;
  v9 = sub_140041700(a1, 4LL, &v193);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = &unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    &v137)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v135);
      LOBYTE(v14) = 2;
      v15 = *(void **)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v10 = v15;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        14,
        55,
        (__int64)&unk_1400D71E0,
        (__int64)v10,
        (__int64)v11,
        (__int64)L"ReadPhyRegister(0x4, phyAutonegAdvertismentValue)",
        v9);
      LOBYTE(v5) = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v16 = v136;
      LOBYTE(v5) = v5 & 0xFD;
      if ( v136 )
      {
        if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v17 = v138;
      if ( v138 )
      {
        if ( _InterlockedExchangeAdd(v138 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000999C(a1, (__int64)L"ReadPhyRegister(0x4, phyAutonegAdvertismentValue)", 474, 156, v9);
    goto LABEL_259;
  }
  v132 = 0;
  v9 = sub_140041700(a1, 9LL, &v132);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = &unk_1400D44E0;
      v19 = &unk_1400D44E0;
      v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v141)
                     + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v139);
      LOBYTE(v22) = 2;
      v23 = *(void **)(*(_QWORD *)v21 + 16LL);
      if ( v23 )
        v18 = v23;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v22,
        14,
        56,
        (__int64)&unk_1400D71E0,
        (__int64)v18,
        (__int64)v19,
        (__int64)L"ReadPhyRegister(0x9, phy1000BaseTControlValue)",
        v9);
      LOBYTE(v5) = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v24 = v140;
      LOBYTE(v5) = v5 & 0xF7;
      if ( v140 )
      {
        if ( _InterlockedExchangeAdd(v140 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v25 = v142;
      if ( v142 )
      {
        if ( _InterlockedExchangeAdd(v142 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    sub_140009704(a1, (__int64)L"ReadPhyRegister(0x9, phy1000BaseTControlValue)", 477, 156, v9);
    goto LABEL_259;
  }
  v133 = 0;
  v9 = sub_140041700(a1, 458784LL, &v133);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = &unk_1400D44E0;
      v27 = &unk_1400D44E0;
      v28 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v145)
                     + 16LL);
      if ( v28 )
        v27 = v28;
      v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v143);
      LOBYTE(v30) = 2;
      v31 = *(void **)(*(_QWORD *)v29 + 16LL);
      if ( v31 )
        v26 = v31;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v30,
        14,
        57,
        (__int64)&unk_1400D71E0,
        (__int64)v26,
        (__int64)v27,
        (__int64)L"ReadPhyRegister(phyMultiGigabitAnControlRegister, phyMultiGigabitAnControlValue)",
        v9);
      LOBYTE(v5) = 48;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v32 = v144;
      LOBYTE(v5) = v5 & 0xDF;
      if ( v144 )
      {
        if ( _InterlockedExchangeAdd(v144 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v33 = v146;
      if ( v146 )
      {
        if ( _InterlockedExchangeAdd(v146 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    sub_14000F8F4(
      a1,
      (__int64)L"ReadPhyRegister(phyMultiGigabitAnControlRegister, phyMultiGigabitAnControlValue)",
      481,
      156,
      v9);
    goto LABEL_259;
  }
  v36 = v133;
  v34 = &unk_1400D44E0;
  LOWORD(v193) = v193 & 0xFE1F;
  v132 &= 0xFCFFu;
  v35 = 2048LL;
  LOWORD(v36) = v133 & 0xFF7F;
  v133 &= ~0x80u;
  if ( !a2 )
    goto LABEL_81;
  if ( a2 == 1 )
    goto LABEL_163;
  if ( a2 != 2 )
  {
    switch ( a2 )
    {
      case 3:
LABEL_131:
        LOWORD(v193) = v193 | 0x80;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v5 |= 0x3000u;
          v67 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                             a1 + 56,
                             v165,
                             v35);
          v68 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v163);
          v69 = &unk_1400D44E0;
          v70 = &unk_1400D44E0;
          v71 = *(void **)(*(_QWORD *)v68 + 16LL);
          if ( v71 )
            v69 = v71;
          if ( *(_QWORD *)(v67 + 16) )
            v70 = *(void **)(v67 + 16);
          v129 = (__int64)v70;
          LOBYTE(v70) = 4;
          sub_1400A3320(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            (_DWORD)v70,
            14,
            61,
            (__int64)&unk_1400D71E0,
            (__int64)v69,
            v129,
            (__int64)qword_1400B7720);
        }
        if ( (v5 & 0x2000) != 0 )
        {
          v72 = v164;
          v5 &= ~0x2000u;
          if ( v164 )
          {
            if ( _InterlockedExchangeAdd(v164 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v72 + 8LL))(
                v72,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
            }
          }
        }
        if ( (v5 & 0x1000) != 0 )
        {
          v73 = v166;
          v5 &= ~0x1000u;
          if ( v166 )
          {
            if ( _InterlockedExchangeAdd(v166 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v73 + 8LL))(
                v73,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
            }
          }
        }
        goto LABEL_147;
      case 4:
LABEL_114:
        LOWORD(v193) = v193 | 0x100;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v5 |= 0xC00u;
          v59 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v60 = &unk_1400D44E0;
          v61 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                        a1 + 56,
                                        v159)
                         + 16LL);
          if ( v61 )
            v60 = v61;
          v62 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v161);
          v63 = &unk_1400D44E0;
          v64 = *(void **)(*(_QWORD *)v62 + 16LL);
          if ( v64 )
            v63 = v64;
          v128 = (__int64)v63;
          LOBYTE(v63) = 4;
          sub_1400A3320(v59, (_DWORD)v63, 14, 60, (__int64)&unk_1400D71E0, (__int64)v60, v128, (__int64)qword_1400B7720);
          v35 = 2048LL;
        }
        if ( (v5 & 0x800) != 0 )
        {
          v65 = v160;
          v5 &= ~0x800u;
          if ( v160 )
          {
            if ( _InterlockedExchangeAdd(v160 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v65 + 8LL))(
                v65,
                v36,
                2048LL);
              if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
            }
          }
        }
        if ( (v5 & 0x400) != 0 )
        {
          v66 = v162;
          v5 &= ~0x400u;
          if ( v162 )
          {
            if ( _InterlockedExchangeAdd(v162 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v66 + 8LL))(
                v66,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
            }
          }
        }
        v34 = &unk_1400D44E0;
        goto LABEL_131;
      case 5:
LABEL_97:
        v132 |= 0x200u;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v5 |= 0x300u;
          v52 = &unk_1400D44E0;
          v53 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v157,
                                        v35)
                         + 16LL);
          if ( v53 )
            v52 = v53;
          v54 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v155);
          v55 = &unk_1400D44E0;
          v56 = *(void **)(*(_QWORD *)v54 + 16LL);
          if ( v56 )
            v55 = v56;
          v127 = (__int64)v55;
          LOBYTE(v55) = 4;
          sub_1400A3320(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            (_DWORD)v55,
            14,
            59,
            (__int64)&unk_1400D71E0,
            v127,
            (__int64)v52,
            (__int64)qword_1400B7720);
        }
        if ( (v5 & 0x200) != 0 )
        {
          v57 = v156;
          v5 &= ~0x200u;
          if ( v156 )
          {
            if ( _InterlockedExchangeAdd(v156 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v57 + 8LL))(
                v57,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
            }
          }
        }
        if ( (v5 & 0x100) != 0 )
        {
          v58 = v158;
          v5 &= ~0x100u;
          if ( v158 )
          {
            if ( _InterlockedExchangeAdd(v158 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v58 + 8LL))(
                v58,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
            }
          }
        }
        v35 = 2048LL;
        goto LABEL_114;
    }
    if ( a2 != 6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v37 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                           a1 + 56,
                           v149,
                           2048LL);
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
        v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                      a1 + 56,
                                      v147)
                       + 16LL);
        v40 = &unk_1400D44E0;
        v41 = &unk_1400D44E0;
        if ( v39 )
          v41 = v39;
        if ( *(_QWORD *)(v37 + 16) )
          v40 = *(void **)(v37 + 16);
        v125 = (__int64)v41;
        LOBYTE(v41) = 2;
        sub_1400A5E80(
          v38,
          (_DWORD)v41,
          14,
          64,
          (__int64)&unk_1400D71E0,
          v125,
          (__int64)v40,
          (__int64)qword_1400B7720,
          v191);
        v5 = 786432;
      }
      if ( (v5 & 0x80000) != 0 )
      {
        v42 = v148;
        v5 &= ~0x80000u;
        if ( v148 )
        {
          if ( _InterlockedExchangeAdd(v148 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v42 + 8LL))(v42, v36, v35);
            if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
          }
        }
      }
      if ( (v5 & 0x40000) == 0 )
        goto LABEL_199;
      v43 = v150;
LABEL_195:
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v43 + 8LL))(v43, v36, v35);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
LABEL_199:
      v9 = -1073741823;
      goto LABEL_259;
    }
LABEL_81:
    LOWORD(v36) = v36 | 0x80;
    v133 = v36;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v44 = &unk_1400D44E0;
      v45 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v153,
                                    2048LL)
                     + 16LL);
      if ( v45 )
        v44 = v45;
      v46 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v47 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v151);
      v48 = &unk_1400D44E0;
      v49 = *(void **)(*(_QWORD *)v47 + 16LL);
      if ( v49 )
        v48 = v49;
      v126 = (__int64)v48;
      LOBYTE(v48) = 4;
      sub_1400A3320(v46, (_DWORD)v48, 14, 58, (__int64)&unk_1400D71E0, v126, (__int64)v44, (__int64)qword_1400B7720);
      v5 = 192;
    }
    if ( (v5 & 0x80) != 0 )
    {
      v50 = v152;
      v5 &= ~0x80u;
      if ( v152 )
      {
        if ( _InterlockedExchangeAdd(v152 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v50 + 8LL))(v50, v36, v35);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
    if ( (v5 & 0x40) != 0 )
    {
      v51 = v154;
      v5 &= ~0x40u;
      if ( v154 )
      {
        if ( _InterlockedExchangeAdd(v154 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v51 + 8LL))(v51, v36, v35);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    goto LABEL_97;
  }
LABEL_147:
  LOWORD(v193) = v193 | 0x40;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v5 |= 0xC000u;
    v74 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 24LL))(
                                  a1 + 56,
                                  v167,
                                  v35)
                   + 16LL);
    if ( v74 )
      v34 = v74;
    v75 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v76 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v169);
    v77 = &unk_1400D44E0;
    v78 = *(void **)(*(_QWORD *)v76 + 16LL);
    if ( v78 )
      v77 = v78;
    v130 = (__int64)v77;
    LOBYTE(v77) = 4;
    sub_1400A3320(v75, (_DWORD)v77, 14, 62, (__int64)&unk_1400D71E0, (__int64)v34, v130, (__int64)qword_1400B7720);
  }
  if ( (v5 & 0x8000) != 0 )
  {
    v79 = v168;
    v5 &= ~0x8000u;
    if ( v168 )
    {
      if ( _InterlockedExchangeAdd(v168 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v79 + 8LL))(v79, v36, v35);
        if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
      }
    }
  }
  if ( (v5 & 0x4000) != 0 )
  {
    v80 = v170;
    v5 &= ~0x4000u;
    if ( v170 )
    {
      if ( _InterlockedExchangeAdd(v170 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v80 + 8LL))(v80, v36, v35);
        if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
      }
    }
  }
LABEL_163:
  LOWORD(v193) = v193 | 0x20;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v5 |= 0x30000u;
    v81 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
    v82 = &unk_1400D44E0;
    v83 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 24LL))(
                                  a1 + 56,
                                  v171,
                                  v35)
                   + 16LL);
    if ( v83 )
      v82 = v83;
    v84 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v173);
    v85 = &unk_1400D44E0;
    v86 = *(void **)(*(_QWORD *)v84 + 16LL);
    if ( v86 )
      v85 = v86;
    v131 = (__int64)v85;
    LOBYTE(v85) = 4;
    sub_1400A3320(v81, (_DWORD)v85, 14, 63, (__int64)&unk_1400D71E0, (__int64)v82, v131, (__int64)qword_1400B7720);
  }
  if ( (v5 & 0x20000) != 0 )
  {
    v87 = v172;
    v5 &= ~0x20000u;
    if ( v172 )
    {
      if ( _InterlockedExchangeAdd(v172 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v87 + 8LL))(v87, v36, v35);
        if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
      }
    }
  }
  if ( (v5 & 0x10000) != 0 )
  {
    v88 = v174;
    v5 &= ~0x10000u;
    if ( v174 )
    {
      if ( _InterlockedExchangeAdd(v174 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v88 + 8LL))(v88, v36, v35);
        if ( _InterlockedExchangeAdd(v88 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 16LL))(v88);
      }
    }
  }
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v96 = v193 & 0xFBFF;
      v97 = 2048;
    }
    else
    {
      if ( (unsigned int)(a3 - 2) >= 2 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v5 |= 0x300000u;
          v89 = &unk_1400D44E0;
          v90 = &unk_1400D44E0;
          v91 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v177,
                                        v35)
                         + 16LL);
          if ( v91 )
            v90 = v91;
          v92 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v175);
          LOBYTE(v93) = 2;
          v94 = *(void **)(*(_QWORD *)v92 + 16LL);
          if ( v94 )
            v89 = v94;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v93,
            14,
            65,
            (__int64)&unk_1400D71E0,
            (__int64)v89,
            (__int64)v90,
            (__int64)qword_1400B7720,
            a3);
        }
        if ( (v5 & 0x200000) != 0 )
        {
          v95 = v176;
          v5 &= ~0x200000u;
          if ( v176 )
          {
            if ( _InterlockedExchangeAdd(v176 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v95 + 8LL))(
                v95,
                v36,
                v35);
              if ( _InterlockedExchangeAdd(v95 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v95 + 16LL))(v95);
            }
          }
        }
        if ( (v5 & 0x100000) == 0 )
          goto LABEL_199;
        v43 = v178;
        goto LABEL_195;
      }
      v96 = v193;
      v97 = 3072;
    }
    v98 = v97 | v96;
  }
  else
  {
    v98 = v193 & 0xF3FF;
  }
  LOWORD(v193) = v98;
  v9 = sub_1400441A4(a1, 4LL);
  if ( v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 |= 0xC00000u;
      v99 = &unk_1400D44E0;
      v100 = &unk_1400D44E0;
      v101 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                     a1 + 56,
                                     v181)
                      + 16LL);
      if ( v101 )
        v100 = v101;
      v102 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v179);
      LOBYTE(v103) = 2;
      v104 = *(void **)(*(_QWORD *)v102 + 16LL);
      if ( v104 )
        v99 = v104;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v103,
        14,
        66,
        (__int64)&unk_1400D71E0,
        (__int64)v99,
        (__int64)v100,
        (__int64)L"WritePhyRegisterSafe(0x4, phyAutonegAdvertismentValue)",
        v9);
    }
    if ( (v5 & 0x800000) != 0 )
    {
      v105 = v180;
      v5 &= ~0x800000u;
      if ( v180 )
      {
        if ( _InterlockedExchangeAdd(v180 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v105 + 8LL))(v105);
          if ( _InterlockedExchangeAdd(v105 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v105 + 16LL))(v105);
        }
      }
    }
    if ( (v5 & 0x400000) != 0 )
    {
      v106 = v182;
      if ( v182 )
      {
        if ( _InterlockedExchangeAdd(v182 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v106 + 8LL))(v106);
          if ( _InterlockedExchangeAdd(v106 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v106 + 16LL))(v106);
        }
      }
    }
    sub_1400143F0(a1, (__int64)L"WritePhyRegisterSafe(0x4, phyAutonegAdvertismentValue)", 556, 156, v9);
  }
  else
  {
    v9 = sub_1400441A4(a1, 9LL);
    if ( v9 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v5 |= 0x3000000u;
        v107 = &unk_1400D44E0;
        v108 = &unk_1400D44E0;
        v109 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                       a1 + 56,
                                       v185)
                        + 16LL);
        if ( v109 )
          v108 = v109;
        v110 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v183);
        LOBYTE(v111) = 2;
        v112 = *(void **)(*(_QWORD *)v110 + 16LL);
        if ( v112 )
          v107 = v112;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          v111,
          14,
          67,
          (__int64)&unk_1400D71E0,
          (__int64)v107,
          (__int64)v108,
          (__int64)L"WritePhyRegisterSafe(0x9, phy1000BaseTControlValue)",
          v9);
      }
      if ( (v5 & 0x2000000) != 0 )
      {
        v113 = v184;
        v5 &= ~0x2000000u;
        if ( v184 )
        {
          if ( _InterlockedExchangeAdd(v184 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v113 + 8LL))(v113);
            if ( _InterlockedExchangeAdd(v113 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v113 + 16LL))(v113);
          }
        }
      }
      if ( (v5 & 0x1000000) != 0 )
      {
        v114 = v186;
        if ( v186 )
        {
          if ( _InterlockedExchangeAdd(v186 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v114 + 8LL))(v114);
            if ( _InterlockedExchangeAdd(v114 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v114 + 16LL))(v114);
          }
        }
      }
      sub_1400142A4(a1, (__int64)L"WritePhyRegisterSafe(0x9, phy1000BaseTControlValue)", 557, 156, v9);
    }
    else
    {
      v9 = sub_1400441A4(a1, 458784LL);
      if ( v9 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v5 |= 0xC000000u;
          v115 = &unk_1400D44E0;
          v116 = &unk_1400D44E0;
          v117 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                         a1 + 56,
                                         v189)
                          + 16LL);
          if ( v117 )
            v116 = v117;
          v118 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v187);
          LOBYTE(v119) = 2;
          v120 = *(void **)(*(_QWORD *)v118 + 16LL);
          if ( v120 )
            v115 = v120;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            v119,
            14,
            68,
            (__int64)&unk_1400D71E0,
            (__int64)v115,
            (__int64)v116,
            (__int64)L"WritePhyRegisterSafe(phyMultiGigabitAnControlRegister, phyMultiGigabitAnControlValue)",
            v9);
        }
        if ( (v5 & 0x8000000) != 0 )
        {
          v121 = v188;
          v5 &= ~0x8000000u;
          if ( v188 )
          {
            if ( _InterlockedExchangeAdd(v188 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v121 + 8LL))(v121);
              if ( _InterlockedExchangeAdd(v121 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v121 + 16LL))(v121);
            }
          }
        }
        if ( (v5 & 0x4000000) != 0 )
        {
          v122 = v190;
          if ( v190 )
          {
            if ( _InterlockedExchangeAdd(v190 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v122 + 8LL))(v122);
              if ( _InterlockedExchangeAdd(v122 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v122 + 16LL))(v122);
            }
          }
        }
        sub_14003E3A4(
          a1,
          (__int64)L"WritePhyRegisterSafe(phyMultiGigabitAnControlRegister, phyMultiGigabitAnControlValue)",
          558,
          156,
          v9);
      }
      else
      {
        v9 = 0;
      }
    }
  }
LABEL_259:
  v123 = P;
  if ( P )
  {
    sub_140005840((__int64 *)P);
    ExFreePool(v123);
  }
  return v9;
}
