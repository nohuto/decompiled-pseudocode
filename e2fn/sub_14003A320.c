__int64 __fastcall sub_14003A320(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  int v13; // eax
  void *v14; // r14
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // r14
  volatile signed __int32 *v21; // rdi
  int v22; // eax
  void *v23; // r14
  void *v24; // rdi
  void *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  void *v28; // rax
  volatile signed __int32 *v29; // r14
  volatile signed __int32 *v30; // rdi
  signed __int32 v32[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-88h]
  const wchar_t *v34; // [rsp+38h] [rbp-80h]
  unsigned int v35; // [rsp+40h] [rbp-78h]
  char v36[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-60h]
  char v38[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-50h]
  char v40[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-40h]
  char v42[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v43; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLowPowerIdle::EnableEnergyEfficientEthernet",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[47];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v22 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v22 = -1073741130;
    v9 = v22;
    goto LABEL_40;
  }
  v8 = *(_DWORD *)(v7 + 3640);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_40:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v23 = &unk_1400D44E0;
      v24 = &unk_1400D44E0;
      v25 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v42) + 16LL);
      if ( v25 )
        v24 = v25;
      v26 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v40);
      v35 = v9;
      v34 = L"m_mmioAccessor->SetMaskSafe(0x00E38, (1 << 4) | (1 << 3) | (1 << 2))";
      LOBYTE(v27) = 2;
      v33 = (__int64)v24;
      v28 = *(void **)(*(_QWORD *)v26 + 16LL);
      if ( v28 )
        v23 = v28;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v27,
        10,
        15,
        (__int64)&unk_1400D6F10,
        (__int64)v23,
        v33,
        (__int64)v34,
        v35);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v29 = v41;
      v1 &= ~2u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v30 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
    }
    sub_140039A50((int)a1, (__int64)L"m_mmioAccessor->SetMaskSafe(0x00E38, (1 << 4) | (1 << 3) | (1 << 2))", 91, 50, v9);
    goto LABEL_57;
  }
  *(_DWORD *)(*(_QWORD *)(v6 + 8) + 3640LL) = v8 | 0x1C;
  _InterlockedOr(v32, 0);
  v10 = a1[47];
  v11 = *(_QWORD *)(v10 + 8);
  if ( !v11 || *(_DWORD *)(v10 + 20) )
  {
    v13 = -1073741661;
    if ( *(_DWORD *)(v10 + 20) == 3 )
      v13 = -1073741130;
    v9 = v13;
  }
  else
  {
    v12 = *(_DWORD *)(v11 + 3632);
    if ( v12 != -1 || *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) != -1 )
    {
      *(_DWORD *)(*(_QWORD *)(v10 + 8) + 3632LL) = v12 | 0x70000;
      _InterlockedOr(v32, 0);
      v9 = 0;
      goto LABEL_57;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 3LL);
    v9 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v14 = &unk_1400D44E0;
    v15 = &unk_1400D44E0;
    v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v38) + 16LL);
    if ( v16 )
      v15 = v16;
    v17 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v36);
    v35 = v9;
    v34 = L"m_mmioAccessor->SetMaskSafe(0x00E30, (1 << 16) | (1 << 17) | (1 << 18))";
    LOBYTE(v18) = 2;
    v33 = (__int64)v15;
    v19 = *(void **)(*(_QWORD *)v17 + 16LL);
    if ( v19 )
      v14 = v19;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v18,
      10,
      16,
      (__int64)&unk_1400D6F10,
      (__int64)v14,
      v33,
      (__int64)v34,
      v35);
    v1 = 12;
  }
  if ( (v1 & 8) != 0 )
  {
    v20 = v37;
    v1 &= ~8u;
    if ( v37 )
    {
      if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  if ( (v1 & 4) != 0 )
  {
    v21 = v39;
    if ( v39 )
    {
      if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
  }
  sub_14000F65C(
    (int)a1,
    (__int64)L"m_mmioAccessor->SetMaskSafe(0x00E30, (1 << 16) | (1 << 17) | (1 << 18))",
    95,
    50,
    v9);
LABEL_57:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v9;
}
