_QWORD *__fastcall sub_14002FEC0(_QWORD *a1)
{
  _QWORD *Pool2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rdi

  sub_14005674C();
  *a1 = &off_1400D68A8;
  a1[7] = off_1400D68D0;
  a1[25] = off_1400D6900;
  a1[53] = off_1400D6948;
  a1[54] = 0xA5A5A5A5A500007DuLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v3 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareReceiveControlRegister::ProductE2fnHardwareReceiveControlRegister",
             (__int64)a1);
      v4 = v3;
      if ( v3 )
      {
        sub_14000BFA4(v3);
        ExFreePool(v4);
      }
    }
  }
  return a1;
}
