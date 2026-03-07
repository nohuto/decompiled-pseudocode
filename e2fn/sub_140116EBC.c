__int64 __fastcall sub_140116EBC(__int64 a1)
{
  char v2; // di
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r15d
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _BYTE v14[8]; // [rsp+58h] [rbp-19h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp-11h]
  _BYTE v16[8]; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v17; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall **v18)(PVOID); // [rsp+78h] [rbp+7h] BYREF
  __int16 v19; // [rsp+80h] [rbp+Fh]
  PVOID P; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  __int64 v22; // [rsp+98h] [rbp+27h]

  v2 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::EvtDeviceArmWakeFromSx", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v19 = 0;
  v18 = &off_1400D41D0;
  P = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  sub_1400011A8(&v18, (__int64)L"Arm wake from Sx", 0x10uLL);
  sub_14006FED0(*(_QWORD *)(a1 + 504), (__int64)&v18);
  v18 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 88LL))(*(_QWORD *)(a1 + 440));
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
        8u,
        0x56u,
        (__int64)&unk_1400D91A8,
        v7,
        v8,
        L"m_netAdapter->EvtDeviceArmWakeFromSx()");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v11 = v15;
      v2 &= ~2u;
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
    if ( (v2 & 1) != 0 )
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
    sub_140009088(a1, (__int64)L"m_netAdapter->EvtDeviceArmWakeFromSx()", 759, 74, v6);
  }
  else
  {
    v6 = 0;
  }
  if ( v3 )
  {
    sub_14007404C(v3);
    ExFreePool(v3);
  }
  return v6;
}
