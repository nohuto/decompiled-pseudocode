__int64 __fastcall sub_1400E9734(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // r14d
  int v9; // eax
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  _BYTE v17[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-40h]
  _BYTE v19[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::CheckIfHardwareAvailable",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[108];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v9 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v9 = -1073741130;
    v8 = v9;
  }
  else
  {
    if ( *(_DWORD *)(v7 + 8) != -1 || *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) != -1 )
    {
      v8 = 0;
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v8 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v19)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v17)
                            + 16LL);
    if ( v13 )
      v10 = v13;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      2u,
      0xAu,
      0x6Bu,
      (__int64)&unk_1400D49F8,
      v10,
      v11,
      L"m_mmioAccessor->ReadRegisterSafe(0x00008, status)");
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v14 = v18;
    v1 &= ~2u;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v15 = v20;
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  sub_14000999C((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00008, status)", 759, 46, v8);
LABEL_32:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v8;
}
