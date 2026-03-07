__int64 __fastcall sub_14004A6CC(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 *v5; // rdi
  __int64 v7; // rsi
  __int64 *v8; // r15
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rdi
  void *v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  void *v31; // r14
  void *v32; // rdi
  void *v33; // rax
  __int64 v34; // rax
  int v35; // edx
  void *v36; // rax
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rbx
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  _QWORD *v46; // rax
  volatile signed __int32 *v47; // rbx
  void *v48; // rdi
  void *v49; // rax
  __int64 v50; // rax
  int v51; // edx
  void *v52; // rax
  void *v53; // rcx
  volatile signed __int32 *v54; // rbx
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  volatile signed __int32 *v58; // rbx
  __int64 *v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // r9
  unsigned int v63; // edi
  void *v64; // rdi
  void *v65; // rax
  __int64 v66; // rax
  int v67; // edx
  __int64 v68; // rax
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  volatile signed __int32 *v71; // rbx
  volatile signed __int32 *v72; // rbx
  volatile signed __int32 *v73; // rbx
  void *v74; // rdi
  void *v75; // rax
  __int64 v76; // rax
  int v77; // edx
  __int64 v78; // rax
  volatile signed __int32 *v79; // rbx
  volatile signed __int32 *v80; // rbx
  volatile signed __int32 *v81; // rbx
  volatile signed __int32 *v82; // rbx
  volatile signed __int32 *v83; // rbx
  unsigned int v84; // [rsp+50h] [rbp-B0h]
  unsigned int v85; // [rsp+50h] [rbp-B0h]
  __int128 v86; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v87[8]; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v88; // [rsp+78h] [rbp-88h]
  _BYTE v89[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v90; // [rsp+88h] [rbp-78h]
  _BYTE v91[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v92; // [rsp+98h] [rbp-68h]
  _BYTE v93[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v94; // [rsp+A8h] [rbp-58h]
  _BYTE v95[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v96; // [rsp+B8h] [rbp-48h]
  __int128 v97; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v98; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v99; // [rsp+D8h] [rbp-28h]
  _BYTE v100[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v101; // [rsp+E8h] [rbp-18h]
  _BYTE v102[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v103; // [rsp+F8h] [rbp-8h]
  _BYTE v104[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v105; // [rsp+108h] [rbp+8h]
  _BYTE v106[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v107; // [rsp+118h] [rbp+18h]
  _BYTE v108[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v109; // [rsp+128h] [rbp+28h]
  _BYTE v110[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v111; // [rsp+138h] [rbp+38h]
  _BYTE v112[64]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD *v114; // [rsp+1A8h] [rbp+A8h]

  v114 = a4;
  v5 = (__int64 *)a3;
  LOWORD(v7) = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnQueueMsixInterruptControl::Bind", a1);
      if ( v10 )
        v8 = v10;
    }
    a4 = v114;
  }
  if ( !*v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (__int64)&unk_1400D44E0;
      v11 = &unk_1400D44E0;
      v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v87)
                     + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, &v86);
      LOBYTE(v14) = 2;
      v15 = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
      if ( v15 )
        v7 = v15;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v14,
        10,
        10,
        (__int64)&unk_1400D7350,
        v7,
        (__int64)v11,
        (__int64)L"interruptAssertedCallback");
      v5 = (__int64 *)a3;
      LOBYTE(v7) = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v16 = (volatile signed __int32 *)*((_QWORD *)&v86 + 1);
      LOBYTE(v7) = v7 & 0xFD;
      if ( *((_QWORD *)&v86 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v17 = v88;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_140017CC8(a1, (__int64)L"interruptAssertedCallback", 77, 68);
LABEL_61:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v39 = (volatile signed __int32 *)a2[1];
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
      }
    }
    v40 = (volatile signed __int32 *)v5[1];
    if ( v40 )
    {
      if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    v41 = (volatile signed __int32 *)v114[1];
    if ( v41 && _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
    }
    return 3221225485LL;
  }
  v18 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = v5[1];
  v19 = *v5;
  v5[1] = v18;
  v20 = *(_QWORD *)(a1 + 384);
  *(_QWORD *)(a1 + 384) = v19;
  *v5 = v20;
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (__int64)&unk_1400D44E0;
      v21 = &unk_1400D44E0;
      v22 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v91)
                     + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v89);
      LOBYTE(v24) = 2;
      v25 = *(_QWORD *)(*(_QWORD *)v23 + 16LL);
      if ( v25 )
        v7 = v25;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v24,
        10,
        11,
        (__int64)&unk_1400D7350,
        v7,
        (__int64)v21,
        (__int64)L"interruptDispatcher");
      v5 = (__int64 *)a3;
      LOBYTE(v7) = 12;
    }
    if ( (v7 & 8) != 0 )
    {
      v26 = v90;
      LOBYTE(v7) = v7 & 0xF7;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v27 = v92;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    sub_14000B444(a1, (__int64)L"interruptDispatcher", 80, 68);
    goto LABEL_61;
  }
  v28 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = a2[1];
  v29 = *a2;
  a2[1] = v28;
  v30 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = v29;
  *a2 = v30;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v31 = &unk_1400D44E0;
      v32 = &unk_1400D44E0;
      v33 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v95)
                     + 16LL);
      if ( v33 )
        v32 = v33;
      v34 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v93);
      LOBYTE(v35) = 2;
      v36 = *(void **)(*(_QWORD *)v34 + 16LL);
      if ( v36 )
        v31 = v36;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v35,
        10,
        12,
        (__int64)&unk_1400D7350,
        (__int64)v31,
        (__int64)v32,
        (__int64)L"interruptVectorAllocator");
      v5 = (__int64 *)a3;
      LOBYTE(v7) = 48;
    }
    if ( (v7 & 0x20) != 0 )
    {
      v37 = v94;
      LOBYTE(v7) = v7 & 0xDF;
      if ( v94 )
      {
        if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v7 & 0x10) != 0 )
    {
      v38 = v96;
      if ( v96 )
      {
        if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000B6CC(a1, (__int64)L"interruptVectorAllocator", 83, 68);
    goto LABEL_61;
  }
  v43 = *(_QWORD *)(a1 + 424);
  *(_QWORD *)(a1 + 424) = a4[1];
  v44 = *a4;
  a4[1] = v43;
  v45 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v44;
  *(_QWORD *)&v86 = sub_14004B580;
  *a4 = v45;
  DWORD2(v86) = 0;
  v97 = v86;
  v46 = sub_14000DB1C(&v98, (_QWORD *)a1, (__int64)&v97);
  sub_1400A3C70(a1 + 400, v46);
  v47 = v99;
  if ( v99 )
  {
    if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
    }
  }
  if ( !*(_QWORD *)(a1 + 400) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v48 = &unk_1400D44E0;
      v49 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                    a1 + 56,
                                    v100)
                     + 16LL);
      if ( v49 )
        v48 = v49;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v50 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v102);
      LOBYTE(v51) = 2;
      v52 = *(void **)(*(_QWORD *)v50 + 16LL);
      v53 = &unk_1400D44E0;
      if ( v52 )
        v53 = v52;
      sub_1400A3320(
        v7,
        v51,
        10,
        13,
        (__int64)&unk_1400D7350,
        (__int64)v48,
        (__int64)v53,
        (__int64)L"m_selfInterruptAssertedCallback");
      v5 = (__int64 *)a3;
      LOBYTE(v7) = -64;
    }
    if ( (v7 & 0x80u) != 0LL )
    {
      v54 = v101;
      LOBYTE(v7) = v7 & 0x7F;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
          if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
        }
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      v55 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
        }
      }
    }
    sub_14004A2A4(a1, (__int64)L"m_selfInterruptAssertedCallback", 87, 68);
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v56 = (volatile signed __int32 *)a2[1];
    if ( v56 )
    {
      if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
        if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
      }
    }
    v57 = (volatile signed __int32 *)v5[1];
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
      }
    }
    v58 = (volatile signed __int32 *)v114[1];
    if ( v58 )
    {
      if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
      }
    }
    return 3221225495LL;
  }
  v59 = *(__int64 **)(a1 + 368);
  v60 = *v59;
  v61 = sub_1400A27D4(v112, a1 + 400);
  v84 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v60 + 8))(v59, v61);
  v63 = v84;
  if ( v84 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (__int64)&unk_1400D44E0;
      v64 = &unk_1400D44E0;
      v65 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v106)
                     + 16LL);
      if ( v65 )
        v64 = v65;
      v66 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v104);
      LOBYTE(v67) = 2;
      v68 = *(_QWORD *)(*(_QWORD *)v66 + 16LL);
      if ( v68 )
        v7 = v68;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v67,
        10,
        14,
        (__int64)&unk_1400D7350,
        v7,
        (__int64)v64,
        (__int64)L"m_interruptDispatcher->RegisterInterrupt(m_selfInterruptAssertedCallback)",
        v84);
      v63 = v84;
      LOWORD(v7) = 768;
    }
    if ( (v7 & 0x200) != 0 )
    {
      v69 = v105;
      LOWORD(v7) = v7 & 0xFDFF;
      if ( v105 )
      {
        if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
          if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
        }
      }
    }
    if ( (v7 & 0x100) != 0 )
    {
      v70 = v107;
      if ( v107 )
      {
        if ( _InterlockedExchangeAdd(v107 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
          if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
        }
      }
    }
    sub_140039B9C(
      a1,
      (__int64)L"m_interruptDispatcher->RegisterInterrupt(m_selfInterruptAssertedCallback)",
      88,
      68,
      v63);
LABEL_130:
    if ( v8 )
    {
      sub_14000BFA4(v8);
      ExFreePool(v8);
    }
    v71 = (volatile signed __int32 *)a2[1];
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
        if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
      }
    }
    v72 = *(volatile signed __int32 **)(a3 + 8);
    if ( v72 )
    {
      if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
        if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
      }
    }
    v73 = (volatile signed __int32 *)v114[1];
    if ( v73 )
    {
      if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
        if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
      }
    }
    return v63;
  }
  LOBYTE(v62) = 1;
  v85 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 416) + 16LL))(
          *(_QWORD *)(a1 + 416),
          *(unsigned int *)(a1 + 436),
          *(unsigned int *)(a1 + 432),
          v62);
  v63 = v85;
  if ( v85 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (__int64)&unk_1400D44E0;
      v74 = &unk_1400D44E0;
      v75 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v110)
                     + 16LL);
      if ( v75 )
        v74 = v75;
      v76 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v108);
      LOBYTE(v77) = 2;
      v78 = *(_QWORD *)(*(_QWORD *)v76 + 16LL);
      if ( v78 )
        v7 = v78;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v77,
        10,
        15,
        (__int64)&unk_1400D7350,
        v7,
        (__int64)v74,
        (__int64)L"m_interruptVectorAllocator->AllocateInterruptVector(m_ivarIndex, m_messageId)",
        v85);
      v63 = v85;
      LOWORD(v7) = 3072;
    }
    if ( (v7 & 0x800) != 0 )
    {
      v79 = v109;
      LOWORD(v7) = v7 & 0xF7FF;
      if ( v109 )
      {
        if ( _InterlockedExchangeAdd(v109 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
          if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
        }
      }
    }
    if ( (v7 & 0x400) != 0 )
    {
      v80 = v111;
      if ( v111 )
      {
        if ( _InterlockedExchangeAdd(v111 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 8LL))(v80);
          if ( _InterlockedExchangeAdd(v80 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v80 + 16LL))(v80);
        }
      }
    }
    sub_14004A158(
      a1,
      (__int64)L"m_interruptVectorAllocator->AllocateInterruptVector(m_ivarIndex, m_messageId)",
      89,
      68,
      v63);
    goto LABEL_130;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 416) + 40LL))(
    *(_QWORD *)(a1 + 416),
    *(unsigned int *)(a1 + 436));
  if ( v8 )
  {
    sub_14000BFA4(v8);
    ExFreePool(v8);
  }
  v81 = (volatile signed __int32 *)a2[1];
  if ( v81 )
  {
    if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
      if ( _InterlockedExchangeAdd(v81 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 16LL))(v81);
    }
  }
  v82 = *(volatile signed __int32 **)(a3 + 8);
  if ( v82 )
  {
    if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 8LL))(v82);
      if ( _InterlockedExchangeAdd(v82 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v82 + 16LL))(v82);
    }
  }
  v83 = (volatile signed __int32 *)v114[1];
  if ( v83 )
  {
    if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
      if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 16LL))(v83);
    }
  }
  return 0LL;
}
