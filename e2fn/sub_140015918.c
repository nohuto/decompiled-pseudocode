__int64 __fastcall sub_140015918(_QWORD *a1)
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
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v21; // [rsp+30h] [rbp-68h]
  const wchar_t *v22; // [rsp+38h] [rbp-60h]
  unsigned int v23; // [rsp+40h] [rbp-58h]
  char v24[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v25; // [rsp+58h] [rbp-40h]
  char v26[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v27; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::SendMaximumThreshold",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[51];
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
    v8 = *(_DWORD *)(v7 + 416);
    if ( v8 != -1 || *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v6 + 8) + 416LL) = v8 | 0x20;
      _InterlockedOr(v20, 0);
      v9 = 0;
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v11 = &unk_1400D44E0;
    v12 = &unk_1400D44E0;
    v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v26) + 16LL);
    if ( v13 )
      v12 = v13;
    v14 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v24);
    v23 = v9;
    v22 = L"m_mmioAccessor->SetMaskSafe(0x001A0, (1 << 5))";
    LOBYTE(v15) = 2;
    v21 = (__int64)v12;
    v16 = *(void **)(*(_QWORD *)v14 + 16LL);
    if ( v16 )
      v11 = v16;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v15,
      10,
      24,
      (__int64)&unk_1400D5648,
      (__int64)v11,
      v21,
      (__int64)v22,
      v23);
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
  sub_140009704((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x001A0, (1 << 5))", 236, 152, v9);
LABEL_32:
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v9;
}
