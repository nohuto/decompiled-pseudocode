__int64 __fastcall sub_140124330(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // rdi
  __int64 *v3; // r12
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  unsigned int v8; // r14d
  const wchar_t *v9; // r12
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rsi
  const wchar_t *v17; // r12
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rax
  const wchar_t *v24; // r12
  const wchar_t *v25; // rax
  const wchar_t *v26; // rax
  volatile signed __int32 *v27; // rsi
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // rax
  const wchar_t *v31; // r12
  const wchar_t *v32; // rax
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rsi
  volatile signed __int32 *v35; // rdi
  const wchar_t *v36; // r12
  const wchar_t *v37; // rax
  __int64 v38; // rsi
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  const wchar_t *v42; // r12
  const wchar_t *v43; // rax
  const wchar_t *v44; // rax
  volatile signed __int32 *v45; // rsi
  volatile signed __int32 *v46; // rdi
  __int64 v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rax
  const wchar_t *v50; // r12
  __int64 v51; // rsi
  const wchar_t *v52; // rax
  volatile signed __int32 *v53; // rsi
  volatile signed __int32 *v54; // rdi
  const wchar_t *v55; // r12
  const wchar_t *v56; // rax
  __int64 v57; // rsi
  const wchar_t *v58; // rax
  volatile signed __int32 *v59; // rsi
  volatile signed __int32 *v60; // rdi
  const wchar_t *v61; // r12
  const wchar_t *v62; // rax
  __int64 v63; // rsi
  const wchar_t *v64; // rax
  volatile signed __int32 *v65; // rsi
  volatile signed __int32 *v66; // rdi
  int v67; // r8d
  const wchar_t *v68; // rdx
  const wchar_t *v69; // r12
  const wchar_t *v70; // rax
  const wchar_t *v71; // rax
  volatile signed __int32 *v72; // rsi
  volatile signed __int32 *v73; // rdi
  __int64 v75; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v76; // [rsp+60h] [rbp-A8h]
  __int64 v77; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v78; // [rsp+70h] [rbp-98h]
  __int64 v79; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v80; // [rsp+80h] [rbp-88h]
  _BYTE v81[8]; // [rsp+88h] [rbp-80h] BYREF
  volatile signed __int32 *v82; // [rsp+90h] [rbp-78h]
  _BYTE v83[8]; // [rsp+98h] [rbp-70h] BYREF
  volatile signed __int32 *v84; // [rsp+A0h] [rbp-68h]
  _BYTE v85[8]; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v86; // [rsp+B0h] [rbp-58h]
  _BYTE v87[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v88; // [rsp+C0h] [rbp-48h]
  _BYTE v89[8]; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v90; // [rsp+D0h] [rbp-38h]
  _BYTE v91[8]; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v92; // [rsp+E0h] [rbp-28h]
  _BYTE v93[8]; // [rsp+E8h] [rbp-20h] BYREF
  volatile signed __int32 *v94; // [rsp+F0h] [rbp-18h]
  _BYTE v95[8]; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v96; // [rsp+100h] [rbp-8h]
  _BYTE v97[8]; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v98; // [rsp+110h] [rbp+8h]
  _BYTE v99[8]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v100; // [rsp+120h] [rbp+18h]
  _BYTE v101[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v102; // [rsp+130h] [rbp+28h]
  _BYTE v103[8]; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v104; // [rsp+140h] [rbp+38h]
  _BYTE v105[8]; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v106; // [rsp+150h] [rbp+48h]
  _BYTE v107[8]; // [rsp+158h] [rbp+50h] BYREF
  volatile signed __int32 *v108; // [rsp+160h] [rbp+58h]
  _BYTE v109[8]; // [rsp+168h] [rbp+60h] BYREF
  volatile signed __int32 *v110; // [rsp+170h] [rbp+68h]
  _BYTE v111[8]; // [rsp+178h] [rbp+70h] BYREF
  volatile signed __int32 *v112; // [rsp+180h] [rbp+78h]
  _BYTE v113[8]; // [rsp+188h] [rbp+80h] BYREF
  volatile signed __int32 *v114; // [rsp+190h] [rbp+88h]
  _BYTE v115[16]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v116[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v117[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v118; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v119; // [rsp+208h] [rbp+100h]

  LODWORD(v2) = 0;
  v3 = 0LL;
  v119 = 0LL;
  if ( _bittest((const signed __int32 *)&DeviceObject->Timer + 1, 0xAu) )
  {
    if ( BYTE1(DeviceObject->Timer) >= 8u )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
      if ( Pool2 )
      {
        v7 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::Initialize", a1 - 352);
        if ( v7 )
          v3 = v7;
        v119 = v3;
      }
    }
  }
  v8 = sub_140135D60(*(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 16));
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v2 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             &v77)
                              + 16LL);
      if ( v10 )
        v2 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                             a1 - 296,
                                             &v75)
                              + 16LL);
      if ( v11 )
        v9 = v11;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x1Bu,
        (__int64)&unk_1400D9408,
        v9,
        v2,
        L"m_link->Initialize(m_netAdapter)");
      v3 = v119;
      LOBYTE(v2) = 3;
    }
    if ( ((unsigned __int8)v2 & 2) != 0 )
    {
      v12 = v76;
      LOBYTE(v2) = (unsigned __int8)v2 & 0xFD;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( ((unsigned __int8)v2 & 1) != 0 )
    {
      v13 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140008CA4(a1 - 352, (__int64)L"m_link->Initialize(m_netAdapter)", 168, 100, v8);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 192);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 24LL))(*(_QWORD *)(a1 + 64), v115);
    v8 = sub_140143064(v14, *(_QWORD *)(a1 + 16), v15);
    if ( v8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
        v17 = (const wchar_t *)&unk_1400D44E0;
        v2 = (const wchar_t *)&unk_1400D44E0;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               &v79)
                                + 16LL);
        if ( v18 )
          v2 = v18;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v81)
                                + 16LL);
        if ( v19 )
          v17 = v19;
        sub_1400A5E80(
          v16,
          2u,
          0xBu,
          0x1Cu,
          (__int64)&unk_1400D9408,
          v2,
          v17,
          L"m_receiveScaling->Bind(m_netAdapter, m_hardwareAbstraction->GetReceiveScaling())");
        v3 = v119;
        LOBYTE(v2) = 12;
      }
      if ( ((unsigned __int8)v2 & 8) != 0 )
      {
        v20 = v80;
        LOBYTE(v2) = (unsigned __int8)v2 & 0xF7;
        if ( v80 )
        {
          if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( ((unsigned __int8)v2 & 4) != 0 )
      {
        v21 = v82;
        if ( v82 )
        {
          if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_14000F8F4(
        a1 - 352,
        (__int64)L"m_receiveScaling->Bind(m_netAdapter, m_hardwareAbstraction->GetReceiveScaling())",
        169,
        100,
        v8);
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 96);
      v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 32LL))(*(_QWORD *)(a1 + 64), v116);
      v8 = sub_1401361D4(v22, *(_QWORD *)(a1 + 16), a2, v23);
      if ( v8 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v24 = (const wchar_t *)&unk_1400D44E0;
          v2 = (const wchar_t *)&unk_1400D44E0;
          v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                 a1 - 296,
                                                 v85)
                                  + 16LL);
          if ( v25 )
            v2 = v25;
          v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                 a1 - 296,
                                                 v83)
                                  + 16LL);
          if ( v26 )
            v24 = v26;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
            2u,
            0xBu,
            0x1Du,
            (__int64)&unk_1400D9408,
            v24,
            v2,
            L"m_arpOffload->BindAndInitialize(m_netAdapter, device, m_hardwareAbstraction->GetArpOffload())");
          v3 = v119;
          LOBYTE(v2) = 48;
        }
        if ( ((unsigned __int8)v2 & 0x20) != 0 )
        {
          v27 = v84;
          LOBYTE(v2) = (unsigned __int8)v2 & 0xDF;
          if ( v84 )
          {
            if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
            }
          }
        }
        if ( ((unsigned __int8)v2 & 0x10) != 0 )
        {
          v28 = v86;
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
              if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
            }
          }
        }
        sub_140073304(
          a1 - 352,
          (__int64)L"m_arpOffload->BindAndInitialize(m_netAdapter, device, m_hardwareAbstraction->GetArpOffload())",
          170,
          100,
          v8);
      }
      else
      {
        v29 = *(_QWORD *)(a1 + 112);
        v30 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64), v117);
        v8 = sub_140137A34(v29, *(_QWORD *)(a1 + 16), a2, v30);
        if ( v8 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v31 = (const wchar_t *)&unk_1400D44E0;
            v2 = (const wchar_t *)&unk_1400D44E0;
            v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 16LL))(
                                                   a1 - 296,
                                                   v89)
                                    + 16LL);
            if ( v32 )
              v2 = v32;
            v33 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                             + 24LL))(
                                                   a1 - 296,
                                                   v87)
                                    + 16LL);
            if ( v33 )
              v31 = v33;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
              2u,
              0xBu,
              0x1Eu,
              (__int64)&unk_1400D9408,
              v31,
              v2,
              L"m_nsOffload->BindAndInitialize(m_netAdapter, device, m_hardwareAbstraction->GetNsOffload())");
            v3 = v119;
            LOBYTE(v2) = -64;
          }
          if ( (char)v2 < 0 )
          {
            v34 = v88;
            LOBYTE(v2) = (unsigned __int8)v2 & 0x7F;
            if ( v88 )
            {
              if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
                if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
              }
            }
          }
          if ( ((unsigned __int8)v2 & 0x40) != 0 )
          {
            v35 = v90;
            if ( v90 )
            {
              if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
                if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
              }
            }
          }
          sub_14001191C(
            a1 - 352,
            (__int64)L"m_nsOffload->BindAndInitialize(m_netAdapter, device, m_hardwareAbstraction->GetNsOffload())",
            171,
            100,
            v8);
        }
        else
        {
          v8 = sub_14013FFC8(*(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 16), a2);
          if ( v8 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v36 = (const wchar_t *)&unk_1400D44E0;
              v2 = (const wchar_t *)&unk_1400D44E0;
              v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                               + 16LL))(
                                                     a1 - 296,
                                                     v93)
                                      + 16LL);
              if ( v37 )
                v2 = v37;
              v38 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
              v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                               + 24LL))(
                                                     a1 - 296,
                                                     v91)
                                      + 16LL);
              if ( v39 )
                v36 = v39;
              sub_1400A5E80(
                v38,
                2u,
                0xBu,
                0x1Fu,
                (__int64)&unk_1400D9408,
                v36,
                v2,
                L"m_wolPatterns->Initialize(m_netAdapter, device)");
              v3 = v119;
              LOWORD(v2) = 768;
            }
            if ( ((unsigned __int16)v2 & 0x200) != 0 )
            {
              v40 = v92;
              LOWORD(v2) = (unsigned __int16)v2 & 0xFDFF;
              if ( v92 )
              {
                if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                  if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
                }
              }
            }
            if ( ((unsigned __int16)v2 & 0x100) != 0 )
            {
              v41 = v94;
              if ( v94 )
              {
                if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
                  if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
                }
              }
            }
            sub_14000F278(a1 - 352, (__int64)L"m_wolPatterns->Initialize(m_netAdapter, device)", 172, 100, v8);
          }
          else
          {
            v8 = sub_14014A538(*(_QWORD *)(a1 + 160));
            if ( v8 )
            {
              if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
              {
                v42 = (const wchar_t *)&unk_1400D44E0;
                v2 = (const wchar_t *)&unk_1400D44E0;
                v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                                 + 16LL))(
                                                       a1 - 296,
                                                       v97)
                                        + 16LL);
                if ( v43 )
                  v2 = v43;
                v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296)
                                                                                                 + 24LL))(
                                                       a1 - 296,
                                                       v95)
                                        + 16LL);
                if ( v44 )
                  v42 = v44;
                sub_1400A5E80(
                  *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
                  2u,
                  0xBu,
                  0x20u,
                  (__int64)&unk_1400D9408,
                  v42,
                  v2,
                  L"m_checksumOffload->Initialize()");
                v3 = v119;
                LOWORD(v2) = 3072;
              }
              if ( ((unsigned __int16)v2 & 0x800) != 0 )
              {
                v45 = v96;
                LOWORD(v2) = (unsigned __int16)v2 & 0xF7FF;
                if ( v96 )
                {
                  if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
                    if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
                  }
                }
              }
              if ( ((unsigned __int16)v2 & 0x400) != 0 )
              {
                v46 = v98;
                if ( v98 )
                {
                  if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
                  {
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
                    if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
                  }
                }
              }
              sub_140008B58(a1 - 352, (__int64)L"m_checksumOffload->Initialize()", 173, 100, v8);
            }
            else
            {
              v47 = *(_QWORD *)(a1 + 176);
              v48 = sub_1400A27D4(&v118, (__int64 *)(a1 + 32));
              v8 = sub_14014B2CC(v47, v48);
              if ( v8 )
              {
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v49 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v99);
                  v50 = (const wchar_t *)&unk_1400D44E0;
                  v2 = (const wchar_t *)&unk_1400D44E0;
                  v51 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
                  if ( *(_QWORD *)(*(_QWORD *)v49 + 16LL) )
                    v2 = *(const wchar_t **)(*(_QWORD *)v49 + 16LL);
                  v52 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                         a1 - 296,
                                                         v101)
                                          + 16LL);
                  if ( v52 )
                    v50 = v52;
                  sub_1400A5E80(
                    v51,
                    2u,
                    0xBu,
                    0x21u,
                    (__int64)&unk_1400D9408,
                    v2,
                    v50,
                    L"m_segmentationOffload->Bind(m_osServices)");
                  v3 = v119;
                  LOWORD(v2) = 12288;
                }
                if ( ((unsigned __int16)v2 & 0x2000) != 0 )
                {
                  v53 = v100;
                  LOWORD(v2) = (unsigned __int16)v2 & 0xDFFF;
                  if ( v100 )
                  {
                    if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                      if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
                    }
                  }
                }
                if ( ((unsigned __int16)v2 & 0x1000) != 0 )
                {
                  v54 = v102;
                  if ( v102 )
                  {
                    if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
                      if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
                    }
                  }
                }
                sub_14000D514(a1 - 352, (__int64)L"m_segmentationOffload->Bind(m_osServices)", 174, 100, v8);
              }
              else
              {
                v8 = sub_14014B864(*(_QWORD *)(a1 + 176));
                if ( !v8 )
                {
                  v8 = sub_140127864(a1 - 352);
                  if ( v8 )
                  {
                    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                    {
                      v61 = (const wchar_t *)&unk_1400D44E0;
                      v2 = (const wchar_t *)&unk_1400D44E0;
                      v62 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                             a1 - 296,
                                                             v107)
                                              + 16LL);
                      if ( v62 )
                        v2 = v62;
                      v63 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
                      v64 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                             a1 - 296,
                                                             v109)
                                              + 16LL);
                      if ( v64 )
                        v61 = v64;
                      sub_1400A5E80(
                        v63,
                        2u,
                        0xBu,
                        0x23u,
                        (__int64)&unk_1400D9408,
                        v2,
                        v61,
                        L"InitializeTxQueuesContainer()");
                      v3 = v119;
                      LODWORD(v2) = 196608;
                    }
                    if ( ((unsigned int)v2 & 0x20000) != 0 )
                    {
                      v65 = v108;
                      LODWORD(v2) = (unsigned int)v2 & 0xFFFDFFFF;
                      if ( v108 )
                      {
                        if ( _InterlockedExchangeAdd(v108 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
                          if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 16LL))(v65);
                        }
                      }
                    }
                    if ( ((unsigned int)v2 & 0x10000) != 0 )
                    {
                      v66 = v110;
                      if ( v110 )
                      {
                        if ( _InterlockedExchangeAdd(v110 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
                          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
                        }
                      }
                    }
                    v67 = 176;
                    v68 = L"InitializeTxQueuesContainer()";
                  }
                  else
                  {
                    v8 = sub_140126490(a1 - 352);
                    if ( !v8 )
                    {
                      v8 = 0;
                      goto LABEL_189;
                    }
                    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                    {
                      v69 = (const wchar_t *)&unk_1400D44E0;
                      v2 = (const wchar_t *)&unk_1400D44E0;
                      v70 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                             a1 - 296,
                                                             v113)
                                              + 16LL);
                      if ( v70 )
                        v2 = v70;
                      v71 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                             a1 - 296,
                                                             v111)
                                              + 16LL);
                      if ( v71 )
                        v69 = v71;
                      sub_1400A5E80(
                        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
                        2u,
                        0xBu,
                        0x24u,
                        (__int64)&unk_1400D9408,
                        v69,
                        v2,
                        L"InitializeRxQueuesContainer()");
                      v3 = v119;
                      LODWORD(v2) = 786432;
                    }
                    if ( ((unsigned int)v2 & 0x80000) != 0 )
                    {
                      v72 = v112;
                      LODWORD(v2) = (unsigned int)v2 & 0xFFF7FFFF;
                      if ( v112 )
                      {
                        if ( _InterlockedExchangeAdd(v112 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 8LL))(v72);
                          if ( _InterlockedExchangeAdd(v72 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v72 + 16LL))(v72);
                        }
                      }
                    }
                    if ( ((unsigned int)v2 & 0x40000) != 0 )
                    {
                      v73 = v114;
                      if ( v114 )
                      {
                        if ( _InterlockedExchangeAdd(v114 + 2, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
                          if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 16LL))(v73);
                        }
                      }
                    }
                    v67 = 177;
                    v68 = L"InitializeRxQueuesContainer()";
                  }
                  sub_1400088C0(a1 - 352, (__int64)v68, v67, 100, v8);
                  goto LABEL_189;
                }
                if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
                {
                  v55 = (const wchar_t *)&unk_1400D44E0;
                  v2 = (const wchar_t *)&unk_1400D44E0;
                  v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                                         a1 - 296,
                                                         v103)
                                          + 16LL);
                  if ( v56 )
                    v2 = v56;
                  v57 = *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL);
                  v58 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                                         a1 - 296,
                                                         v105)
                                          + 16LL);
                  if ( v58 )
                    v55 = v58;
                  sub_1400A5E80(
                    v57,
                    2u,
                    0xBu,
                    0x22u,
                    (__int64)&unk_1400D9408,
                    v2,
                    v55,
                    L"m_segmentationOffload->Initialize()");
                  v3 = v119;
                  LOWORD(v2) = -16384;
                }
                if ( ((unsigned __int16)v2 & 0x8000) != 0 )
                {
                  v59 = v104;
                  LOWORD(v2) = (unsigned __int16)v2 & 0x7FFF;
                  if ( v104 )
                  {
                    if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
                      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
                    }
                  }
                }
                if ( ((unsigned __int16)v2 & 0x4000) != 0 )
                {
                  v60 = v106;
                  if ( v106 )
                  {
                    if ( _InterlockedExchangeAdd(v106 + 2, 0xFFFFFFFF) == 1 )
                    {
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
                      if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
                        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
                    }
                  }
                }
                sub_1400113EC(a1 - 352, (__int64)L"m_segmentationOffload->Initialize()", 175, 100, v8);
              }
            }
          }
        }
      }
    }
  }
LABEL_189:
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return v8;
}
