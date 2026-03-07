__int64 __fastcall sub_140121C20(__int64 a1, __int64 a2)
{
  __int16 v2; // r12
  void *v3; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v7; // rax
  unsigned int v8; // eax
  const wchar_t *v9; // r14
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  void *v17; // r15
  const wchar_t *v18; // r14
  const wchar_t *v19; // rax
  const wchar_t *v20; // rbx
  const wchar_t *v21; // rax
  __int64 v22; // rdi
  void *v23; // rcx
  volatile signed __int32 *v24; // rbx
  unsigned int v25; // esi
  const wchar_t *v26; // r14
  const wchar_t *v27; // rdi
  const wchar_t *v28; // rax
  __int64 v29; // rax
  const wchar_t *v30; // r8
  const wchar_t *v31; // rax
  volatile signed __int32 *v32; // rbx
  volatile signed __int32 *v33; // rbx
  __int64 *v34; // rax
  volatile signed __int32 *v35; // rbx
  const wchar_t *v36; // rdi
  const wchar_t *v37; // rax
  __int64 v38; // rsi
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 v42; // rsi
  __int64 *v43; // r14
  unsigned int v44; // edi
  unsigned int v45; // ebx
  int v46; // eax
  const wchar_t *v47; // r14
  const wchar_t *v48; // rdi
  const wchar_t *v49; // rax
  const wchar_t *v50; // rax
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  __int64 v53; // rax
  const wchar_t *v54; // r14
  const wchar_t *v55; // rdi
  const wchar_t *v56; // rax
  const wchar_t *v57; // rax
  volatile signed __int32 *v58; // rbx
  volatile signed __int32 *v59; // rbx
  volatile signed __int32 *v60; // rbx
  PVOID v61; // rbx
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v64; // [rsp+58h] [rbp-A8h]
  void (__fastcall *v65)(__int64, __int64); // [rsp+60h] [rbp-A0h] BYREF
  int v66; // [rsp+68h] [rbp-98h]
  unsigned __int64 v67; // [rsp+70h] [rbp-90h] BYREF
  volatile signed __int32 *v68; // [rsp+78h] [rbp-88h]
  _BYTE v69[8]; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int32 *v70; // [rsp+88h] [rbp-78h]
  _BYTE v71[8]; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v72; // [rsp+98h] [rbp-68h]
  _BYTE v73[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v74; // [rsp+A8h] [rbp-58h]
  _BYTE v75[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v76; // [rsp+B8h] [rbp-48h]
  _BYTE v77[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v78; // [rsp+C8h] [rbp-38h]
  __int64 v79; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v80; // [rsp+D8h] [rbp-28h]
  _BYTE v81[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v82; // [rsp+E8h] [rbp-18h]
  _BYTE v83[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v84; // [rsp+F8h] [rbp-8h]
  _BYTE v85[8]; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v86; // [rsp+108h] [rbp+8h]
  _BYTE v87[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v88; // [rsp+118h] [rbp+18h]
  _BYTE v89[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v90; // [rsp+128h] [rbp+28h]
  _BYTE v91[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v92; // [rsp+138h] [rbp+38h]
  __int64 v93; // [rsp+140h] [rbp+40h] BYREF
  __int64 v94; // [rsp+150h] [rbp+50h] BYREF
  __int64 v95; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v96[16]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v97[80]; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v98; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v99; // [rsp+1E8h] [rbp+E8h]
  __int64 v100; // [rsp+1F0h] [rbp+F0h]
  PVOID P; // [rsp+1F8h] [rbp+F8h]

  v99 = a2;
  v2 = 0;
  v3 = 0LL;
  v98 = 0;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074DE0(Pool2, (__int64)L"net_adapter::NetAdapter::CreateTxQueue", a1);
      if ( v7 )
        v3 = v7;
      P = v3;
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF928)(qword_1400DF700, a2);
  v67 = v8;
  v98 = v8;
  if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 576) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v69)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)(a1 + 56)
                                                                                                  + 24LL))(
                                             a1 + 56,
                                             &v67)
                              + 16LL);
      if ( v12 )
        v9 = v12;
      sub_1400A60F4(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x39u,
        (__int64)&unk_1400D9408,
        v9,
        v10,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v68;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v2 & 1) == 0 )
      goto LABEL_44;
    v14 = v70;
LABEL_40:
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
LABEL_44:
    v25 = -1073741811;
    goto LABEL_126;
  }
  v15 = *(_QWORD *)(a1 + 568);
  v100 = 16LL * v8;
  if ( *(_QWORD *)(v100 + v15) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 576) )
        sub_140072758(100, 0x239u, v8, *(_DWORD *)(a1 + 576), 0);
      v16 = *(_QWORD *)(v15 + 16LL * v8);
      v17 = &unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v73)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v71)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v23 = *(void **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 56) + 8LL))(v16 + 56) + 16);
      if ( v23 )
        v17 = v23;
      sub_1400A8E20(
        v22,
        2u,
        0xBu,
        0x3Au,
        (__int64)&unk_1400D9408,
        v20,
        v18,
        (const wchar_t *)qword_14014EC70,
        v98,
        (__int64)v17);
      LOBYTE(v2) = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v24 = v72;
      LOBYTE(v2) = v2 & 0xF7;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    if ( (v2 & 4) == 0 )
      goto LABEL_44;
    v14 = v74;
    goto LABEL_40;
  }
  v26 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v27 = (const wchar_t *)&unk_1400D44E0;
    v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v77)
                            + 16LL);
    if ( v28 )
      v27 = v28;
    v29 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v75);
    v30 = (const wchar_t *)&unk_1400D44E0;
    v31 = *(const wchar_t **)(*(_QWORD *)v29 + 16LL);
    if ( v31 )
      v30 = v31;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x3Bu,
      (__int64)&unk_1400D9408,
      v30,
      v27,
      (const wchar_t *)qword_14014EC70);
    v2 = 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v32 = v76;
    v2 &= ~0x20u;
    if ( v76 )
    {
      if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v33 = v78;
    v2 &= ~0x10u;
    if ( v78 )
    {
      if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  v66 = 0;
  v65 = sub_140076290;
  v34 = sub_14006D650(&v79, (_QWORD *)a1, (__int64)&v65);
  sub_1400B0B18(&v63, 0x30303634u, a1, &v98, v34);
  v35 = v80;
  if ( v80 )
  {
    if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  if ( v63 )
  {
    v42 = *(_QWORD *)(a1 + 416);
    v43 = sub_1400A5180(&v93, (_QWORD *)(a1 + 528));
    v44 = (unsigned int)sub_1400A5180(&v94, (_QWORD *)(a1 + 512));
    v45 = (unsigned int)sub_1400A27D4(&v95, (__int64 *)(a1 + 384));
    v46 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v42 + 80LL))(v42, v96, v98);
    v25 = sub_140144474(v63, v46, v45, v44, (__int64)v43);
    if ( v25 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 |= 0x300u;
        v47 = (const wchar_t *)&unk_1400D44E0;
        v48 = (const wchar_t *)&unk_1400D44E0;
        v49 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v87)
                                + 16LL);
        if ( v49 )
          v48 = v49;
        v50 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v85)
                                + 16LL);
        if ( v50 )
          v47 = v50;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xBu,
          0x3Du,
          (__int64)&unk_1400D9408,
          v47,
          v48,
          L"txQueue->Bind(m_hardwareAbstraction->GetTxQueue(queueId), m_osServices, m_checksumOffload, m_segmentationOffload)");
      }
      if ( (v2 & 0x200) != 0 )
      {
        v51 = v86;
        v2 &= ~0x200u;
        if ( v86 )
        {
          if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
            if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
          }
        }
      }
      if ( (v2 & 0x100) != 0 )
      {
        v52 = v88;
        if ( v88 )
        {
          if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
            if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
          }
        }
      }
      sub_14006ECE0(
        a1,
        (__int64)L"txQueue->Bind(m_hardwareAbstraction->GetTxQueue(queueId), m_osServices, m_checksumOffload, m_segmentationOffload)",
        441,
        100,
        v25);
    }
    else
    {
      if ( v67 >= *(_QWORD *)(a1 + 576) )
        sub_140072758(100, 0x239u, v67, *(_DWORD *)(a1 + 576), 0);
      sub_1400A5B28((__int64 *)(*(_QWORD *)(a1 + 568) + v100), &v63);
      v53 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 416) + 96LL))(*(_QWORD *)(a1 + 416), v97);
      v25 = sub_14014579C(v63, v99, v53);
      if ( v25 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v2 |= 0xC00u;
          v54 = (const wchar_t *)&unk_1400D44E0;
          v55 = (const wchar_t *)&unk_1400D44E0;
          v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v91)
                                  + 16LL);
          if ( v56 )
            v55 = v56;
          v57 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v89)
                                  + 16LL);
          if ( v57 )
            v54 = v57;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xBu,
            0x3Eu,
            (__int64)&unk_1400D9408,
            v54,
            v55,
            L"txQueue->Initialize(txQueueInit, m_hardwareAbstraction->GetMtu())");
        }
        if ( (v2 & 0x800) != 0 )
        {
          v58 = v90;
          v2 &= ~0x800u;
          if ( v90 )
          {
            if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
              if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
            }
          }
        }
        if ( (v2 & 0x400) != 0 )
        {
          v59 = v92;
          if ( v92 )
          {
            if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
              if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
            }
          }
        }
        sub_14002D834(a1, (__int64)L"txQueue->Initialize(txQueueInit, m_hardwareAbstraction->GetMtu())", 446, 100, v25);
      }
      else
      {
        v25 = 0;
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v2) = v2 | 0xC0;
      v36 = (const wchar_t *)&unk_1400D44E0;
      v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v81)
                              + 16LL);
      if ( v37 )
        v36 = v37;
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL);
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v83)
                              + 16LL);
      if ( v39 )
        v26 = v39;
      sub_1400A3320(v38, 2u, 0xBu, 0x3Cu, (__int64)&unk_1400D9408, v36, v26, L"txQueue");
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v40 = v82;
      LOBYTE(v2) = v2 & 0x7F;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v41 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_14000B0E4(a1, (__int64)L"txQueue", 435, 100);
    v25 = -1073741801;
  }
  if ( v64 )
  {
    if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
    {
      v60 = v64;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 8LL))(v64);
      if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v64 + 16LL))(v64);
    }
  }
LABEL_126:
  v61 = P;
  if ( P )
  {
    sub_1400751DC((__int64 *)P);
    ExFreePool(v61);
  }
  return v25;
}
