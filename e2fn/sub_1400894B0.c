__int64 __fastcall sub_1400894B0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx

  sub_140070F24(a1, a3, a2, 1, 1000);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)a1 = &off_1400D6A10;
  *(_QWORD *)(a1 + 56) = off_1400D6A48;
  *(_QWORD *)(a1 + 200) = off_1400D6A78;
  *(_QWORD *)(a1 + 352) = off_1400D6AC0;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000033uLL;
  *(_DWORD *)(a1 + 384) = *a4;
  *(_DWORD *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 392) = off_1400D6A08;
  *(_QWORD *)(a1 + 440) = a5;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxFilter::HardwareRxFilter", a1);
      v9 = v8;
      if ( v8 )
      {
        sub_14000BFA4(v8);
        ExFreePool(v9);
      }
    }
  }
  return a1;
}
