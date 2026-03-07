__int64 __fastcall sub_14012E898(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbx

  sub_140070F24(a1, a3, a2, 1, 1000);
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)a1 = &off_1400D5088;
  *(_QWORD *)(a1 + 56) = off_1400D50C0;
  *(_QWORD *)(a1 + 200) = off_1400D50F0;
  *(_QWORD *)(a1 + 352) = off_1400D5138;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A50000B6uLL;
  *(_DWORD *)(a1 + 400) = a5;
  *(_QWORD *)(a1 + 408) = a6;
  *(_BYTE *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 416) = a7;
  *(_DWORD *)(a1 + 420) = a8;
  *(_QWORD *)(a1 + 392) = a4;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareReceiveScaling::HardwareReceiveScaling", a1);
      v12 = v11;
      if ( v11 )
      {
        sub_14000BFA4(v11);
        ExFreePool(v12);
      }
    }
  }
  return a1;
}
