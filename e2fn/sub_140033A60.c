__int64 __fastcall sub_140033A60(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  int v7; // ebx
  unsigned int v8; // esi

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::MacAddressToHash", a1);
      if ( v6 )
        v2 = v6;
    }
  }
  v7 = (unsigned __int8)sub_140088C88(a2, 4LL) >> 4;
  v8 = v7 | (16 * (unsigned __int8)sub_140088C88(a2, 5LL));
  if ( v2 )
  {
    sub_140005840(v2);
    ExFreePool(v2);
  }
  return v8;
}
