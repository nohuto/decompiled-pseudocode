__int64 __fastcall sub_1400FC550(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 *v5; // rsi
  char v8; // di
  __int64 *v9; // r14
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  const wchar_t *v14; // r8
  const wchar_t *v15; // rdx
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rsi
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  __int64 v27; // rax
  const wchar_t *v28; // rdx
  const wchar_t *v29; // rax
  volatile signed __int32 *v30; // rsi
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  const wchar_t *v37; // rax
  const wchar_t *v38; // rcx
  const wchar_t *v39; // rdx
  volatile signed __int32 *v40; // rsi
  volatile signed __int32 *v41; // rdi
  volatile signed __int32 *v42; // rdi
  volatile signed __int32 *v43; // rdi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  volatile signed __int32 *v48; // rdi
  volatile signed __int32 *v49; // rdi
  volatile signed __int32 *v50; // rdi
  _BYTE v51[8]; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v52; // [rsp+48h] [rbp-31h]
  _BYTE v53[8]; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v54; // [rsp+58h] [rbp-21h]
  _BYTE v55[8]; // [rsp+60h] [rbp-19h] BYREF
  volatile signed __int32 *v56; // [rsp+68h] [rbp-11h]
  _BYTE v57[8]; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v58; // [rsp+78h] [rbp-1h]
  _BYTE v59[8]; // [rsp+80h] [rbp+7h] BYREF
  volatile signed __int32 *v60; // [rsp+88h] [rbp+Fh]
  _BYTE v61[8]; // [rsp+90h] [rbp+17h] BYREF
  volatile signed __int32 *v62; // [rsp+98h] [rbp+1Fh]

  v5 = (__int64 *)a4;
  v8 = 0;
  v9 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareArpOffload::Bind", (__int64)a1);
      if ( v11 )
        v9 = v11;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v53);
      v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v51);
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = (const wchar_t *)&unk_1400D44E0;
      v16 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
      if ( v16 )
        v15 = v16;
      if ( *(_QWORD *)(v12 + 16) )
        v14 = *(const wchar_t **)(v12 + 16);
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xAu, (__int64)&unk_1400D6318, v15, v14, L"mmioAccessor");
      v8 = 3;
    }
    if ( (v8 & 2) != 0 )
    {
      v17 = v52;
      v8 &= ~2u;
      if ( v52 )
      {
        if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      v5 = (__int64 *)a4;
    }
    if ( (v8 & 1) != 0 )
    {
      v18 = v54;
      if ( v54 )
      {
        if ( _InterlockedExchangeAdd(v54 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 68, 47);
LABEL_25:
    if ( v9 )
    {
      sub_14000BFA4(v9);
      ExFreePool(v9);
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
    v21 = (volatile signed __int32 *)v5[1];
LABEL_83:
    if ( v21 && _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return 3221225485LL;
  }
  v22 = a1[47];
  a1[47] = a2[1];
  v23 = *a2;
  a2[1] = v22;
  v24 = a1[46];
  a1[46] = v23;
  *a2 = v24;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v55)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v57);
      v28 = (const wchar_t *)&unk_1400D44E0;
      v29 = *(const wchar_t **)(*(_QWORD *)v27 + 16LL);
      if ( v29 )
        v28 = v29;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xBu, (__int64)&unk_1400D6318, v25, v28, L"firmware");
      v8 = 12;
    }
    if ( (v8 & 8) != 0 )
    {
      v30 = v56;
      v8 &= ~8u;
      if ( v56 )
      {
        if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
      v5 = (__int64 *)a4;
    }
    if ( (v8 & 4) != 0 )
    {
      v31 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    sub_140022128((int)a1, (__int64)L"firmware", 71, 47);
    goto LABEL_25;
  }
  v32 = a1[49];
  a1[49] = a3[1];
  v33 = *a3;
  a3[1] = v32;
  v34 = a1[48];
  a1[48] = v33;
  *a3 = v34;
  if ( !*v5 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v35 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v59);
      v36 = *(_QWORD *)(a1[22] + 16LL);
      v37 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v61)
                              + 16LL);
      v38 = (const wchar_t *)&unk_1400D44E0;
      v39 = (const wchar_t *)&unk_1400D44E0;
      if ( v37 )
        v39 = v37;
      if ( *(_QWORD *)(v35 + 16) )
        v38 = *(const wchar_t **)(v35 + 16);
      sub_1400A3320(v36, 2u, 0xAu, 0xCu, (__int64)&unk_1400D6318, v38, v39, L"receiveControlRegister");
      v8 = 48;
    }
    if ( (v8 & 0x20) != 0 )
    {
      v40 = v60;
      v8 &= ~0x20u;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 16LL))(v40);
        }
      }
    }
    if ( (v8 & 0x10) != 0 )
    {
      v41 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
          if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 16LL))(v41);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"receiveControlRegister", 74, 47);
    if ( v9 )
    {
      sub_14000BFA4(v9);
      ExFreePool(v9);
    }
    v42 = (volatile signed __int32 *)a2[1];
    if ( v42 )
    {
      if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 16LL))(v42);
      }
    }
    v43 = (volatile signed __int32 *)a3[1];
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(v43);
      }
    }
    v21 = *(volatile signed __int32 **)(a4 + 8);
    goto LABEL_83;
  }
  v45 = a1[51];
  a1[51] = v5[1];
  v46 = *v5;
  v5[1] = v45;
  v47 = a1[50];
  a1[50] = v46;
  *v5 = v47;
  if ( v9 )
  {
    sub_14000BFA4(v9);
    ExFreePool(v9);
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
  v50 = (volatile signed __int32 *)v5[1];
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 16LL))(v50);
    }
  }
  return 0LL;
}
