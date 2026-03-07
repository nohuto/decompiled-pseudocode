void __fastcall sub_14009C4B0(_QWORD *a1, _QWORD *a2)
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
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  _BYTE v19[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v20; // [rsp+48h] [rbp-40h]
  _BYTE v21[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterChecksumOffload::RegisterTxConfigurationChangedCallback",
             (__int64)(a1 - 44));
      if ( v7 )
        v4 = v7;
    }
  }
  if ( *a2 )
  {
    v17 = a1[5];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( a1[12] )
      v18 = a1 + 7;
    else
      v18 = (_QWORD *)a1[8];
    sub_1400A440C(a1 + 7, v18, a2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
    if ( v4 )
    {
      sub_140075108(v4);
      ExFreePool(v4);
    }
    v16 = (volatile signed __int32 *)a2[1];
    if ( v16 )
      goto LABEL_33;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 16LL))(a1 - 37, v21) + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*(a1 - 37) + 24LL))(a1 - 37, v19);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(a1 - 22) + 16LL),
        v12,
        11,
        20,
        (__int64)&unk_1400DA378,
        (__int64)v8,
        (__int64)v9,
        (__int64)L"callback");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v14 = v20;
      v2 &= ~2u;
      if ( v20 )
      {
        if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v15 = v22;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_140022128((_DWORD)a1 - 352, (__int64)L"callback", 331, 102);
    if ( v4 )
    {
      sub_140075108(v4);
      ExFreePool(v4);
    }
    v16 = (volatile signed __int32 *)a2[1];
    if ( v16 )
    {
LABEL_33:
      if ( !_InterlockedDecrement(v16 + 2) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( !_InterlockedDecrement(v16 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
}
