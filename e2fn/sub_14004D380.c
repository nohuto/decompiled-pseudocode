void __fastcall sub_14004D380(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnMsixInterruptDispatcher::Deconfig", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 8LL) + 5416LL) = *(_DWORD *)(a1 + 424);
  _InterlockedOr(v5, 0);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 368) + 8LL) + 5504LL) = *(_DWORD *)(a1 + 424);
  _InterlockedOr(v5, 0);
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
