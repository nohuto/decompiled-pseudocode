__int64 __fastcall sub_140037248(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // r8
  _DWORD *v12; // rcx
  void *v13; // r14
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // r14
  volatile signed __int32 *v20; // rdi
  int v21; // eax
  void *v22; // r14
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // r14
  volatile signed __int32 *v29; // rdi
  signed __int32 v31[8]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-88h]
  const wchar_t *v33; // [rsp+38h] [rbp-80h]
  unsigned int v34; // [rsp+40h] [rbp-78h]
  char v35[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v36; // [rsp+58h] [rbp-60h]
  char v37[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v38; // [rsp+68h] [rbp-50h]
  char v39[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-40h]
  char v41[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v42; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::ConfigureCollisionDetection",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[45];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v21 = -1073741661;
    if ( *(_DWORD *)(v6 + 20) == 3 )
      v21 = -1073741130;
    v9 = v21;
    goto LABEL_36;
  }
  v8 = *(_DWORD *)(v7 + 1024);
  if ( v8 == -1 && *(_DWORD *)(*(_QWORD *)(v6 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL);
    v9 = -1073741130;
LABEL_36:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v41) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v39);
      v34 = v9;
      v33 = L"m_mmioAccessor->ReadRegisterSafe(0x00400, tctlValue)";
      LOBYTE(v26) = 2;
      v32 = (__int64)v23;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v26,
        14,
        43,
        (__int64)&unk_1400D6CE0,
        (__int64)v22,
        v32,
        (__int64)v33,
        v34);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v28 = v40;
      v1 &= ~2u;
      if ( v40 )
      {
        if ( _InterlockedExchangeAdd(v40 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v29 = v42;
      if ( v42 )
      {
        if ( _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00400, tctlValue)", 425, 48, v9);
    goto LABEL_53;
  }
  v10 = a1[45];
  v11 = *(_QWORD *)(v10 + 8);
  v12 = (_DWORD *)(v10 + 20);
  if ( !v11 || *v12 )
  {
    v9 = -1073741130;
    if ( *v12 != 3 )
      v9 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v37) + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v35);
      v34 = v9;
      v33 = L"m_mmioAccessor->WriteRegisterSafe(0x00400, tctlValue)";
      LOBYTE(v17) = 2;
      v32 = (__int64)v14;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v17,
        14,
        44,
        (__int64)&unk_1400D6CE0,
        (__int64)v13,
        v32,
        (__int64)v33,
        v34);
      v1 = 12;
    }
    if ( (v1 & 8) != 0 )
    {
      v19 = v36;
      v1 &= ~8u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v1 & 4) != 0 )
    {
      v20 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x00400, tctlValue)", 430, 48, v9);
  }
  else
  {
    *(_DWORD *)(v11 + 1024) = v8 & 0xFFC00FFF | 0x3F000;
    _InterlockedOr(v31, 0);
    v9 = 0;
  }
LABEL_53:
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v9;
}
