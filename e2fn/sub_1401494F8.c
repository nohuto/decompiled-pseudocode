void __fastcall sub_1401494F8(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // r12
  char v7; // si
  __int64 *v8; // r14
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  const wchar_t *v11; // r12
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  const wchar_t *v17; // r12
  const wchar_t *v18; // rdi
  const wchar_t *v19; // rax
  __int64 v20; // rax
  const char *v21; // r8
  const char *v22; // rdx
  const wchar_t *v23; // rax
  const char *v24; // rcx
  volatile signed __int32 *v25; // rdi
  volatile signed __int32 *v26; // rdi
  _DWORD v27[2]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v28; // [rsp+70h] [rbp-21h]
  _BYTE v29[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp-11h]
  _BYTE v31[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v32; // [rsp+90h] [rbp-1h]
  _BYTE v33[8]; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v34; // [rsp+A0h] [rbp+Fh]
  _BYTE v35[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v36; // [rsp+B0h] [rbp+1Fh]

  v5 = a3;
  v7 = 0;
  v8 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterChecksumOffload::AdvertiseRxCapabilities", a1);
      if ( v10 )
        v8 = v10;
    }
  }
  if ( a4[43] || a4[44] || a4[45] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = (const wchar_t *)&unk_1400D44E0;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v35)
                              + 16LL);
      if ( v19 )
        v18 = v19;
      v20 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v33);
      v21 = "Unsupported";
      v22 = "Unsupported";
      v23 = *(const wchar_t **)(*(_QWORD *)v20 + 16LL);
      v24 = "Unsupported";
      if ( v23 )
        v17 = v23;
      if ( a4[45] )
        v24 = "Supported";
      if ( a4[44] )
        v22 = "Supported";
      if ( a4[43] )
        v21 = "Supported";
      sub_1400B5C48(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0xCu,
        (__int64)&unk_1400DA378,
        v17,
        v18,
        (const wchar_t *)qword_14014EC70,
        v21,
        v22,
        v24);
      v5 = a3;
      v7 = 3;
    }
    if ( (v7 & 2) != 0 )
    {
      v25 = v34;
      v7 &= ~2u;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
          if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
        }
      }
    }
    if ( (v7 & 1) != 0 )
    {
      v26 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    v27[1] = 0;
    v27[0] = 16;
    v28 = v5;
    ((void (__fastcall *)(__int64, __int64, _DWORD *))qword_1400DFA08)(qword_1400DF700, a2, v27);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v12 = (const wchar_t *)&unk_1400D44E0;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v31)
                              + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v29)
                              + 16LL);
      if ( v14 )
        v11 = v14;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xBu,
        0xDu,
        (__int64)&unk_1400DA378,
        v11,
        v12,
        (const wchar_t *)qword_14014EC70);
      v7 = 12;
    }
    if ( (v7 & 8) != 0 )
    {
      v15 = v30;
      v7 &= ~8u;
      if ( v30 )
      {
        if ( !_InterlockedDecrement(v30 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( !_InterlockedDecrement(v15 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v7 & 4) != 0 )
    {
      v16 = v32;
      if ( v32 )
      {
        if ( !_InterlockedDecrement(v32 + 2) )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( !_InterlockedDecrement(v16 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
  }
  if ( v8 )
  {
    sub_140075108(v8);
    ExFreePool(v8);
  }
}
