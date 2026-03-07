__int64 __fastcall sub_1400FDA68(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  __int64 *v7; // r15
  __int64 *v10; // rdi
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *v30; // rbx
  const wchar_t *v31; // rdi
  const wchar_t *v32; // rax
  __int64 v33; // rax
  volatile signed __int32 *v34; // rbx
  volatile signed __int32 *v35; // rbx
  _QWORD *v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  volatile signed __int32 *v41; // rbx
  const wchar_t *v42; // rdi
  const wchar_t *v43; // rax
  __int64 v44; // rax
  volatile signed __int32 *v45; // rbx
  volatile signed __int32 *v46; // rbx
  volatile signed __int32 *v47; // rbx
  volatile signed __int32 *v48; // rbx
  volatile signed __int32 *v49; // rbx
  volatile signed __int32 *v50; // rbx
  const wchar_t *v52; // rdi
  const wchar_t *v53; // rax
  const wchar_t *v54; // rax
  const wchar_t *v55; // rcx
  volatile signed __int32 *v56; // rbx
  volatile signed __int32 *v57; // rbx
  __int64 v58; // rcx
  _QWORD *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  const wchar_t *v62; // rdi
  const wchar_t *v63; // rax
  const wchar_t *v64; // rax
  const wchar_t *v65; // rcx
  volatile signed __int32 *v66; // rbx
  volatile signed __int32 *v67; // rbx
  volatile signed __int32 *v68; // rbx
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rcx
  volatile signed __int32 *v74; // rbx
  volatile signed __int32 *v75; // rbx
  volatile signed __int32 *v76; // rbx
  volatile signed __int32 *v77; // rbx
  __int64 v78; // [rsp+50h] [rbp-B8h] BYREF
  volatile signed __int32 *v79; // [rsp+58h] [rbp-B0h]
  __int64 v80; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v81; // [rsp+68h] [rbp-A0h]
  __int64 v82; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v83; // [rsp+78h] [rbp-90h]
  __int64 v84; // [rsp+80h] [rbp-88h] BYREF
  volatile signed __int32 *v85; // [rsp+88h] [rbp-80h]
  _BYTE v86[8]; // [rsp+90h] [rbp-78h] BYREF
  volatile signed __int32 *v87; // [rsp+98h] [rbp-70h]
  _BYTE v88[8]; // [rsp+A0h] [rbp-68h] BYREF
  volatile signed __int32 *v89; // [rsp+A8h] [rbp-60h]
  _BYTE v90[8]; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v91; // [rsp+B8h] [rbp-50h]
  _BYTE v92[8]; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v93; // [rsp+C8h] [rbp-40h]
  _BYTE v94[8]; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v95; // [rsp+D8h] [rbp-30h]
  _BYTE v96[8]; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v97; // [rsp+E8h] [rbp-20h]
  _BYTE v98[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v99; // [rsp+F8h] [rbp-10h]
  _BYTE v100[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v101; // [rsp+108h] [rbp+0h]
  _BYTE v102[8]; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v103; // [rsp+118h] [rbp+10h]
  _QWORD v104[9]; // [rsp+120h] [rbp+18h] BYREF

  LOWORD(v5) = 0;
  v7 = 0LL;
  v10 = (__int64 *)a2;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::Bind", (__int64)a1);
      if ( v12 )
        v7 = v12;
    }
  }
  if ( !*v10 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 = (__int64)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 16LL))(a1 + 7, &v82)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, __int64 *))(a1[7] + 24LL))(a1 + 7, &v80) + 16LL);
      if ( v15 )
        v5 = v15;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xAu,
        (__int64)&unk_1400D64E8,
        (const wchar_t *)v5,
        v13,
        L"mmioAccessor");
      v10 = (__int64 *)a2;
      LOBYTE(v5) = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v16 = v81;
      LOBYTE(v5) = v5 & 0xFD;
      if ( v81 )
      {
        if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v17 = v83;
      if ( v83 )
      {
        if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 102, 59);
LABEL_24:
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v18 = (volatile signed __int32 *)v10[1];
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
    v19 = (volatile signed __int32 *)a3[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a4[1];
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)a5[1];
LABEL_156:
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 3221225485LL;
  }
  v22 = a1[55];
  a1[55] = v10[1];
  v23 = *v10;
  v10[1] = v22;
  v24 = a1[54];
  a1[54] = v23;
  *v10 = v24;
  sub_1400A27D4(&v78, a1 + 12);
  v25 = sub_1400A9A50(&v84, 0x30303961u, (__int64)L"WOL Events history", &v78, a3);
  v26 = a1[53];
  a1[53] = v25[1];
  v27 = *v25;
  v25[1] = v26;
  v28 = a1[52];
  a1[52] = v27;
  *v25 = v28;
  v29 = v85;
  if ( v85 )
  {
    if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  if ( v79 )
  {
    if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
    {
      v30 = v79;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 16LL))(v79);
    }
  }
  if ( !a1[52] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 = (__int64)&unk_1400D44E0;
      v31 = (const wchar_t *)&unk_1400D44E0;
      v32 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v88)
                              + 16LL);
      if ( v32 )
        v31 = v32;
      v33 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v86) + 16LL);
      if ( v33 )
        v5 = v33;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xBu,
        (__int64)&unk_1400D64E8,
        (const wchar_t *)v5,
        v31,
        L"m_wolEventsHistory");
      v10 = (__int64 *)a2;
      LOBYTE(v5) = 12;
    }
    if ( (v5 & 8) != 0 )
    {
      v34 = v87;
      LOBYTE(v5) = v5 & 0xF7;
      if ( v87 )
      {
        if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
          if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
        }
      }
    }
    if ( (v5 & 4) != 0 )
    {
      v35 = v89;
      if ( v89 )
      {
        if ( _InterlockedExchangeAdd(v89 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
        }
      }
    }
    sub_14002D980((int)a1, (__int64)L"m_wolEventsHistory", 106, 59);
LABEL_87:
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v47 = (volatile signed __int32 *)v10[1];
    if ( v47 )
    {
      if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
        if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    v48 = (volatile signed __int32 *)a3[1];
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    v49 = (volatile signed __int32 *)a4[1];
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    v50 = (volatile signed __int32 *)a5[1];
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
    return 3221225495LL;
  }
  v36 = sub_1400A27D4(v104, a1 + 52);
  sub_1400714D4(a1, v36, 0);
  v37 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a3 + 8LL))(*a3, v90);
  v38 = a1[59];
  a1[59] = v37[1];
  v39 = *v37;
  v37[1] = v38;
  v40 = a1[58];
  a1[58] = v39;
  *v37 = v40;
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
  if ( !a1[58] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 = (__int64)&unk_1400D44E0;
      v42 = (const wchar_t *)&unk_1400D44E0;
      v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v94)
                              + 16LL);
      if ( v43 )
        v42 = v43;
      v44 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v92) + 16LL);
      if ( v44 )
        v5 = v44;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&unk_1400D64E8,
        (const wchar_t *)v5,
        v42,
        L"m_wakePacketLock");
      v10 = (__int64 *)a2;
      LOBYTE(v5) = 48;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v45 = v93;
      LOBYTE(v5) = v5 & 0xDF;
      if ( v93 )
      {
        if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 16LL))(v45);
        }
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      v46 = v95;
      if ( v95 )
      {
        if ( _InterlockedExchangeAdd(v95 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    sub_14000B294((int)a1, (__int64)L"m_wakePacketLock", 110, 59);
    goto LABEL_87;
  }
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v52 = (const wchar_t *)&unk_1400D44E0;
      v53 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v96)
                              + 16LL);
      if ( v53 )
        v52 = v53;
      v5 = *(_QWORD *)(a1[22] + 16LL);
      v54 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v98)
                              + 16LL);
      v55 = (const wchar_t *)&unk_1400D44E0;
      if ( v54 )
        v55 = v54;
      sub_1400A3320(v5, 2u, 0xAu, 0xDu, (__int64)&unk_1400D64E8, v52, v55, L"firmware");
      v10 = (__int64 *)a2;
      LOBYTE(v5) = -64;
    }
    if ( (v5 & 0x80u) != 0LL )
    {
      v56 = v97;
      LOBYTE(v5) = v5 & 0x7F;
      if ( v97 )
      {
        if ( _InterlockedExchangeAdd(v97 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
          if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 16LL))(v56);
        }
      }
    }
    if ( (v5 & 0x40) != 0 )
    {
      v57 = v99;
      if ( v99 )
      {
        if ( _InterlockedExchangeAdd(v99 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
          if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
    }
    sub_140022128((int)a1, (__int64)L"firmware", 112, 59);
    goto LABEL_24;
  }
  v58 = a1[57];
  v59 = a5;
  a1[57] = a4[1];
  v60 = *a4;
  a4[1] = v58;
  v61 = a1[56];
  a1[56] = v60;
  *a4 = v61;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v5 = *(_QWORD *)(a1[22] + 16LL);
      v62 = (const wchar_t *)&unk_1400D44E0;
      v63 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v102)
                              + 16LL);
      if ( v63 )
        v62 = v63;
      v64 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v100)
                              + 16LL);
      v65 = (const wchar_t *)&unk_1400D44E0;
      if ( v64 )
        v65 = v64;
      sub_1400A3320(v5, 2u, 0xAu, 0xEu, (__int64)&unk_1400D64E8, v65, v62, L"receiveGate");
      v59 = a5;
      LOWORD(v5) = 768;
    }
    if ( (v5 & 0x200) != 0 )
    {
      v66 = v101;
      LOWORD(v5) = v5 & 0xFDFF;
      if ( v101 )
      {
        if ( _InterlockedExchangeAdd(v101 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
        }
      }
    }
    if ( (v5 & 0x100) != 0 )
    {
      v67 = v103;
      if ( v103 )
      {
        if ( _InterlockedExchangeAdd(v103 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
          if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"receiveGate", 115, 59);
    if ( v7 )
    {
      sub_14000BFA4(v7);
      ExFreePool(v7);
    }
    v68 = *(volatile signed __int32 **)(a2 + 8);
    if ( v68 )
    {
      if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
        if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
      }
    }
    v69 = (volatile signed __int32 *)a3[1];
    if ( v69 )
    {
      if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
        if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
      }
    }
    v70 = (volatile signed __int32 *)a4[1];
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
        if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
      }
    }
    v21 = (volatile signed __int32 *)v59[1];
    goto LABEL_156;
  }
  v71 = a1[61];
  a1[61] = a5[1];
  v72 = *a5;
  a5[1] = v71;
  v73 = a1[60];
  a1[60] = v72;
  *a5 = v73;
  if ( v7 )
  {
    sub_14000BFA4(v7);
    ExFreePool(v7);
  }
  v74 = *(volatile signed __int32 **)(a2 + 8);
  if ( v74 )
  {
    if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
      if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 16LL))(v74);
    }
  }
  v75 = (volatile signed __int32 *)a3[1];
  if ( v75 )
  {
    if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 8LL))(v75);
      if ( _InterlockedExchangeAdd(v75 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v75 + 16LL))(v75);
    }
  }
  v76 = (volatile signed __int32 *)a4[1];
  if ( v76 )
  {
    if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 8LL))(v76);
      if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 16LL))(v76);
    }
  }
  v77 = (volatile signed __int32 *)a5[1];
  if ( v77 )
  {
    if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 8LL))(v77);
      if ( _InterlockedExchangeAdd(v77 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v77 + 16LL))(v77);
    }
  }
  return 0LL;
}
