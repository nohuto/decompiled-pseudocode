__int64 __fastcall sub_1400F8A70(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rax
  unsigned int v8; // r14d
  int v9; // eax
  const wchar_t *v10; // rsi
  const wchar_t *v11; // rdi
  const wchar_t *v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  signed __int32 v18[8]; // [rsp+0h] [rbp-98h] BYREF
  const wchar_t *v19; // [rsp+30h] [rbp-68h]
  const wchar_t *v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  _BYTE v22[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-40h]
  _BYTE v24[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::EnableVlan", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[49];
  v7 = *(_DWORD **)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v9 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v9 = -1073741130;
    v8 = v9;
  }
  else
  {
    if ( *v7 != -1 || *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) != -1 )
    {
      **(_DWORD **)(v6 + 8) = *v7 | 0x40000000;
      _InterlockedOr(v18, 0);
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
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v24)
                            + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v22);
    v21 = v8;
    v20 = L"m_mmioAccessor->SetMaskSafe(0x00000, (1 << 30))";
    v19 = v11;
    v14 = *(const wchar_t **)(*(_QWORD *)v13 + 16LL);
    if ( v14 )
      v10 = v14;
    sub_1400A5E80(*(_QWORD *)(a1[22] + 16LL), 2u, 0xAu, 0x17u, (__int64)&unk_1400D56F8, v10, v19, v20);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v15 = v23;
    v1 &= ~2u;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v16 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  sub_14000F278((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x00000, (1 << 30))", 308, 57, v8);
LABEL_32:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v8;
}
