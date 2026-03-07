__int64 *__fastcall sub_1400EFAC0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::GetMtu", a1 - 352);
      if ( v6 )
        v3 = v6;
    }
  }
  sub_1400A5180(a2, (_QWORD *)(a1 + 432));
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
  return a2;
}
