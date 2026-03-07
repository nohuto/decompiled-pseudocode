__int64 __fastcall sub_1400F3520(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  char v9; // si
  __int64 *v10; // r14
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  const wchar_t *v24; // rsi
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  volatile signed __int32 *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  const wchar_t *v37; // rsi
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
  __int64 v48; // rsi
  const wchar_t *v49; // rax
  const wchar_t *v50; // rcx
  volatile signed __int32 *v51; // rdi
  volatile signed __int32 *v52; // rdi
  volatile signed __int32 *v53; // rdi
  volatile signed __int32 *v54; // rdi
  volatile signed __int32 *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  volatile signed __int32 *v59; // rdi
  volatile signed __int32 *v60; // rdi
  volatile signed __int32 *v61; // rdi
  volatile signed __int32 *v62; // rdi
  unsigned int v63; // [rsp+58h] [rbp-61h] BYREF
  volatile signed __int32 *v64; // [rsp+60h] [rbp-59h]
  __int64 v65[2]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v66[8]; // [rsp+78h] [rbp-41h] BYREF
  volatile signed __int32 *v67; // [rsp+80h] [rbp-39h]
  _BYTE v68[8]; // [rsp+88h] [rbp-31h] BYREF
  volatile signed __int32 *v69; // [rsp+90h] [rbp-29h]
  _BYTE v70[8]; // [rsp+98h] [rbp-21h] BYREF
  volatile signed __int32 *v71; // [rsp+A0h] [rbp-19h]
  _BYTE v72[8]; // [rsp+A8h] [rbp-11h] BYREF
  volatile signed __int32 *v73; // [rsp+B0h] [rbp-9h]
  _BYTE v74[8]; // [rsp+B8h] [rbp-1h] BYREF
  volatile signed __int32 *v75; // [rsp+C0h] [rbp+7h]
  _BYTE v76[8]; // [rsp+C8h] [rbp+Fh] BYREF
  volatile signed __int32 *v77; // [rsp+D0h] [rbp+17h]
  _BYTE v78[8]; // [rsp+D8h] [rbp+1Fh] BYREF
  volatile signed __int32 *v79; // [rsp+E0h] [rbp+27h]

  v63 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLink::Bind", (__int64)a1);
      if ( v12 )
        v10 = v12;
    }
  }
  v65[1] = a2[1];
  v65[0] = *a2;
  a2[1] = 0LL;
  *a2 = 0LL;
  v63 = sub_14007F378(a1, v65);
  if ( v63 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v68)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v66)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xAu,
        (__int64)&unk_1400D4DD8,
        v13,
        v14,
        L"__super::Bind(move(hardwareConfiguration))");
      v9 = 3;
    }
    if ( (v9 & 2) != 0 )
    {
      v17 = v67;
      v9 &= ~2u;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v9 & 1) != 0 )
    {
      v18 = v69;
      if ( v69 )
      {
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000946C((int)a1, (__int64)L"__super::Bind(move(hardwareConfiguration))", 62, 49, v63);
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
    }
    v19 = (volatile signed __int32 *)a2[1];
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    v20 = (volatile signed __int32 *)a3[1];
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    v21 = (volatile signed __int32 *)a4[1];
    if ( v21 )
    {
      if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    v22 = (volatile signed __int32 *)a5[1];
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return v63;
  }
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v70)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(a1[7] + 24LL))(
                                             a1 + 7,
                                             &v63)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xBu, (__int64)&unk_1400D4DD8, v24, v25, L"phy");
      v9 = 12;
    }
    if ( (v9 & 8) != 0 )
    {
      v28 = v64;
      v9 &= ~8u;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v9 & 4) != 0 )
    {
      v29 = v71;
      if ( v71 )
      {
        if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000DA44((int)a1, (__int64)L"phy", 64, 49);
LABEL_60:
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
    }
    v30 = (volatile signed __int32 *)a2[1];
    if ( v30 )
    {
      if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
      }
    }
    v31 = (volatile signed __int32 *)a3[1];
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
      }
    }
    v32 = (volatile signed __int32 *)a4[1];
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
      }
    }
    v33 = (volatile signed __int32 *)a5[1];
LABEL_125:
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 16LL))(v33);
      }
    }
    return 3221225485LL;
  }
  v34 = a1[60];
  a1[60] = a3[1];
  v35 = *a3;
  a3[1] = v34;
  v36 = a1[59];
  a1[59] = v35;
  *a3 = v36;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v37 = (const wchar_t *)&unk_1400D44E0;
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v74)
                              + 16LL);
      if ( v39 )
        v38 = v39;
      v40 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v72)
                              + 16LL);
      if ( v40 )
        v37 = v40;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xCu, (__int64)&unk_1400D4DD8, v37, v38, L"mmioAccessor");
      v9 = 48;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v41 = v73;
      v9 &= ~0x20u;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    if ( (v9 & 0x10) != 0 )
    {
      v42 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 67, 49);
    goto LABEL_60;
  }
  v43 = a1[62];
  a1[62] = a4[1];
  v44 = *a4;
  a4[1] = v43;
  v45 = a1[61];
  a1[61] = v44;
  *a4 = v45;
  if ( !*a5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v46 = (const wchar_t *)&unk_1400D44E0;
      v47 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v76)
                              + 16LL);
      if ( v47 )
        v46 = v47;
      v48 = *(_QWORD *)(a1[22] + 16LL);
      v49 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v78)
                              + 16LL);
      v50 = (const wchar_t *)&unk_1400D44E0;
      if ( v49 )
        v50 = v49;
      sub_1400A3320(v48, 2u, 0xAu, 0xDu, (__int64)&unk_1400D4DD8, v46, v50, L"interruptsFactory");
      v9 = -64;
    }
    if ( v9 < 0 )
    {
      v51 = v77;
      v9 &= ~0x80u;
      if ( v77 )
      {
        if ( _InterlockedExchangeAdd(v77 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
          if ( _InterlockedExchangeAdd(v51 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 16LL))(v51);
        }
      }
    }
    if ( (v9 & 0x40) != 0 )
    {
      v52 = v79;
      if ( v79 )
      {
        if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
          if ( _InterlockedExchangeAdd(v52 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
        }
      }
    }
    sub_14000B36C((int)a1, (__int64)L"interruptsFactory", 70, 49);
    if ( v10 )
    {
      sub_14000BFA4(v10);
      ExFreePool(v10);
    }
    v53 = (volatile signed __int32 *)a2[1];
    if ( v53 )
    {
      if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
        if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 16LL))(v53);
      }
    }
    v54 = (volatile signed __int32 *)a3[1];
    if ( v54 )
    {
      if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 8LL))(v54);
        if ( _InterlockedExchangeAdd(v54 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v54 + 16LL))(v54);
      }
    }
    v55 = (volatile signed __int32 *)a4[1];
    if ( v55 )
    {
      if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 16LL))(v55);
      }
    }
    v33 = (volatile signed __int32 *)a5[1];
    goto LABEL_125;
  }
  v56 = a1[56];
  a1[56] = a5[1];
  v57 = *a5;
  a5[1] = v56;
  v58 = a1[55];
  a1[55] = v57;
  *a5 = v58;
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
  v61 = (volatile signed __int32 *)a4[1];
  if ( v61 )
  {
    if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 8LL))(v61);
      if ( _InterlockedExchangeAdd(v61 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 16LL))(v61);
    }
  }
  v62 = (volatile signed __int32 *)a5[1];
  if ( v62 )
  {
    if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 8LL))(v62);
      if ( _InterlockedExchangeAdd(v62 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v62 + 16LL))(v62);
    }
  }
  return 0LL;
}
