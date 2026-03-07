__int64 __fastcall sub_1400A85F0(__int64 a1)
{
  char v1; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // ebp
  const wchar_t *v7; // r12
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  const wchar_t *v13; // r12
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  _BYTE v20[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-60h]
  _BYTE v22[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-50h]
  _BYTE v24[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp-40h]
  _BYTE v26[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v27; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"e1000_hardware::E1000HardwareReceiveGate::EnableTraffic", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 8LL))(*(_QWORD *)(a1 + 464));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v22)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v20)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0xCu,
        (__int64)&unk_1400D5D48,
        v7,
        v8,
        L"m_receiveControlRegister->OpenReceive()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v21;
      v1 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_1400091D4(a1, (__int64)L"m_receiveControlRegister->OpenReceive()", 65, 122, v6);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 128LL))(*(_QWORD *)(a1 + 464));
    if ( v6 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v13 = (const wchar_t *)&unk_1400D44E0;
        v14 = (const wchar_t *)&unk_1400D44E0;
        v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                               a1 + 56,
                                               v26)
                                + 16LL);
        if ( v15 )
          v14 = v15;
        v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                               a1 + 56,
                                               v24)
                                + 16LL);
        if ( v16 )
          v13 = v16;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          2u,
          0xAu,
          0xDu,
          (__int64)&unk_1400D5D48,
          v13,
          v14,
          L"m_receiveControlRegister->StripEthernetCrcFromIncomingPackets()");
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v17 = v25;
        v1 &= ~8u;
        if ( v25 )
        {
          if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
            if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v18 = v27;
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
            if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
          }
        }
      }
      sub_14000A018(a1, (__int64)L"m_receiveControlRegister->StripEthernetCrcFromIncomingPackets()", 67, 122, v6);
    }
    else
    {
      v6 = 0;
    }
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v6;
}
