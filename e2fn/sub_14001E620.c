void __fastcall sub_14001E620(_QWORD *a1)
{
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  volatile signed __int32 *v8; // rsi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v10; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::EvtReleaseHardware",
             (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = a1[57];
  v6 = a1[56];
  if ( v5 )
  {
    v7 = v6 + 16 * v5;
    while ( v6 != v7 )
    {
      sub_1400A27D4(&v9, v6);
      sub_14004EDDC(v9);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          v8 = v10;
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      v6 += 16LL;
    }
  }
  sub_1400527E0(a1[59]);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
