void __fastcall sub_1400244D0(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ClearS0IdleNotificationParameter",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v4 )
        v1 = v4;
    }
  }
  *(_BYTE *)(a1 + 482) = 0;
  if ( v1 )
  {
    sub_140005840(v1);
    ExFreePool(v1);
  }
}
