__int64 __fastcall sub_140116258(_QWORD *a1, __int64 a2)
{
  char v2; // si
  __int64 *v4; // r12
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  __int64 v7; // r8
  unsigned int v8; // r15d
  const wchar_t *v9; // r13
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  const wchar_t *v15; // r13
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rdi
  volatile signed __int32 *v20; // rdi
  _DWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall *v23)(__int64); // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  __int128 v27; // [rsp+70h] [rbp-90h]
  void *v28; // [rsp+80h] [rbp-80h]
  _BYTE v29[8]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-70h]
  _BYTE v31[8]; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+A0h] [rbp-60h]
  _BYTE v33[8]; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+B0h] [rbp-50h]
  _BYTE v35[8]; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+C0h] [rbp-40h]
  _BYTE v37[64]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v38[192]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v39; // [rsp+1E8h] [rbp+E8h] BYREF
  int v40; // [rsp+1F0h] [rbp+F0h]

  v39 = a2;
  v2 = 0;
  v4 = 0LL;
  v40 = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::CreateDevice", (__int64)a1);
      if ( v6 )
        v4 = v6;
    }
  }
  v8 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400DF890)(qword_1400DF700, v39);
  if ( v8 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = (const wchar_t *)&unk_1400D44E0;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v31)
                              + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v29)
                              + 16LL);
      if ( v12 )
        v9 = v12;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        8u,
        0xBu,
        (__int64)&unk_1400D91A8,
        v9,
        v10,
        L"NetDeviceInitConfig(deviceInit)");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v13 = v30;
      v2 &= ~2u;
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
    if ( (v2 & 1) != 0 )
    {
      v14 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_140008B58((int)a1, (__int64)L"NetDeviceInitConfig(deviceInit)", 118, 74, v8);
  }
  else
  {
    LOBYTE(v7) = 1;
    (*(void (__fastcall **)(__int64, __int64, __int64))(qword_1400DF678 + 456))(qword_1400DF6A8, v39, v7);
    sub_14011BDEC(a1, v39, v38);
    sub_14011BF24(a1, v39, v37);
    v22[1] = 0;
    v24 = 0LL;
    v27 = 0LL;
    if ( byte_1400DF688 )
    {
      if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
        v22[0] = -1;
      else
        v22[0] = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
    }
    else
    {
      v22[0] = 56;
    }
    v28 = off_1400DF018;
    v25 = 1;
    v23 = sub_140074720;
    v26 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _DWORD *, _QWORD *))(qword_1400DF678 + 600))(
           qword_1400DF6A8,
           &v39,
           v22,
           a1 + 48);
    if ( v8 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v35)
                                + 16LL);
        if ( v17 )
          v16 = v17;
        v2 = 12;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v33)
                                + 16LL);
        if ( v18 )
          v15 = v18;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          2u,
          8u,
          0xCu,
          (__int64)&unk_1400D91A8,
          v15,
          v16,
          L"WdfDeviceCreate(&deviceInit, &deviceAttributes, &m_device)");
      }
      if ( (v2 & 8) != 0 )
      {
        v19 = v34;
        v2 &= ~8u;
        if ( v34 )
        {
          if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v20 = v36;
        if ( v36 )
        {
          if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      sub_140028E54((int)a1, (__int64)L"WdfDeviceCreate(&deviceInit, &deviceAttributes, &m_device)", 135, 74, v8);
    }
    else
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, void *))(qword_1400DF678 + 1616))(
                   qword_1400DF6A8,
                   a1[48],
                   off_1400DF018) = a1;
      sub_14011C05C(a1);
      v8 = 0;
    }
  }
  if ( v4 )
  {
    sub_14007404C(v4);
    ExFreePool(v4);
  }
  return v8;
}
