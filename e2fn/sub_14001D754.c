__int64 __fastcall sub_14001D754(_QWORD *a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r14d
  void *v9; // rsi
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  int v13; // edx
  void *v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  signed __int32 v18[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v19; // [rsp+30h] [rbp-68h]
  const wchar_t *v20; // [rsp+38h] [rbp-60h]
  unsigned int v21; // [rsp+40h] [rbp-58h]
  char v22[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-40h]
  char v24[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::ConfigGpie", (__int64)a1);
      if ( v5 )
        v3 = v5;
    }
  }
  v6 = a1[47];
  v7 = *(_QWORD *)(v6 + 8);
  if ( !v7 || *(_DWORD *)(v6 + 20) )
  {
    v8 = -1073741130;
    if ( *(_DWORD *)(v6 + 20) != 3 )
      v8 = -1073741661;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v9 = &unk_1400D44E0;
      v10 = &unk_1400D44E0;
      v11 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 16LL))(a1 + 7, v24) + 16LL);
      if ( v11 )
        v10 = v11;
      v12 = (*(__int64 (__fastcall **)(_QWORD *, char *))(a1[7] + 24LL))(a1 + 7, v22);
      v21 = v8;
      v20 = L"m_mmioAccessor->WriteRegisterSafe(0x01514, gpieValue)";
      LOBYTE(v13) = 2;
      v19 = (__int64)v10;
      v14 = *(void **)(*(_QWORD *)v12 + 16LL);
      if ( v14 )
        v9 = v14;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        v13,
        10,
        31,
        (__int64)&unk_1400D5958,
        (__int64)v9,
        v19,
        (__int64)v20,
        v21);
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v15 = v23;
      v1 &= ~2u;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v16 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
    }
    sub_14000D7AC((int)a1, (__int64)L"m_mmioAccessor->WriteRegisterSafe(0x01514, gpieValue)", 275, 65, v8);
  }
  else
  {
    *(_DWORD *)(v7 + 5396) = 17;
    _InterlockedOr(v18, 0);
    v8 = 0;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return v8;
}
