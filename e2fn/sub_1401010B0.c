__int64 __fastcall sub_1401010B0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // r14d
  int v10; // eax
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  const wchar_t *v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  signed __int32 v19[8]; // [rsp+0h] [rbp-98h] BYREF
  const wchar_t *v20; // [rsp+30h] [rbp-68h]
  const wchar_t *v21; // [rsp+38h] [rbp-60h]
  unsigned int v22; // [rsp+40h] [rbp-58h]
  _BYTE v23[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  _BYTE v25[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::EnableWakeFromMulticastPacket",
             a1 - 352);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v10 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v10 = -1073741130;
    v9 = v10;
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 22536);
    if ( v8 != -1 || *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 8) + 22536LL) = v8 | 8;
      _InterlockedOr(v19, 0);
      *(_BYTE *)(a1 + 147) = 1;
      v9 = 0;
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = (const wchar_t *)&unk_1400D44E0;
    v12 = (const wchar_t *)&unk_1400D44E0;
    v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                           a1 - 296,
                                           v25)
                            + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v23);
    v22 = v9;
    v21 = L"m_mmioAccessor->SetMaskSafe(0x05808, (1 << 3))";
    v20 = v12;
    v15 = *(const wchar_t **)(*(_QWORD *)v14 + 16LL);
    if ( v15 )
      v11 = v15;
    sub_1400A5E80(*(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL), 2u, 0xAu, 0x21u, (__int64)&unk_1400D64E8, v11, v20, v21);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v16 = v24;
    v1 &= ~2u;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v17 = v26;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  sub_140009704(a1 - 352, (__int64)L"m_mmioAccessor->SetMaskSafe(0x05808, (1 << 3))", 509, 59, v9);
LABEL_32:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
