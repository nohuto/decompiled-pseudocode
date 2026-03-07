__int64 __fastcall sub_14003CAD0(_QWORD *a1, _DWORD *a2)
{
  char v2; // di
  __int64 *v4; // r14
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  int v21; // eax
  void *v22; // rsi
  void *v23; // rdi
  void *v24; // rax
  __int64 v25; // rax
  int v26; // edx
  void *v27; // rax
  volatile signed __int32 *v28; // rsi
  volatile signed __int32 *v29; // rdi
  _BYTE v31[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v32; // [rsp+58h] [rbp-60h]
  _BYTE v33[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-50h]
  _BYTE v35[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v36; // [rsp+78h] [rbp-40h]
  _BYTE v37[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v38; // [rsp+88h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNvm::GetEepromSize", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  *a2 = 0;
  v8 = a1[47];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v21 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v21 = -1073741130;
    v11 = v21;
    goto LABEL_33;
  }
  v10 = *(_DWORD *)(v9 + 16);
  if ( v10 == -1 && *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) == -1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v8 + 8LL))(a1[47], 3LL);
    v11 = -1073741130;
LABEL_33:
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v22 = &unk_1400D44E0;
      v23 = &unk_1400D44E0;
      v24 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v37) + 16LL);
      if ( v24 )
        v23 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v35);
      LOBYTE(v26) = 2;
      v27 = *(void **)(*(_QWORD *)v25 + 16LL);
      if ( v27 )
        v22 = v27;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v26,
        14,
        17,
        (__int64)&unk_1400D71D0,
        (__int64)v22,
        (__int64)v23,
        (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00010, eecdValue)",
        v11);
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v28 = v36;
      v2 &= ~2u;
      if ( v36 )
      {
        if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v29 = v38;
      if ( v38 )
      {
        if ( _InterlockedExchangeAdd(v38 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
          if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
    }
    sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x00010, eecdValue)", 130, 155, v11);
    goto LABEL_50;
  }
  v12 = ((v10 >> 11) & 0xF) + 6;
  if ( v12 > 0xF )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = &unk_1400D44E0;
      v14 = &unk_1400D44E0;
      v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v33) + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v31);
      LOBYTE(v17) = 3;
      v18 = *(void **)(*(_QWORD *)v16 + 16LL);
      if ( v18 )
        v13 = v18;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v17,
        14,
        18,
        (__int64)&unk_1400D71D0,
        (__int64)v13,
        (__int64)v14,
        (__int64)qword_1400B7720,
        *a2);
      v2 = 12;
    }
    if ( (v2 & 8) != 0 )
    {
      v19 = v32;
      v2 &= ~8u;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
    }
    if ( (v2 & 4) != 0 )
    {
      v20 = v34;
      if ( v34 )
      {
        if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
        }
      }
    }
    LOBYTE(v12) = 15;
  }
  *a2 = 1 << v12;
  v11 = 0;
LABEL_50:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v11;
}
