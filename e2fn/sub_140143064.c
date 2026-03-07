__int64 __fastcall sub_140143064(_QWORD *a1, __int64 a2, __int64 *a3)
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
  const wchar_t *v16; // r14
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  volatile signed __int32 *v22; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rdi
  _BYTE v28[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v29; // [rsp+48h] [rbp-60h]
  _BYTE v30[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-50h]
  _BYTE v32[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v33; // [rsp+68h] [rbp-40h]
  _BYTE v34[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v35; // [rsp+78h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterReceiveScaling::Bind", (__int64)a1);
      if ( v9 )
        v5 = v9;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v30)
                              + 16LL);
      if ( v12 )
        v11 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v28)
                              + 16LL);
      if ( v13 )
        v10 = v13;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xAu, (__int64)&unk_1400D9F78, v10, v11, L"netAdapter");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v14 = v29;
      v3 &= ~2u;
      if ( v29 )
      {
        if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v15 = v31;
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"netAdapter", 61, 107);
LABEL_42:
    if ( v5 )
    {
      sub_140091BA8(v5);
      ExFreePool(v5);
    }
    v22 = (volatile signed __int32 *)a3[1];
    if ( v22 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 3221225485LL;
  }
  a1[45] = a2;
  if ( !*a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v34)
                              + 16LL);
      if ( v18 )
        v17 = v18;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v32)
                              + 16LL);
      if ( v19 )
        v16 = v19;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xBu,
        0xBu,
        (__int64)&unk_1400D9F78,
        v16,
        v17,
        L"hardwareReceiveScaling");
      v3 = 12;
    }
    if ( (v3 & 8) != 0 )
    {
      v20 = v33;
      v3 &= ~8u;
      if ( v33 )
      {
        if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v3 & 4) != 0 )
    {
      v21 = v35;
      if ( v35 )
      {
        if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_14000B5F4((int)a1, (__int64)L"hardwareReceiveScaling", 64, 107);
    goto LABEL_42;
  }
  v24 = a1[47];
  a1[47] = a3[1];
  v25 = *a3;
  a3[1] = v24;
  v26 = a1[46];
  a1[46] = v25;
  *a3 = v26;
  if ( v5 )
  {
    sub_140091BA8(v5);
    ExFreePool(v5);
  }
  v27 = (volatile signed __int32 *)a3[1];
  if ( v27 )
  {
    if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
    }
  }
  return 0LL;
}
