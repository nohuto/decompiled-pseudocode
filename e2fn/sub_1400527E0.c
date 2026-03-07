void __fastcall sub_1400527E0(__int64 a1)
{
  __int64 *v1; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnOtherInterruptsDispatcher::Uninitialize", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 376) + 24LL))(*(_QWORD *)(a1 + 376), 9LL);
  v5 = *(__int64 **)(a1 + 392);
  v6 = *v5;
  v7 = sub_1400A27D4(v8, a1 + 408);
  (*(void (__fastcall **)(__int64 *, __int64))(v6 + 16))(v5, v7);
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
