__int64 __fastcall sub_14012F340(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  __int64 *v5; // rdi
  int v7; // r15d
  __int64 *v8; // r12
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  const wchar_t *v17; // rsi
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rbx
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  __int64 v28; // rax
  const wchar_t *v29; // rdx
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  volatile signed __int32 *v42; // rcx
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  const wchar_t *v49; // rdi
  const wchar_t *v50; // rax
  __int64 v51; // rsi
  const wchar_t *v52; // rax
  const wchar_t *v53; // rcx
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  unsigned int v56; // esi
  volatile signed __int32 *v57; // rbx
  unsigned int v58; // esi
  __int64 *v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  volatile signed __int32 *v68; // rbx
  __int64 v69; // rcx
  const wchar_t *v70; // rsi
  const wchar_t *v71; // rbx
  const wchar_t *v72; // rax
  __int64 v73; // rdi
  const wchar_t *v74; // rax
  volatile signed __int32 *v75; // rbx
  volatile signed __int32 *v76; // rbx
  volatile signed __int32 *v77; // rbx
  __int64 v78; // rax
  const wchar_t *v79; // rsi
  const wchar_t *v80; // rbx
  const wchar_t *v81; // rax
  __int64 v82; // rdi
  const wchar_t *v83; // rax
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  const wchar_t *v86; // rdi
  const wchar_t *v87; // rbx
  const wchar_t *v88; // rax
  const wchar_t *v89; // rax
  volatile signed __int32 *v90; // rbx
  volatile signed __int32 *v91; // rbx
  int v92; // edi
  const wchar_t *v93; // rsi
  const wchar_t *v94; // rbx
  const wchar_t *v95; // rax
  __int64 v96; // rdi
  const wchar_t *v97; // rax
  volatile signed __int32 *v98; // rbx
  volatile signed __int32 *v99; // rbx
  unsigned int v100; // eax
  __int64 v101; // rcx
  __int64 v102; // rbx
  volatile signed __int32 *v103; // rbx
  volatile signed __int32 *v104; // [rsp+58h] [rbp-B0h]
  unsigned int v105; // [rsp+58h] [rbp-B0h]
  __int64 v106; // [rsp+58h] [rbp-B0h]
  __int64 v107; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v108; // [rsp+70h] [rbp-98h]
  __int64 v109; // [rsp+78h] [rbp-90h]
  __int64 v110; // [rsp+88h] [rbp-80h] BYREF
  int v111; // [rsp+90h] [rbp-78h]
  __int64 (__fastcall **v112)(PVOID); // [rsp+98h] [rbp-70h] BYREF
  __int16 v113; // [rsp+A0h] [rbp-68h]
  PVOID v114; // [rsp+A8h] [rbp-60h]
  __int64 v115; // [rsp+B0h] [rbp-58h]
  __int64 v116; // [rsp+B8h] [rbp-50h]
  _QWORD v117[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 (__fastcall **v118)(PVOID); // [rsp+D0h] [rbp-38h] BYREF
  PVOID P; // [rsp+E0h] [rbp-28h]
  __int64 v120; // [rsp+E8h] [rbp-20h]
  __int64 v121; // [rsp+F0h] [rbp-18h]
  __int64 (__fastcall **v122)(PVOID); // [rsp+F8h] [rbp-10h] BYREF
  PVOID v123; // [rsp+108h] [rbp+0h]
  __int64 v124; // [rsp+110h] [rbp+8h]
  __int64 v125; // [rsp+118h] [rbp+10h]
  char v126[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v127; // [rsp+128h] [rbp+20h]
  char v128[8]; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v129; // [rsp+138h] [rbp+30h]
  char v130[8]; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v131; // [rsp+148h] [rbp+40h]
  char v132[8]; // [rsp+150h] [rbp+48h] BYREF
  volatile signed __int32 *v133; // [rsp+158h] [rbp+50h]
  char v134[8]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v135; // [rsp+168h] [rbp+60h]
  char v136[8]; // [rsp+170h] [rbp+68h] BYREF
  volatile signed __int32 *v137; // [rsp+178h] [rbp+70h]
  char v138[8]; // [rsp+180h] [rbp+78h] BYREF
  volatile signed __int32 *v139; // [rsp+188h] [rbp+80h]
  char v140[8]; // [rsp+190h] [rbp+88h] BYREF
  volatile signed __int32 *v141; // [rsp+198h] [rbp+90h]
  char v142[8]; // [rsp+1A0h] [rbp+98h] BYREF
  volatile signed __int32 *v143; // [rsp+1A8h] [rbp+A0h]
  char v144[8]; // [rsp+1B0h] [rbp+A8h] BYREF
  volatile signed __int32 *v145; // [rsp+1B8h] [rbp+B0h]
  char v146[8]; // [rsp+1C0h] [rbp+B8h] BYREF
  volatile signed __int32 *v147; // [rsp+1C8h] [rbp+C0h]
  char v148[8]; // [rsp+1D0h] [rbp+C8h] BYREF
  volatile signed __int32 *v149; // [rsp+1D8h] [rbp+D0h]
  char v150[8]; // [rsp+1E0h] [rbp+D8h] BYREF
  volatile signed __int32 *v151; // [rsp+1E8h] [rbp+E0h]
  char v152[8]; // [rsp+1F0h] [rbp+E8h] BYREF
  volatile signed __int32 *v153; // [rsp+1F8h] [rbp+F0h]
  char v154[8]; // [rsp+200h] [rbp+F8h] BYREF
  volatile signed __int32 *v155; // [rsp+208h] [rbp+100h]
  char v156[8]; // [rsp+210h] [rbp+108h] BYREF
  volatile signed __int32 *v157; // [rsp+218h] [rbp+110h]
  char v158[8]; // [rsp+220h] [rbp+118h] BYREF
  volatile signed __int32 *v159; // [rsp+228h] [rbp+120h]
  char v160[8]; // [rsp+230h] [rbp+128h] BYREF
  volatile signed __int32 *v161; // [rsp+238h] [rbp+130h]
  char v162[8]; // [rsp+240h] [rbp+138h] BYREF
  volatile signed __int32 *v163; // [rsp+248h] [rbp+140h]
  char v164[8]; // [rsp+250h] [rbp+148h] BYREF
  volatile signed __int32 *v165; // [rsp+258h] [rbp+150h]
  _BYTE v166[16]; // [rsp+260h] [rbp+158h] BYREF
  PVOID v167; // [rsp+270h] [rbp+168h]
  unsigned int v168; // [rsp+2D0h] [rbp+1C8h]
  unsigned int v170; // [rsp+2D8h] [rbp+1D0h]

  v168 = a2;
  v5 = (__int64 *)a4;
  v7 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxQueue::Configure", a1 - 496);
      if ( v10 )
        v8 = v10;
    }
    a2 = v168;
  }
  if ( !a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v128)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v126)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xAu,
        (__int64)&unk_1400D9908,
        v11,
        v12,
        L"descriptorsQueue");
      v5 = (__int64 *)a4;
      LOBYTE(v7) = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v15 = v127;
      LOBYTE(v7) = v7 & 0xFD;
      if ( v127 )
      {
        if ( _InterlockedExchangeAdd(v127 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v16 = v129;
      if ( v129 )
      {
        if ( _InterlockedExchangeAdd(v129 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000B294(a1 - 496, (__int64)L"descriptorsQueue", 72, 90);
LABEL_43:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v23 = (volatile signed __int32 *)v5[1];
    if ( v23 && _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return 3221225485LL;
  }
  if ( !*v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v132)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v130)
                              + 16LL);
      if ( v20 )
        v17 = v20;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xBu,
        (__int64)&unk_1400D9908,
        v17,
        v18,
        L"rxPacketsAvailableCallback");
      v5 = (__int64 *)a4;
      LOBYTE(v7) = 12;
    }
    if ( (v7 & 8) != 0 )
    {
      v21 = v131;
      LOBYTE(v7) = v7 & 0xF7;
      if ( v131 )
      {
        if ( _InterlockedExchangeAdd(v131 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v22 = v133;
      if ( v133 )
      {
        if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    sub_140019600(a1 - 496, (__int64)L"rxPacketsAvailableCallback", 73, 90);
    goto LABEL_43;
  }
  v25 = (const wchar_t *)&unk_1400D44E0;
  if ( a2 > 0x8000 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v136)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(a1 - 440, v134);
      v29 = (const wchar_t *)&unk_1400D44E0;
      v30 = *(const wchar_t **)(*(_QWORD *)v28 + 16LL);
      if ( v30 )
        v29 = v30;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        3u,
        0xAu,
        0xCu,
        (__int64)&unk_1400D9908,
        v29,
        v26,
        (const wchar_t *)qword_14014EC70);
      v7 = 48;
    }
    if ( (v7 & 0x20) != 0 )
    {
      v31 = v135;
      v7 &= ~0x20u;
      if ( v135 )
      {
        if ( _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      v32 = v137;
      v7 &= ~0x10u;
      if ( v137 )
      {
        if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    v5 = (__int64 *)a4;
    v168 = 0x8000;
  }
  v33 = v5[1];
  v34 = *(__int64 **)(a1 - 88);
  v5[1] = 0LL;
  v117[1] = v33;
  v35 = *v5;
  *v5 = 0LL;
  v36 = *(unsigned int *)(a1 - 136);
  v117[0] = v35;
  v37 = *v34;
  v109 = a1 - 496;
  v38 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, char *, __int64, _QWORD *, __int64))(v37 + 8))(
                     v34,
                     v138,
                     v36,
                     v117,
                     a1 - 496);
  v39 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v38[1];
  v40 = *v38;
  v38[1] = v39;
  v41 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v40;
  *v38 = v41;
  v42 = v139;
  v104 = v139;
  if ( v139 )
  {
    if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
      if ( _InterlockedExchangeAdd(v104 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 16LL))(v104);
    }
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v7) = v7 | 0xC0;
      v43 = (const wchar_t *)&unk_1400D44E0;
      v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v142)
                              + 16LL);
      if ( v44 )
        v43 = v44;
      v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v140)
                              + 16LL);
      if ( v45 )
        v25 = v45;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
        2u,
        0xAu,
        0xDu,
        (__int64)&unk_1400D9908,
        v25,
        v43,
        L"m_interruptControl");
      v5 = (__int64 *)a4;
    }
    if ( (v7 & 0x80u) != 0 )
    {
      v46 = v141;
      LOBYTE(v7) = v7 & 0x7F;
      if ( v141 )
      {
        if ( _InterlockedExchangeAdd(v141 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      v47 = v143;
      if ( v143 )
      {
        if ( _InterlockedExchangeAdd(v143 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    sub_14002D980(a1 - 496, (__int64)L"m_interruptControl", 84, 90);
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v48 = (volatile signed __int32 *)v5[1];
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    return 3221225635LL;
  }
  v105 = sub_14012DFB0(a1 - 496, v168);
  if ( v105 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v7) = v7 | 0x300;
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v144)
                              + 16LL);
      if ( v50 )
        v49 = v50;
      v51 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
      v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v146)
                              + 16LL);
      v53 = (const wchar_t *)&unk_1400D44E0;
      if ( v52 )
        v53 = v52;
      sub_1400A5E80(v51, 2u, 0xAu, 0xEu, (__int64)&unk_1400D9908, v49, v53, L"ConfigureQueueLength(queueLength)");
      v5 = (__int64 *)a4;
    }
    if ( (v7 & 0x200) != 0 )
    {
      v54 = v145;
      LOWORD(v7) = v7 & 0xFDFF;
      if ( v145 )
      {
        if ( _InterlockedExchangeAdd(v145 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( (v7 & 0x100) != 0 )
    {
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
    }
    v56 = v105;
    sub_140008DF0(a1 - 496, (__int64)L"ConfigureQueueLength(queueLength)", 87, 90, v105);
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v57 = (volatile signed __int32 *)v5[1];
LABEL_116:
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    return v56;
  }
  v58 = *(_DWORD *)(a1 + 16) * *(_DWORD *)(a1 - 20);
  v59 = *(__int64 **)(a1 - 120);
  LODWORD(v106) = *(_DWORD *)(a1 - 136);
  HIDWORD(v106) = 10;
  v110 = v106;
  v111 = 10;
  sub_1400042F0((__int64)v166, (int *)&v110);
  v60 = *v59;
  v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 440) + 8LL))(a1 - 440);
  v62 = sub_140082134((__int64)&v122, v61, (__int64)L" Descriptors Buffer for queue ");
  v63 = sub_140053644((__int64)&v118, v62, (__int64)v166);
  v64 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, __int64, __int64))(v60 + 16))(
                     v59,
                     v148,
                     v58,
                     *(unsigned int *)(a1 + 16),
                     v63,
                     a1 - 496);
  v65 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v64[1];
  v66 = *v64;
  v64[1] = v65;
  v67 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v66;
  *v64 = v67;
  v68 = v149;
  if ( v149 )
  {
    if ( _InterlockedExchangeAdd(v149 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
    }
  }
  v118 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v120 = 0LL;
  v121 = 0LL;
  v122 = &off_1400D41D0;
  if ( v123 )
    ExFreePool(v123);
  v123 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  if ( v167 )
    ExFreePool(v167);
  v69 = *(_QWORD *)(a1 + 40);
  if ( !v69 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v7) = v7 | 0xC00;
      v70 = (const wchar_t *)&unk_1400D44E0;
      v71 = (const wchar_t *)&unk_1400D44E0;
      v72 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v150)
                              + 16LL);
      if ( v72 )
        v71 = v72;
      v73 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
      v74 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v152)
                              + 16LL);
      if ( v74 )
        v70 = v74;
      sub_1400A3320(v73, 2u, 0xAu, 0xFu, (__int64)&unk_1400D9908, v71, v70, L"m_descriptorsBuffer");
    }
    if ( (v7 & 0x800) != 0 )
    {
      v75 = v151;
      LOWORD(v7) = v7 & 0xF7FF;
      if ( v151 )
      {
        if ( _InterlockedExchangeAdd(v151 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
          if ( _InterlockedExchangeAdd(v75 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
        }
      }
    }
    if ( (v7 & 0x400) != 0 )
    {
      v76 = v153;
      if ( v153 )
      {
        if ( _InterlockedExchangeAdd(v153 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 8LL))(v76);
          if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
        }
      }
    }
    sub_14000B444(a1 - 496, (__int64)L"m_descriptorsBuffer", 95, 90);
    goto LABEL_149;
  }
  v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 8LL))(v69);
  *(_QWORD *)(a1 + 56) = v78;
  if ( !v78 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v7) = v7 | 0x3000;
      v79 = (const wchar_t *)&unk_1400D44E0;
      v80 = (const wchar_t *)&unk_1400D44E0;
      v81 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v154)
                              + 16LL);
      if ( v81 )
        v80 = v81;
      v82 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
      v83 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v156)
                              + 16LL);
      if ( v83 )
        v79 = v83;
      sub_1400A3320(v82, 2u, 0xAu, 0x10u, (__int64)&unk_1400D9908, v80, v79, L"m_hardwareDescriptors");
    }
    if ( (v7 & 0x2000) != 0 )
    {
      v84 = v155;
      LOWORD(v7) = v7 & 0xDFFF;
      if ( v155 )
      {
        if ( _InterlockedExchangeAdd(v155 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
          if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
        }
      }
    }
    if ( (v7 & 0x1000) != 0 )
    {
      v85 = v157;
      if ( v157 )
      {
        if ( _InterlockedExchangeAdd(v157 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
          if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
        }
      }
    }
    sub_14000B51C(a1 - 496, (__int64)L"m_hardwareDescriptors", 98, 90);
LABEL_149:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v77 = *(volatile signed __int32 **)(a4 + 8);
    if ( !v77 )
      return 3221225495LL;
    if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
    if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    goto LABEL_198;
  }
  if ( *(_QWORD *)(a1 + 80) != v168 )
  {
    if ( !(unsigned int)sub_140086F8C((_QWORD *)(a1 + 64), v168) )
      *(_QWORD *)(a1 + 80) = v168;
    if ( *(_QWORD *)(a1 + 80) != v168 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOWORD(v7) = v7 | 0xC000;
        v86 = (const wchar_t *)&unk_1400D44E0;
        v87 = (const wchar_t *)&unk_1400D44E0;
        v88 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                               a1 - 440,
                                               v160)
                                + 16LL);
        if ( v88 )
          v87 = v88;
        v89 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                               a1 - 440,
                                               v158)
                                + 16LL);
        if ( v89 )
          v86 = v89;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL),
          2u,
          0xAu,
          0x11u,
          (__int64)&unk_1400D9908,
          v86,
          v87,
          L"ResizeVector(m_netAdapterDescriptors, queueLength)");
      }
      if ( (v7 & 0x8000) != 0 )
      {
        v90 = v159;
        LOWORD(v7) = v7 & 0x7FFF;
        if ( v159 )
        {
          if ( _InterlockedExchangeAdd(v159 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
            if ( _InterlockedExchangeAdd(v90 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 16LL))(v90);
          }
        }
      }
      if ( (v7 & 0x4000) != 0 )
      {
        v91 = v161;
        if ( v161 )
        {
          if ( _InterlockedExchangeAdd(v161 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 8LL))(v91);
            if ( _InterlockedExchangeAdd(v91 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v91 + 16LL))(v91);
          }
        }
      }
      sub_14000F3C4(a1 - 496, (__int64)L"ResizeVector(m_netAdapterDescriptors, queueLength)", 100, 90, 0xC0000017);
      if ( v8 )
      {
        sub_14000BFA4(v8);
        ExFreePool(v8);
      }
      v77 = *(volatile signed __int32 **)(a4 + 8);
      if ( !v77 )
        return 3221225495LL;
      if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
      if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
