__int64 __fastcall sub_140041490(_QWORD *a1, bool *a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r14d
  int v12; // eax
  void *v13; // rsi
  void *v14; // rdi
  void *v15; // rax
  __int64 v16; // rax
  int v17; // edx
  void *v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  _BYTE v22[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-40h]
  _BYTE v24[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwarePhy::IsPhyResetBlocked", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  *a2 = 0;
  v8 = a1[47];
  v9 = *(_QWORD *)(v8 + 8);
  if ( !v9 || *(_DWORD *)(v8 + 20) )
  {
    v12 = -1073741661;
    if ( *(_DWORD *)(v8 + 20) == 3 )
      v12 = -1073741130;
    v11 = v12;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 22560);
    if ( v10 != -1 || *(_DWORD *)(*(_QWORD *)(v8 + 8) + 8LL) != -1 )
    {
      *a2 = (v10 & 0x40000) != 0;
      v11 = 0;
      goto LABEL_32;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 8LL))(v8, 3LL);
    v11 = -1073741130;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v13 = &unk_1400D44E0;
    v14 = &unk_1400D44E0;
    v15 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v24) + 16LL);
    if ( v15 )
      v14 = v15;
    v16 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v22);
    LOBYTE(v17) = 2;
    v18 = *(void **)(*(_QWORD *)v16 + 16LL);
    if ( v18 )
      v13 = v18;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v17,
      14,
      52,
      (__int64)&unk_1400D71E0,
      (__int64)v13,
      (__int64)v14,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05820, mancValue)",
      v11);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v19 = v23;
    v2 &= ~2u;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
  }
  if ( (v2 & 1) != 0 )
  {
    v20 = v25;
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
  }
  sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x05820, mancValue)", 434, 156, v11);
LABEL_32:
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v11;
}
