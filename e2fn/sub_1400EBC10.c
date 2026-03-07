__int64 __fastcall sub_1400EBC10(__int64 a1, __int64 *a2)
{
  const wchar_t *v2; // rdi
  __int64 *v4; // r15
  __int64 *v5; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rsi
  __int64 *v19; // rbx
  _QWORD *v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  const wchar_t *v23; // r14
  __int64 v24; // rsi
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 *v35; // rax
  unsigned int v36; // r14d
  const wchar_t *v37; // r14
  const wchar_t *v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  unsigned int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rax
  volatile signed __int32 *v45; // r12
  __int64 v46; // rsi
  unsigned __int64 v47; // r8
  __int64 v48; // rbx
  _QWORD *v49; // rcx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  volatile signed __int32 *v54; // rbx
  const wchar_t *v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rax
  unsigned int v58; // ebx
  const wchar_t *v59; // rax
  const wchar_t *v60; // rcx
  volatile signed __int32 *v61; // rbx
  volatile signed __int32 *v62; // rbx
  volatile signed __int32 *v63; // rbx
  volatile signed __int32 *v64; // rbx
  const wchar_t *v65; // r12
  const wchar_t *v66; // rax
  __int64 v67; // rsi
  const wchar_t *v68; // rax
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  volatile signed __int32 *v71; // rbx
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  const wchar_t *v74; // rsi
  const wchar_t *v75; // rax
  const wchar_t *v76; // rax
  volatile signed __int32 *v77; // rbx
  volatile signed __int32 *v78; // rbx
  volatile signed __int32 *v79; // rbx
  const wchar_t *v80; // rsi
  const wchar_t *v81; // rax
  const wchar_t *v82; // rax
  volatile signed __int32 *v83; // rbx
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  _QWORD *v86; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v89; // [rsp+68h] [rbp-98h]
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v91; // [rsp+78h] [rbp-88h]
  _QWORD v92[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v93; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v94; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v95; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v96; // [rsp+D0h] [rbp-30h] BYREF
  char v97[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v98; // [rsp+E8h] [rbp-18h]
  char v99[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v100; // [rsp+F8h] [rbp-8h]
  char v101[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v102; // [rsp+108h] [rbp+8h]
  char v103[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v104; // [rsp+118h] [rbp+18h]
  _BYTE v105[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v106[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v107[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v108[16]; // [rsp+150h] [rbp+50h] BYREF
  char v109[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v110; // [rsp+168h] [rbp+68h]
  char v111[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v112; // [rsp+178h] [rbp+78h]
  char v113[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v114; // [rsp+188h] [rbp+88h]
  char v115[8]; // [rsp+190h] [rbp+90h] BYREF
  volatile signed __int32 *v116; // [rsp+198h] [rbp+98h]
  char v117[8]; // [rsp+1A0h] [rbp+A0h] BYREF
  volatile signed __int32 *v118; // [rsp+1A8h] [rbp+A8h]
  char v119[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  volatile signed __int32 *v120; // [rsp+1B8h] [rbp+B8h]
  __int64 v121; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v122; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v123[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v124; // [rsp+240h] [rbp+140h] BYREF
  __int64 *v125; // [rsp+248h] [rbp+148h]
  unsigned int v126; // [rsp+250h] [rbp+150h]
  unsigned int v127; // [rsp+258h] [rbp+158h]

  v125 = a2;
  LOWORD(v2) = 0;
  v124 = 0;
  v4 = 0LL;
  v5 = a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::CreateTxQueues", a1);
      if ( v7 )
        v4 = v7;
    }
  }
  v8 = *(unsigned int *)(a1 + 432);
  v9 = (unsigned int)v8;
  v127 = *(_DWORD *)(a1 + 432);
  if ( v8 != *(_QWORD *)(a1 + 592) && !(unsigned int)sub_14000CDB4((_QWORD *)(a1 + 576), (unsigned int)v8) )
    *(_QWORD *)(a1 + 592) = v9;
  if ( *(_QWORD *)(a1 + 592) != v9 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v99)
                              + 16LL);
      if ( v11 )
        v2 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v97)
                              + 16LL);
      if ( v12 )
        v10 = v12;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x1Fu,
        (__int64)&unk_1400D49F8,
        v10,
        v2,
        L"ResizeVector(m_txQueues, numTxQueues)");
      LOBYTE(v2) = 3;
    }
    if ( ((unsigned __int8)v2 & 2) != 0 )
    {
      v13 = v98;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xFD;
      if ( v98 )
      {
        if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 1) != 0 )
    {
      v14 = v100;
      if ( v100 )
      {
        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_140008F3C(a1, (__int64)L"ResizeVector(m_txQueues, numTxQueues)", 222, 46, 0xC0000017);
LABEL_27:
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v15 = (volatile signed __int32 *)v5[1];
    goto LABEL_30;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 384) + 32LL))(*(_QWORD *)(a1 + 384), &v90);
  v16 = ExAllocatePool2(64LL, 32LL, 808465458LL);
  if ( !v16 || (v17 = sub_1400A4580(v16, a1)) == 0 || (v18 = *(_QWORD **)(v17 + 16)) == 0LL )
  {
    v87 = 0LL;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v80 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v81 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v119)
                              + 16LL);
      if ( v81 )
        v2 = v81;
      v82 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v117)
                              + 16LL);
      if ( v82 )
        v80 = v82;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0x20u,
        (__int64)&unk_1400D49F8,
        v80,
        v2,
        L"transmitGate");
      LOBYTE(v2) = 12;
    }
    if ( ((unsigned __int8)v2 & 8) != 0 )
    {
      v83 = v118;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xF7;
      if ( v118 )
      {
        if ( _InterlockedExchangeAdd(v118 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
          if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 16LL))(v83);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 4) != 0 )
    {
      v84 = v120;
      if ( v120 )
      {
        if ( _InterlockedExchangeAdd(v120 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 8LL))(v84);
          if ( _InterlockedExchangeAdd(v84 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v84 + 16LL))(v84);
        }
      }
    }
    sub_14000BA2C(a1, (__int64)L"transmitGate", 230, 46);
    v85 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
        if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
      }
    }
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v15 = (volatile signed __int32 *)v5[1];
    if ( !v15 )
      return 3221225495LL;
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) != 1 )
      return 3221225495LL;
