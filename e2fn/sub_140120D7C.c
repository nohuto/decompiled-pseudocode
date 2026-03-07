__int64 __fastcall sub_140120D7C(__int64 a1, __int64 a2)
{
  __int16 v2; // r14
  void *v3; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v7; // rax
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  const wchar_t *v10; // r13
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rax
  const wchar_t *v20; // r13
  void *v21; // rbx
  __int64 *v22; // rax
  const wchar_t *v23; // rdx
  __int64 v24; // rax
  volatile signed __int32 *v25; // rbx
  unsigned int v26; // r12d
  const wchar_t *v27; // r12
  const wchar_t *v28; // rdi
  const wchar_t *v29; // rax
  __int64 v30; // rax
  const wchar_t *v31; // r8
  const wchar_t *v32; // rax
  volatile signed __int32 *v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 *v35; // rax
  volatile signed __int32 *v36; // rbx
  const wchar_t *v37; // rdi
  const wchar_t *v38; // rax
  const wchar_t *v39; // rax
  volatile signed __int32 *v40; // rbx
  volatile signed __int32 *v41; // rbx
  __int64 v42; // rcx
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  const wchar_t *v45; // rax
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rax
  _QWORD *v49; // rbx
  __int64 *v50; // rax
  const wchar_t *v51; // r13
  const wchar_t *v52; // rdi
  const wchar_t *v53; // rax
  const wchar_t *v54; // rax
  volatile signed __int32 *v55; // rbx
  volatile signed __int32 *v56; // rbx
  const wchar_t *v57; // r13
  const wchar_t *v58; // rdi
  const wchar_t *v59; // rax
  const wchar_t *v60; // rax
  volatile signed __int32 *v61; // rbx
  volatile signed __int32 *v62; // rbx
  volatile signed __int32 *v63; // rbx
  volatile signed __int32 *v64; // rbx
  PVOID v65; // rbx
  __int64 v67; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v68; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  __int64 v70; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v71; // [rsp+70h] [rbp-90h]
  void (__fastcall *v72)(__int64, __int64); // [rsp+80h] [rbp-80h] BYREF
  int v73; // [rsp+88h] [rbp-78h]
  _QWORD v74[2]; // [rsp+90h] [rbp-70h] BYREF
  char v75[8]; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v76; // [rsp+A8h] [rbp-58h]
  char v77[8]; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v78; // [rsp+B8h] [rbp-48h]
  char v79[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v80; // [rsp+C8h] [rbp-38h]
  char v81[8]; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v82; // [rsp+D8h] [rbp-28h]
  char v83[8]; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v84; // [rsp+E8h] [rbp-18h]
  char v85[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v86; // [rsp+F8h] [rbp-8h]
  __int64 v87; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v88; // [rsp+108h] [rbp+8h]
  char v89[8]; // [rsp+110h] [rbp+10h] BYREF
  volatile signed __int32 *v90; // [rsp+118h] [rbp+18h]
  char v91[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v92; // [rsp+128h] [rbp+28h]
  char v93[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v94; // [rsp+138h] [rbp+38h]
  char v95[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v96; // [rsp+148h] [rbp+48h]
  char v97[8]; // [rsp+150h] [rbp+50h] BYREF
  volatile signed __int32 *v98; // [rsp+158h] [rbp+58h]
  char v99[8]; // [rsp+160h] [rbp+60h] BYREF
  volatile signed __int32 *v100; // [rsp+168h] [rbp+68h]
  char v101[8]; // [rsp+170h] [rbp+70h] BYREF
  volatile signed __int32 *v102; // [rsp+178h] [rbp+78h]
  char v103[8]; // [rsp+180h] [rbp+80h] BYREF
  volatile signed __int32 *v104; // [rsp+188h] [rbp+88h]
  __int64 v105; // [rsp+190h] [rbp+90h] BYREF
  __int64 v106[10]; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v107; // [rsp+200h] [rbp+100h] BYREF
  __int64 v108; // [rsp+208h] [rbp+108h]
  unsigned __int64 v109; // [rsp+210h] [rbp+110h]
  __int64 v110; // [rsp+218h] [rbp+118h]

  v108 = a2;
  v2 = 0;
  v3 = 0LL;
  v107 = 0;
  P = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074DE0(Pool2, (__int64)L"net_adapter::NetAdapter::CreateRxQueue", a1);
      if ( v7 )
        v3 = v7;
      P = v3;
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF900)(qword_1400DF700, a2);
  v9 = v8;
  v109 = v8;
  v107 = v8;
  if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 608) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v77)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v75)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A60F4(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x42u,
        (__int64)&unk_1400D9408,
        v10,
        v11,
        (const wchar_t *)qword_14014EC70);
      LOBYTE(v2) = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v76;
      LOBYTE(v2) = v2 & 0xFD;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) == 0 )
      goto LABEL_44;
    v15 = v78;
