void __fastcall sub_1400F7E0C(_QWORD *a1)
{
  __int64 *v1; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 *v7; // rax
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void (__fastcall *v10)(__int64); // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v13; // [rsp+38h] [rbp-20h]
  _QWORD v14[3]; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::Initialize",
             (__int64)a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v11 = 0;
  v5 = (__int64 *)a1[47];
  v10 = sub_140014F70;
  v6 = *v5;
  v7 = sub_14000DB1C(&v12, a1, (__int64)&v10);
  v8 = sub_1400A27D4(v14, v7);
  (*(void (__fastcall **)(__int64 *, _QWORD *))(v6 + 48))(v5, v8);
  v9 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
