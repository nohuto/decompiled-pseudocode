__int64 __fastcall sub_140146C88(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rdi
  const wchar_t *v8; // r15
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rdi
  volatile signed __int32 *v13; // rbx
  __int64 *v14; // rax
  volatile signed __int32 *v15; // rdi
  const wchar_t *v16; // r15
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rbx
  __int128 v23; // [rsp+48h] [rbp-49h] BYREF
  __int128 v24; // [rsp+58h] [rbp-39h] BYREF
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  volatile signed __int32 *v26; // [rsp+70h] [rbp-21h]
  char v27[8]; // [rsp+78h] [rbp-19h] BYREF
  volatile signed __int32 *v28; // [rsp+80h] [rbp-11h]
  char v29[8]; // [rsp+88h] [rbp-9h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+7h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp+Fh]
  char v33[8]; // [rsp+A8h] [rbp+17h] BYREF
  volatile signed __int32 *v34; // [rsp+B0h] [rbp+1Fh]
  char v35[8]; // [rsp+B8h] [rbp+27h] BYREF
  volatile signed __int32 *v36; // [rsp+C0h] [rbp+2Fh]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140094FB8(
             Pool2,
             (__int64)L"net_adapter::NetAdapterTxQueue::InitializeCompletePacketsCallback",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  DWORD2(v23) = 0;
  *(_QWORD *)&v23 = sub_140095AB0;
  v24 = v23;
  v6 = sub_14000DB1C(&v25, a1, (__int64)&v24);
  sub_1400A3C70(a1 + 69, v6);
  v7 = v26;
  if ( v26 )
  {
    if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( !a1[69] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v29)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v27)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16),
        2u,
        0xCu,
        0x21u,
        (__int64)&unk_1400DA108,
        v8,
        v9,
        L"m_completeTransmittedPacketsCallback");
      LOBYTE(v1) = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v28;
      LOBYTE(v1) = v1 & 0xFD;
      if ( v28 )
      {
        if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v30;
      if ( v30 )
      {
        if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_140094EE0((__int64)a1, (__int64)L"m_completeTransmittedPacketsCallback", 866, 112);
LABEL_50:
    v1 = -1073741801;
    goto LABEL_52;
  }
  DWORD2(v23) = 0;
  *(_QWORD *)&v23 = sub_140095AA0;
  v14 = sub_14000DB1C(&v31, a1, (__int64)&v23);
  sub_1400A3C70(a1 + 71, v14);
  v15 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( !a1[71] )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v16 = (const wchar_t *)&unk_1400D44E0;
      v17 = (const wchar_t *)&unk_1400D44E0;
      v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 16))(a1 + 7, v35)
                              + 16LL);
      if ( v18 )
        v17 = v18;
      LOBYTE(v1) = 12;
      v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64 *, char *))(a1[7] + 24))(a1 + 7, v33)
                              + 16LL);
      if ( v19 )
        v16 = v19;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16),
        2u,
        0xCu,
        0x22u,
        (__int64)&unk_1400DA108,
        v16,
        v17,
        L"m_completePendingPacketsCallback");
    }
    if ( (v1 & 8) != 0 )
    {
      v20 = v34;
      LOBYTE(v1) = v1 & 0xF7;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v21 = v36;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
        }
      }
    }
    sub_140094E08((__int64)a1, (__int64)L"m_completePendingPacketsCallback", 869, 112);
    goto LABEL_50;
  }
  sub_1400A5B28(a1 + 73, a1 + 69);
LABEL_52:
  if ( v3 )
  {
    sub_1400953B8(v3);
    ExFreePool(v3);
  }
  return v1;
}
