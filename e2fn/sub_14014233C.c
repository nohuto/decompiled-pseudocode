__int64 __fastcall sub_14014233C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // r15d
  PVOID v9; // r14
  _QWORD *Pool2; // rax
  _QWORD *v11; // rax
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdi
  volatile signed __int32 *v16; // rbx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  const wchar_t *v27; // r14
  const wchar_t *v28; // rdi
  const wchar_t *v29; // rax
  __int64 v30; // rax
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v35; // rax
  void *v36; // rsi
  const wchar_t *v37; // rdi
  const wchar_t *v38; // rax
  __int64 v39; // rax
  const wchar_t *v40; // rdx
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rbx
  volatile signed __int32 *v43; // rbx
  const wchar_t *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  void *v47; // rbx
  __int64 v48; // rax
  const wchar_t *v49; // rdx
  const wchar_t *v50; // rax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  const wchar_t *v53; // rsi
  const wchar_t *v54; // rax
  const wchar_t *v55; // rdi
  const wchar_t *v56; // rax
  __int64 v57; // rbx
  void *v58; // rdx
  void *v59; // rax
  volatile signed __int32 *v60; // rbx
  volatile signed __int32 *v61; // rbx
  const wchar_t *v62; // rdi
  const wchar_t *v63; // rax
  __int64 v64; // rax
  const wchar_t *v65; // rdx
  const wchar_t *v66; // rax
  volatile signed __int32 *v67; // rbx
  volatile signed __int32 *v68; // rbx
  const wchar_t *v69; // rdi
  const wchar_t *v70; // rax
  const wchar_t *v71; // rax
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  const wchar_t *v74; // rsi
  const wchar_t *v75; // rdi
  const wchar_t *v76; // rax
  const wchar_t *v77; // rax
  volatile signed __int32 *v78; // rbx
  volatile signed __int32 *v79; // rbx
  int v81; // [rsp+50h] [rbp-B0h] BYREF
  int v82; // [rsp+54h] [rbp-ACh] BYREF
  PVOID v83; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v84; // [rsp+60h] [rbp-A0h]
  __int64 v85; // [rsp+68h] [rbp-98h] BYREF
  __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v88; // [rsp+80h] [rbp-80h]
  _QWORD v89[4]; // [rsp+90h] [rbp-70h] BYREF
  int v90; // [rsp+B0h] [rbp-50h]
  BOOL v91; // [rsp+B4h] [rbp-4Ch]
  int v92; // [rsp+B8h] [rbp-48h]
  __int64 v93; // [rsp+BCh] [rbp-44h]
  char v94; // [rsp+C4h] [rbp-3Ch]
  __int16 v95; // [rsp+C5h] [rbp-3Bh]
  char v96; // [rsp+C7h] [rbp-39h]
  __int64 v97; // [rsp+C8h] [rbp-38h]
  __int64 v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+D8h] [rbp-28h]
  __int64 v100; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall **v101)(PVOID); // [rsp+F0h] [rbp-10h] BYREF
  __int16 v102; // [rsp+F8h] [rbp-8h]
  PVOID P; // [rsp+100h] [rbp+0h]
  __int64 v104; // [rsp+108h] [rbp+8h]
  __int64 v105; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall **v106)(PVOID); // [rsp+118h] [rbp+18h] BYREF
  __int16 v107; // [rsp+120h] [rbp+20h]
  PVOID v108; // [rsp+128h] [rbp+28h]
  __int64 v109; // [rsp+130h] [rbp+30h]
  __int64 v110; // [rsp+138h] [rbp+38h]
  _BYTE v111[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v112; // [rsp+148h] [rbp+48h]
  _BYTE v113[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v114; // [rsp+158h] [rbp+58h]
  _BYTE v115[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v116; // [rsp+168h] [rbp+68h]
  _BYTE v117[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v118; // [rsp+178h] [rbp+78h]
  _BYTE v119[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v120; // [rsp+188h] [rbp+88h]
  _BYTE v121[8]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v122; // [rsp+198h] [rbp+98h]
  _BYTE v123[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  volatile signed __int32 *v124; // [rsp+1A8h] [rbp+A8h]
  _BYTE v125[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  volatile signed __int32 *v126; // [rsp+1B8h] [rbp+B8h]
  _BYTE v127[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  volatile signed __int32 *v128; // [rsp+1C8h] [rbp+C8h]
  _BYTE v129[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  volatile signed __int32 *v130; // [rsp+1D8h] [rbp+D8h]
  _BYTE v131[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  volatile signed __int32 *v132; // [rsp+1E8h] [rbp+E8h]
  _BYTE v133[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  volatile signed __int32 *v134; // [rsp+1F8h] [rbp+F8h]
  _BYTE v135[8]; // [rsp+200h] [rbp+100h] BYREF
  volatile signed __int32 *v136; // [rsp+208h] [rbp+108h]
  __int64 (__fastcall **v137)(PVOID); // [rsp+210h] [rbp+110h] BYREF
  PVOID v138; // [rsp+220h] [rbp+120h]
  __int64 (__fastcall **v139)(PVOID); // [rsp+238h] [rbp+138h] BYREF
  PVOID v140; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall **v141)(PVOID); // [rsp+260h] [rbp+160h] BYREF
  PVOID v142; // [rsp+270h] [rbp+170h]
  int v143; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int64 v144; // [rsp+2D8h] [rbp+1D8h]

  v144 = a2;
  v143 = 0;
  v8 = 0;
  v83 = 0LL;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::AdvertiseCapabilities", a1);
      if ( v11 )
        v9 = v11;
      v83 = v9;
    }
  }
  v102 = 0;
  v101 = &off_1400D41D0;
  P = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  sub_1400011A8(&v101, (__int64)L"*RSS", 4uLL);
  sub_1400A27D4(&v85, (__int64 *)(a1 + 112));
  v12 = sub_14003E2F0(v85, (__int64)&v101, v85 + 16);
  v13 = v86;
  *(_BYTE *)(a1 + 384) = v12;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
    {
      v14 = v86;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 8LL))(v86);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v86 + 16LL))(v86);
    }
  }
  if ( P )
    ExFreePool(P);
  if ( *(_BYTE *)(a1 + 384) )
  {
    v107 = 0;
    v106 = &off_1400D41D0;
    v108 = 0LL;
    v109 = 0LL;
    v110 = 0LL;
    sub_1400011A8(&v106, (__int64)L"*NumRssQueues", 0xDuLL);
    sub_1400A27D4(&v87, (__int64 *)(a1 + 112));
    v15 = (unsigned int)sub_14004BEA4(v87, (__int64)&v106, v87 + 376);
    if ( v88 )
    {
      if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v88;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 8LL))(v88);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v88 + 16LL))(v88);
      }
    }
    if ( v108 )
      ExFreePool(v108);
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 40LL))(*(_QWORD *)(a1 + 368));
    v18 = *(_QWORD *)(a1 + 368);
    v81 = v17;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    v20 = *(_QWORD *)(a1 + 368);
    v143 = v19;
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
    v82 = v21;
    if ( !v143 || (v22 = 1, v143 != 1) )
      v22 = 0;
    v90 = v22;
    v91 = (v21 & 1) != 0;
    v95 = 0;
    v96 = 0;
    v89[0] = 88LL;
    v89[1] = v15;
    v23 = sub_140143A80(a1, &v81);
    v24 = *(_QWORD *)(a1 + 368);
    v92 = v23;
    v97 = v144;
    v100 = a5;
    v93 = 0LL;
    v98 = a3;
    v99 = a4;
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v26 = *(_QWORD *)(a1 + 368);
    v89[2] = v25;
    v94 = 1;
    v89[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
    v27 = (const wchar_t *)&unk_1400D44E0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = (const wchar_t *)&unk_1400D44E0;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v113)
                              + 16LL);
      if ( v29 )
        v28 = v29;
      v30 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v111);
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)v30 + 16LL);
      if ( v32 )
        v31 = v32;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xDu,
        0xCu,
        (__int64)&unk_1400D9F78,
        v31,
        v28,
        (const wchar_t *)qword_14014EC70);
      LOWORD(v8) = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v33 = v112;
      LOWORD(v8) = v8 & 0xFFFD;
      if ( v112 )
      {
        if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v34 = v114;
      LOWORD(v8) = v8 & 0xFFFE;
      if ( v114 )
      {
        if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v8) = v8 | 0x1C;
      v35 = sub_14008155C((__int64)&v137, (char *)&v82);
      v36 = &unk_1400D44E0;
      if ( *(_QWORD *)(v35 + 16) )
        v36 = *(void **)(v35 + 16);
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v117)
                              + 16LL);
      if ( v38 )
        v37 = v38;
      v39 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v115);
      v40 = (const wchar_t *)&unk_1400D44E0;
      v41 = *(const wchar_t **)(*(_QWORD *)v39 + 16LL);
      if ( v41 )
        v40 = v41;
      sub_1400A9338(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0xDu,
        (__int64)&unk_1400D9F78,
        v40,
        v37,
        (const wchar_t *)qword_14014EC70,
        (__int64)v36);
    }
    if ( (v8 & 0x10) != 0 )
    {
      v42 = v116;
      LOWORD(v8) = v8 & 0xFFEF;
      if ( v116 )
      {
        if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    if ( (v8 & 8) != 0 )
    {
      v43 = v118;
      LOWORD(v8) = v8 & 0xFFF7;
      if ( v118 )
      {
        if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
          if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
      }
    }
    if ( (v8 & 4) != 0 )
    {
      LOWORD(v8) = v8 & 0xFFFB;
      v137 = &off_1400D41D0;
      if ( v138 )
        ExFreePool(v138);
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v8) = v8 | 0xE0;
      v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v119)
                              + 16LL);
      if ( v44 )
        v27 = v44;
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v46 = sub_1400820C8((__int64)&v139, &v143);
      v47 = &unk_1400D44E0;
      if ( *(_QWORD *)(v46 + 16) )
        v47 = *(void **)(v46 + 16);
      v48 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v121);
      v49 = (const wchar_t *)&unk_1400D44E0;
      v50 = *(const wchar_t **)(*(_QWORD *)v48 + 16LL);
      if ( v50 )
        v49 = v50;
      sub_1400A9338(
        v45,
        4u,
        0xBu,
        0xEu,
        (__int64)&unk_1400D9F78,
        v27,
        v49,
        (const wchar_t *)qword_14014EC70,
        (__int64)v47);
      v27 = (const wchar_t *)&unk_1400D44E0;
    }
    if ( (v8 & 0x80u) != 0 )
    {
      v51 = v120;
      LOWORD(v8) = v8 & 0xFF7F;
      if ( v120 )
      {
        if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    if ( (v8 & 0x40) != 0 )
    {
      v52 = v122;
      LOWORD(v8) = v8 & 0xFFBF;
      if ( v122 )
      {
        if ( _InterlockedExchangeAdd(v122 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    if ( (v8 & 0x20) != 0 )
    {
      LOWORD(v8) = v8 & 0xFFDF;
      v139 = &off_1400D41D0;
      if ( v140 )
        ExFreePool(v140);
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v8) = v8 | 0x700;
      v53 = (const wchar_t *)&unk_1400D44E0;
      v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v125)
                              + 16LL);
      if ( v54 )
        v53 = v54;
      v55 = (const wchar_t *)&unk_1400D44E0;
      v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v123)
                              + 16LL);
      if ( v56 )
        v55 = v56;
      v57 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v58 = *(void **)(sub_1400815B4((__int64)&v141, &v81) + 16);
      v59 = &unk_1400D44E0;
      if ( v58 )
        v59 = v58;
      sub_1400A9338(
        v57,
        4u,
        0xBu,
        0xFu,
        (__int64)&unk_1400D9F78,
        v55,
        v53,
        (const wchar_t *)qword_14014EC70,
        (__int64)v59);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v60 = v124;
      LOWORD(v8) = v8 & 0xFBFF;
      if ( v124 )
      {
        if ( _InterlockedExchangeAdd(v124 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
          if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
    }
    if ( (v8 & 0x200) != 0 )
    {
      v61 = v126;
      LOWORD(v8) = v8 & 0xFDFF;
      if ( v126 )
      {
        if ( _InterlockedExchangeAdd(v126 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
          if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
        }
      }
    }
    if ( (v8 & 0x100) != 0 )
    {
      LOWORD(v8) = v8 & 0xFEFF;
      v141 = &off_1400D41D0;
      if ( v142 )
        ExFreePool(v142);
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v8) = v8 | 0x1800;
      v62 = (const wchar_t *)&unk_1400D44E0;
      v63 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v129)
                              + 16LL);
      if ( v63 )
        v62 = v63;
      v64 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v127);
      v65 = (const wchar_t *)&unk_1400D44E0;
      v66 = *(const wchar_t **)(*(_QWORD *)v64 + 16LL);
      if ( v66 )
        v65 = v66;
      sub_1400AA268(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x10u,
        (__int64)&unk_1400D9F78,
        v65,
        v62,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v8 & 0x1000) != 0 )
    {
      v67 = v128;
      LOWORD(v8) = v8 & 0xEFFF;
      if ( v128 )
      {
        if ( _InterlockedExchangeAdd(v128 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
          if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
        }
      }
    }
    if ( (v8 & 0x800) != 0 )
    {
      v68 = v130;
      LOWORD(v8) = v8 & 0xF7FF;
      if ( v130 )
      {
        if ( _InterlockedExchangeAdd(v130 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
          if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
        }
      }
    }
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v8) = v8 | 0x6000;
      v69 = (const wchar_t *)&unk_1400D44E0;
      v70 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v133)
                              + 16LL);
      if ( v70 )
        v69 = v70;
      v71 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v131)
                              + 16LL);
      if ( v71 )
        v27 = v71;
      sub_1400AA268(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0x11u,
        (__int64)&unk_1400D9F78,
        v27,
        v69,
        (const wchar_t *)qword_14014EC70);
    }
    if ( (v8 & 0x4000) != 0 )
    {
      v72 = v132;
      LOWORD(v8) = v8 & 0xBFFF;
      if ( v132 )
      {
        if ( _InterlockedExchangeAdd(v132 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
          if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
        }
      }
    }
    if ( (v8 & 0x2000) != 0 )
    {
      v73 = v134;
      if ( v134 )
      {
        if ( _InterlockedExchangeAdd(v134 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
          if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
        }
      }
    }
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))qword_1400DF8E8)(qword_1400DF700, *(_QWORD *)(a1 + 360), v89);
    v9 = v83;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v74 = (const wchar_t *)&unk_1400D44E0;
      v75 = (const wchar_t *)&unk_1400D44E0;
      v76 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v135)
                              + 16LL);
      if ( v76 )
        v75 = v76;
      v77 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, PVOID *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v83)
                              + 16LL);
      if ( v77 )
        v74 = v77;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xDu,
        0x12u,
        (__int64)&unk_1400D9F78,
        v74,
        v75,
        (const wchar_t *)qword_14014EC70);
      v8 = 98304;
    }
    if ( (v8 & 0x10000) != 0 )
    {
      v78 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
          if ( _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 16LL))(v78);
        }
      }
    }
    if ( (v8 & 0x8000) != 0 )
    {
      v79 = v136;
      if ( v136 )
      {
        if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
          if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
        }
      }
    }
  }
  if ( v9 )
  {
    sub_140091BA8((__int64 *)v9);
    ExFreePool(v9);
  }
  return 0LL;
}
