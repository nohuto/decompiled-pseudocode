__int64 __fastcall sub_1400EA9A0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int16 v4; // bx
  __int64 *v6; // r14
  __int64 v7; // r13
  __int64 *v8; // r12
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  const wchar_t *v13; // r13
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // rax
  unsigned int v26; // r13d
  const wchar_t *v27; // r13
  const wchar_t *v28; // rdi
  const wchar_t *v29; // rax
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  volatile signed __int32 *v36; // rbx
  __int64 *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // rax
  volatile signed __int32 *v44; // r12
  _QWORD *v45; // rdi
  __int64 *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  const wchar_t *v55; // r13
  const wchar_t *v56; // rdi
  const wchar_t *v57; // rax
  const wchar_t *v58; // rax
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rbx
  unsigned int v61; // edi
  volatile signed __int32 *v62; // rbx
  volatile signed __int32 *v63; // rbx
  volatile signed __int32 *v64; // rbx
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  const wchar_t *v67; // r13
  const wchar_t *v68; // rdi
  const wchar_t *v69; // rax
  const wchar_t *v70; // rax
  volatile signed __int32 *v71; // rdi
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  volatile signed __int32 *v74; // rbx
  volatile signed __int32 *v75; // rbx
  volatile signed __int32 *v76; // rbx
  const wchar_t *v77; // r13
  const wchar_t *v78; // rdi
  const wchar_t *v79; // rax
  const wchar_t *v80; // rax
  volatile signed __int32 *v81; // rdi
  volatile signed __int32 *v82; // rbx
  volatile signed __int32 *v83; // rbx
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  __int64 v86; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v87; // [rsp+60h] [rbp-A8h]
  unsigned int v88; // [rsp+68h] [rbp-A0h]
  unsigned int v89; // [rsp+6Ch] [rbp-9Ch]
  __int64 v90; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v91; // [rsp+78h] [rbp-90h]
  _QWORD *v92; // [rsp+80h] [rbp-88h]
  _QWORD v93[4]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v94; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-50h]
  __int128 v96; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v98; // [rsp+E8h] [rbp-20h] BYREF
  char v99[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v100; // [rsp+100h] [rbp-8h]
  char v101[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v102; // [rsp+110h] [rbp+8h]
  char v103[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v104; // [rsp+120h] [rbp+18h]
  char v105[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v106; // [rsp+130h] [rbp+28h]
  char v107[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v108; // [rsp+140h] [rbp+38h]
  char v109[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v110; // [rsp+150h] [rbp+48h]
  char v111[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v112; // [rsp+160h] [rbp+58h]
  char v113[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v114; // [rsp+170h] [rbp+68h]
  char v115[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v116; // [rsp+180h] [rbp+78h]
  char v117[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v118; // [rsp+190h] [rbp+88h]
  __int64 v119; // [rsp+198h] [rbp+90h] BYREF
  __int64 v120[10]; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v121; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v122; // [rsp+210h] [rbp+108h]
  __int64 v123; // [rsp+218h] [rbp+110h]
  __int64 *v124; // [rsp+220h] [rbp+118h]

  v124 = a4;
  v123 = a3;
  v122 = a2;
  v4 = 0;
  v121 = 0;
  v6 = 0LL;
  v7 = a3;
  v8 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::CreateRxQueues", a1);
      if ( v10 )
        v6 = v10;
    }
  }
  v11 = *(unsigned int *)(a1 + 440);
  v12 = (unsigned int)v11;
  v88 = *(_DWORD *)(a1 + 440);
  if ( v11 != *(_QWORD *)(a1 + 624) && !(unsigned int)sub_14000CDB4((_QWORD *)(a1 + 608), (unsigned int)v11) )
    *(_QWORD *)(a1 + 624) = v12;
  if ( *(_QWORD *)(a1 + 624) != v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v101)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v99)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x26u,
        (__int64)&unk_1400D49F8,
        v13,
        v14,
        L"ResizeVector(m_rxQueues, numRxQueues)");
      v7 = v123;
      LOBYTE(v4) = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v100;
      LOBYTE(v4) = v4 & 0xFD;
      if ( v100 )
      {
        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v102;
      if ( v102 )
      {
        if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140008F3C(a1, (__int64)L"ResizeVector(m_rxQueues, numRxQueues)", 267, 46, 0xC0000017);
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v19 = (volatile signed __int32 *)v8[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = *(volatile signed __int32 **)(v7 + 8);
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)v124[1];
    goto LABEL_37;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 384) + 32LL))(*(_QWORD *)(a1 + 384), &v90);
  v22 = ExAllocatePool2(64LL, 32LL, 808465462LL);
  if ( !v22 || (v23 = sub_1400A4C80(v22)) == 0 || (v24 = *(_QWORD *)(v23 + 16)) == 0 )
  {
    v87 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v77 = (const wchar_t *)&unk_1400D44E0;
      v78 = (const wchar_t *)&unk_1400D44E0;
      v79 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v117)
                              + 16LL);
      if ( v79 )
        v78 = v79;
      v80 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v115)
                              + 16LL);
      if ( v80 )
        v77 = v80;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x27u,
        (__int64)&unk_1400D49F8,
        v77,
        v78,
        L"rxCounters");
      v7 = v123;
      LOBYTE(v4) = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v81 = v116;
      LOBYTE(v4) = v4 & 0xF7;
      if ( v116 )
      {
        if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
          if ( _InterlockedExchangeAdd(v81 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 16LL))(v81);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v82 = v118;
      if ( v118 )
      {
        if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 8LL))(v82);
          if ( _InterlockedExchangeAdd(v82 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 16LL))(v82);
        }
      }
    }
    sub_14000B87C(a1, (__int64)L"rxCounters", 273, 46);
    v83 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
        if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 16LL))(v83);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v84 = (volatile signed __int32 *)v8[1];
    if ( v84 )
    {
      if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
        if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
      }
    }
    v85 = *(volatile signed __int32 **)(v7 + 8);
    if ( v85 )
    {
      if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
        if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
      }
    }
    v21 = (volatile signed __int32 *)v124[1];
    if ( !v21 )
      return 3221225495LL;
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
LABEL_230:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    return 3221225495LL;
  }
  v87 = (volatile signed __int32 *)v23;
  v86 = v24;
  v25 = sub_1400A27D4(&v119, v8);
  v121 = sub_14007C3DC(v24, v25);
  v26 = v121;
  if ( v121 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v27 = (const wchar_t *)&unk_1400D44E0;
      v28 = (const wchar_t *)&unk_1400D44E0;
      v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v105)
                              + 16LL);
      if ( v29 )
        v28 = v29;
      v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v103)
                              + 16LL);
      if ( v30 )
        v27 = v30;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x28u,
        (__int64)&unk_1400D49F8,
        v27,
        v28,
        L"rxCounters->Bind(bar0)");
      v26 = v121;
      LOBYTE(v4) = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v31 = v104;
      LOBYTE(v4) = v4 & 0xDF;
      if ( v104 )
      {
        if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v32 = v106;
      if ( v106 )
      {
        if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_1400080F8(a1, (__int64)L"rxCounters->Bind(bar0)", 274, 46, v26);
    if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
      if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
    }
    v33 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v34 = (volatile signed __int32 *)v8[1];
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    v35 = *(volatile signed __int32 **)(v123 + 8);
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    v36 = (volatile signed __int32 *)v124[1];
    if ( v36 )
    {
      if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
        if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
      }
    }
    return v26;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 40LL))(v24);
    v93[1] = v91;
    v93[0] = v90;
    v93[3] = v8[1];
    v93[2] = *v8;
    v94 = 0LL;
    v95 = 0LL;
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    v91 = 0LL;
    v90 = 0LL;
    v8[1] = 0LL;
    *v8 = 0LL;
    sub_1400A536C((__int64 *)&v94, (_QWORD *)(a1 + 560));
    v38 = (__int64 *)v123;
    v39 = *(_QWORD *)(v123 + 8);
    *(_QWORD *)(v123 + 8) = *((_QWORD *)&v95 + 1);
    *((_QWORD *)&v95 + 1) = v39;
    v40 = *v38;
    *v38 = v95;
    *(_QWORD *)&v95 = v40;
    sub_1400A536C((__int64 *)&v96, &v86);
    sub_1400A536C((__int64 *)&v98, (_QWORD *)(a1 + 784));
    sub_1400A536C((__int64 *)&v97, (_QWORD *)(a1 + 640));
    v41 = 0;
    v121 = 0;
    if ( v88 )
    {
      while ( 1 )
      {
        v42 = ExAllocatePool2(64LL, 32LL, 808465463LL);
        if ( !v42 )
          break;
        v43 = sub_1400A4F90(v42, a1, (int *)&v121);
        v44 = (volatile signed __int32 *)v43;
        if ( !v43 )
          break;
        v45 = *(_QWORD **)(v43 + 16);
        v92 = v45;
        if ( !v45 )
          break;
        v46 = sub_1400A27D4(v120, v124);
        v89 = sub_1400180D4(v45, (__int64)v93, v46);
        if ( v89 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v55 = (const wchar_t *)&unk_1400D44E0;
            v56 = (const wchar_t *)&unk_1400D44E0;
            v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                   a1 + 56,
                                                   v107)
                                    + 16LL);
            if ( v57 )
              v56 = v57;
            v58 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                   a1 + 56,
                                                   v109)
                                    + 16LL);
            if ( v58 )
              v55 = v58;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              0xAu,
              0x2Au,
              (__int64)&unk_1400D49F8,
              v56,
              v55,
              L"rxQueue->Bind(queueResources, latencyToleranceReporting)");
            v4 = 768;
          }
          if ( (v4 & 0x200) != 0 )
          {
            v59 = v108;
            v4 &= ~0x200u;
            if ( v108 )
            {
              if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
                if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
              }
            }
          }
          if ( (v4 & 0x100) != 0 )
          {
            v60 = v110;
            if ( v110 )
            {
              if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
                if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
              }
            }
          }
          v61 = v89;
          sub_140009AE8(a1, (__int64)L"rxQueue->Bind(queueResources, latencyToleranceReporting)", 290, 46, v89);
          if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
            if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 16LL))(v44);
          }
          sub_1400A5AC4(v93);
          if ( v87 )
          {
            if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
            {
              v62 = v87;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
              if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
            }
          }
          v63 = v91;
          if ( v91 )
          {
            if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
              if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
            }
          }
          if ( v6 )
          {
            sub_14000BFA4(v6);
            ExFreePool(v6);
          }
          v64 = (volatile signed __int32 *)v122[1];
          if ( v64 )
          {
            if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
              if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
            }
          }
          v65 = *(volatile signed __int32 **)(v123 + 8);
          if ( v65 )
          {
            if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
              if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
            }
          }
          v66 = (volatile signed __int32 *)v124[1];
          if ( v66 )
          {
            if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
              if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
            }
          }
          return v61;
        }
        if ( (unsigned __int64)v41 >= *(_QWORD *)(a1 + 624) )
          sub_140072758(46, 0x239u, v41, *(_DWORD *)(a1 + 624), 0);
        v47 = v92;
        v48 = (_QWORD *)(16LL * v41 + *(_QWORD *)(a1 + 616));
        v49 = (volatile signed __int32 *)v48[1];
        v48[1] = v44;
        *v48 = v47;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
            if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
          }
          v41 = v121;
        }
        v121 = ++v41;
        if ( v41 >= v88 )
        {
          v8 = v122;
          v38 = (__int64 *)v123;
          goto LABEL_97;
        }
      }
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v67 = (const wchar_t *)&unk_1400D44E0;
        v68 = (const wchar_t *)&unk_1400D44E0;
        v69 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v113)
                                + 16LL);
        if ( v69 )
          v68 = v69;
        v70 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v111)
                                + 16LL);
        if ( v70 )
          v67 = v70;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x29u,
          (__int64)&unk_1400D49F8,
          v67,
          v68,
          L"rxQueue");
        LOBYTE(v4) = -64;
      }
      if ( (v4 & 0x80u) != 0 )
      {
        v71 = v112;
        LOBYTE(v4) = v4 & 0x7F;
        if ( v112 )
        {
          if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
            if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
          }
        }
      }
      if ( (v4 & 0x40) != 0 )
      {
        v72 = v114;
        if ( v114 )
        {
          if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
            if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
          }
        }
      }
      sub_14000B0E4(a1, (__int64)L"rxQueue", 289, 46);
      sub_1400A5AC4(v93);
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          v73 = v87;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
          if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
        }
      }
      v74 = v91;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
          if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
        }
      }
      if ( v6 )
      {
        sub_14000BFA4(v6);
        ExFreePool(v6);
      }
      v75 = (volatile signed __int32 *)v122[1];
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
          if ( _InterlockedExchangeAdd(v75 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
        }
      }
      v76 = *(volatile signed __int32 **)(v123 + 8);
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 8LL))(v76);
          if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
        }
      }
      v21 = (volatile signed __int32 *)v124[1];
LABEL_37:
      if ( !v21 )
        return 3221225495LL;
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) != 1 )
        return 3221225495LL;
      goto LABEL_230;
    }
LABEL_97:
    sub_1400A5AC4(v93);
    if ( v87 )
    {
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        v50 = v87;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
      }
    }
    v51 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v52 = (volatile signed __int32 *)v8[1];
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
    v53 = (volatile signed __int32 *)v38[1];
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
    v54 = (volatile signed __int32 *)v124[1];
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
      }
    }
    return 0LL;
  }
}
