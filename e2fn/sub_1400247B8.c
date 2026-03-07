__int64 __fastcall sub_1400247B8(_QWORD *a1, _DWORD *a2, unsigned int a3)
{
  char v3; // di
  __int64 *v5; // r14
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // esi
  unsigned int v13; // edx
  int v14; // eax
  unsigned int v15; // ebp
  int v16; // eax
  void *v17; // rsi
  void *v18; // rdi
  void *v19; // rax
  __int64 v20; // rax
  int v21; // edx
  void *v22; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  _BYTE v26[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-40h]
  _BYTE v28[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-30h]

  v3 = 0;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ReadFirmwareResponse",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v9 )
        v5 = v9;
    }
  }
  v10 = a1[46];
  v11 = 34816LL;
  v12 = a3 >> 2;
  if ( !*(_QWORD *)(v10 + 8) || *(_DWORD *)(v10 + 20) )
  {
    v16 = -1073741661;
    if ( *(_DWORD *)(v10 + 20) == 3 )
      v16 = -1073741130;
    v15 = v16;
  }
  else if ( a2 )
  {
    v13 = 0;
    if ( !v12 )
    {
LABEL_13:
      v15 = 0;
      goto LABEL_36;
    }
    while ( 1 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + (unsigned int)v11);
      *a2 = v14;
      if ( v14 == -1 && *(_DWORD *)(*(_QWORD *)(v10 + 8) + 8LL) == -1 )
        break;
      v11 = (unsigned int)(v11 + 4);
      ++v13;
      ++a2;
      if ( v13 >= v12 )
        goto LABEL_13;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 3LL, v11, 0xFFFFFFFFLL);
    v15 = -1073741130;
  }
  else
  {
    v15 = -1073741811;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v17 = &unk_1400D44E0;
    v18 = &unk_1400D44E0;
    v19 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 16LL))(a1 + 8, v28) + 16LL);
    if ( v19 )
      v18 = v19;
    v20 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[8] + 24LL))(a1 + 8, v26);
    LOBYTE(v21) = 2;
    v22 = *(void **)(*(_QWORD *)v20 + 16LL);
    if ( v22 )
      v17 = v22;
    sub_1400A5E80(
      *(_QWORD *)(a1[23] + 16LL),
      v21,
      14,
      53,
      (__int64)&unk_1400D6110,
      (__int64)v17,
      (__int64)v18,
      (__int64)L"m_mmioAccessor->ReadRegistersRangeSafe(0x08800, command, dwordLength)",
      v15);
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v23 = v27;
    v3 &= ~2u;
    if ( v27 )
    {
      if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v24 = v29;
    if ( v29 )
    {
      if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  sub_14001921C(
    (_DWORD)a1 + 8,
    (__int64)L"m_mmioAccessor->ReadRegistersRangeSafe(0x08800, command, dwordLength)",
    670,
    45,
    v15);
LABEL_36:
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v15;
}
