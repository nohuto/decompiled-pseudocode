__int64 __fastcall sub_1401283A0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  char v3; // di
  __int64 *v5; // rsi
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  const wchar_t *v10; // r14
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // r14
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const wchar_t *v19; // r14
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rax
  const wchar_t *v22; // rax
  volatile signed __int32 *v23; // r14
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  _BYTE v33[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v34; // [rsp+48h] [rbp-60h]
  _BYTE v35[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v36; // [rsp+58h] [rbp-50h]
  _BYTE v37[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v38; // [rsp+68h] [rbp-40h]
  _BYTE v39[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400736C0(Pool2, (__int64)L"framework::Link::Bind", (__int64)(a1 - 44));
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !*a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v35)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v33)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16LL), 2u, 8u, 0xAu, (__int64)&unk_1400D9550, v10, v11, L"hardwareLink");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v34;
      v3 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000BA2C((_DWORD)a1 - 352, (__int64)L"hardwareLink", 64, 96);
LABEL_42:
    if ( v5 )
    {
      sub_140073F78(v5);
      ExFreePool(v5);
    }
    v25 = (volatile signed __int32 *)a2[1];
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    v26 = (volatile signed __int32 *)a3[1];
    if ( v26 && _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
    }
    return 3221225485LL;
  }
  v16 = a1[3];
  a1[3] = a2[1];
  v17 = *a2;
  a2[1] = v16;
  v18 = a1[2];
  a1[2] = v17;
  *a2 = v18;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(
                                             a1 - 37,
                                             v39)
                              + 16LL);
      if ( v21 )
        v20 = v21;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(
                                             a1 - 37,
                                             v37)
                              + 16LL);
      if ( v22 )
        v19 = v22;
      sub_1400A3320(*(_QWORD *)(*(a1 - 22) + 16LL), 2u, 8u, 0xBu, (__int64)&unk_1400D9550, v19, v20, L"netAdapterLink");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v23 = v38;
      v3 &= ~8u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v24 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
        }
      }
    }
    sub_140022208((_DWORD)a1 - 352, (__int64)L"netAdapterLink", 67, 96);
    goto LABEL_42;
  }
  v28 = a1[5];
  a1[5] = a3[1];
  v29 = *a3;
  a3[1] = v28;
  v30 = a1[4];
  a1[4] = v29;
  *a3 = v30;
  if ( v5 )
  {
    sub_140073F78(v5);
    ExFreePool(v5);
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
  return 0LL;
}
