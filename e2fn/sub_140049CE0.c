__int64 __fastcall sub_140049CE0(_QWORD *a1)
{
  char v1; // r14
  __int64 *v3; // r15
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  int v6; // esi
  int v7; // edi
  int v8; // ebx
  int v9; // esi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  void *v17; // rbp
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rdi
  volatile signed __int32 *v24; // rdi
  void *v25; // rbp
  void *v26; // rdi
  void *v27; // rax
  __int64 v28; // rax
  int v29; // edx
  void *v30; // rax
  volatile signed __int32 *v31; // rdi
  volatile signed __int32 *v32; // rdi
  signed __int32 v34[8]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-78h]
  _BYTE v36[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v37; // [rsp+58h] [rbp-60h]
  _BYTE v38[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v39; // [rsp+68h] [rbp-50h]
  _BYTE v40[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v41; // [rsp+78h] [rbp-40h]
  _BYTE v42[8]; // [rsp+80h] [rbp-38h] BYREF
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
             (__int64)L"product_e2fn::ProductE2fnHardwareMacAddress::WriteCurrentMacAddressToHardware",
             (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 3LL);
  v7 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 2LL);
  v8 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 1LL);
  v9 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 0LL) | ((v8 | ((v7 | (v6 << 8)) << 8)) << 8);
  v10 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 5LL);
  v11 = *(unsigned __int8 *)sub_140088C7C(a1 + 49, 4LL) | ((v10 | 0xFF800000) << 8);
  v12 = a1[45];
  v13 = *(_QWORD *)(v12 + 8);
  if ( !v13 || *(_DWORD *)(v12 + 20) )
  {
    v16 = -1073741130;
    if ( *(_DWORD *)(v12 + 20) != 3 )
      v16 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v25 = &unk_1400D44E0;
      v26 = &unk_1400D44E0;
      v27 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v42) + 16LL);
      if ( v27 )
        v26 = v27;
      v28 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v40);
      v35 = v16;
      LOBYTE(v29) = 2;
      v30 = *(void **)(*(_QWORD *)v28 + 16LL);
      if ( v30 )
        v25 = v30;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v29,
        14,
        18,
        (__int64)&unk_1400D72A0,
        (__int64)v25,
        (__int64)v26,
        (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05400 + (0) * 8), rarLow)",
        v35);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v31 = v41;
      v1 &= ~2u;
      if ( v41 )
      {
        if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v31 + 8LL))(v31, v11);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v32 = v43;
      if ( v43 )
      {
        if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v32 + 8LL))(v32, v11);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 16LL))(v32);
        }
      }
    }
    sub_140009ECC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05400 + (0) * 8), rarLow)", 194, 158, v16);
  }
  else
  {
    *(_DWORD *)(v13 + 21504) = v9;
    _InterlockedOr(v34, 0);
    v14 = a1[45];
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 || *(_DWORD *)(v14 + 20) )
    {
      v16 = -1073741130;
      if ( *(_DWORD *)(v14 + 20) != 3 )
        v16 = -1073741661;
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v17 = &unk_1400D44E0;
        v18 = &unk_1400D44E0;
        v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v38) + 16LL);
        if ( v19 )
          v18 = v19;
        v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v36);
        v35 = v16;
        LOBYTE(v21) = 2;
        v22 = *(void **)(*(_QWORD *)v20 + 16LL);
        if ( v22 )
          v17 = v22;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v21,
          14,
          19,
          (__int64)&unk_1400D72A0,
          (__int64)v17,
          (__int64)v18,
          (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05404 + (0) * 8), rarHigh)",
          v35);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v23 = v37;
        v1 &= ~8u;
        if ( v37 )
        {
          if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v23 + 8LL))(v23, v11);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v24 = v39;
        if ( v39 )
        {
          if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v24 + 8LL))(v24, v11);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
          }
        }
      }
      sub_14000A018((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe((0x05404 + (0) * 8), rarHigh)", 195, 158, v16);
    }
    else
    {
      *(_DWORD *)(v15 + 21508) = v11;
      _InterlockedOr(v34, 0);
      v16 = 0;
    }
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v16;
}
