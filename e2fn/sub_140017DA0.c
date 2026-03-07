_QWORD *__fastcall sub_140017DA0(_QWORD *a1, int a2, int a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140086764((_DWORD)a1, a2, a3, 16, (a3 << 8) + 10256, (a3 << 8) + 10264);
  *a1 = &off_1400D5820;
  a1[78] = 0LL;
  a1[79] = 0LL;
  a1[7] = off_1400D5880;
  a1[25] = off_1400D58B0;
  a1[62] = off_1400D58F8;
  a1[77] = 0xA5A5A5A5A5000021uLL;
  a1[80] = 0LL;
  a1[81] = 0LL;
  a1[82] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxQueue::ProductE2fnHardwareRxQueue",
             (__int64)a1);
      v6 = v5;
      if ( v5 )
      {
        sub_14000BFA4(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
