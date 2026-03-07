void __fastcall sub_14004EDDC(__int64 a1)
{
  __int64 *v1; // rbp
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::Uninitialize", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(__int64 **)(a1 + 384);
  v6 = (_QWORD *)(a1 + 400);
  v7 = *v5;
  v8 = sub_1400A27D4(v10, v6);
  (*(void (__fastcall **)(__int64 *, __int64))(v7 + 24))(v5, v8);
  v9 = (volatile signed __int32 *)v6[1];
  v6[1] = 0LL;
  *v6 = 0LL;
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
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
