__int64 __fastcall sub_14000DF50(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  unsigned int v6; // r14d
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-40h]
  _BYTE v18[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLink::EvtD0Entry", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = sub_14000E5EC(a1, **(unsigned int **)(a1 + 368), *(unsigned int *)(*(_QWORD *)(a1 + 368) + 8LL));
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                   a1 + 56,
                                   v18)
                    + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v16);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A5E80(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v11,
        10,
        14,
        (__int64)&unk_1400D4DD8,
        (__int64)v7,
        (__int64)v8,
        (__int64)L"InitializeSpeedDuplex(m_hardwareConfiguration->speedDuplex, m_hardwareConfiguration->flowControl)",
        v6);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v13 = v17;
      v1 &= ~2u;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v14 = v19;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    sub_14000D8F8(
      a1,
      (__int64)L"InitializeSpeedDuplex(m_hardwareConfiguration->speedDuplex, m_hardwareConfiguration->flowControl)",
      105,
      49,
      v6);
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
