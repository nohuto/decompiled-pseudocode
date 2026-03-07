__int64 __fastcall sub_140103D2C(_QWORD *a1)
{
  char v1; // si
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rax
  _QWORD *v9; // rax
  unsigned int v10; // eax
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // r14d
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  void (__fastcall *v20)(__int64 *); // [rsp+50h] [rbp-78h] BYREF
  int v21; // [rsp+58h] [rbp-70h]
  __int64 v22; // [rsp+60h] [rbp-68h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-60h]
  _BYTE v24[8]; // [rsp+70h] [rbp-58h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp-50h]
  _BYTE v26[8]; // [rsp+80h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+88h] [rbp-40h]
  __int64 v28; // [rsp+90h] [rbp-38h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::Initialize", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v21 = 0;
  v6 = a1[49];
  v20 = sub_140037160;
  v7 = *(_QWORD *)(v6 + 352);
  v8 = sub_14000DB1C(&v22, a1, (__int64)&v20);
  v9 = sub_1400A27D4(&v28, v8);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(v7 + 48))(v6 + 352, v9);
  v11 = v23;
  v12 = v10;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v26)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v24)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&unk_1400D6CE0,
        v13,
        v14,
        L"m_hardwareLink->RegisterLinkStateChangedCallback(common_services::MakeVoidCallback<kstd::remove_reference<declty"
         "pe(*this)>::type >(this, &kstd::remove_reference<decltype(*this)>::type::Configure))");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v17 = v25;
      v1 &= ~2u;
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
    if ( (v1 & 1) != 0 )
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
    sub_1400359EC(
      (int)a1,
      (__int64)L"m_hardwareLink->RegisterLinkStateChangedCallback(common_services::MakeVoidCallback<kstd::remove_reference"
                "<decltype(*this)>::type >(this, &kstd::remove_reference<decltype(*this)>::type::Configure))",
      92,
      48,
      v12);
  }
  else
  {
    v12 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v12;
}
