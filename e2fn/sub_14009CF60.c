void __fastcall sub_14009CF60(_QWORD *a1, __int64 *a2)
{
  char v2; // si
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rdi
  __int64 i; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r12
  volatile signed __int32 *v23; // rbx
  _BYTE v24[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v25; // [rsp+48h] [rbp-40h]
  _BYTE v26[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterChecksumOffload::UnregisterTxConfigurationChangedCallback",
             (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v16 = a1[5];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = (volatile signed __int32 *)a2[1];
    a2[1] = 0LL;
    v18 = *a2;
    *a2 = 0LL;
    for ( i = a1[8]; ; i = v22 )
    {
      v20 = v18;
      v21 = a1[12] ? (__int64)(a1 + 7) : a1[8];
      if ( i == v21 )
        break;
      v22 = *(_QWORD *)(i + 8);
      if ( *(_QWORD *)(i + 16) == v18 )
        sub_1400A2D78(a1 + 7);
    }
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, i, v18);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, i, v20);
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v26) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v24);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v12,
        11,
        21,
        (__int64)&unk_1400DA378,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"callback");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v25;
      v2 &= ~2u;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140022128((_DWORD)a1 - 352, (__int64)L"callback", 342, 102);
  }
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
  v23 = (volatile signed __int32 *)a2[1];
  if ( v23 && !_InterlockedDecrement(v23 + 2) )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    if ( !_InterlockedDecrement(v23 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 16LL))(v23);
  }
}