LABEL_198:
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 16LL))(v77);
      return 3221225495LL;
    }
  }
  v92 = a1 - 496;
  *a3 = *(_QWORD *)(a1 + 72);
  v170 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 496) + 56LL))(a1 - 496);
  v56 = v170;
  if ( v170 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 |= 0x30000u;
      v93 = (const wchar_t *)&unk_1400D44E0;
      v94 = (const wchar_t *)&unk_1400D44E0;
      v95 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 24LL))(
                                             a1 - 440,
                                             v162)
                              + 16LL);
      if ( v95 )
        v94 = v95;
      v96 = *(_QWORD *)(*(_QWORD *)(a1 - 320) + 16LL);
      v97 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 - 440) + 16LL))(
                                             a1 - 440,
                                             v164)
                              + 16LL);
      if ( v97 )
        v93 = v97;
      sub_1400A5E80(v96, 2u, 0xAu, 0x12u, (__int64)&unk_1400D9908, v94, v93, L"EnableVlan()");
      v92 = v109;
      v56 = v170;
    }
    if ( (v7 & 0x20000) != 0 )
    {
      v98 = v163;
      v7 &= ~0x20000u;
      if ( v163 )
      {
        if ( _InterlockedExchangeAdd(v163 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 8LL))(v98);
          if ( _InterlockedExchangeAdd(v98 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v98 + 16LL))(v98);
        }
      }
    }
    if ( (v7 & 0x10000) != 0 )
    {
      v99 = v165;
      if ( v165 )
      {
        if ( _InterlockedExchangeAdd(v165 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v99 + 8LL))(v99);
          if ( _InterlockedExchangeAdd(v99 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v99 + 16LL))(v99);
        }
      }
    }
    sub_14000AD10(v92, (__int64)L"EnableVlan()", 103, 90, v56);
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v57 = *(volatile signed __int32 **)(a4 + 8);
    goto LABEL_116;
  }
  v112 = &off_1400D41D0;
  v113 = 0;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  sub_1400011A8(&v112, (__int64)L"DynamicLtrIntervalCheckMsec", 0x1BuLL);
  sub_1400A27D4(&v107, (__int64 *)(a1 - 384));
  v100 = sub_14004BEA4(v107, (__int64)&v112, v107 + 376);
  v101 = v108;
  *(_QWORD *)(a1 + 112) = v100;
  if ( v101 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v101 + 8), 0xFFFFFFFF) == 1 )
    {
      v102 = v108;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 8LL))(v108);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v102 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
    }
  }
  if ( v114 )
    ExFreePool(v114);
  if ( v8 )
  {
    sub_14000BFA4(v8);
    ExFreePool(v8);
  }
  v103 = *(volatile signed __int32 **)(a4 + 8);
  if ( v103 )
  {
    if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v103 + 8LL))(v103);
      if ( _InterlockedExchangeAdd(v103 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v103 + 16LL))(v103);
    }
  }
  return 0LL;
}
