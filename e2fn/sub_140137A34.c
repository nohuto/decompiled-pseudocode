__int64 __fastcall sub_140137A34(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char v4; // r14
  __int64 *v6; // rsi
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  const wchar_t *v12; // r13
  const wchar_t *v13; // rdi
  const wchar_t *v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  const wchar_t *v18; // r13
  const wchar_t *v19; // rdi
  const wchar_t *v20; // rax
  const wchar_t *v21; // rax
  volatile signed __int32 *v22; // rdi
  volatile signed __int32 *v23; // rdi
  const wchar_t *v24; // r13
  const wchar_t *v25; // rdi
  const wchar_t *v26; // rax
  const wchar_t *v27; // rax
  volatile signed __int32 *v28; // rdi
  volatile signed __int32 *v29; // rdi
  volatile signed __int32 *v30; // rdi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  volatile signed __int32 *v35; // rdi
  _BYTE v36[8]; // [rsp+48h] [rbp-29h] BYREF
  volatile signed __int32 *v37; // [rsp+50h] [rbp-21h]
  _BYTE v38[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v39; // [rsp+60h] [rbp-11h]
  _BYTE v40[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v41; // [rsp+70h] [rbp-1h]
  _BYTE v42[8]; // [rsp+78h] [rbp+7h] BYREF
  volatile signed __int32 *v43; // [rsp+80h] [rbp+Fh]
  _BYTE v44[8]; // [rsp+88h] [rbp+17h] BYREF
  volatile signed __int32 *v45; // [rsp+90h] [rbp+1Fh]
  _BYTE v46[8]; // [rsp+98h] [rbp+27h] BYREF
  volatile signed __int32 *v47; // [rsp+A0h] [rbp+2Fh]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterNsOffload::BindAndInitialize", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  if ( !a2 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v38)
                              + 16LL);
      if ( v14 )
        v13 = v14;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v36)
                              + 16LL);
      if ( v15 )
        v12 = v15;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xAu, (__int64)&unk_1400D9D48, v12, v13, L"netAdapter");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v16 = v37;
      v4 &= ~2u;
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = v39;
      if ( v39 )
      {
        if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    sub_14000B87C((int)a1, (__int64)L"netAdapter", 60, 105);
LABEL_60:
    if ( v6 )
    {
      sub_140075108(v6);
      ExFreePool(v6);
    }
    v30 = (volatile signed __int32 *)a4[1];
    if ( v30 && _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
    }
    return 3221225485LL;
  }
  a1[46] = a2;
  if ( !a3 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = (const wchar_t *)&unk_1400D44E0;
      v20 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v42)
                              + 16LL);
      if ( v20 )
        v19 = v20;
      v21 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v40)
                              + 16LL);
      if ( v21 )
        v18 = v21;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xBu, (__int64)&unk_1400D9D48, v18, v19, L"device");
      v4 = 12;
    }
    if ( (v4 & 8) != 0 )
    {
      v22 = v41;
      v4 &= ~8u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 16LL))(v22);
        }
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v23 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 63, 105);
    goto LABEL_60;
  }
  a1[47] = a3;
  if ( !*a4 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v24 = (const wchar_t *)&unk_1400D44E0;
      v25 = (const wchar_t *)&unk_1400D44E0;
      v26 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v46)
                              + 16LL);
      if ( v26 )
        v25 = v26;
      v27 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v44)
                              + 16LL);
      if ( v27 )
        v24 = v27;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 0xBu, 0xCu, (__int64)&unk_1400D9D48, v24, v25, L"hardwareNsOffload");
      v4 = 48;
    }
    if ( (v4 & 0x20) != 0 )
    {
      v28 = v45;
      v4 &= ~0x20u;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      v29 = v47;
      if ( v47 )
      {
        if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000B36C((int)a1, (__int64)L"hardwareNsOffload", 66, 105);
    goto LABEL_60;
  }
  v32 = a1[49];
  a1[49] = a4[1];
  v33 = *a4;
  a4[1] = v32;
  v34 = a1[48];
  a1[48] = v33;
  *a4 = v34;
  if ( v6 )
  {
    sub_140075108(v6);
    ExFreePool(v6);
  }
  v35 = (volatile signed __int32 *)a4[1];
  if ( v35 )
  {
    if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
      if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  return 0LL;
}
