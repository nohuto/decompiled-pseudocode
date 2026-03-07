__int64 __fastcall sub_140103FF8(_QWORD *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  char v4; // di
  __int64 *v6; // rsi
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r14
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // r14
  volatile signed __int32 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const wchar_t *v21; // r14
  const wchar_t *v22; // rdi
  const wchar_t *v23; // rax
  const wchar_t *v24; // rax
  volatile signed __int32 *v25; // r14
  volatile signed __int32 *v26; // rdi
  volatile signed __int32 *v27; // rdi
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  volatile signed __int32 *v34; // rdi
  volatile signed __int32 *v35; // rdi
  volatile signed __int32 *v36; // rdi
  _BYTE v37[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v38; // [rsp+48h] [rbp-60h]
  _BYTE v39[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v40; // [rsp+58h] [rbp-50h]
  _BYTE v41[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v42; // [rsp+68h] [rbp-40h]
  _BYTE v43[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v44; // [rsp+78h] [rbp-30h]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareMtu::Bind", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v39)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v37)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xAu,
        (__int64)&unk_1400D6D98,
        v12,
        v13,
        L"receiveControlRegister");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v16 = v38;
      v4 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"receiveControlRegister", 60, 51);
LABEL_42:
    if ( v6 )
    {
      sub_14000BFA4(v6);
      ExFreePool(v6);
    }
    v27 = *(volatile signed __int32 **)(a2 + 8);
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    v28 = (volatile signed __int32 *)a3[1];
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
      }
    }
    v29 = (volatile signed __int32 *)a4[1];
    if ( v29 && _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return 3221225485LL;
  }
  v18 = a1[49];
  a1[49] = a3[1];
  v19 = *a3;
  a3[1] = v18;
  v20 = a1[48];
  a1[48] = v19;
  *a3 = v20;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = (const wchar_t *)&unk_1400D44E0;
      v23 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v43)
                              + 16LL);
      if ( v23 )
        v22 = v23;
      v24 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v41)
                              + 16LL);
      if ( v24 )
        v21 = v24;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0xBu, (__int64)&unk_1400D6D98, v21, v22, L"mmioAccessor");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v25 = v42;
      v4 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v26 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    sub_14000BA2C((int)a1, (__int64)L"mmioAccessor", 63, 51);
    goto LABEL_42;
  }
  v31 = a1[51];
  a1[51] = a4[1];
  v32 = *a4;
  a4[1] = v31;
  v33 = a1[50];
  a1[50] = v32;
  *a4 = v33;
  if ( v6 )
  {
    sub_14000BFA4(v6);
    ExFreePool(v6);
  }
  v34 = *(volatile signed __int32 **)(a2 + 8);
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 16LL))(v34);
    }
  }
  v35 = (volatile signed __int32 *)a3[1];
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  v36 = (volatile signed __int32 *)a4[1];
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
      if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 16LL))(v36);
    }
  }
  return 0LL;
}
