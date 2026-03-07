__int64 __fastcall sub_14013C36C(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 *a5, __int64 *a6)
{
  __int64 v6; // rsi
  __int64 *v8; // r15
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  __int64 v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  __int64 v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const wchar_t *v34; // rdi
  const wchar_t *v35; // rax
  __int64 v36; // rax
  volatile signed __int32 *v37; // rdi
  volatile signed __int32 *v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  const wchar_t *v42; // rdi
  const wchar_t *v43; // rax
  const wchar_t *v44; // rax
  const wchar_t *v45; // rcx
  volatile signed __int32 *v46; // rdi
  volatile signed __int32 *v47; // rdi
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  const wchar_t *v55; // rdi
  const wchar_t *v56; // rax
  __int64 v57; // rax
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rdi
  volatile signed __int32 *v61; // rdi
  volatile signed __int32 *v62; // rdi
  volatile signed __int32 *v63; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  volatile signed __int32 *v67; // rdi
  volatile signed __int32 *v68; // rdi
  volatile signed __int32 *v69; // rdi
  volatile signed __int32 *v70; // rdi
  volatile signed __int32 *v71; // rdi
  _QWORD v72[2]; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v73[8]; // [rsp+50h] [rbp-89h] BYREF
  volatile signed __int32 *v74; // [rsp+58h] [rbp-81h]
  _BYTE v75[8]; // [rsp+60h] [rbp-79h] BYREF
  volatile signed __int32 *v76; // [rsp+68h] [rbp-71h]
  _BYTE v77[8]; // [rsp+70h] [rbp-69h] BYREF
  volatile signed __int32 *v78; // [rsp+78h] [rbp-61h]
  _BYTE v79[8]; // [rsp+80h] [rbp-59h] BYREF
  volatile signed __int32 *v80; // [rsp+88h] [rbp-51h]
  _BYTE v81[8]; // [rsp+90h] [rbp-49h] BYREF
  volatile signed __int32 *v82; // [rsp+98h] [rbp-41h]
  _BYTE v83[8]; // [rsp+A0h] [rbp-39h] BYREF
  volatile signed __int32 *v84; // [rsp+A8h] [rbp-31h]
  _BYTE v85[8]; // [rsp+B0h] [rbp-29h] BYREF
  volatile signed __int32 *v86; // [rsp+B8h] [rbp-21h]
  _BYTE v87[8]; // [rsp+C0h] [rbp-19h] BYREF
  volatile signed __int32 *v88; // [rsp+C8h] [rbp-11h]
  _BYTE v89[8]; // [rsp+D0h] [rbp-9h] BYREF
  volatile signed __int32 *v90; // [rsp+D8h] [rbp-1h]
  _BYTE v91[8]; // [rsp+E0h] [rbp+7h] BYREF
  volatile signed __int32 *v92; // [rsp+E8h] [rbp+Fh]
  const wchar_t *v93; // [rsp+138h] [rbp+5Fh]
  _QWORD *v94; // [rsp+148h] [rbp+6Fh]

  v94 = a4;
  LOWORD(v6) = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::Bind", (__int64)a1);
      if ( v12 )
        v8 = v12;
    }
    a4 = v94;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (__int64)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v75)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v73) + 16LL);
      if ( v15 )
        v6 = v15;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xBu,
        (__int64)&unk_1400D9E10,
        (const wchar_t *)v6,
        v13,
        L"hardwareLink");
      LOBYTE(v6) = 3;
    }
    if ( (v6 & 2) != 0 )
    {
      v16 = v74;
      LOBYTE(v6) = v6 & 0xFD;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v6 & 1) != 0 )
    {
      v17 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"hardwareLink", 82, 113);