LABEL_40:
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
LABEL_44:
    v26 = -1073741811;
    goto LABEL_148;
  }
  v16 = *(_QWORD *)(a1 + 600);
  v110 = 16 * v9;
  if ( *(_QWORD *)(v16 + 16 * v9) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      if ( v9 >= *(_QWORD *)(a1 + 608) )
        sub_140072758(100, 0x239u, v9, *(_DWORD *)(a1 + 608), 0);
      v17 = *(_QWORD *)(v16 + 16 * v9);
      v18 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v79);
      v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v17 + 56) + 8LL))(v17 + 56);
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = &unk_1400D44E0;
      if ( *(_QWORD *)(v19 + 16) )
        v21 = *(void **)(v19 + 16);
      v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(a1 + 56, v81);
      v23 = (const wchar_t *)&unk_1400D44E0;
      v24 = *v22;
      if ( *(_QWORD *)(v18 + 16) )
        v23 = *(const wchar_t **)(v18 + 16);
      if ( *(_QWORD *)(v24 + 16) )
        v20 = *(const wchar_t **)(v24 + 16);
      sub_1400A8E20(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x43u,
        (__int64)&unk_1400D9408,
        v23,
        v20,
        (const wchar_t *)qword_14014EC70,
        v107,
        (__int64)v21);
      LOBYTE(v2) = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v25 = v80;
      LOBYTE(v2) = v2 & 0xF7;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v2 & 4) == 0 )
      goto LABEL_44;
    v15 = v82;
    goto LABEL_40;
  }
  v27 = (const wchar_t *)&unk_1400D44E0;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v28 = (const wchar_t *)&unk_1400D44E0;
    v29 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                           a1 + 56,
                                           v85)
                            + 16LL);
    if ( v29 )
      v28 = v29;
    v30 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v83);
    v31 = (const wchar_t *)&unk_1400D44E0;
    v32 = *(const wchar_t **)(*(_QWORD *)v30 + 16LL);
    if ( v32 )
      v31 = v32;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      0xBu,
      0x44u,
      (__int64)&unk_1400D9408,
      v31,
      v28,
      (const wchar_t *)qword_14014EC70);
    v9 = v109;
    v2 = 48;
  }
  if ( (v2 & 0x20) != 0 )
  {
    v33 = v84;
    v2 &= ~0x20u;
    if ( v84 )
    {
      if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
  }
  if ( (v2 & 0x10) != 0 )
  {
    v34 = v86;
    v2 &= ~0x10u;
    if ( v86 )
    {
      if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
  }
  v73 = 0;
  v72 = sub_140075EB0;
  v35 = sub_14006D650(&v87, (_QWORD *)a1, (__int64)&v72);
  sub_1400B0AA4(&v67, 0x30303635u, a1, &v107, v35);
  v36 = v88;
  if ( v88 )
  {
    if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  if ( v67 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**(_QWORD **)(a1 + 416) + 88LL))(
      *(_QWORD *)(a1 + 416),
      &v70,
      v107);
    v42 = v70;
    if ( v70 )
    {
      v48 = v71;
      v71 = 0LL;
      v70 = 0LL;
      v74[0] = v42;
      v74[1] = v48;
      v49 = sub_1400A27D4(&v105, (__int64 *)(a1 + 384));
      v50 = sub_1400A5180(v106, (_QWORD *)(a1 + 512));
      v26 = sub_1401476B4(v67, v74, v50, v49);
      if ( v26 )
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v2 |= 0xC00u;
          v51 = (const wchar_t *)&unk_1400D44E0;
          v52 = (const wchar_t *)&unk_1400D44E0;
          v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                 a1 + 56,
                                                 v99)
                                  + 16LL);
          if ( v53 )
            v52 = v53;
          v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                 a1 + 56,
                                                 v97)
                                  + 16LL);
          if ( v54 )
            v51 = v54;
          sub_1400A5E80(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            2u,
            0xBu,
            0x47u,
            (__int64)&unk_1400D9408,
            v51,
            v52,
            L"rxQueue->Bind(kstd::move(hardwareRxQueue), m_checksumOffload, m_osServices)");
        }
        if ( (v2 & 0x800) != 0 )
        {
          v55 = v98;
          v2 &= ~0x800u;
          if ( v98 )
          {
            if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
              if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
            }
          }
        }
        if ( (v2 & 0x400) != 0 )
        {
          v56 = v100;
          if ( v100 )
          {
            if ( _InterlockedExchangeAdd(v100 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
              if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
            }
          }
        }
        sub_14000A7E0(
          a1,
          (__int64)L"rxQueue->Bind(kstd::move(hardwareRxQueue), m_checksumOffload, m_osServices)",
          515,
          100,
          v26);
      }
      else
      {
        if ( v9 >= *(_QWORD *)(a1 + 608) )
          sub_140072758(100, 0x239u, v9, *(_DWORD *)(a1 + 608), 0);
        sub_1400A5B28((__int64 *)(*(_QWORD *)(a1 + 600) + v110), &v67);
        v26 = sub_140148454(v67, v108);
        if ( v26 )
        {
          if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
          {
            v2 |= 0x3000u;
            v57 = (const wchar_t *)&unk_1400D44E0;
            v58 = (const wchar_t *)&unk_1400D44E0;
            v59 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                                   a1 + 56,
                                                   v103)
                                    + 16LL);
            if ( v59 )
              v58 = v59;
            v60 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                                   a1 + 56,
                                                   v101)
                                    + 16LL);
            if ( v60 )
              v57 = v60;
            sub_1400A5E80(
              *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
              2u,
              0xBu,
              0x48u,
              (__int64)&unk_1400D9408,
              v57,
              v58,
              L"rxQueue->Initialize(rxQueueInit)");
          }
          if ( (v2 & 0x2000) != 0 )
          {
            v61 = v102;
            v2 &= ~0x2000u;
            if ( v102 )
            {
              if ( _InterlockedExchangeAdd(v102 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
                if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
              }
            }
          }
          if ( (v2 & 0x1000) != 0 )
          {
            v62 = v104;
            if ( v104 )
            {
              if ( _InterlockedExchangeAdd(v104 + 2, 0xFFFFFFFF) == 1 )
              {
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
                if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
              }
            }
          }
          sub_140008CA4(a1, (__int64)L"rxQueue->Initialize(rxQueueInit)", 520, 100, v26);
        }
        else
        {
          v26 = 0;
        }
      }
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v2 |= 0x300u;
        v43 = (const wchar_t *)&unk_1400D44E0;
        v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v93)
                                + 16LL);
        if ( v44 )
          v43 = v44;
        v45 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v95)
                                + 16LL);
        if ( v45 )
          v27 = v45;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xBu,
          0x46u,
          (__int64)&unk_1400D9408,
          v43,
          v27,
          L"hardwareRxQueue");
      }
      if ( (v2 & 0x200) != 0 )
      {
        v46 = v94;
        v2 &= ~0x200u;
        if ( v94 )
        {
          if ( _InterlockedExchangeAdd(v94 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
          }
        }
      }
      if ( (v2 & 0x100) != 0 )
      {
        v47 = v96;
        if ( v96 )
        {
          if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
          }
        }
      }
      sub_14000B1BC(a1, (__int64)L"hardwareRxQueue", 514, 100);
      v26 = -1073741661;
    }
    v63 = v71;
    if ( v71 )
    {
      if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
        if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
      }
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v2) = v2 | 0xC0;
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v91)
                              + 16LL);
      if ( v38 )
        v37 = v38;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v89)
                              + 16LL);
      if ( v39 )
        v27 = v39;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0x45u,
        (__int64)&unk_1400D9408,
        v27,
        v37,
        L"rxQueue");
    }
    if ( (v2 & 0x80u) != 0 )
    {
      v40 = v90;
      LOBYTE(v2) = v2 & 0x7F;
      if ( v90 )
      {
        if ( _InterlockedExchangeAdd(v90 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v2 & 0x40) != 0 )
    {
      v41 = v92;
      if ( v92 )
      {
        if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_14000B0E4(a1, (__int64)L"rxQueue", 511, 100);
    v26 = -1073741801;
  }
  if ( v68 )
  {
    if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
    {
      v64 = v68;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      if ( _InterlockedExchangeAdd(v64 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
    }
  }
LABEL_148:
  v65 = P;
  if ( P )
  {
    sub_1400751DC((__int64 *)P);
    ExFreePool(v65);
  }
  return v26;
}
