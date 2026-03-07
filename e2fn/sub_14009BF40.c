void __fastcall sub_14009BF40(_QWORD *a1)
{
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // r14
  char *v8; // r15
  volatile signed __int32 *v9; // rsi
  void (__fastcall ***v10)(_QWORD, char *); // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v11; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140074D50(
             Pool2,
             (__int64)L"net_adapter::NetAdapterChecksumOffload::ConfigRxQueuesChecksumOffload",
             (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = a1[49];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (_QWORD *)a1[58];
  v7 = v6;
  if ( a1[62] )
    v7 = a1 + 57;
  if ( v6 != v7 )
  {
    v8 = (char *)a1 + 387;
    do
    {
      sub_1400A27D4(&v10, v6 + 2);
      (**v10)(v10, v8);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
        {
          v9 = v11;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v6 = (_QWORD *)v6[1];
    }
    while ( v6 != v7 );
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
