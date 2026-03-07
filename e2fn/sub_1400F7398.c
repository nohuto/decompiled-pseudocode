__int64 __fastcall sub_1400F7398(_QWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4, __int64 *a5)
{
  char v8; // si
  __int64 *v9; // r15
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // rsi
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rsi
  const wchar_t *v26; // rdi
  const wchar_t *v27; // rax
  const wchar_t *v28; // rax
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  const wchar_t *v34; // rsi
  const wchar_t *v35; // rdi
  const wchar_t *v36; // rax
  const wchar_t *v37; // rax
  volatile signed __int32 *v38; // rdi
  volatile signed __int32 *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  const wchar_t *v43; // rdi
  const wchar_t *v44; // rax
  __int64 v45; // rsi
  const wchar_t *v46; // rax
  const wchar_t *v47; // rcx
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  volatile signed __int32 *v51; // rdi
  volatile signed __int32 *v52; // rdi
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  volatile signed __int32 *v57; // rdi
  volatile signed __int32 *v58; // rdi
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rdi
  _BYTE v61[8]; // [rsp+40h] [rbp-61h] BYREF
  volatile signed __int32 *v62; // [rsp+48h] [rbp-59h]
  _BYTE v63[8]; // [rsp+50h] [rbp-51h] BYREF
  volatile signed __int32 *v64; // [rsp+58h] [rbp-49h]
  _BYTE v65[8]; // [rsp+60h] [rbp-41h] BYREF
  volatile signed __int32 *v66; // [rsp+68h] [rbp-39h]
  _BYTE v67[8]; // [rsp+70h] [rbp-31h] BYREF
  volatile signed __int32 *v68; // [rsp+78h] [rbp-29h]
  _BYTE v69[8]; // [rsp+80h] [rbp-21h] BYREF
  volatile signed __int32 *v70; // [rsp+88h] [rbp-19h]
  _BYTE v71[8]; // [rsp+90h] [rbp-11h] BYREF
  volatile signed __int32 *v72; // [rsp+98h] [rbp-9h]
  _BYTE v73[8]; // [rsp+A0h] [rbp-1h] BYREF
  volatile signed __int32 *v74; // [rsp+A8h] [rbp+7h]
  _BYTE v75[8]; // [rsp+B0h] [rbp+Fh] BYREF
  volatile signed __int32 *v76; // [rsp+B8h] [rbp+17h]
  _QWORD *v77; // [rsp+118h] [rbp+77h]

  v77 = a4;
  v8 = 0;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(
              Pool2,
              (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::Bind",
              (__int64)a1);
      if ( v11 )
        v9 = v11;
    }
    a4 = v77;
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v63)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v61)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xAu,
        (__int64)&unk_1400D5648,
        v12,
        v13,
        L"hardwareConfiguration");
      v8 = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v16 = v62;
      v8 &= ~2u;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v8 & 1) != 0 )
    {
      v17 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B51C((int)a1, (__int64)L"hardwareConfiguration", 64, 152);
LABEL_25:
    if ( v9 )
    {
      sub_14000BFA4(v9);
      ExFreePool(v9);
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
    v20 = (volatile signed __int32 *)v77[1];
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
LABEL_108:
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 3221225485LL;
  }
  v22 = a1[46];
  a1[46] = a2[1];
  v23 = *a2;
  a2[1] = v22;
  v24 = a1[45];
  a1[45] = v23;
  *a2 = v24;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = (const wchar_t *)&unk_1400D44E0;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v67)
                              + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v65)
                              + 16LL);
      if ( v28 )
        v25 = v28;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xBu, (__int64)&unk_1400D5648, v25, v26, L"hardwareLink");
      v8 = 12;
    }
    if ( (v8 & 8) != 0 )
    {
      v29 = v66;
      v8 &= ~8u;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v8 & 4) != 0 )
    {
      v30 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"hardwareLink", 67, 152);
    goto LABEL_25;
  }
  v31 = a1[48];
  a1[48] = a3[1];
  v32 = *a3;
  a3[1] = v31;
  v33 = a1[47];
  a1[47] = v32;
  *a3 = v33;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v34 = (const wchar_t *)&unk_1400D44E0;
      v35 = (const wchar_t *)&unk_1400D44E0;
      v36 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v71)
                              + 16LL);
      if ( v36 )
        v35 = v36;
      v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v69)
                              + 16LL);
      if ( v37 )
        v34 = v37;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&unk_1400D5648,
        v34,
        v35,
        L"hardwareLowPowerIdle");
      v8 = 48;
    }
    if ( (v8 & 0x20) != 0 )
    {
      v38 = v70;
      v8 &= ~0x20u;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        }
      }
    }
    if ( (v8 & 0x10) != 0 )
    {
      v39 = v72;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 16LL))(v39);
        }
      }
    }
    sub_14001453C((int)a1, (__int64)L"hardwareLowPowerIdle", 70, 152);
    goto LABEL_25;
  }
  v40 = a1[50];
  a1[50] = a4[1];
  v41 = *a4;
  a4[1] = v40;
  v42 = a1[49];
  a1[49] = v41;
  *a4 = v42;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v43 = (const wchar_t *)&unk_1400D44E0;
      v44 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v73)
                              + 16LL);
      if ( v44 )
        v43 = v44;
      v45 = *(_QWORD *)(a1[22] + 16LL);
      v46 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v75)
                              + 16LL);
      v47 = (const wchar_t *)&unk_1400D44E0;
      if ( v46 )
        v47 = v46;
      sub_1400A3320(v45, 2u, 0xEu, 0xDu, (__int64)&unk_1400D5648, v43, v47, L"mmioAccessor");
      v8 = -64;
    }
    if ( v8 < 0 )
    {
      v48 = v74;
      v8 &= ~0x80u;
      if ( v74 )
      {
        if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
        }
      }
    }
    if ( (v8 & 0x40) != 0 )
    {
      v49 = v76;
      if ( v76 )
      {
        if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
          if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 73, 152);
    if ( v9 )
    {
      sub_14000BFA4(v9);
      ExFreePool(v9);
    }
    v50 = (volatile signed __int32 *)a2[1];
    if ( v50 )
    {
      if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
        if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
      }
    }
    v51 = (volatile signed __int32 *)a3[1];
    if ( v51 )
    {
      if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
      }
    }
    v52 = (volatile signed __int32 *)v77[1];
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
        if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
      }
    }
    v21 = (volatile signed __int32 *)a5[1];
    goto LABEL_108;
  }
  v54 = a1[52];
  a1[52] = a5[1];
  v55 = *a5;
  a5[1] = v54;
  v56 = a1[51];
  a1[51] = v55;
  *a5 = v56;
  if ( v9 )
  {
    sub_14000BFA4(v9);
    ExFreePool(v9);
  }
  v57 = (volatile signed __int32 *)a2[1];
  if ( v57 )
  {
    if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
      if ( _InterlockedExchangeAdd(v57 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 16LL))(v57);
    }
  }
  v58 = (volatile signed __int32 *)a3[1];
  if ( v58 )
  {
    if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
      if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 16LL))(v58);
    }
  }
  v59 = (volatile signed __int32 *)v77[1];
  if ( v59 )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
      if ( _InterlockedExchangeAdd(v59 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 16LL))(v59);
    }
  }
  v60 = (volatile signed __int32 *)a5[1];
  if ( v60 )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
      if ( _InterlockedExchangeAdd(v60 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 16LL))(v60);
    }
  }
  return 0LL;
}
