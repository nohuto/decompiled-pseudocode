__int64 __fastcall sub_1400A83D0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _BYTE v14[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-40h]
  _BYTE v16[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"e1000_hardware::E1000HardwareReceiveGate::DisableTraffic", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 464) + 16LL))(*(_QWORD *)(a1 + 464));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                            a1 + 56,
                                            v16)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v14)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xAu,
        0xEu,
        (__int64)&unk_1400D5D48,
        v7,
        v8,
        L"m_receiveControlRegister->CloseReceive()");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v11 = v15;
      v1 &= ~2u;
      if ( v15 )
      {
        if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v12 = v17;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    sub_140009320(a1, (__int64)L"m_receiveControlRegister->CloseReceive()", 76, 122, v6);
  }
  else
  {
    v6 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v6;
}
