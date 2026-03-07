__int64 __fastcall sub_140119C34(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // r13
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // r12
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  const wchar_t *v13; // r12
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  const wchar_t *v19; // r12
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi
  __int64 v25; // rbx
  _QWORD *v26; // rax
  const wchar_t *v27; // r12
  const wchar_t *v28; // rdi
  const wchar_t *v29; // rax
  const wchar_t *v30; // rax
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  __int64 *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  const wchar_t *v36; // r12
  const wchar_t *v37; // rdi
  const wchar_t *v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rdi
  volatile signed __int32 *v41; // rdi
  const wchar_t *v42; // r12
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rdi
  volatile signed __int32 *v47; // rdi
  const wchar_t *v48; // r12
  const wchar_t *v49; // rdi
  const wchar_t *v50; // rax
  const wchar_t *v51; // rax
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  const wchar_t *v54; // r12
  const wchar_t *v55; // rdi
  const wchar_t *v56; // rax
  const wchar_t *v57; // rax
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  const wchar_t *v60; // r12
  const wchar_t *v61; // rdi
  const wchar_t *v62; // rax
  const wchar_t *v63; // rax
  volatile signed __int32 *v64; // rdi
  volatile signed __int32 *v65; // rdi
  __int64 v67; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v70; // [rsp+70h] [rbp-98h]
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v72; // [rsp+80h] [rbp-88h]
  _BYTE v73[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v74; // [rsp+90h] [rbp-78h]
  _BYTE v75[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v76; // [rsp+A0h] [rbp-68h]
  _BYTE v77[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v78; // [rsp+B0h] [rbp-58h]
  _BYTE v79[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v80; // [rsp+C0h] [rbp-48h]
  _BYTE v81[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v82; // [rsp+D0h] [rbp-38h]
  _BYTE v83[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v84; // [rsp+E0h] [rbp-28h]
  _BYTE v85[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v86; // [rsp+F0h] [rbp-18h]
  _BYTE v87[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v88; // [rsp+100h] [rbp-8h]
  _BYTE v89[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v90; // [rsp+110h] [rbp+8h]
  _BYTE v91[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v92; // [rsp+120h] [rbp+18h]
  _BYTE v93[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v94; // [rsp+130h] [rbp+28h]
  _BYTE v95[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v96; // [rsp+140h] [rbp+38h]
  _BYTE v97[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v98; // [rsp+150h] [rbp+48h]
  _BYTE v99[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v100; // [rsp+160h] [rbp+58h]
  _BYTE v101[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v102; // [rsp+170h] [rbp+68h]
  __int64 v103; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v104[16]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v105[26]; // [rsp+198h] [rbp+90h] BYREF

  LODWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::InitializeComponents", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            &v69)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             &v67)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        8u,
        0x2Eu,
        (__int64)&unk_1400D91A8,
        v7,
        v8,
        L"m_osServices->Initialize()");
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v68;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_1400084DC(a1, (__int64)L"m_osServices->Initialize()", 355, 74, v6);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 392) + 80LL))(
           *(_QWORD *)(a1 + 392),
           *(_QWORD *)(a1 + 384));
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (const wchar_t *)&unk_1400D44E0;
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v73)
                                + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               &v71)
                                + 16LL);
        if ( v16 )
          v13 = v16;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          8u,
          0x2Fu,
          (__int64)&unk_1400D91A8,
          v13,
          v14,
          L"m_osResources->Initialize(m_device)");
        LOBYTE(v1) = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v17 = v72;
        LOBYTE(v1) = v1 & 0xF7;
        if ( v72 )
        {
          if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v18 = v74;
        if ( v74 )
        {
          if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      sub_1400113EC(a1, (__int64)L"m_osResources->Initialize(m_device)", 356, 74, v6);
    }
    else
    {
      v6 = sub_14011B704(a1);
      if ( v6 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v19 = (const wchar_t *)&unk_1400D44E0;
          v20 = (const wchar_t *)&unk_1400D44E0;
          v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v77)
                                  + 16LL);
          if ( v21 )
            v20 = v21;
          LOBYTE(v1) = 48;
          v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v75)
                                  + 16LL);
          if ( v22 )
            v19 = v22;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            8u,
            0x30u,
            (__int64)&unk_1400D91A8,
            v19,
            v20,
            L"InitializeTreeGlobals()");
        }
        if ( (v1 & 0x20) != 0 )
        {
          v23 = v76;
          LOBYTE(v1) = v1 & 0xDF;
          if ( v76 )
          {
            if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
              if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
            }
          }
        }
        if ( (v1 & 0x10) != 0 )
        {
          v24 = v78;
          if ( v78 )
          {
            if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
              if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
            }
          }
        }
        sub_1400112A0(a1, (__int64)L"InitializeTreeGlobals()", 358, 74, v6);
      }
      else
      {
        v25 = *(_QWORD *)(a1 + 472);
        v26 = sub_1400A27D4(&v103, (__int64 *)(a1 + 392));
        v6 = sub_14013320C(v25, v26);
        if ( v6 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v27 = (const wchar_t *)&unk_1400D44E0;
            v28 = (const wchar_t *)&unk_1400D44E0;
            v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 16LL))(
                                                   a1 + 56,
                                                   v81)
                                    + 16LL);
            if ( v29 )
              v28 = v29;
            v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                             + 24LL))(
                                                   a1 + 56,
                                                   v79)
                                    + 16LL);
            if ( v30 )
              v27 = v30;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              8u,
              0x31u,
              (__int64)&unk_1400D91A8,
              v27,
              v28,
              L"m_eventViewerLogger->Initialize(m_osResources)");
            LOBYTE(v1) = -64;
          }
          if ( (v1 & 0x80u) != 0LL )
          {
            v31 = v80;
            LOBYTE(v1) = v1 & 0x7F;
            if ( v80 )
            {
              if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
                if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
              }
            }
          }
          if ( (v1 & 0x40) != 0 )
          {
            v32 = v82;
            if ( v82 )
            {
              if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
                if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
              }
            }
          }
          sub_140009704(a1, (__int64)L"m_eventViewerLogger->Initialize(m_osResources)", 359, 74, v6);
        }
        else
        {
          sub_14008CB30(v105, a1);
          v33 = *(__int64 **)(a1 + 424);
          v34 = *v33;
          v35 = sub_140133A90(v105, v104);
          v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v34 + 120))(v33, v35);
          if ( v6 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v1 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
              v36 = (const wchar_t *)&unk_1400D44E0;
              v37 = (const wchar_t *)&unk_1400D44E0;
              v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                               + 16LL))(
                                                     a1 + 56,
                                                     v85)
                                      + 16LL);
              if ( v38 )
                v37 = v38;
              v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                               + 24LL))(
                                                     a1 + 56,
                                                     v83)
                                      + 16LL);
              if ( v39 )
                v36 = v39;
              sub_1400A5E80(
                v1,
                2u,
                8u,
                0x32u,
                (__int64)&unk_1400D91A8,
                v36,
                v37,
                L"m_hardwareAbstraction->Initialize(hardwareConfigurationFactory.GetHardwareConfiguration())");
              LOWORD(v1) = 768;
            }
            if ( (v1 & 0x200) != 0 )
            {
              v40 = v84;
              LOWORD(v1) = v1 & 0xFDFF;
              if ( v84 )
              {
                if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                  if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
                }
              }
            }
            if ( (v1 & 0x100) != 0 )
            {
              v41 = v86;
              if ( v86 )
              {
                if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
                  if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
                }
              }
            }
            sub_140060D8C(
              a1,
              (__int64)L"m_hardwareAbstraction->Initialize(hardwareConfigurationFactory.GetHardwareConfiguration())",
              364,
              74,
              v6);
          }
          else
          {
            v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 40LL))(
                   *(_QWORD *)(a1 + 440),
                   *(_QWORD *)(a1 + 384));
            if ( v6 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v42 = (const wchar_t *)&unk_1400D44E0;
                v43 = (const wchar_t *)&unk_1400D44E0;
                v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                                 + 24LL))(
                                                       a1 + 56,
                                                       v87)
                                        + 16LL);
                if ( v44 )
                  v43 = v44;
                v1 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
                v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56)
                                                                                                 + 16LL))(
                                                       a1 + 56,
                                                       v89)
                                        + 16LL);
                if ( v45 )
                  v42 = v45;
                sub_1400A5E80(
                  v1,
                  2u,
                  8u,
                  0x33u,
                  (__int64)&unk_1400D91A8,
                  v43,
                  v42,
                  L"m_netAdapter->Initialize(m_device)");
                LOWORD(v1) = 3072;
              }
              if ( (v1 & 0x800) != 0 )
              {
                v46 = v88;
                LOWORD(v1) = v1 & 0xF7FF;
                if ( v88 )
                {
                  if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
                    if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
                  }
                }
              }
              if ( (v1 & 0x400) != 0 )
              {
                v47 = v90;
                if ( v90 )
                {
                  if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
                    if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
                  }
                }
              }
              sub_1400452DC(a1, (__int64)L"m_netAdapter->Initialize(m_device)", 365, 74, v6);
            }
            else
            {
              v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 520) + 24LL))(*(_QWORD *)(a1 + 520));
              if ( v6 )
              {
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v48 = (const wchar_t *)&unk_1400D44E0;
                  v49 = (const wchar_t *)&unk_1400D44E0;
                  v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                         a1 + 56,
                                                         v93)
                                          + 16LL);
                  if ( v50 )
                    v49 = v50;
                  v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                         a1 + 56,
                                                         v91)
                                          + 16LL);
                  if ( v51 )
                    v48 = v51;
                  sub_1400A5E80(
                    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
                    2u,
                    8u,
                    0x34u,
                    (__int64)&unk_1400D91A8,
                    v48,
                    v49,
                    L"m_d0EntryFlows->Initialize()");
                  LOWORD(v1) = 12288;
                }
                if ( (v1 & 0x2000) != 0 )
                {
                  v52 = v92;
                  LOWORD(v1) = v1 & 0xDFFF;
                  if ( v92 )
                  {
                    if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
                      if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
                    }
                  }
                }
                if ( (v1 & 0x1000) != 0 )
                {
                  v53 = v94;
                  if ( v94 )
                  {
                    if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                      if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
                    }
                  }
                }
                sub_140008774(a1, (__int64)L"m_d0EntryFlows->Initialize()", 366, 74, v6);
              }
              else
              {
                v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 536) + 24LL))(*(_QWORD *)(a1 + 536));
                if ( v6 )
                {
                  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                  {
                    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
                    v54 = (const wchar_t *)&unk_1400D44E0;
                    v55 = (const wchar_t *)&unk_1400D44E0;
                    v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                           a1 + 56,
                                                           v97)
                                            + 16LL);
                    if ( v56 )
                      v55 = v56;
                    v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                           a1 + 56,
                                                           v95)
                                            + 16LL);
                    if ( v57 )
                      v54 = v57;
                    sub_1400A5E80(v1, 2u, 8u, 0x35u, (__int64)&unk_1400D91A8, v54, v55, L"m_d0ExitFlows->Initialize()");
                    LOWORD(v1) = -16384;
                  }
                  if ( (v1 & 0x8000) != 0 )
                  {
                    v58 = v96;
                    LOWORD(v1) = v1 & 0x7FFF;
                    if ( v96 )
                    {
                      if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
                      {
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
                        if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
                      }
                    }
                  }
                  if ( (v1 & 0x4000) != 0 )
                  {
                    v59 = v98;
                    if ( v98 )
                    {
                      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
                      {
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
                        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
                      }
                    }
                  }
                  sub_140008628(a1, (__int64)L"m_d0ExitFlows->Initialize()", 367, 74, v6);
                }
                else
                {
                  v6 = sub_140118A7C((_QWORD *)a1);
                  if ( v6 )
                  {
                    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                    {
                      v60 = (const wchar_t *)&unk_1400D44E0;
                      v61 = (const wchar_t *)&unk_1400D44E0;
                      v62 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                             a1 + 56,
                                                             v101)
                                              + 16LL);
                      if ( v62 )
                        v61 = v62;
                      v63 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                             a1 + 56,
                                                             v99)
                                              + 16LL);
                      if ( v63 )
                        v60 = v63;
                      sub_1400A5E80(
                        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
                        2u,
                        8u,
                        0x36u,
                        (__int64)&unk_1400D91A8,
                        v60,
                        v61,
                        L"InitPnpEventsHistory()");
                      LODWORD(v1) = 196608;
                    }
                    if ( (v1 & 0x20000) != 0 )
                    {
                      v64 = v100;
                      LODWORD(v1) = v1 & 0xFFFDFFFF;
                      if ( v100 )
                      {
                        if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
                          if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
                        }
                      }
                    }
                    if ( (v1 & 0x10000) != 0 )
                    {
                      v65 = v102;
                      if ( v102 )
                      {
                        if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
                          if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
                        }
                      }
                    }
                    sub_1400080F8(a1, (__int64)L"InitPnpEventsHistory()", 369, 74, v6);
                  }
                  else
                  {
                    v6 = 0;
                  }
                }
              }
            }
          }
          v105[0] = &off_1400D9370;
          v105[7] = off_1400D9380;
          sub_140071138(v105);
        }
      }
    }
  }
  if ( v3 )
  {
    sub_14007404C(v3);
    ExFreePool(v3);
  }
  return v6;
}
