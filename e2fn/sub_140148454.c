__int64 __fastcall sub_140148454(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int16 v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // r12d
  const wchar_t *v15; // rsi
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  _QWORD *v21; // rbx
  const wchar_t *v22; // rsi
  const wchar_t *v23; // rdi
  const wchar_t *v24; // rax
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // rax
  const wchar_t *v29; // rdi
  const wchar_t *v30; // rax
  __int64 v31; // rax
  const wchar_t *v32; // r8
  const wchar_t *v33; // rax
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  const wchar_t *v36; // rax
  __int64 v37; // rax
  const wchar_t *v38; // rdx
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 *v42; // rdi
  __int64 v43; // rbx
  __int64 *v44; // rax
  _QWORD *v45; // rax
  unsigned int v46; // eax
  volatile signed __int32 *v47; // rbx
  const wchar_t *v48; // r13
  const wchar_t *v49; // rdi
  const wchar_t *v50; // rax
  const wchar_t *v51; // rax
  volatile signed __int32 *v52; // rbx
  volatile signed __int32 *v53; // rbx
  __int128 v55; // [rsp+50h] [rbp-B8h] BYREF
  int v56; // [rsp+60h] [rbp-A8h]
  _QWORD v57[2]; // [rsp+64h] [rbp-A4h] BYREF
  int v58; // [rsp+74h] [rbp-94h]
  __int64 (*v59)(); // [rsp+78h] [rbp-90h]
  int v60; // [rsp+80h] [rbp-88h]
  int v61; // [rsp+84h] [rbp-84h]
  __int128 v62; // [rsp+88h] [rbp-80h]
  void *v63; // [rsp+98h] [rbp-70h]
  char v64[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v65; // [rsp+A8h] [rbp-60h]
  char v66[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v67; // [rsp+B8h] [rbp-50h]
  char v68[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v69; // [rsp+C8h] [rbp-40h]
  char v70[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v71; // [rsp+D8h] [rbp-30h]
  char v72[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v73; // [rsp+E8h] [rbp-20h]
  char v74[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v75; // [rsp+F8h] [rbp-10h]
  char v76[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v77; // [rsp+108h] [rbp+0h]
  char v78[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v79; // [rsp+118h] [rbp+10h]
  char v80[8]; // [rsp+120h] [rbp+18h] BYREF
  volatile signed __int32 *v81; // [rsp+128h] [rbp+20h]
  char v82[8]; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v83; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v85; // [rsp+148h] [rbp+40h]
  char v86[8]; // [rsp+150h] [rbp+48h] BYREF
  volatile signed __int32 *v87; // [rsp+158h] [rbp+50h]
  char v88[8]; // [rsp+160h] [rbp+58h] BYREF
  volatile signed __int32 *v89; // [rsp+168h] [rbp+60h]
  __int64 v90; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v91[56]; // [rsp+180h] [rbp+78h] BYREF
  __int64 *P; // [rsp+1F0h] [rbp+E8h]

  v3 = 0LL;
  v5 = 0;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::Initialize", a1);
      if ( v7 )
        v3 = v7;
      P = v3;
    }
  }
  if ( a2 )
  {
    v14 = sub_140144020((_QWORD *)a1);
    if ( v14 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v68)
                                + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v70)
                                + 16LL);
        if ( v18 )
          v15 = v18;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xDu,
          0xEu,
          (__int64)&unk_1400DA268,
          v16,
          v15,
          L"__super::Initialize()");
        LOBYTE(v5) = 12;
      }
      if ( (v5 & 8) != 0 )
      {
        v19 = v69;
        LOBYTE(v5) = v5 & 0xF7;
        if ( v69 )
        {
          if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v5 & 4) != 0 )
      {
        v20 = v71;
        if ( v71 )
        {
          if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      sub_14003B824(a1, (__int64)L"__super::Initialize()", 161, 110, v14);
    }
    else
    {
      sub_140143F54(a1, (__int64)v91);
      v62 = 0LL;
      v57[1] = 0LL;
      v58 = 0;
      if ( byte_1400DF688 )
      {
        if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
          HIDWORD(v57[0]) = -1;
        else
          HIDWORD(v57[0]) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
      }
      else
      {
        HIDWORD(v57[0]) = 56;
      }
      v21 = (_QWORD *)(a1 + 360);
      v63 = off_1400DF340;
      v60 = 1;
      v59 = sub_140093E90;
      v61 = 1;
      v14 = ((__int64 (__fastcall *)(__int64, __int64, char *, _BYTE *, __int64))qword_1400DF8F0)(
              qword_1400DF700,
              a2,
              (char *)v57 + 4,
              v91,
              a1 + 360);
      if ( v14 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v22 = (const wchar_t *)&unk_1400D44E0;
          v23 = (const wchar_t *)&unk_1400D44E0;
          v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v74)
                                  + 16LL);
          if ( v24 )
            v23 = v24;
          v25 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v72)
                                  + 16LL);
          if ( v25 )
            v22 = v25;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xDu,
            0xFu,
            (__int64)&unk_1400DA268,
            v22,
            v23,
            L"NetRxQueueCreate(rxQueueInit, &attributes, &rxConfig, &m_queue)");
          LOBYTE(v5) = 48;
        }
        if ( (v5 & 0x20) != 0 )
        {
          v26 = v73;
          LOBYTE(v5) = v5 & 0xDF;
          if ( v73 )
          {
            if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
              if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        if ( (v5 & 0x10) != 0 )
        {
          v27 = v75;
          if ( v75 )
          {
            if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
            }
          }
        }
        sub_14000A018(a1, (__int64)L"NetRxQueueCreate(rxQueueInit, &attributes, &rxConfig, &m_queue)", 173, 110, v14);
      }
      else
      {
        *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                     qword_1400DF6A8,
                     *v21,
                     off_1400DF340) = a1;
        v28 = (_QWORD *)((__int64 (__fastcall *)(__int64, _QWORD))qword_1400DF908)(qword_1400DF700, *v21);
        sub_1401443D4((_QWORD *)a1, v28);
        v29 = (const wchar_t *)&unk_1400D44E0;
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v30 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v78)
                                  + 16LL);
          if ( v30 )
            v29 = v30;
          v31 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v76);
          v32 = (const wchar_t *)&unk_1400D44E0;
          v33 = *(const wchar_t **)(*(_QWORD *)v31 + 16LL);
          if ( v33 )
            v32 = v33;
          sub_1400A6AA8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            4u,
            0xDu,
            0x10u,
            (__int64)&unk_1400DA268,
            v32,
            v29,
            (const wchar_t *)qword_14014EC70);
          v5 = 192;
          v29 = (const wchar_t *)&unk_1400D44E0;
        }
        if ( (v5 & 0x80u) != 0 )
        {
          v34 = v77;
          v5 &= ~0x80u;
          if ( v77 )
          {
            if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
              if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
            }
          }
        }
        if ( (v5 & 0x40) != 0 )
        {
          v35 = v79;
          v5 &= ~0x40u;
          if ( v79 )
          {
            if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
              if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
            }
          }
        }
        sub_14014807C(a1);
        sub_140148144(a1);
        sub_14014820C(a1);
        v14 = sub_140148FA0(a1);
        if ( v14 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v5 |= 0x300u;
            v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                   a1 + 56,
                                                   v82)
                                    + 16LL);
            if ( v36 )
              v29 = v36;
            v37 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v80);
            v38 = (const wchar_t *)&unk_1400D44E0;
            v39 = *(const wchar_t **)(*(_QWORD *)v37 + 16LL);
            if ( v39 )
              v38 = v39;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              0xDu,
              0x11u,
              (__int64)&unk_1400DA268,
              v38,
              v29,
              L"InitializeChecksumOffload()");
          }
          if ( (v5 & 0x200) != 0 )
          {
            v40 = v81;
            v5 &= ~0x200u;
            if ( v81 )
            {
              if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
                if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
              }
            }
          }
          if ( (v5 & 0x100) != 0 )
          {
            v41 = v83;
            if ( v83 )
            {
              if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
                if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
              }
            }
          }
          sub_140008628(a1, (__int64)L"InitializeChecksumOffload()", 186, 110, v14);
        }
        else
        {
          v56 = 0;
          v42 = *(__int64 **)(a1 + 456);
          *((_QWORD *)&v55 + 1) = sub_140099560;
          v43 = *v42;
          v44 = sub_14000DB1C(&v84, (_QWORD *)a1, (__int64)&v55 + 8);
          v45 = sub_1400A27D4(&v90, v44);
          v46 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, _QWORD *))(v43 + 8))(
                  v42,
                  *(unsigned int *)(*(_QWORD *)(a1 + 384) + 4LL),
                  a1 + 560,
                  v45);
          v47 = v85;
          v14 = v46;
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
              if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
            }
          }
          if ( v14 )
          {
            if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
            {
              v5 |= 0xC00u;
              v48 = (const wchar_t *)&unk_1400D44E0;
              v49 = (const wchar_t *)&unk_1400D44E0;
              v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56)
                                                                                              + 16LL))(
                                                     a1 + 56,
                                                     v88)
                                      + 16LL);
              if ( v50 )
                v49 = v50;
              v51 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56)
                                                                                              + 24LL))(
                                                     a1 + 56,
                                                     v86)
                                      + 16LL);
              if ( v51 )
                v48 = v51;
              sub_1400A5E80(
                *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
                2u,
                0xDu,
                0x12u,
                (__int64)&unk_1400DA268,
                v48,
                v49,
                L"m_hardwareRxQueue->Configure(m_fragmentsRing->NumberOfElements, &m_fragmentDescriptorsRing, common_servi"
                 "ces::MakeVoidCallback<kstd::remove_reference<decltype(*this)>::type >(this, &kstd::remove_reference<dec"
                 "ltype(*this)>::type::EvtRxPacketsAvailable))");
            }
            if ( (v5 & 0x800) != 0 )
            {
              v52 = v87;
              v5 &= ~0x800u;
              if ( v87 )
              {
                if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
                  if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
                }
              }
            }
            if ( (v5 & 0x400) != 0 )
            {
              v53 = v89;
              if ( v89 )
              {
                if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
                {
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
                  if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
                }
              }
            }
            sub_140098714(
              a1,
              (__int64)L"m_hardwareRxQueue->Configure(m_fragmentsRing->NumberOfElements, &m_fragmentDescriptorsRing, commo"
                        "n_services::MakeVoidCallback<kstd::remove_reference<decltype(*this)>::type >(this, &kstd::remove"
                        "_reference<decltype(*this)>::type::EvtRxPacketsAvailable))",
              191,
              110,
              v14);
          }
          else
          {
            *(_DWORD *)(a1 + 568) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 456) + 72LL))(*(_QWORD *)(a1 + 456));
            v14 = 0;
            *(_DWORD *)(a1 + 472) = *(_DWORD *)(*(_QWORD *)(a1 + 384) + 8LL);
          }
        }
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v66)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v64)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xDu,
        0xDu,
        (__int64)&unk_1400DA268,
        v8,
        v9,
        L"rxQueueInit");
      LOBYTE(v5) = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v12 = v65;
      LOBYTE(v5) = v5 & 0xFD;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v13 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B954(a1, (__int64)L"rxQueueInit", 159, 110);
    v14 = -1073741811;
  }
  if ( P )
  {
    sub_140091BA8(P);
    ExFreePool(P);
  }
  return v14;
}
