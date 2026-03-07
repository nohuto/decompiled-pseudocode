__int64 __fastcall sub_140036448(__int64 a1, unsigned int a2, int a3)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  int v9; // eax
  unsigned int v10; // edi

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::CalculateFlowControlLowWaterMark",
             a1);
      if ( v8 )
        v4 = v8;
    }
  }
  v9 = 2 * a2;
  if ( a2 > 0x5EA )
    v9 = a2;
  v10 = a3 - v9;
  if ( v4 )
  {
    sub_140005840(v4);
    ExFreePool(v4);
  }
  return v10;
}
