__int64 __fastcall sub_14007E218(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140070F24(a1, a2, a3, 0, 1000);
  *(_BYTE *)(a1 + 360) = 0;
  *(_QWORD *)a1 = &off_1400D6F20;
  *(_QWORD *)(a1 + 56) = off_1400D6F48;
  *(_QWORD *)(a1 + 200) = off_1400D6F78;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A50000B1uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareLowPowerIdle::HardwareLowPowerIdle", a1);
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
