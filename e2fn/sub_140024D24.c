__int64 __fastcall sub_140024D24(_QWORD *a1)
{
  char v1; // si
  __int64 *v3; // r14
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  unsigned int v10; // r15d
  int v11; // eax
  void *v12; // rbp
  void *v13; // rsi
  void *v14; // rax
  __int64 v15; // rax
  int v16; // edx
  void *v17; // rax
  volatile signed __int32 *v18; // rdi
  volatile signed __int32 *v19; // rdi
  signed __int32 v21[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v22; // [rsp+30h] [rbp-68h]
  const wchar_t *v23; // [rsp+38h] [rbp-60h]
  unsigned int v24; // [rsp+40h] [rbp-58h]
  char v25[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-40h]
  char v27[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ReleaseFirmwareSemaphore",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[48];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = a1[46];
  v8 = *(_QWORD *)(v7 + 8);
  if ( !v8 || *(_DWORD *)(v7 + 20) )
  {
    v11 = -1073741661;
    if ( *(_DWORD *)(v7 + 20) == 3 )
      v11 = -1073741130;
    v10 = v11;
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 23376);
    if ( v9 != -1 || *(_DWORD *)(*(_QWORD *)(v7 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v7 + 8) + 23376LL) = v9 & 0xFFFFFFFD;
      _InterlockedOr(v21, 0);
      v10 = 0;
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL);
    v10 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v12 = &unk_1400D44E0;
    v13 = &unk_1400D44E0;
    v14 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 16LL))(a1 + 8, v27) + 16LL);
    if ( v14 )
      v13 = v14;
    v15 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[8] + 24LL))(a1 + 8, v25);
    v24 = v10;
    v23 = L"m_mmioAccessor->UnsetMaskSafe(0x05B50, (1 << 1))";
    LOBYTE(v16) = 2;
    v22 = (__int64)v13;
    v17 = *(void **)(*(_QWORD *)v15 + 16LL);
    if ( v17 )
      v12 = v17;
    sub_1400A5E80(
      *(_QWORD *)(a1[23] + 16LL),
      v16,
      14,
      43,
      (__int64)&unk_1400D6110,
      (__int64)v12,
      v22,
      (__int64)v23,
      v24);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v18 = v26;
    v1 &= ~2u;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v19 = v28;
    if ( v28 )
    {
      if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  sub_140009850((_DWORD)a1 + 8, (__int64)L"m_mmioAccessor->UnsetMaskSafe(0x05B50, (1 << 1))", 550, 45, v10);
LABEL_32:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v10;
}
