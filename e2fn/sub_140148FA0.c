__int64 __fastcall sub_140148FA0(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // ebx
  __int64 *v15; // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  const wchar_t *v20; // rsi
  const wchar_t *v21; // rdi
  const wchar_t *v22; // rax
  __int64 v23; // rax
  const char *v24; // rdx
  const wchar_t *v25; // rax
  volatile signed __int32 *v26; // rbx
  volatile signed __int32 *v27; // rbx
  void (__fastcall *v29)(__int64, __int64); // [rsp+58h] [rbp-59h] BYREF
  int v30; // [rsp+60h] [rbp-51h]
  _DWORD v31[2]; // [rsp+68h] [rbp-49h] BYREF
  const wchar_t *v32; // [rsp+70h] [rbp-41h]
  int v33; // [rsp+78h] [rbp-39h]
  int v34; // [rsp+7Ch] [rbp-35h]
  __int64 v35; // [rsp+80h] [rbp-31h] BYREF
  volatile signed __int32 *v36; // [rsp+88h] [rbp-29h]
  _BYTE v37[8]; // [rsp+90h] [rbp-21h] BYREF
  volatile signed __int32 *v38; // [rsp+98h] [rbp-19h]
  _BYTE v39[8]; // [rsp+A0h] [rbp-11h] BYREF
  volatile signed __int32 *v40; // [rsp+A8h] [rbp-9h]
  _BYTE v41[8]; // [rsp+B0h] [rbp-1h] BYREF
  volatile signed __int32 *v42; // [rsp+B8h] [rbp+7h]
  _BYTE v43[8]; // [rsp+C0h] [rbp+Fh] BYREF
  volatile signed __int32 *v44; // [rsp+C8h] [rbp+17h]
  _QWORD v45[3]; // [rsp+D0h] [rbp+1Fh] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::InitializeChecksumOffload", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v30 = 0;
  v29 = sub_1400994C0;
  v6 = sub_14006D650(&v35, (_QWORD *)a1, (__int64)&v29);
  sub_1400A3C70((__int64 *)(a1 + 680), v6);
  v7 = v36;
  if ( v36 )
  {
    if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( *(_QWORD *)(a1 + 680) )
  {
    v15 = *(__int64 **)(a1 + 664);
    v16 = *v15;
    v17 = sub_1400A27D4(v45, (__int64 *)(a1 + 680));
    (*(void (__fastcall **)(__int64 *, _QWORD *))(v16 + 40))(v15, v17);
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 664) + 32LL))(*(_QWORD *)(a1 + 664));
    v19 = *(_QWORD *)(a1 + 360);
    *(_WORD *)(a1 + 696) = *(_WORD *)v18;
    LOBYTE(v18) = *(_BYTE *)(v18 + 2);
    v31[1] = 0;
    *(_BYTE *)(a1 + 698) = v18;
    v32 = L"ms_packet_checksum";
    v31[0] = 24;
    v33 = 1;
    v34 = 1;
    ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))qword_1400DF910)(qword_1400DF700, v19, v31, a1 + 704);
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v20 = (const wchar_t *)&unk_1400D44E0;
      v21 = (const wchar_t *)&unk_1400D44E0;
      v22 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v43)
                              + 16LL);
      if ( v22 )
        v21 = v22;
      v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v41);
      v24 = "disabled";
      v25 = *(const wchar_t **)(*(_QWORD *)v23 + 16LL);
      if ( v25 )
        v20 = v25;
      if ( *(_BYTE *)(a1 + 736) )
        v24 = "enabled";
      sub_1400AA8D8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        4u,
        0xDu,
        0x14u,
        (__int64)&unk_1400DA268,
        v20,
        v21,
        (const wchar_t *)qword_14014EC70,
        v24);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v26 = v42;
      v1 &= ~8u;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v27 = v44;
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 16LL))(v27);
        }
      }
    }
    v14 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v39)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v37)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xDu,
        0x13u,
        (__int64)&unk_1400DA268,
        v8,
        v9,
        L"m_checksumOffloadNotificationChangedCallback");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v12 = v38;
      v1 &= ~2u;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v13 = v40;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14008F628(a1, (__int64)L"m_checksumOffloadNotificationChangedCallback", 657, 110);
    v14 = -1073741801;
  }
  if ( v3 )
  {
    sub_140091BA8(v3);
    ExFreePool(v3);
  }
  return v14;
}
