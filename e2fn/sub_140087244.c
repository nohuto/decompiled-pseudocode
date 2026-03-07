__int64 __fastcall sub_140087244(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140070F24(a1, a2, a3, 1, 1000);
  *(_QWORD *)a1 = &off_1400D5BB8;
  *(_QWORD *)(a1 + 56) = off_1400D5BF0;
  *(_QWORD *)(a1 + 200) = off_1400D5C20;
  *(_QWORD *)(a1 + 352) = off_1400D5C68;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000060uLL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = &off_1400D41D0;
  *(_WORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTrafficGate::HardwareTrafficGate", a1);
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
