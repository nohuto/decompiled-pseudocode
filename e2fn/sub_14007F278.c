_QWORD *__fastcall sub_14007F278(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140070F24((__int64)a1, a2, a3, 1, 1000);
  a1[46] = 0LL;
  a1[47] = 0LL;
  *a1 = &off_1400D4E20;
  a1[7] = off_1400D4E48;
  a1[25] = off_1400D4E78;
  a1[44] = &off_1400D4EC0;
  a1[45] = 0xA5A5A5A5A5000032uLL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[53] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareLink::HardwareLink", (__int64)a1);
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
