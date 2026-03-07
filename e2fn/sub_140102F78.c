__int64 __fastcall sub_140102F78(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 *a5, __int64 *a6)
{
  const wchar_t *v9; // r14
  __int64 *v10; // r15
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
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
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  volatile signed __int32 *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  const wchar_t *v38; // rdi
  const wchar_t *v39; // rax
  const wchar_t *v40; // rax
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  const wchar_t *v46; // rdi
  const wchar_t *v47; // rax
  const wchar_t *v48; // rax
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  const wchar_t *v54; // rdi
  const wchar_t *v55; // rax
  const wchar_t *v56; // rax
  volatile signed __int32 *v57; // rdi
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rdi
  volatile signed __int32 *v61; // rdi
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  volatile signed __int32 *v66; // rdi
  volatile signed __int32 *v67; // rdi
  volatile signed __int32 *v68; // rdi
  volatile signed __int32 *v69; // rdi
  volatile signed __int32 *v70; // rdi
  _BYTE v71[8]; // [rsp+40h] [rbp-89h] BYREF
  volatile signed __int32 *v72; // [rsp+48h] [rbp-81h]
  _BYTE v73[8]; // [rsp+50h] [rbp-79h] BYREF
  volatile signed __int32 *v74; // [rsp+58h] [rbp-71h]
  _BYTE v75[8]; // [rsp+60h] [rbp-69h] BYREF
  volatile signed __int32 *v76; // [rsp+68h] [rbp-61h]
  _BYTE v77[8]; // [rsp+70h] [rbp-59h] BYREF
  volatile signed __int32 *v78; // [rsp+78h] [rbp-51h]
  _BYTE v79[8]; // [rsp+80h] [rbp-49h] BYREF
  volatile signed __int32 *v80; // [rsp+88h] [rbp-41h]
  _BYTE v81[8]; // [rsp+90h] [rbp-39h] BYREF
  volatile signed __int32 *v82; // [rsp+98h] [rbp-31h]
  _BYTE v83[8]; // [rsp+A0h] [rbp-29h] BYREF
  volatile signed __int32 *v84; // [rsp+A8h] [rbp-21h]
  _BYTE v85[8]; // [rsp+B0h] [rbp-19h] BYREF
  volatile signed __int32 *v86; // [rsp+B8h] [rbp-11h]
  _BYTE v87[8]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v88; // [rsp+C8h] [rbp-1h]
  _BYTE v89[8]; // [rsp+D0h] [rbp+7h] BYREF
  volatile signed __int32 *v90; // [rsp+D8h] [rbp+Fh]
  _QWORD *v91; // [rsp+138h] [rbp+6Fh]

  v91 = a4;
  LOWORD(v9) = 0;
  v10 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::Bind", (__int64)a1);
      if ( v12 )
        v10 = v12;
    }
    a4 = v91;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v73)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v71)
                              + 16LL);
      if ( v15 )
        v9 = v15;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xAu, (__int64)&unk_1400D6CE0, v9, v13, L"mmioAccessor");
      LOBYTE(v9) = 3;
    }
    if ( ((unsigned __int8)v9 & 2) != 0 )
    {
      v16 = v72;
      LOBYTE(v9) = (unsigned __int8)v9 & 0xFD;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      v17 = v74;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 67, 48);
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
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
    v20 = (volatile signed __int32 *)v91[1];
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
  v23 = a1[46];
  a1[46] = a2[1];
  v24 = *a2;
  a2[1] = v23;
  v25 = a1[45];
  a1[45] = v24;
  *a2 = v25;
  if ( !*a6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v77)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v75)
                              + 16LL);
      if ( v28 )
        v9 = v28;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xBu, (__int64)&unk_1400D6CE0, v9, v26, L"phy");
      LOBYTE(v9) = 12;
    }
    if ( ((unsigned __int8)v9 & 8) != 0 )
    {
      v29 = v76;
      LOBYTE(v9) = (unsigned __int8)v9 & 0xF7;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( ((unsigned __int8)v9 & 4) != 0 )
    {
      v30 = v78;
      if ( v78 )
      {
        if ( _InterlockedExchangeAdd(v78 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14000DA44((int)a1, (__int64)L"phy", 70, 48);
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
    }
    v31 = (volatile signed __int32 *)a2[1];
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    v32 = (volatile signed __int32 *)a3[1];
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)v91[1];
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    v34 = (volatile signed __int32 *)a5[1];
LABEL_144:
    if ( v34 )
    {
      if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
        if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
      }
    }
    v22 = (volatile signed __int32 *)a6[1];
    goto LABEL_149;
  }
  v35 = a1[48];
  a1[48] = a6[1];
  v36 = *a6;
  a6[1] = v35;
  v37 = a1[47];
  a1[47] = v36;
  *a6 = v37;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v81)
                              + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v79)
                              + 16LL);
      if ( v40 )
        v9 = v40;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xCu, (__int64)&unk_1400D6CE0, v9, v38, L"hardwareLink");
      LOBYTE(v9) = 48;
    }
    if ( ((unsigned __int8)v9 & 0x20) != 0 )
    {
      v41 = v80;
      LOBYTE(v9) = (unsigned __int8)v9 & 0xDF;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( ((unsigned __int8)v9 & 0x10) != 0 )
    {
      v42 = v82;
      if ( v82 )
      {
        if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"hardwareLink", 73, 48);
LABEL_129:
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
    }
    v59 = (volatile signed __int32 *)a2[1];
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
        if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
      }
    }
    v60 = (volatile signed __int32 *)a3[1];
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
        if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
      }
    }
    v61 = (volatile signed __int32 *)v91[1];
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
        if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
      }
    }
    v34 = (volatile signed __int32 *)a5[1];
    goto LABEL_144;
  }
  v43 = a1[50];
  a1[50] = a5[1];
  v44 = *a5;
  a5[1] = v43;
  v45 = a1[49];
  a1[49] = v44;
  *a5 = v45;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v46 = (const wchar_t *)&unk_1400D44E0;
      v47 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v83)
                              + 16LL);
      if ( v47 )
        v46 = v47;
      v48 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v85)
                              + 16LL);
      if ( v48 )
        v9 = v48;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xDu, (__int64)&unk_1400D6CE0, v46, v9, L"hardwareMtu");
      LOBYTE(v9) = -64;
    }
    if ( (char)v9 < 0 )
    {
      v49 = v84;
      LOBYTE(v9) = (unsigned __int8)v9 & 0x7F;
      if ( v84 )
      {
        if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    if ( ((unsigned __int8)v9 & 0x40) != 0 )
    {
      v50 = v86;
      if ( v86 )
      {
        if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
          if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
        }
      }
    }
    sub_14000B954((int)a1, (__int64)L"hardwareMtu", 76, 48);
    goto LABEL_129;
  }
  v51 = a1[54];
  a1[54] = a4[1];
  v52 = *a4;
  a4[1] = v51;
  v53 = a1[53];
  a1[53] = v52;
  *a4 = v53;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v54 = (const wchar_t *)&unk_1400D44E0;
      v55 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v89)
                              + 16LL);
      if ( v55 )
        v54 = v55;
      v56 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v87)
                              + 16LL);
      if ( v56 )
        v9 = v56;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xEu,
        (__int64)&unk_1400D6CE0,
        v9,
        v54,
        L"hardwareConfiguration");
      LOWORD(v9) = 768;
    }
    if ( ((unsigned __int16)v9 & 0x200) != 0 )
    {
      v57 = v88;
      LOWORD(v9) = (unsigned __int16)v9 & 0xFDFF;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd(v88 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
          if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
        }
      }
    }
    if ( ((unsigned __int16)v9 & 0x100) != 0 )
    {
      v58 = v90;
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
    sub_14000B51C((int)a1, (__int64)L"hardwareConfiguration", 79, 48);
    goto LABEL_129;
  }
  v63 = a1[52];
  a1[52] = a3[1];
  v64 = *a3;
  a3[1] = v63;
  v65 = a1[51];
  a1[51] = v64;
  *a3 = v65;
  if ( v10 )
  {
    sub_14000BFA4(v10);
    ExFreePool(v10);
  }
  v66 = (volatile signed __int32 *)a2[1];
  if ( v66 )
  {
    if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
      if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 16LL))(v66);
    }
  }
  v67 = (volatile signed __int32 *)a3[1];
  if ( v67 )
  {
    if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 8LL))(v67);
      if ( _InterlockedExchangeAdd(v67 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v67 + 16LL))(v67);
    }
  }
  v68 = (volatile signed __int32 *)v91[1];
  if ( v68 )
  {
    if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 8LL))(v68);
      if ( _InterlockedExchangeAdd(v68 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v68 + 16LL))(v68);
    }
  }
  v69 = (volatile signed __int32 *)a5[1];
  if ( v69 )
  {
    if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
      if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 16LL))(v69);
    }
  }
  v70 = (volatile signed __int32 *)a6[1];
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 16LL))(v70);
    }
  }
  return 0LL;
}
