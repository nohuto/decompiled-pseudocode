__int64 __fastcall sub_140019B00(_QWORD *a1)
{
  __int16 v1; // r14
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // rsi
  void *v12; // r12
  void *v13; // rdi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  volatile signed __int32 *v23; // rbx
  __int64 v24; // rsi
  void *v25; // r12
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rax
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rsi
  void *v34; // r12
  void *v35; // rdi
  void *v36; // rax
  __int64 v37; // rax
  int v38; // edx
  void *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // rdi
  __int64 *v45; // rbx
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  volatile signed __int32 *v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  volatile signed __int32 *v54; // rbx
  void *v55; // r12
  void *v56; // rdi
  void *v57; // rax
  __int64 v58; // rax
  int v59; // edx
  void *v60; // rax
  volatile signed __int32 *v61; // rbx
  volatile signed __int32 *v62; // rbx
  void *v63; // r12
  void *v64; // rdi
  void *v65; // rax
  __int64 v66; // rax
  int v67; // edx
  void *v68; // rax
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  void *v71; // r12
  void *v72; // rdi
  void *v73; // rax
  __int64 v74; // rax
  int v75; // edx
  void *v76; // rax
  volatile signed __int32 *v77; // rbx
  volatile signed __int32 *v78; // rbx
  __int64 v80; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v81; // [rsp+60h] [rbp-A8h]
  __int64 v82; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v83; // [rsp+70h] [rbp-98h]
  __int64 v84; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v85; // [rsp+80h] [rbp-88h]
  _BYTE v86[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v87; // [rsp+90h] [rbp-78h]
  _BYTE v88[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v89; // [rsp+A0h] [rbp-68h]
  _BYTE v90[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v91; // [rsp+B0h] [rbp-58h]
  char v92; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v93; // [rsp+C0h] [rbp-48h]
  _BYTE v94[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v95; // [rsp+D0h] [rbp-38h]
  _BYTE v96[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v97; // [rsp+E0h] [rbp-28h]
  _BYTE v98[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v99; // [rsp+F0h] [rbp-18h]
  _BYTE v100[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v101; // [rsp+100h] [rbp-8h]
  _BYTE v102[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v103; // [rsp+110h] [rbp+8h]
  _BYTE v104[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v105; // [rsp+120h] [rbp+18h]
  unsigned int v106; // [rsp+158h] [rbp+50h] BYREF

  v1 = 0;
  v106 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::AllocateComponents",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = ExAllocatePool2(64LL, 32LL, 808465507LL);
  if ( !v6 || (v7 = sub_1400A7378(v6, a1)) == 0 || (v8 = *(_QWORD *)(v7 + 16)) == 0 )
  {
    v8 = 0LL;
    v7 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  }
  v9 = (volatile signed __int32 *)a1[52];
  a1[52] = v7;
  a1[51] = v8;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v10 = -1073741801;
  if ( a1[51] )
  {
    v20 = ExAllocatePool2(64LL, 32LL, 808465508LL);
    if ( !v20 || (v21 = sub_1400A7308(v20, a1)) == 0 || (v22 = *(_QWORD *)(v21 + 16)) == 0 )
    {
      v22 = 0LL;
      v21 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    }
    v23 = (volatile signed __int32 *)a1[54];
    a1[54] = v21;
    a1[53] = v22;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    if ( a1[53] )
    {
      if ( a1[57] == 5LL )
        goto LABEL_79;
      if ( !(unsigned int)sub_14000CDB4(a1 + 55, 5uLL) )
        a1[57] = 5LL;
      if ( a1[57] == 5LL )
      {
LABEL_79:
        v106 = 0;
        v42 = 0;
        v43 = 0;
        while ( 1 )
        {
          v44 = v43;
          v45 = (__int64 *)(a1[56] + 16LL * v42);
          v46 = (__int64 *)sub_1400A7620(
                             (unsigned int)&v92,
                             808465509,
                             (_DWORD)a1,
                             (unsigned int)&v106,
                             (__int64)&unk_1400D598C + v43);
          v47 = v45[1];
          v45[1] = v46[1];
          v48 = *v46;
          v46[1] = v47;
          v49 = *v45;
          *v45 = v48;
          *v46 = v49;
          v50 = v93;
          if ( v93 )
          {
            if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
              if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
            }
          }
          if ( !*(_QWORD *)(a1[56] + 16 * v44) )
            break;
          v42 = v106 + 1;
          v106 = v42;
          v43 = v42;
          if ( v42 >= 5 )
          {
            v51 = ExAllocatePool2(64LL, 32LL, 808465510LL);
            if ( !v51 || (v52 = sub_1400A73E8(v51, a1)) == 0 || (v53 = *(_QWORD *)(v52 + 16)) == 0 )
            {
              v53 = 0LL;
              v52 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
            }
            v54 = (volatile signed __int32 *)a1[60];
            a1[60] = v52;
            a1[59] = v53;
            if ( v54 )
            {
              if ( !_InterlockedDecrement(v54 + 2) )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
                if ( !_InterlockedDecrement(v54 + 3) )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
              }
            }
            if ( a1[59] )
            {
              v10 = sub_140051090();
              if ( v10 )
              {
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v63 = &unk_1400D44E0;
                  v64 = &unk_1400D44E0;
                  v65 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(
                                                a1 + 7,
                                                v100)
                                 + 16LL);
                  if ( v65 )
                    v64 = v65;
                  v66 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v98);
                  LOBYTE(v67) = 2;
                  v68 = *(void **)(*(_QWORD *)v66 + 16LL);
                  if ( v68 )
                    v63 = v68;
                  sub_1400A5E80(
                    *(_QWORD *)(a1[22] + 16LL),
                    v67,
                    10,
                    15,
                    (__int64)&unk_1400D5958,
                    (__int64)v63,
                    (__int64)v64,
                    (__int64)L"m_otherInterruptsDispatcher->AllocateComponents()",
                    v10);
                  v1 = 3072;
                }
                if ( (v1 & 0x800) != 0 )
                {
                  v69 = v99;
                  v1 &= ~0x800u;
                  if ( v99 )
                  {
                    if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
                      if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
                    }
                  }
                }
                if ( (v1 & 0x400) != 0 )
                {
                  v70 = v101;
                  if ( v101 )
                  {
                    if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
                      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
                    }
                  }
                }
                sub_14000999C((int)a1, (__int64)L"m_otherInterruptsDispatcher->AllocateComponents()", 143, 65, v10);
              }
              else
              {
                v10 = 0;
              }
            }
            else
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v55 = &unk_1400D44E0;
                v56 = &unk_1400D44E0;
                v57 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v96)
                               + 16LL);
                if ( v57 )
                  v56 = v57;
                v58 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v94);
                LOBYTE(v59) = 2;
                v60 = *(void **)(*(_QWORD *)v58 + 16LL);
                if ( v60 )
                  v55 = v60;
                sub_1400A3320(
                  *(_QWORD *)(a1[22] + 16LL),
                  v59,
                  10,
                  14,
                  (__int64)&unk_1400D5958,
                  (__int64)v55,
                  (__int64)v56,
                  (__int64)L"m_otherInterruptsDispatcher");
                v1 = 768;
              }
              if ( (v1 & 0x200) != 0 )
              {
                v61 = v95;
                v1 &= ~0x200u;
                if ( v95 )
                {
                  if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
                    if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
                  }
                }
              }
              if ( (v1 & 0x100) != 0 )
              {
                v62 = v97;
                if ( v97 )
                {
                  if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
                    if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
                  }
                }
              }
              sub_14000B7A4((int)a1, (__int64)L"m_otherInterruptsDispatcher", 141, 65);
            }
            goto LABEL_148;
          }
        }
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v71 = &unk_1400D44E0;
          v72 = &unk_1400D44E0;
          v73 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v104) + 16LL);
          if ( v73 )
            v72 = v73;
          v74 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v102);
          LOBYTE(v75) = 2;
          v76 = *(void **)(*(_QWORD *)v74 + 16LL);
          if ( v76 )
            v71 = v76;
          sub_1400A3320(
            *(_QWORD *)(a1[22] + 16LL),
            v75,
            10,
            13,
            (__int64)&unk_1400D5958,
            (__int64)v71,
            (__int64)v72,
            (__int64)L"m_interruptDispatchers[i]");
          LOBYTE(v1) = -64;
        }
        if ( (v1 & 0x80u) != 0 )
        {
          v77 = v103;
          LOBYTE(v1) = v1 & 0x7F;
          if ( v103 )
          {
            if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
              if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 16LL))(v77);
            }
          }
        }
        if ( (v1 & 0x40) != 0 )
        {
          v78 = v105;
          if ( v105 )
          {
            if ( _InterlockedExchangeAdd(v105 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
              if ( _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 16LL))(v78);
            }
          }
        }
        sub_140017CC8((int)a1, (__int64)L"m_interruptDispatchers[i]", 137, 65);
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v33 = *(_QWORD *)(a1[22] + 16LL);
          v34 = &unk_1400D44E0;
          v35 = &unk_1400D44E0;
          v36 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v88) + 16LL);
          if ( v36 )
            v35 = v36;
          v37 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v90);
          LOBYTE(v38) = 2;
          v39 = *(void **)(*(_QWORD *)v37 + 16LL);
          if ( v39 )
            v34 = v39;
          sub_1400A5E80(
            v33,
            v38,
            10,
            12,
            (__int64)&unk_1400D5958,
            (__int64)v35,
            (__int64)v34,
            (__int64)L"ResizeVector(m_interruptDispatchers, sc_numInterrupts)",
            23);
          v10 = -1073741801;
          LOBYTE(v1) = 48;
        }
        if ( (v1 & 0x20) != 0 )
        {
          v40 = v89;
          LOBYTE(v1) = v1 & 0xDF;
          if ( v89 )
          {
            if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
              if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v41 = v91;
          if ( v91 )
          {
            if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
              if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
            }
          }
        }
        sub_1400143F0((int)a1, (__int64)L"ResizeVector(m_interruptDispatchers, sc_numInterrupts)", 132, 65, 0xC0000017);
      }
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v24 = *(_QWORD *)(a1[22] + 16LL);
        v25 = &unk_1400D44E0;
        v26 = &unk_1400D44E0;
        v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v84) + 16LL);
        if ( v27 )
          v26 = v27;
        v28 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v86);
        LOBYTE(v29) = 2;
        v30 = *(void **)(*(_QWORD *)v28 + 16LL);
        if ( v30 )
          v25 = v30;
        sub_1400A3320(
          v24,
          v29,
          10,
          11,
          (__int64)&unk_1400D5958,
          (__int64)v26,
          (__int64)v25,
          (__int64)L"m_interruptCauseRegister");
        v10 = -1073741801;
        LOBYTE(v1) = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v31 = v85;
        LOBYTE(v1) = v1 & 0xF7;
        if ( v85 )
        {
          if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v32 = v87;
        if ( v87 )
        {
          if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
            if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
          }
        }
      }
      sub_14000B6CC((int)a1, (__int64)L"m_interruptCauseRegister", 130, 65);
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = *(_QWORD *)(a1[22] + 16LL);
      v12 = &unk_1400D44E0;
      v13 = &unk_1400D44E0;
      v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v80) + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 16LL))(a1 + 7, &v82);
      LOBYTE(v16) = 2;
      v17 = *(void **)(*(_QWORD *)v15 + 16LL);
      if ( v17 )
        v12 = v17;
      sub_1400A3320(
        v11,
        v16,
        10,
        10,
        (__int64)&unk_1400D5958,
        (__int64)v13,
        (__int64)v12,
        (__int64)L"m_interruptVectorAllocator");
      v10 = -1073741801;
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v18 = v81;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v19 = v83;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    sub_140019600((int)a1, (__int64)L"m_interruptVectorAllocator", 127, 65);
  }
LABEL_148:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v10;
}
