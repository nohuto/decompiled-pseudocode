__int64 __fastcall sub_1400828B0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int16 v4; // r15
  __int64 *v6; // r12
  _QWORD *v7; // rsi
  __int64 *v8; // rdi
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  void *v15; // rdx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  void *v19; // rsi
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // rbx
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  void *v30; // rsi
  void *v31; // rdi
  void *v32; // rax
  __int64 v33; // rax
  void *v34; // rdx
  void *v35; // rax
  volatile signed __int32 *v36; // rdi
  volatile signed __int32 *v37; // rdi
  void *v38; // rdi
  void *v39; // rax
  __int64 v40; // rax
  int v41; // edx
  void *v42; // rax
  volatile signed __int32 *v43; // rbx
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  volatile signed __int32 *v55; // rsi
  __int64 v56; // rbx
  __int64 v57; // rsi
  __int64 v58; // rax
  void *v59; // r13
  void *v60; // rdi
  void *v61; // rax
  __int64 v62; // rax
  int v63; // edx
  void *v64; // rax
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  volatile signed __int32 *v67; // rbx
  volatile signed __int32 *v68; // rbx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // esi
  __int64 *v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  volatile signed __int32 *v82; // rbx
  __int64 v83; // rcx
  void *v84; // rdi
  void *v85; // rbx
  void *v86; // rax
  __int64 v87; // rax
  int v88; // edx
  void *v89; // rax
  volatile signed __int32 *v90; // rbx
  volatile signed __int32 *v91; // rbx
  volatile signed __int32 *v92; // rbx
  volatile signed __int32 *v93; // rbx
  __int64 v94; // rax
  void *v95; // rdi
  void *v96; // rbx
  void *v97; // rax
  __int64 v98; // rax
  int v99; // edx
  void *v100; // rax
  volatile signed __int32 *v101; // rbx
  volatile signed __int32 *v102; // rbx
  __int64 v103; // rbx
  void *v104; // rdi
  void *v105; // rbx
  void *v106; // rax
  __int64 v107; // rax
  int v108; // edx
  void *v109; // rax
  volatile signed __int32 *v110; // rbx
  volatile signed __int32 *v111; // rbx
  volatile signed __int32 *v112; // rbx
  volatile signed __int32 *v113; // rbx
  volatile signed __int32 *v114; // rbx
  unsigned int v115; // [rsp+58h] [rbp-B0h]
  int v116; // [rsp+60h] [rbp-A8h]
  __int64 v117; // [rsp+60h] [rbp-A8h]
  __int64 v118; // [rsp+78h] [rbp-90h] BYREF
  int v119; // [rsp+80h] [rbp-88h]
  _QWORD v120[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v121[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall **v122)(PVOID); // [rsp+A8h] [rbp-60h] BYREF
  PVOID P; // [rsp+B8h] [rbp-50h]
  __int64 v124; // [rsp+C0h] [rbp-48h]
  __int64 v125; // [rsp+C8h] [rbp-40h]
  __int64 (__fastcall **v126)(PVOID); // [rsp+D0h] [rbp-38h] BYREF
  PVOID v127; // [rsp+E0h] [rbp-28h]
  __int64 v128; // [rsp+E8h] [rbp-20h]
  __int64 v129; // [rsp+F0h] [rbp-18h]
  _BYTE v130[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v131; // [rsp+100h] [rbp-8h]
  _BYTE v132[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v133; // [rsp+110h] [rbp+8h]
  _BYTE v134[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v135; // [rsp+120h] [rbp+18h]
  _BYTE v136[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v137; // [rsp+130h] [rbp+28h]
  _BYTE v138[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v139; // [rsp+140h] [rbp+38h]
  _BYTE v140[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v141; // [rsp+150h] [rbp+48h]
  _BYTE v142[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v143; // [rsp+160h] [rbp+58h]
  _BYTE v144[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v145; // [rsp+170h] [rbp+68h]
  _BYTE v146[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v147; // [rsp+180h] [rbp+78h]
  _BYTE v148[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v149; // [rsp+190h] [rbp+88h]
  _BYTE v150[8]; // [rsp+198h] [rbp+90h] BYREF
  volatile signed __int32 *v151; // [rsp+1A0h] [rbp+98h]
  _BYTE v152[8]; // [rsp+1A8h] [rbp+A0h] BYREF
  volatile signed __int32 *v153; // [rsp+1B0h] [rbp+A8h]
  _BYTE v154[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  volatile signed __int32 *v155; // [rsp+1C0h] [rbp+B8h]
  _BYTE v156[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  volatile signed __int32 *v157; // [rsp+1D0h] [rbp+C8h]
  _BYTE v158[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  volatile signed __int32 *v159; // [rsp+1E0h] [rbp+D8h]
  _BYTE v160[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  volatile signed __int32 *v161; // [rsp+1F0h] [rbp+E8h]
  _BYTE v162[8]; // [rsp+1F8h] [rbp+F0h] BYREF
  volatile signed __int32 *v163; // [rsp+200h] [rbp+F8h]
  _BYTE v164[8]; // [rsp+208h] [rbp+100h] BYREF
  volatile signed __int32 *v165; // [rsp+210h] [rbp+108h]
  _BYTE v166[16]; // [rsp+218h] [rbp+110h] BYREF
  PVOID v167; // [rsp+228h] [rbp+120h]
  unsigned int v168; // [rsp+290h] [rbp+188h]

  v168 = a2;
  v4 = 0;
  v6 = 0LL;
  v7 = a4;
  v8 = (__int64 *)a3;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTxQueue::Configure", a1 - 496);
      if ( v10 )
        v6 = v10;
    }
    a2 = v168;
  }
  if ( !*v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v132)
                     + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v130);
      v15 = &unk_1400D98F8;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      LOBYTE(v15) = 2;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        (_DWORD)v15,
        10,
        10,
        (__int64)&unk_1400D98F8,
        (__int64)v11,
        (__int64)v12,
        (__int64)L"txPacketsTransmittedCallback");
      v8 = (__int64 *)a3;
      LOBYTE(v4) = 3;
      v7 = a4;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v131;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v131 )
      {
        if ( _InterlockedExchangeAdd(v131 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v133;
      if ( v133 )
      {
        if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140082350(a1 - 496, (__int64)L"txPacketsTransmittedCallback", 70, 92);
LABEL_43:
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v27 = (volatile signed __int32 *)v8[1];
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    v28 = (volatile signed __int32 *)v7[1];
    if ( v28 && _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return 3221225485LL;
  }
  if ( !*v7 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = &unk_1400D44E0;
      v20 = &unk_1400D44E0;
      v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v136)
                     + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v134);
      LOBYTE(v23) = 2;
      v24 = *(void **)(*(_QWORD *)v22 + 16LL);
      if ( v24 )
        v19 = v24;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v23,
        10,
        11,
        (__int64)&unk_1400D98F8,
        (__int64)v19,
        (__int64)v20,
        (__int64)L"updateCompletePacketsCallback");
      v8 = (__int64 *)a3;
      LOBYTE(v4) = 12;
      v7 = a4;
    }
    if ( (v4 & 8) != 0 )
    {
      v25 = v135;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v135 )
      {
        if ( _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v26 = v137;
      if ( v137 )
      {
        if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_14007A61C(a1 - 496, (__int64)L"updateCompletePacketsCallback", 71, 92);
    goto LABEL_43;
  }
  v30 = &unk_1400D44E0;
  if ( (unsigned int)a2 > 0x8000 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v140)
                     + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v138);
      v34 = &unk_1400D44E0;
      v35 = *(void **)(*(_QWORD *)v33 + 16LL);
      if ( v35 )
        v34 = v35;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        3,
        10,
        12,
        (__int64)&unk_1400D98F8,
        (__int64)v34,
        (__int64)v31,
        (__int64)qword_1400B7720);
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v36 = v139;
      v4 &= ~0x20u;
      if ( v139 )
      {
        if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
          if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v37 = v141;
      v4 &= ~0x10u;
      if ( v141 )
      {
        if ( _InterlockedExchangeAdd(v141 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    v8 = (__int64 *)a3;
    a2 = 0x8000LL;
  }
  v116 = a1 - 496;
  v115 = sub_14012DFB0(a1 - 496, a2);
  if ( v115 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v4) = v4 | 0xC0;
      v38 = &unk_1400D44E0;
      v39 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v144)
                     + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v142);
      LOBYTE(v41) = 2;
      v42 = *(void **)(*(_QWORD *)v40 + 16LL);
      if ( v42 )
        v30 = v42;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v41,
        10,
        13,
        (__int64)&unk_1400D98F8,
        (__int64)v30,
        (__int64)v38,
        (__int64)L"ConfigureQueueLength(queueLength)",
        v115);
    }
    if ( (v4 & 0x80u) != 0 )
    {
      v43 = v143;
      LOBYTE(v4) = v4 & 0x7F;
      if ( v143 )
      {
        if ( _InterlockedExchangeAdd(v143 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v4 & 0x40) != 0 )
    {
      v44 = v145;
      if ( v145 )
      {
        if ( _InterlockedExchangeAdd(v145 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
        }
      }
    }
    sub_140008DF0(a1 - 496, (__int64)L"ConfigureQueueLength(queueLength)", 81, 92, v115);
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v45 = *(volatile signed __int32 **)(a3 + 8);
    if ( v45 )
    {
      if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
      }
    }
    v46 = (volatile signed __int32 *)a4[1];
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
        if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
      }
    }
    return v115;
  }
  v47 = v8[1];
  v48 = *(_QWORD *)(a1 - 88);
  v8[1] = 0LL;
  v120[1] = v47;
  v49 = *v8;
  *v8 = 0LL;
  v50 = *(unsigned int *)(a1 - 136);
  v120[0] = v49;
  v51 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64, _QWORD *, __int64))(*(_QWORD *)v48 + 16LL))(
                     v48,
                     v146,
                     v50,
                     v120,
                     a1 - 496);
  v52 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v51[1];
  v53 = *v51;
  v51[1] = v52;
  v54 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v53;
  *v51 = v54;
  v55 = v147;
  if ( v147 )
  {
    if ( _InterlockedExchangeAdd(v147 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
      if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
    }
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v56 = a1 - 440;
      v4 |= 0x300u;
      v57 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
      v58 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(a1 - 440, v150);
      v59 = &unk_1400D44E0;
      v60 = &unk_1400D44E0;
      v61 = *(void **)(*(_QWORD *)v58 + 16LL);
      if ( v61 )
        v60 = v61;
      v62 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v56 + 24LL))(v56, v148);
      LOBYTE(v63) = 2;
      v64 = *(void **)(*(_QWORD *)v62 + 16LL);
      if ( v64 )
        v59 = v64;
      sub_1400A3320(
        v57,
        v63,
        10,
        14,
        (__int64)&unk_1400D98F8,
        (__int64)v59,
        (__int64)v60,
        (__int64)L"m_interruptControl");
      v8 = (__int64 *)a3;
    }
    if ( (v4 & 0x200) != 0 )
    {
      v65 = v149;
      v4 &= ~0x200u;
      if ( v149 )
      {
        if ( _InterlockedExchangeAdd(v149 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
          if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
        }
      }
    }
    if ( (v4 & 0x100) != 0 )
    {
      v66 = v151;
      if ( v151 )
      {
        if ( _InterlockedExchangeAdd(v151 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
        }
      }
    }
    sub_14002D980(v116, (__int64)L"m_interruptControl", 85, 92);
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v67 = (volatile signed __int32 *)v8[1];
    if ( v67 )
    {
      if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
        if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
      }
    }
    v68 = (volatile signed __int32 *)a4[1];
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
        if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
      }
    }
    return 3221225635LL;
  }
  v69 = *(_QWORD *)(a1 - 40);
  v70 = a4[1];
  a4[1] = 0LL;
  v121[1] = v70;
  v71 = *a4;
  *a4 = 0LL;
  v121[0] = v71;
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v69 + 48LL))(v69, v121);
  v72 = *(_DWORD *)(a1 + 92) * *(_DWORD *)(a1 - 20);
  v73 = *(__int64 **)(a1 - 120);
  LODWORD(v117) = *(_DWORD *)(a1 - 136);
  HIDWORD(v117) = 10;
  v118 = v117;
  v119 = 10;
  sub_1400042F0((__int64)v166, (int *)&v118);
  v74 = *v73;
  v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 440) + 8LL))(a1 - 440);
  v76 = sub_140082134((__int64)&v126, v75, (__int64)L" Descriptors Buffer for queue ");
  v77 = sub_140053644((__int64)&v122, v76, (__int64)v166);
  v78 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, _QWORD, _QWORD, __int64, __int64))(v74 + 16))(
                     v73,
                     v152,
                     v72,
                     *(unsigned int *)(a1 + 92),
                     v77,
                     a1 - 496);
  v79 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v78[1];
  v80 = *v78;
  v78[1] = v79;
  v81 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v80;
  *v78 = v81;
  v82 = v153;
  if ( v153 )
  {
    if ( _InterlockedExchangeAdd(v153 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 8LL))(v82);
      if ( _InterlockedExchangeAdd(v82 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 16LL))(v82);
    }
  }
  v122 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = &off_1400D41D0;
  if ( v127 )
    ExFreePool(v127);
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  if ( v167 )
    ExFreePool(v167);
  v83 = *(_QWORD *)(a1 + 16);
  if ( !v83 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0xC00u;
      v84 = &unk_1400D44E0;
      v85 = &unk_1400D44E0;
      v86 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v156)
                     + 16LL);
      if ( v86 )
        v85 = v86;
      v87 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v154);
      LOBYTE(v88) = 2;
      v89 = *(void **)(*(_QWORD *)v87 + 16LL);
      if ( v89 )
        v84 = v89;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v88,
        10,
        15,
        (__int64)&unk_1400D98F8,
        (__int64)v84,
        (__int64)v85,
        (__int64)L"m_descriptorsBuffer");
    }
    if ( (v4 & 0x800) != 0 )
    {
      v90 = v155;
      v4 &= ~0x800u;
      if ( v155 )
      {
        if ( _InterlockedExchangeAdd(v155 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
          if ( _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 16LL))(v90);
        }
      }
    }
    if ( (v4 & 0x400) != 0 )
    {
      v91 = v157;
      if ( v157 )
      {
        if ( _InterlockedExchangeAdd(v157 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
          if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 16LL))(v91);
        }
      }
    }
    sub_14000B444(a1 - 496, (__int64)L"m_descriptorsBuffer", 95, 92);
    goto LABEL_160;
  }
  v94 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 8LL))(v83);
  *(_QWORD *)(a1 + 48) = v94;
  if ( !v94 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v4 |= 0x3000u;
      v95 = &unk_1400D44E0;
      v96 = &unk_1400D44E0;
      v97 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                    a1 - 440,
                                    v160)
                     + 16LL);
      if ( v97 )
        v96 = v97;
      v98 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v158);
      LOBYTE(v99) = 2;
      v100 = *(void **)(*(_QWORD *)v98 + 16LL);
      if ( v100 )
        v95 = v100;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        v99,
        10,
        16,
        (__int64)&unk_1400D98F8,
        (__int64)v95,
        (__int64)v96,
        (__int64)L"m_hardwareDescriptors");
    }
    if ( (v4 & 0x2000) != 0 )
    {
      v101 = v159;
      v4 &= ~0x2000u;
      if ( v159 )
      {
        if ( _InterlockedExchangeAdd(v159 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v101 + 8LL))(v101);
          if ( _InterlockedExchangeAdd(v101 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v101 + 16LL))(v101);
        }
      }
    }
    if ( (v4 & 0x1000) != 0 )
    {
      v102 = v161;
      if ( v161 )
      {
        if ( _InterlockedExchangeAdd(v161 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
          if ( _InterlockedExchangeAdd(v102 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 16LL))(v102);
        }
      }
    }
    sub_14000B51C(a1 - 496, (__int64)L"m_hardwareDescriptors", 98, 92);
LABEL_160:
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v92 = *(volatile signed __int32 **)(a3 + 8);
    if ( v92 )
    {
      if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
        if ( _InterlockedExchangeAdd(v92 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 16LL))(v92);
      }
    }
    v93 = (volatile signed __int32 *)a4[1];
    if ( !v93 )
      return 3221225495LL;
    if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 8LL))(v93);
    if ( _InterlockedExchangeAdd(v93 + 3, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    goto LABEL_217;
  }
  v103 = *(unsigned int *)(a1 - 20);
  if ( *(_QWORD *)(a1 + 72) != v103 )
  {
    if ( !(unsigned int)sub_140084234(a1 + 56, (unsigned int)v103) )
      *(_QWORD *)(a1 + 72) = v103;
    if ( *(_QWORD *)(a1 + 72) != v103 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v4 |= 0xC000u;
        v104 = &unk_1400D44E0;
        v105 = &unk_1400D44E0;
        v106 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                       a1 - 440,
                                       v164)
                        + 16LL);
        if ( v106 )
          v105 = v106;
        v107 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v162);
        LOBYTE(v108) = 2;
        v109 = *(void **)(*(_QWORD *)v107 + 16LL);
        if ( v109 )
          v104 = v109;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
          v108,
          10,
          17,
          (__int64)&unk_1400D98F8,
          (__int64)v104,
          (__int64)v105,
          (__int64)L"ResizeVector(m_localDescriptors, m_queueLength)",
          23);
      }
      if ( v4 < 0 )
      {
        v110 = v163;
        v4 &= ~0x8000u;
        if ( v163 )
        {
          if ( _InterlockedExchangeAdd(v163 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v110 + 8LL))(v110);
            if ( _InterlockedExchangeAdd(v110 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v110 + 16LL))(v110);
          }
        }
      }
      if ( (v4 & 0x4000) != 0 )
      {
        v111 = v165;
        if ( v165 )
        {
          if ( _InterlockedExchangeAdd(v165 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v111 + 8LL))(v111);
            if ( _InterlockedExchangeAdd(v111 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v111 + 16LL))(v111);
          }
        }
      }
      sub_14000F278(a1 - 496, (__int64)L"ResizeVector(m_localDescriptors, m_queueLength)", 101, 92, 0xC0000017);
      if ( v6 )
      {
        sub_14000BFA4(v6);
        ExFreePool(v6);
      }
      v112 = *(volatile signed __int32 **)(a3 + 8);
      if ( v112 )
      {
        if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v112 + 8LL))(v112);
          if ( _InterlockedExchangeAdd(v112 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v112 + 16LL))(v112);
        }
      }
      v93 = (volatile signed __int32 *)a4[1];
      if ( !v93 )
        return 3221225495LL;
      if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 8LL))(v93);
      if ( _InterlockedExchangeAdd(v93 + 3, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
LABEL_217:
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v93 + 16LL))(v93);
      return 3221225495LL;
    }
  }
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  v113 = *(volatile signed __int32 **)(a3 + 8);
  if ( v113 )
  {
    if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v113 + 8LL))(v113);
      if ( _InterlockedExchangeAdd(v113 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v113 + 16LL))(v113);
    }
  }
  v114 = (volatile signed __int32 *)a4[1];
  if ( v114 )
  {
    if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v114 + 8LL))(v114);
      if ( _InterlockedExchangeAdd(v114 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v114 + 16LL))(v114);
    }
  }
  return 0LL;
}
