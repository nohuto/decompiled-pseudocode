char __fastcall sub_1400237DC(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  char v7; // di

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::CalculateChecksumForCommand",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v6 )
        v2 = v6;
    }
  }
  v7 = sub_140023888(a1, a2, (unsigned int)*(unsigned __int8 *)(a2 + 1) + 4);
  if ( v2 )
  {
    sub_140005840(v2);
    ExFreePool(v2);
  }
  return v7;
}