LABEL_25:
    if ( v8 )
    {
      sub_140075108(v8);
      ExFreePool(v8);
    }
    v18 = (volatile signed __int32 *)a2[1];
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
    v20 = (volatile signed __int32 *)v94[1];
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
LABEL_40:
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v22 = (volatile signed __int32 *)a6[1];
LABEL_149:
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 3221225485LL;
  }
  v23 = a1[68];
  a1[68] = a2[1];
  v24 = *a2;
  a2[1] = v23;
  v25 = a1[67];
  a1[67] = v24;
  *a2 = v25;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (__int64)&unk_1400D44E0;
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v79)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v77) + 16LL);
      if ( v28 )
        v6 = v28;
      v93 = (const wchar_t *)v6;
      LOBYTE(v6) = 12;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xCu,
        (__int64)&unk_1400D9E10,
        v93,
        v26,
        L"hardwareWolPatterns");
    }
    if ( (v6 & 8) != 0 )
    {
      v29 = v78;
      LOBYTE(v6) = v6 & 0xF7;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v6 & 4) != 0 )
    {
      v30 = v80;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14000B444((int)a1, (__int64)L"hardwareWolPatterns", 85, 113);
    goto LABEL_25;
  }
  v31 = a1[66];
  a1[66] = a3[1];
  v32 = *a3;
  a3[1] = v31;
  v33 = a1[65];
  a1[65] = v32;
  *a3 = v33;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (__int64)&unk_1400D44E0;
      v34 = (const wchar_t *)&unk_1400D44E0;
      v35 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v83)
                              + 16LL);
      if ( v35 )
        v34 = v35;
      v36 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v81) + 16LL);
      if ( v36 )
        v6 = v36;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xDu,
        (__int64)&unk_1400D9E10,
        (const wchar_t *)v6,
        v34,
        L"hardwareRxFilter");
      LOBYTE(v6) = 48;
    }
    if ( (v6 & 0x20) != 0 )
    {
      v37 = v82;
      LOBYTE(v6) = v6 & 0xDF;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 16LL))(v37);
        }
      }
    }
    if ( (v6 & 0x10) != 0 )
    {
      v38 = v84;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    sub_14000B294((int)a1, (__int64)L"hardwareRxFilter", 88, 113);
    goto LABEL_25;
  }
  v39 = a1[70];
  a1[70] = a4[1];
  v40 = *a4;
  a4[1] = v39;
  v41 = a1[69];
  a1[69] = v40;
  *a4 = v41;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v42 = (const wchar_t *)&unk_1400D44E0;
      v43 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v87)
                              + 16LL);
      if ( v43 )
        v42 = v43;
      v6 = *(_QWORD *)(a1[22] + 16LL);
      v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v85)
                              + 16LL);
      v45 = (const wchar_t *)&unk_1400D44E0;
      if ( v44 )
        v45 = v44;
      sub_1400A3320(v6, 2u, 0xBu, 0xEu, (__int64)&unk_1400D9E10, v45, v42, L"osServices");
      LOBYTE(v6) = -64;
    }
    if ( (v6 & 0x80u) != 0LL )
    {
      v46 = v86;
      LOBYTE(v6) = v6 & 0x7F;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
    }
    if ( (v6 & 0x40) != 0 )
    {
      v47 = v88;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 16LL))(v47);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"osServices", 91, 113);
    if ( v8 )
    {
      sub_140075108(v8);
      ExFreePool(v8);
    }
    v48 = (volatile signed __int32 *)a2[1];
    if ( v48 )
    {
      if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
        if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
      }
    }
    v49 = (volatile signed __int32 *)a3[1];
    if ( v49 )
    {
      if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
      }
    }
    v50 = (volatile signed __int32 *)v94[1];
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
    v21 = (volatile signed __int32 *)a5[1];
    goto LABEL_40;
  }
  v51 = a1[47];
  a1[47] = a5[1];
  v52 = *a5;
  a5[1] = v51;
  v53 = a1[46];
  a1[46] = v52;
  *a5 = v53;
  v54 = *a6;
  if ( !*a6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = (__int64)&unk_1400D44E0;
      v55 = (const wchar_t *)&unk_1400D44E0;
      v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v91)
                              + 16LL);
      if ( v56 )
        v55 = v56;
      v57 = *(_QWORD *)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v89) + 16LL);
      if ( v57 )
        v6 = v57;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xFu,
        (__int64)&unk_1400D9E10,
        (const wchar_t *)v6,
        v55,
        L"eventViewerLogger");
      LOWORD(v6) = 768;
    }
    if ( (v6 & 0x200) != 0 )
    {
      v58 = v90;
      LOWORD(v6) = v6 & 0xFDFF;
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
    if ( (v6 & 0x100) != 0 )
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
    sub_14000B36C((int)a1, (__int64)L"eventViewerLogger", 94, 113);
    if ( v8 )
    {
      sub_140075108(v8);
      ExFreePool(v8);
    }
    v60 = (volatile signed __int32 *)a2[1];
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
        if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
      }
    }
    v61 = (volatile signed __int32 *)a3[1];
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
        if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
      }
    }
    v62 = (volatile signed __int32 *)v94[1];
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
        if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
      }
    }
    v63 = (volatile signed __int32 *)a5[1];
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 8LL))(v63);
        if ( _InterlockedExchangeAdd(v63 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v63 + 16LL))(v63);
      }
    }
    v22 = (volatile signed __int32 *)a6[1];
    goto LABEL_149;
  }
  v65 = a6[1];
  a6[1] = 0LL;
  *a6 = 0LL;
  v66 = a1[71];
  v72[0] = v54;
  v72[1] = v65;
  sub_14014BF54(v66, v72);
  if ( v8 )
  {
    sub_140075108(v8);
    ExFreePool(v8);
  }
  v67 = (volatile signed __int32 *)a2[1];
  if ( v67 )
  {
    if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
      if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
    }
  }
  v68 = (volatile signed __int32 *)a3[1];
  if ( v68 )
  {
    if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
    }
  }
  v69 = (volatile signed __int32 *)v94[1];
  if ( v69 )
  {
    if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
      if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
    }
  }
  v70 = (volatile signed __int32 *)a5[1];
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
    }
  }
  v71 = (volatile signed __int32 *)a6[1];
  if ( v71 )
  {
    if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 8LL))(v71);
      if ( _InterlockedExchangeAdd(v71 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v71 + 16LL))(v71);
    }
  }
  return 0LL;
}