LABEL_244:
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    return 3221225495LL;
  }
  v87 = (volatile signed __int32 *)v17;
  v86 = v18;
  v19 = sub_1400A27D4(&v121, v5);
  v20 = sub_1400A27D4(&v122, (__int64 *)(a1 + 368));
  v124 = sub_140020AA0(v18, v20, v19);
  v21 = v124;
  if ( v124 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v101);
      v23 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      if ( *(_QWORD *)(*(_QWORD *)v22 + 16LL) )
        v2 = *(const wchar_t **)(*(_QWORD *)v22 + 16LL);
      v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v103)
                              + 16LL);
      if ( v25 )
        v23 = v25;
      sub_1400A5E80(v24, 2u, 0xAu, 0x21u, (__int64)&unk_1400D49F8, v2, v23, L"transmitGate->Bind(m_osServices, bar0)");
      v21 = v124;
      LOBYTE(v2) = 48;
    }
    if ( ((unsigned __int8)v2 & 0x20) != 0 )
    {
      v26 = v102;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xDF;
      if ( v102 )
      {
        if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 0x10) != 0 )
    {
      v27 = v104;
      if ( v104 )
      {
        if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_140009088(a1, (__int64)L"transmitGate->Bind(m_osServices, bar0)", 231, 46, v21);
    if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
      if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
    }
    v28 = v91;
    if ( v91 )
    {
      if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    if ( v4 )
    {
      sub_14000BFA4(v4);
      ExFreePool(v4);
    }
    v29 = (volatile signed __int32 *)v5[1];
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
      }
    }
    return v21;
  }
  else
  {
    v31 = ExAllocatePool2(64LL, 32LL, 808465459LL);
    if ( !v31 || (v32 = sub_1400A45F0(v31, a1), (v33 = v32) == 0) || (v34 = *(_QWORD *)(v32 + 16)) == 0 )
    {
      v89 = 0LL;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v74 = (const wchar_t *)&unk_1400D44E0;
        v2 = (const wchar_t *)&unk_1400D44E0;
        v75 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v115)
                                + 16LL);
        if ( v75 )
          v2 = v75;
        v76 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v113)
                                + 16LL);
        if ( v76 )
          v74 = v76;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x22u,
          (__int64)&unk_1400D49F8,
          v74,
          v2,
          L"txCounters");
        LOBYTE(v2) = -64;
      }
      if ( (char)v2 < 0 )
      {
        v77 = v114;
        LOBYTE(v2) = (unsigned __int8)v2 & 0x7F;
        if ( v114 )
        {
          if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
            if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 16LL))(v77);
          }
        }
      }
      if ( ((unsigned __int8)v2 & 0x40) != 0 )
      {
        v78 = v116;
        if ( v116 )
        {
          if ( _InterlockedExchangeAdd(v116 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
            if ( _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 16LL))(v78);
          }
        }
      }
      sub_14000B87C(a1, (__int64)L"txCounters", 234, 46);
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
        if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
      }
      v79 = v91;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
          if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
        }
      }
      goto LABEL_27;
    }
    v89 = (volatile signed __int32 *)v32;
    v88 = v34;
    v35 = sub_1400A27D4(v123, v5);
    v124 = sub_14007C3DC(v34, v35);
    v36 = v124;
    if ( v124 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v37 = (const wchar_t *)&unk_1400D44E0;
        v2 = (const wchar_t *)&unk_1400D44E0;
        v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v105)
                                + 16LL);
        if ( v38 )
          v2 = v38;
        v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v106)
                                + 16LL);
        if ( v39 )
          v37 = v39;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0x23u,
          (__int64)&unk_1400D49F8,
          v2,
          v37,
          L"txCounters->Bind(bar0)");
        v36 = v124;
        LOWORD(v2) = 768;
      }
      if ( ((unsigned __int16)v2 & 0x200) != 0 )
      {
        LOWORD(v2) = (unsigned __int16)v2 & 0xFDFF;
        sub_1400A58D4((__int64)v105);
      }
      if ( ((unsigned __int16)v2 & 0x100) != 0 )
        sub_1400A58D4((__int64)v106);
      sub_1400080F8(a1, (__int64)L"txCounters->Bind(bar0)", 235, 46, v36);
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 8), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
          if ( _InterlockedExchangeAdd(v89 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
        }
      }
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
        if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
      }
      v40 = v91;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v41 = (volatile signed __int32 *)v5[1];
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
      return v124;
    }
    else
    {
      sub_140021B24(v34);
      v92[1] = v91;
      v42 = 0;
      v92[0] = v90;
      v92[3] = v5[1];
      v92[2] = *v5;
      v93 = 0LL;
      v94 = 0LL;
      v95 = 0LL;
      v96 = 0LL;
      v91 = 0LL;
      v90 = 0LL;
      v5[1] = 0LL;
      *v5 = 0LL;
      sub_1400A536C((__int64 *)&v93, (_QWORD *)(a1 + 560));
      sub_1400A536C((__int64 *)&v94, &v86);
      sub_1400A536C((__int64 *)&v95, &v88);
      sub_1400A536C((__int64 *)&v96, (_QWORD *)(a1 + 640));
      v124 = 0;
      if ( v127 )
      {
        while ( 1 )
        {
          v43 = ExAllocatePool2(64LL, 32LL, 808465460LL);
          if ( !v43 )
            break;
          v44 = sub_1400A5010(v43, a1, (int *)&v124);
          v45 = (volatile signed __int32 *)v44;
          if ( !v44 )
            break;
          v46 = *(_QWORD *)(v44 + 16);
          if ( !v46 )
            break;
          v126 = sub_14007A948(*(_QWORD *)(v44 + 16), v92);
          if ( v126 )
          {
            if ( off_1400DF038 == (_UNKNOWN *)&off_1400DF038 )
            {
              v58 = v126;
            }
            else
            {
              v2 = (const wchar_t *)&unk_1400D44E0;
              v55 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                               + 24LL))(
                                                     a1 + 56,
                                                     v107)
                                      + 16LL);
              if ( v55 )
                v2 = v55;
              v56 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
              v57 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v108);
              v58 = v126;
              v59 = *(const wchar_t **)(*(_QWORD *)v57 + 16LL);
              v60 = (const wchar_t *)&unk_1400D44E0;
              if ( v59 )
                v60 = v59;
              sub_1400A5E80(v56, 2u, 0xAu, 0x25u, (__int64)&unk_1400D49F8, v2, v60, L"txQueue->Bind(queueResources)");
              LOWORD(v2) = 12288;
            }
            if ( ((unsigned __int16)v2 & 0x2000) != 0 )
            {
              LOWORD(v2) = (unsigned __int16)v2 & 0xDFFF;
              sub_1400A58D4((__int64)v107);
            }
            if ( ((unsigned __int16)v2 & 0x1000) != 0 )
              sub_1400A58D4((__int64)v108);
            sub_1400088C0(a1, (__int64)L"txQueue->Bind(queueResources)", 250, 46, v58);
            if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
              if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
            }
            sub_1400A5924(v92);
            if ( v89 )
            {
              if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
              {
                v61 = v89;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
                if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
              }
            }
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
            if ( v4 )
            {
              sub_14000BFA4(v4);
              ExFreePool(v4);
            }
            v64 = (volatile signed __int32 *)v125[1];
            if ( v64 )
            {
              if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
                if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
              }
            }
            return v126;
          }
          v47 = v42;
          v48 = 16LL * v42;
          if ( v47 >= *(_QWORD *)(a1 + 592) )
            sub_140072758(46, 0x239u, v47, *(_DWORD *)(a1 + 592), 0);
          v49 = (_QWORD *)(v48 + *(_QWORD *)(a1 + 584));
          v50 = (volatile signed __int32 *)v49[1];
          v49[1] = v45;
          *v49 = v46;
          if ( v50 )
          {
            if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
              if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
            }
          }
          v42 = v124 + 1;
          v124 = v42;
          if ( v42 >= v127 )
          {
            v33 = (__int64)v89;
            v5 = v125;
            goto LABEL_113;
          }
        }
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v65 = (const wchar_t *)&unk_1400D44E0;
          v2 = (const wchar_t *)&unk_1400D44E0;
          v66 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v109)
                                  + 16LL);
          if ( v66 )
            v2 = v66;
          v67 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
          v68 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v111)
                                  + 16LL);
          if ( v68 )
            v65 = v68;
          sub_1400A3320(v67, 2u, 0xAu, 0x24u, (__int64)&unk_1400D49F8, v2, v65, L"txQueue");
          LOWORD(v2) = 3072;
        }
        if ( ((unsigned __int16)v2 & 0x800) != 0 )
        {
          v69 = v110;
          LOWORD(v2) = (unsigned __int16)v2 & 0xF7FF;
          if ( v110 )
          {
            if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
              if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
            }
          }
        }
        if ( ((unsigned __int16)v2 & 0x400) != 0 )
        {
          v70 = v112;
          if ( v112 )
          {
            if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
              if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
            }
          }
        }
        sub_14000B0E4(a1, (__int64)L"txQueue", 249, 46);
        sub_1400A5924(v92);
        if ( v89 )
        {
          if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
          {
            v71 = v89;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
            if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
          }
        }
        if ( v87 )
        {
          if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
          {
            v72 = v87;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
            if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
          }
        }
        v73 = v91;
        if ( v91 )
        {
          if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
            if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
          }
        }
        if ( v4 )
        {
          sub_14000BFA4(v4);
          ExFreePool(v4);
        }
        v15 = (volatile signed __int32 *)v125[1];
LABEL_30:
        if ( !v15 )
          return 3221225495LL;
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) != 1 )
          return 3221225495LL;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) != 1 )
          return 3221225495LL;
        goto LABEL_244;
      }
LABEL_113:
      sub_1400A5924(v92);
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 8), 0xFFFFFFFF) == 1 )
        {
          v51 = v89;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 8LL))(v89);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v89 + 16LL))(v89);
        }
      }
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          v52 = v87;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
        }
      }
      v53 = v91;
      if ( v91 )
      {
        if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
        }
      }
      if ( v4 )
      {
        sub_14000BFA4(v4);
        ExFreePool(v4);
      }
      v54 = (volatile signed __int32 *)v5[1];
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
}
