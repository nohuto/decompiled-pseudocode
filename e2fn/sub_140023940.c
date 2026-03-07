__int64 __fastcall sub_140023940(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // esi
  unsigned int v9; // esi
  void *v10; // r14
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rsi
  volatile signed __int32 *v17; // rdi
  int v18; // eax
  void *v19; // r14
  void *v20; // rdi
  void *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  void *v24; // rax
  volatile signed __int32 *v25; // r14
  volatile signed __int32 *v26; // rdi
  _BYTE v28[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v29; // [rsp+58h] [rbp-60h]
  _BYTE v30[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v31; // [rsp+68h] [rbp-50h]
  _BYTE v32[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v33; // [rsp+78h] [rbp-40h]
  _BYTE v34[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v35; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::CheckIfHostInterfaceEnabled",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[46];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v18 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v18 = -1073741130;
    v9 = v18;
    goto LABEL_33;
  }
  v8 = *(_DWORD *)(v7 + 36608);
  if ( v8 == -1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
      v9 = -1073741130;
LABEL_33:
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v19 = &unk_1400D44E0;
        v20 = &unk_1400D44E0;
        v21 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v34) + 16LL);
        if ( v21 )
          v20 = v21;
        v22 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v32);
        LOBYTE(v23) = 2;
        v24 = *(void **)(*(_QWORD *)v22 + 16LL);
        if ( v24 )
          v19 = v24;
        sub_1400A5E80(
          *(_QWORD *)(a1[23] + 16LL),
          v23,
          14,
          58,
          (__int64)&unk_1400D6110,
          (__int64)v19,
          (__int64)v20,
          (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x08F00, hicrValue)",
          v9);
        v1 = 3;
      }
      if ( (v1 & 2) != 0 )
      {
        v25 = v33;
        v1 &= ~2u;
        if ( v33 )
        {
          if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
            if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
      }
      if ( (v1 & 1) != 0 )
      {
        v26 = v35;
        if ( v35 )
        {
          if ( _InterlockedExchangeAdd(v35 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
            if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
      }
      sub_14000D660((_DWORD)a1 + 8, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x08F00, hicrValue)", 703, 45, v9);
      goto LABEL_50;
    }
LABEL_12:
    v9 = 0;
    goto LABEL_50;
  }
  if ( (v8 & 1) != 0 )
    goto LABEL_12;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v30) + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v28);
    LOBYTE(v14) = 3;
    v15 = *(void **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v10 = v15;
    sub_1400A5E80(
      *(_QWORD *)(a1[23] + 16LL),
      v14,
      14,
      59,
      (__int64)&unk_1400D6110,
      (__int64)v10,
      (__int64)v11,
      (__int64)qword_1400B7720,
      v8);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v16 = v29;
    v1 &= ~8u;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v17 = v31;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  v9 = -1073741661;
LABEL_50:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v9;
}
