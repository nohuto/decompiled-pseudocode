__int64 __fastcall sub_14014579C(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  __int64 *v5; // r12
  _QWORD *v6; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // rdi
  const wchar_t *v11; // r14
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  int v17; // r8d
  __int64 v18; // rsi
  const wchar_t *v19; // r14
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  unsigned int v27; // edi
  const wchar_t *v28; // r14
  const wchar_t *v29; // rdi
  const wchar_t *v30; // rax
  __int64 v31; // rsi
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  _QWORD *v36; // rbx
  const wchar_t *v37; // r14
  const wchar_t *v38; // rdi
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rbx
  volatile signed __int32 *v42; // rbx
  _QWORD *v43; // rax
  const wchar_t *v44; // rdi
  const wchar_t *v45; // rax
  __int64 v46; // rax
  const wchar_t *v47; // r8
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  const wchar_t *v51; // rdi
  const wchar_t *v52; // rax
  __int64 v53; // rsi
  const wchar_t *v54; // rax
  const wchar_t *v55; // rcx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  const wchar_t *v58; // rdi
  const wchar_t *v59; // rax
  __int64 v60; // rax
  const wchar_t *v61; // rdx
  const wchar_t *v62; // rax
  volatile signed __int32 *v63; // rbx
  volatile signed __int32 *v64; // rbx
  __int64 v65; // rsi
  const wchar_t *v66; // rdi
  const wchar_t *v67; // rax
  const wchar_t *v68; // rax
  const wchar_t *v69; // rcx
  volatile signed __int32 *v70; // rbx
  volatile signed __int32 *v71; // rbx
  __int64 *v72; // rsi
  __int64 v73; // rdi
  __int64 *v74; // rax
  _QWORD *v75; // rbx
  __int64 *v76; // rax
  _QWORD *v77; // rax
  unsigned int v78; // eax
  volatile signed __int32 *v79; // rbx
  volatile signed __int32 *v80; // rbx
  const wchar_t *v81; // rsi
  const wchar_t *v82; // rdi
  const wchar_t *v83; // rax
  const wchar_t *v84; // rax
  volatile signed __int32 *v85; // rbx
  volatile signed __int32 *v86; // rbx
  volatile signed __int32 *v87; // rbx
  void (__fastcall *v88)(__int64); // [rsp+50h] [rbp-B0h] BYREF
  int v89; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v90)(__int64); // [rsp+60h] [rbp-A0h] BYREF
  int v91; // [rsp+68h] [rbp-98h]
  int Flink; // [rsp+70h] [rbp-90h] BYREF
  __int64 v93; // [rsp+74h] [rbp-8Ch]
  int v94; // [rsp+7Ch] [rbp-84h]
  __int64 (*v95)(); // [rsp+80h] [rbp-80h]
  int v96; // [rsp+88h] [rbp-78h]
  int v97; // [rsp+8Ch] [rbp-74h]
  __int128 v98; // [rsp+90h] [rbp-70h]
  void *v99; // [rsp+A0h] [rbp-60h]
  _BYTE v100[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v101; // [rsp+B0h] [rbp-50h]
  _BYTE v102[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v103; // [rsp+C0h] [rbp-40h]
  _BYTE v104[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v105; // [rsp+D0h] [rbp-30h]
  _BYTE v106[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v107; // [rsp+E0h] [rbp-20h]
  _BYTE v108[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v109; // [rsp+F0h] [rbp-10h]
  _BYTE v110[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v111; // [rsp+100h] [rbp+0h]
  _BYTE v112[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v113; // [rsp+110h] [rbp+10h]
  _BYTE v114[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v115; // [rsp+120h] [rbp+20h]
  _BYTE v116[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v117; // [rsp+130h] [rbp+30h]
  _BYTE v118[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v119; // [rsp+140h] [rbp+40h]
  _BYTE v120[8]; // [rsp+148h] [rbp+48h] BYREF
  volatile signed __int32 *v121; // [rsp+150h] [rbp+50h]
  _BYTE v122[8]; // [rsp+158h] [rbp+58h] BYREF
  volatile signed __int32 *v123; // [rsp+160h] [rbp+60h]
  _BYTE v124[8]; // [rsp+168h] [rbp+68h] BYREF
  volatile signed __int32 *v125; // [rsp+170h] [rbp+70h]
  _BYTE v126[8]; // [rsp+178h] [rbp+78h] BYREF
  volatile signed __int32 *v127; // [rsp+180h] [rbp+80h]
  _BYTE v128[8]; // [rsp+188h] [rbp+88h] BYREF
  volatile signed __int32 *v129; // [rsp+190h] [rbp+90h]
  _BYTE v130[8]; // [rsp+198h] [rbp+98h] BYREF
  volatile signed __int32 *v131; // [rsp+1A0h] [rbp+A0h]
  __int64 v132; // [rsp+1A8h] [rbp+A8h] BYREF
  volatile signed __int32 *v133; // [rsp+1B0h] [rbp+B0h]
  __int64 v134; // [rsp+1B8h] [rbp+B8h] BYREF
  volatile signed __int32 *v135; // [rsp+1C0h] [rbp+C0h]
  _BYTE v136[8]; // [rsp+1C8h] [rbp+C8h] BYREF
  volatile signed __int32 *v137; // [rsp+1D0h] [rbp+D0h]
  _BYTE v138[8]; // [rsp+1D8h] [rbp+D8h] BYREF
  volatile signed __int32 *v139; // [rsp+1E0h] [rbp+E0h]
  __int64 v140; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v141; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v142[104]; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v143; // [rsp+288h] [rbp+188h]
  unsigned int v144; // [rsp+288h] [rbp+188h]
  unsigned int v145; // [rsp+288h] [rbp+188h]
  unsigned int v146; // [rsp+288h] [rbp+188h]
  unsigned int v147; // [rsp+288h] [rbp+188h]
  unsigned int v148; // [rsp+288h] [rbp+188h]

  v3 = 0;
  v5 = 0LL;
  v6 = (_QWORD *)a3;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::Initialize", a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !a2 )
  {
    v10 = L"txQueueInit";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v102)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v100)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0xEu,
        (__int64)&unk_1400DA108,
        v11,
        v12,
        L"txQueueInit");
      LOBYTE(v3) = 3;
      v10 = L"txQueueInit";
    }
    if ( (v3 & 2) != 0 )
    {
      v15 = v101;
      LOBYTE(v3) = v3 & 0xFD;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v16 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    v17 = 158;
LABEL_42:
    sub_14000B954(a1, (__int64)v10, v17, 112);
    if ( v5 )
    {
      sub_1400953B8(v5);
      ExFreePool(v5);
    }
    v25 = (volatile signed __int32 *)v6[1];
    if ( v25 && _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
    }
    return 3221225485LL;
  }
  if ( !*v6 )
  {
    v10 = L"hardwareMtu";
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v106)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v104)
                              + 16LL);
      if ( v22 )
        v19 = v22;
      sub_1400A3320(v18, 2u, 0xCu, 0xFu, (__int64)&unk_1400DA108, v19, v20, L"hardwareMtu");
      v6 = (_QWORD *)a3;
      v10 = L"hardwareMtu";
      LOBYTE(v3) = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v23 = v105;
      LOBYTE(v3) = v3 & 0xF7;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v24 = v107;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    v17 = 159;
    goto LABEL_42;
  }
  v143 = sub_140144020((_QWORD *)a1);
  v27 = v143;
  if ( v143 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v28 = (const wchar_t *)&unk_1400D44E0;
      v29 = (const wchar_t *)&unk_1400D44E0;
      v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v108)
                              + 16LL);
      if ( v30 )
        v29 = v30;
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v110)
                              + 16LL);
      if ( v32 )
        v28 = v32;
      sub_1400A5E80(v31, 2u, 0xCu, 0x10u, (__int64)&unk_1400DA108, v29, v28, L"__super::Initialize()");
      v6 = (_QWORD *)a3;
      LOBYTE(v3) = 48;
      v27 = v143;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v33 = v109;
      LOBYTE(v3) = v3 & 0xDF;
      if ( v109 )
      {
        if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
        }
      }
    }
    if ( (v3 & 0x10) != 0 )
    {
      v34 = v111;
      if ( v111 )
      {
        if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    sub_14003B824(a1, (__int64)L"__super::Initialize()", 161, 112, v27);
LABEL_67:
    if ( v5 )
    {
      sub_1400953B8(v5);
      ExFreePool(v5);
    }
    v35 = (volatile signed __int32 *)v6[1];
LABEL_70:
    if ( v35 )
    {
      if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
      }
    }
    return v27;
  }
  *(_DWORD *)(a1 + 768) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
  sub_140143F54(a1, (__int64)v142);
  v98 = 0LL;
  v93 = 0LL;
  v94 = 0;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      Flink = -1;
    else
      Flink = (int)stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    Flink = 56;
  }
  v36 = (_QWORD *)(a1 + 360);
  v99 = off_1400DF340;
  v96 = 1;
  v95 = sub_140093E90;
  v97 = 1;
  v144 = ((__int64 (__fastcall *)(__int64, __int64, int *, _BYTE *, __int64))qword_1400DF918)(
           qword_1400DF700,
           a2,
           &Flink,
           v142,
           a1 + 360);
  v27 = v144;
  if ( v144 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v114)
                              + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v112)
                              + 16LL);
      if ( v40 )
        v37 = v40;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0x11u,
        (__int64)&unk_1400DA108,
        v37,
        v38,
        L"NetTxQueueCreate(txQueueInit, &attributes, &txConfig, &m_queue)");
      v27 = v144;
      LOBYTE(v3) = -64;
    }
    if ( (v3 & 0x80u) != 0 )
    {
      v41 = v113;
      LOBYTE(v3) = v3 & 0x7F;
      if ( v113 )
      {
        if ( _InterlockedExchangeAdd(v113 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v3 & 0x40) != 0 )
    {
      v42 = v115;
      if ( v115 )
      {
        if ( _InterlockedExchangeAdd(v115 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14000A018(a1, (__int64)L"NetTxQueueCreate(txQueueInit, &attributes, &txConfig, &m_queue)", 176, 112, v27);
    goto LABEL_67;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
               qword_1400DF6A8,
               *v36,
               off_1400DF340) = a1;
  v43 = (_QWORD *)((__int64 (__fastcall *)(__int64, _QWORD))qword_1400DF930)(qword_1400DF700, *v36);
  sub_1401443D4((_QWORD *)a1, v43);
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v44 = (const wchar_t *)&unk_1400D44E0;
    v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v118)
                            + 16LL);
    if ( v45 )
      v44 = v45;
    v46 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v116);
    v47 = (const wchar_t *)&unk_1400D44E0;
    v48 = *(const wchar_t **)(*(_QWORD *)v46 + 16LL);
    if ( v48 )
      v47 = v48;
    sub_1400A6AA8(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xCu,
      0x12u,
      (__int64)&unk_1400DA108,
      v47,
      v44,
      (const wchar_t *)qword_14014EC70);
    v3 = 768;
  }
  if ( (v3 & 0x200) != 0 )
  {
    v49 = v117;
    v3 &= ~0x200u;
    if ( v117 )
    {
      if ( _InterlockedExchangeAdd(v117 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
  }
  if ( (v3 & 0x100) != 0 )
  {
    v50 = v119;
    v3 &= ~0x100u;
    if ( v119 )
    {
      if ( _InterlockedExchangeAdd(v119 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
  }
  sub_14014548C(a1);
  sub_140145554(a1);
  v145 = sub_14014699C(a1);
  v27 = v145;
  if ( v145 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v3) = v3 | 0xC00;
      v51 = (const wchar_t *)&unk_1400D44E0;
      v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v120)
                              + 16LL);
      if ( v52 )
        v51 = v52;
      v53 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v122)
                              + 16LL);
      v55 = (const wchar_t *)&unk_1400D44E0;
      if ( v54 )
        v55 = v54;
      sub_1400A5E80(v53, 2u, 0xCu, 0x13u, (__int64)&unk_1400DA108, v51, v55, L"InitializeChecksumOffload()");
      v6 = (_QWORD *)a3;
      v27 = v145;
    }
    if ( (v3 & 0x800) != 0 )
    {
      v56 = v121;
      LOWORD(v3) = v3 & 0xF7FF;
      if ( v121 )
      {
        if ( _InterlockedExchangeAdd(v121 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
          if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
        }
      }
    }
    if ( (v3 & 0x400) != 0 )
    {
      v57 = v123;
      if ( v123 )
      {
        if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
          if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
    }
    sub_140008628(a1, (__int64)L"InitializeChecksumOffload()", 187, 112, v27);
    goto LABEL_67;
  }
  v146 = sub_140147104(a1);
  v27 = v146;
  if ( v146 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v3) = v3 | 0x3000;
      v58 = (const wchar_t *)&unk_1400D44E0;
      v59 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v126)
                              + 16LL);
      if ( v59 )
        v58 = v59;
      v60 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v124);
      v61 = (const wchar_t *)&unk_1400D44E0;
      v62 = *(const wchar_t **)(*(_QWORD *)v60 + 16LL);
      if ( v62 )
        v61 = v62;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0x14u,
        (__int64)&unk_1400DA108,
        v61,
        v58,
        L"InitializeSegmentationOffload()");
      v27 = v146;
    }
    if ( (v3 & 0x2000) != 0 )
    {
      v63 = v125;
      LOWORD(v3) = v3 & 0xDFFF;
      if ( v125 )
      {
        if ( _InterlockedExchangeAdd(v125 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
          if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
        }
      }
    }
    if ( (v3 & 0x1000) != 0 )
    {
      v64 = v127;
      if ( v127 )
      {
        if ( _InterlockedExchangeAdd(v127 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
          if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
        }
      }
    }
    sub_140008B58(a1, (__int64)L"InitializeSegmentationOffload()", 188, 112, v27);
    goto LABEL_67;
  }
  v147 = sub_140146C88(a1);
  v27 = v147;
  if ( v147 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOWORD(v3) = v3 | 0xC000;
      v65 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v66 = (const wchar_t *)&unk_1400D44E0;
      v67 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v128)
                              + 16LL);
      if ( v67 )
        v66 = v67;
      v68 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v130)
                              + 16LL);
      v69 = (const wchar_t *)&unk_1400D44E0;
      if ( v68 )
        v69 = v68;
      sub_1400A5E80(v65, 2u, 0xCu, 0x15u, (__int64)&unk_1400DA108, v66, v69, L"InitializeCompletePacketsCallback()");
      v6 = (_QWORD *)a3;
      v27 = v147;
    }
    if ( (v3 & 0x8000) != 0 )
    {
      v70 = v129;
      LOWORD(v3) = v3 & 0x7FFF;
      if ( v129 )
      {
        if ( _InterlockedExchangeAdd(v129 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
          if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
        }
      }
    }
    if ( (v3 & 0x4000) != 0 )
    {
      v71 = v131;
      if ( v131 )
      {
        if ( _InterlockedExchangeAdd(v131 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
          if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
        }
      }
    }
    sub_1400113EC(a1, (__int64)L"InitializeCompletePacketsCallback()", 189, 112, v27);
    goto LABEL_67;
  }
  v89 = 0;
  v72 = *(__int64 **)(a1 + 456);
  v91 = 0;
  v88 = sub_140098150;
  v73 = *v72;
  v90 = sub_140095E80;
  v74 = sub_14000DB1C(&v134, (_QWORD *)a1, (__int64)&v88);
  v75 = sub_1400A27D4(&v140, v74);
  v76 = sub_14000DB1C(&v132, (_QWORD *)a1, (__int64)&v90);
  v77 = sub_1400A27D4(&v141, v76);
  v78 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *, _QWORD *))(v73 + 8))(
          v72,
          (unsigned int)(2 * *(_DWORD *)(*(_QWORD *)(a1 + 384) + 4LL)),
          v77,
          v75);
  v79 = v133;
  v27 = v78;
  v148 = v78;
  if ( v133 )
  {
    if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
      if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
    }
  }
  v80 = v135;
  if ( v135 )
  {
    if ( _InterlockedExchangeAdd(v135 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
      if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
    }
  }
  if ( v27 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v3 |= 0x30000u;
      v81 = (const wchar_t *)&unk_1400D44E0;
      v82 = (const wchar_t *)&unk_1400D44E0;
      v83 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v138)
                              + 16LL);
      if ( v83 )
        v82 = v83;
      v84 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v136)
                              + 16LL);
      if ( v84 )
        v81 = v84;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xCu,
        0x16u,
        (__int64)&unk_1400DA108,
        v81,
        v82,
        L"m_hardwareTxQueue->Configure((m_fragmentsRing->NumberOfElements * 2), common_services::MakeVoidCallback<kstd::re"
         "move_reference<decltype(*this)>::type >(this, &kstd::remove_reference<decltype(*this)>::type::EvtTxPacketsTrans"
         "mitted), common_services::MakeVoidCallback<kstd::remove_reference<decltype(*this)>::type >(this, &kstd::remove_"
         "reference<decltype(*this)>::type::UpdateCompletePacketsCallback))");
      v27 = v148;
    }
    if ( (v3 & 0x20000) != 0 )
    {
      v85 = v137;
      v3 &= ~0x20000u;
      if ( v137 )
      {
        if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
          if ( _InterlockedExchangeAdd(v85 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 16LL))(v85);
        }
      }
    }
    if ( (v3 & 0x10000) != 0 )
    {
      v86 = v139;
      if ( v139 )
      {
        if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 8LL))(v86);
          if ( _InterlockedExchangeAdd(v86 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v86 + 16LL))(v86);
        }
      }
    }
    sub_140094CBC(
      a1,
      (__int64)L"m_hardwareTxQueue->Configure((m_fragmentsRing->NumberOfElements * 2), common_services::MakeVoidCallback<k"
                "std::remove_reference<decltype(*this)>::type >(this, &kstd::remove_reference<decltype(*this)>::type::Evt"
                "TxPacketsTransmitted), common_services::MakeVoidCallback<kstd::remove_reference<decltype(*this)>::type >"
                "(this, &kstd::remove_reference<decltype(*this)>::type::UpdateCompletePacketsCallback))",
      201,
      112,
      v27);
    if ( v5 )
    {
      sub_1400953B8(v5);
      ExFreePool(v5);
    }
    v35 = *(volatile signed __int32 **)(a3 + 8);
    goto LABEL_70;
  }
  if ( v5 )
  {
    sub_1400953B8(v5);
    ExFreePool(v5);
  }
  v87 = *(volatile signed __int32 **)(a3 + 8);
  if ( v87 )
  {
    if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 8LL))(v87);
      if ( _InterlockedExchangeAdd(v87 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v87 + 16LL))(v87);
    }
  }
  return 0LL;
}
