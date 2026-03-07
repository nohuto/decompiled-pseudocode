__int64 __fastcall sub_1400FBD74(_QWORD *a1)
{
  __int64 *v2; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  unsigned int v15; // ebx
  void (__fastcall *v17)(__int64); // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  _BYTE v19[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-20h]
  __int64 v23; // [rsp+60h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::EvtPrepareHardware",
             (unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL));
      if ( v4 )
        v2 = v4;
    }
  }
  v18 = 0;
  v5 = (__int64 *)a1[50];
  v17 = sub_140024690;
  v6 = *v5;
  v7 = sub_1400222E0(&v21, (__int64)a1, (__int64)&v17);
  v8 = sub_1400A27D4(&v23, v7);
  v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, _QWORD *, _QWORD))(v6 + 32))(v5, v19, v8, 0LL);
  v10 = a1[53];
  a1[53] = v9[1];
  v11 = *v9;
  v9[1] = v10;
  v12 = a1[52];
  a1[52] = v11;
  *v9 = v12;
  v13 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( a1[52] )
  {
    v15 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        2u,
        10LL,
        0xFu,
        (__int64)&unk_1400D6110,
        L"m_interruptControl");
    v15 = -1073741801;
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v15;
}
