__int64 __fastcall sub_1401154C0(__int64 *a1)
{
  const wchar_t *v1; // r13
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rdi
  __int64 *v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rsi
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  const wchar_t *v20; // rax
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  __int64 *v23; // rsi
  __int64 v24; // rdi
  _QWORD *v25; // rbx
  _QWORD *v26; // rax
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  __int64 *v32; // r15
  __int64 v33; // r14
  _QWORD *v34; // rsi
  __int64 *v35; // rdi
  _QWORD *v36; // rbx
  _QWORD *v37; // rax
  const wchar_t *v38; // rdi
  const wchar_t *v39; // rax
  __int64 v40; // rsi
  const wchar_t *v41; // rax
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  __int64 *v44; // r12
  __int64 v45; // r15
  _QWORD *v46; // r14
  _QWORD *v47; // rsi
  _QWORD *v48; // rdi
  _QWORD *v49; // rbx
  _QWORD *v50; // rax
  const wchar_t *v51; // rdi
  const wchar_t *v52; // rax
  const wchar_t *v53; // rax
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  __int64 *v56; // r12
  __int64 v57; // r15
  _QWORD *v58; // r14
  _QWORD *v59; // rsi
  _QWORD *v60; // rdi
  _QWORD *v61; // rbx
  _QWORD *v62; // rax
  const wchar_t *v63; // rdi
  const wchar_t *v64; // rax
  __int64 v65; // rsi
  const wchar_t *v66; // rax
  volatile signed __int32 *v67; // rdi
  volatile signed __int32 *v68; // rdi
  const wchar_t *v69; // rdi
  const wchar_t *v70; // rax
  const wchar_t *v71; // rax
  volatile signed __int32 *v72; // rdi
  volatile signed __int32 *v73; // rdi
  __int64 *P; // [rsp+50h] [rbp-B0h]
  __int64 *v76; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v77; // [rsp+60h] [rbp-A0h]
  char v78[8]; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v79; // [rsp+70h] [rbp-90h]
  char v80[8]; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v81; // [rsp+80h] [rbp-80h]
  char v82[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v83; // [rsp+90h] [rbp-70h]
  char v84[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v85; // [rsp+A0h] [rbp-60h]
  char v86[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v87; // [rsp+B0h] [rbp-50h]
  char v88[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v89; // [rsp+C0h] [rbp-40h]
  char v90[8]; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v91; // [rsp+D0h] [rbp-30h]
  char v92[8]; // [rsp+D8h] [rbp-28h] BYREF
  volatile signed __int32 *v93; // [rsp+E0h] [rbp-20h]
  char v94[8]; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v95; // [rsp+F0h] [rbp-10h]
  char v96[8]; // [rsp+F8h] [rbp-8h] BYREF
  volatile signed __int32 *v97; // [rsp+100h] [rbp+0h]
  char v98[8]; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v99; // [rsp+110h] [rbp+10h]
  char v100[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v101; // [rsp+120h] [rbp+20h]
  char v102[8]; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h] BYREF
  __int64 v105; // [rsp+148h] [rbp+48h] BYREF
  __int64 v106; // [rsp+158h] [rbp+58h] BYREF
  __int64 v107; // [rsp+168h] [rbp+68h] BYREF
  __int64 v108; // [rsp+178h] [rbp+78h] BYREF
  __int64 v109; // [rsp+188h] [rbp+88h] BYREF
  __int64 v110; // [rsp+198h] [rbp+98h] BYREF
  __int64 v111; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v112; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v113; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v114; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v115; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v116; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v117; // [rsp+208h] [rbp+108h] BYREF
  __int64 v118; // [rsp+218h] [rbp+118h] BYREF
  __int64 v119; // [rsp+228h] [rbp+128h] BYREF
  __int64 v120[11]; // [rsp+238h] [rbp+138h] BYREF
  __int64 *v122; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v123; // [rsp+2B0h] [rbp+1B0h]
  __int64 *v124; // [rsp+2B8h] [rbp+1B8h]

  LOWORD(v1) = 0;
  v2 = 0LL;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::BindComponents", (__int64)a1);
      if ( v5 )
        v2 = v5;
      P = v2;
    }
  }
  v6 = a1[48];
  v7 = a1[51];
  v76 = a1 + 51;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, v6);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v1 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v78)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 **))(a1[7] + 24))(a1 + 7, &v76)
                              + 16LL);
      if ( v11 )
        v1 = v11;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16),
        2u,
        8u,
        0x26u,
        (__int64)&unk_1400D91A8,
        v1,
        v9,
        L"m_osServices->Bind(m_device)");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v12 = v77;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v13 = v79;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008774((int)a1, (__int64)L"m_osServices->Bind(m_device)", 320, 74, v8);
  }
  else
  {
    v14 = (__int64 *)a1[49];
    v124 = a1 + 49;
    v15 = *v14;
    v16 = sub_1400A27D4(&v104, a1 + 51);
    v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v15 + 72))(v14, v16);
    if ( v8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = *(_QWORD *)(a1[22] + 16);
        v1 = (const wchar_t *)&unk_1400D44E0;
        v18 = (const wchar_t *)&unk_1400D44E0;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v80)
                                + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v82)
                                + 16LL);
        if ( v20 )
          v1 = v20;
        sub_1400A5E80(v17, 2u, 8u, 0x27u, (__int64)&unk_1400D91A8, v18, v1, L"m_osResources->Bind(m_osServices)");
        LOBYTE(v1) = 12;
      }
      if ( ((unsigned __int8)v1 & 8) != 0 )
      {
        v21 = v81;
        LOBYTE(v1) = (unsigned __int8)v1 & 0xF7;
        if ( v81 )
        {
          if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      if ( ((unsigned __int8)v1 & 4) != 0 )
      {
        v22 = v83;
        if ( v83 )
        {
          if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
          }
        }
      }
      sub_140008DF0((int)a1, (__int64)L"m_osResources->Bind(m_osServices)", 321, 74, v8);
    }
    else
    {
      v23 = (__int64 *)a1[53];
      v123 = a1 + 53;
      v24 = *v23;
      v25 = sub_1400A27D4(&v105, a1 + 49);
      v26 = sub_1400A27D4(&v106, a1 + 51);
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, _QWORD *))(v24 + 112))(v23, v26, v25);
      if ( v8 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v1 = (const wchar_t *)&unk_1400D44E0;
          v27 = (const wchar_t *)&unk_1400D44E0;
          v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v86)
                                  + 16LL);
          if ( v28 )
            v27 = v28;
          v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v84)
                                  + 16LL);
          if ( v29 )
            v1 = v29;
          sub_1400A5E80(
            *(_QWORD *)(a1[22] + 16),
            2u,
            8u,
            0x28u,
            (__int64)&unk_1400D91A8,
            v1,
            v27,
            L"m_hardwareAbstraction->Bind(m_osServices, m_osResources)");
          LOBYTE(v1) = 48;
        }
        if ( ((unsigned __int8)v1 & 0x20) != 0 )
        {
          v30 = v85;
          LOBYTE(v1) = (unsigned __int8)v1 & 0xDF;
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
              if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
            }
          }
        }
        if ( ((unsigned __int8)v1 & 0x10) != 0 )
        {
          v31 = v87;
          if ( v87 )
          {
            if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
              if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
            }
          }
        }
        sub_140009AE8((int)a1, (__int64)L"m_hardwareAbstraction->Bind(m_osServices, m_osResources)", 322, 74, v8);
      }
      else
      {
        v32 = (__int64 *)a1[55];
        v122 = a1 + 55;
        v33 = *v32;
        v34 = sub_1400A27D4(&v107, a1 + 53);
        v35 = sub_1400A5180(&v108, a1 + 59);
        v36 = sub_1400A27D4(&v109, a1 + 49);
        v37 = sub_1400A27D4(&v110, a1 + 51);
        v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64 *, _QWORD *))(v33 + 24))(
               v32,
               v37,
               v36,
               v35,
               v34);
        if ( v8 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v1 = (const wchar_t *)&unk_1400D44E0;
            v38 = (const wchar_t *)&unk_1400D44E0;
            v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(
                                                   a1 + 7,
                                                   v88)
                                    + 16LL);
            if ( v39 )
              v38 = v39;
            v40 = *(_QWORD *)(a1[22] + 16);
            v41 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(
                                                   a1 + 7,
                                                   v90)
                                    + 16LL);
            if ( v41 )
              v1 = v41;
            sub_1400A5E80(
              v40,
              2u,
              8u,
              0x29u,
              (__int64)&unk_1400D91A8,
              v38,
              v1,
              L"m_netAdapter->Bind(m_osServices, m_osResources, m_eventViewerLogger, m_hardwareAbstraction)");
            LOBYTE(v1) = -64;
          }
          if ( (char)v1 < 0 )
          {
            v42 = v89;
            LOBYTE(v1) = (unsigned __int8)v1 & 0x7F;
            if ( v89 )
            {
              if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
                if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
              }
            }
          }
          if ( ((unsigned __int8)v1 & 0x40) != 0 )
          {
            v43 = v91;
            if ( v91 )
            {
              if ( _InterlockedExchangeAdd(v91 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
                if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
              }
            }
          }
          sub_14001191C(
            (int)a1,
            (__int64)L"m_netAdapter->Bind(m_osServices, m_osResources, m_eventViewerLogger, m_hardwareAbstraction)",
            323,
            74,
            v8);
        }
        else
        {
          v44 = (__int64 *)a1[65];
          v45 = *v44;
          v46 = sub_1400A27D4(&v111, a1 + 57);
          v47 = sub_1400A27D4(&v112, v122);
          v48 = sub_1400A27D4(&v113, v123);
          v49 = sub_1400A27D4(&v114, v124);
          v50 = sub_1400A27D4(&v115, v76);
          v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *))(v45 + 16))(
                 v44,
                 v50,
                 v49,
                 v48,
                 v47,
                 v46);
          if ( v8 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v1 = (const wchar_t *)&unk_1400D44E0;
              v51 = (const wchar_t *)&unk_1400D44E0;
              v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(
                                                     a1 + 7,
                                                     v94)
                                      + 16LL);
              if ( v52 )
                v51 = v52;
              v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(
                                                     a1 + 7,
                                                     v92)
                                      + 16LL);
              if ( v53 )
                v1 = v53;
              sub_1400A5E80(
                *(_QWORD *)(a1[22] + 16),
                2u,
                8u,
                0x2Au,
                (__int64)&unk_1400D91A8,
                v1,
                v51,
                L"m_d0EntryFlows->Bind(m_osServices, m_osResources, m_hardwareAbstraction, m_netAdapter, m_link)");
              LOWORD(v1) = 768;
            }
            if ( ((unsigned __int16)v1 & 0x200) != 0 )
            {
              v54 = v93;
              LOWORD(v1) = (unsigned __int16)v1 & 0xFDFF;
              if ( v93 )
              {
                if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
                  if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
                }
              }
            }
            if ( ((unsigned __int16)v1 & 0x100) != 0 )
            {
              v55 = v95;
              if ( v95 )
              {
                if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
                  if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
                }
              }
            }
            sub_140073450(
              (__int64)a1,
              (__int64)L"m_d0EntryFlows->Bind(m_osServices, m_osResources, m_hardwareAbstraction, m_netAdapter, m_link)",
              324,
              74,
              v8);
          }
          else
          {
            v56 = (__int64 *)a1[67];
            v57 = *v56;
            v58 = sub_1400A27D4(&v116, a1 + 57);
            v59 = sub_1400A27D4(&v117, v122);
            v60 = sub_1400A27D4(&v118, v123);
            v61 = sub_1400A27D4(&v119, v124);
            v62 = sub_1400A27D4(v120, v76);
            v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, _QWORD *, _QWORD *, _QWORD *))(v57 + 16))(
                   v56,
                   v62,
                   v61,
                   v60,
                   v59,
                   v58);
            if ( v8 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v1 = (const wchar_t *)&unk_1400D44E0;
                v63 = (const wchar_t *)&unk_1400D44E0;
                v64 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(
                                                       a1 + 7,
                                                       v96)
                                        + 16LL);
                if ( v64 )
                  v63 = v64;
                v65 = *(_QWORD *)(a1[22] + 16);
                v66 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(
                                                       a1 + 7,
                                                       v98)
                                        + 16LL);
                if ( v66 )
                  v1 = v66;
                sub_1400A5E80(
                  v65,
                  2u,
                  8u,
                  0x2Bu,
                  (__int64)&unk_1400D91A8,
                  v63,
                  v1,
                  L"m_d0ExitFlows->Bind(m_osServices, m_osResources, m_hardwareAbstraction, m_netAdapter, m_link)");
                LOWORD(v1) = 3072;
              }
              if ( ((unsigned __int16)v1 & 0x800) != 0 )
              {
                v67 = v97;
                LOWORD(v1) = (unsigned __int16)v1 & 0xF7FF;
                if ( v97 )
                {
                  if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
                    if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
                  }
                }
              }
              if ( ((unsigned __int16)v1 & 0x400) != 0 )
              {
                v68 = v99;
                if ( v99 )
                {
                  if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
                    if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
                  }
                }
              }
              sub_140073304(
                (__int64)a1,
                (__int64)L"m_d0ExitFlows->Bind(m_osServices, m_osResources, m_hardwareAbstraction, m_netAdapter, m_link)",
                325,
                74,
                v8);
            }
            else
            {
              v8 = sub_1401161F8(a1);
              if ( v8 )
              {
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v1 = (const wchar_t *)&unk_1400D44E0;
                  v69 = (const wchar_t *)&unk_1400D44E0;
                  v70 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(
                                                         a1 + 7,
                                                         v102)
                                          + 16LL);
                  if ( v70 )
                    v69 = v70;
                  v71 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(
                                                         a1 + 7,
                                                         v100)
                                          + 16LL);
                  if ( v71 )
                    v1 = v71;
                  sub_1400A5E80(
                    *(_QWORD *)(a1[22] + 16),
                    2u,
                    8u,
                    0x2Cu,
                    (__int64)&unk_1400D91A8,
                    v1,
                    v69,
                    L"BindTreeGlobals()");
                  LOWORD(v1) = 12288;
                }
                if ( ((unsigned __int16)v1 & 0x2000) != 0 )
                {
                  v72 = v101;
                  LOWORD(v1) = (unsigned __int16)v1 & 0xDFFF;
                  if ( v101 )
                  {
                    if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
                      if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
                    }
                  }
                }
                if ( ((unsigned __int16)v1 & 0x1000) != 0 )
                {
                  v73 = v103;
                  if ( v103 )
                  {
                    if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
                      if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
                    }
                  }
                }
                sub_140007D14((int)a1, (__int64)L"BindTreeGlobals()", 326, 74, v8);
              }
              else
              {
                v8 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( P )
  {
    sub_14007404C(P);
    ExFreePool(P);
  }
  return v8;
}
