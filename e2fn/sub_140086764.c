__int64 __fastcall sub_140086764(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 *v12; // rbx
  __int64 (__fastcall **v14)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v15; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+48h] [rbp-18h]
  __int64 v18; // [rsp+50h] [rbp-10h]

  v14 = &off_1400D41D0;
  v15 = 0;
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  sub_1400011A8(&v14, (__int64)L"Rx", 2uLL);
  sub_14007A6F4(a1, a2, &v14, a3, a5, a6);
  v14 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)a1 = &off_1400D5708;
  *(_QWORD *)(a1 + 56) = off_1400D5748;
  *(_QWORD *)(a1 + 200) = off_1400D5778;
  *(_QWORD *)(a1 + 496) = off_1400D57C0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_DWORD *)(a1 + 512) = a4;
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)(a1 + 504) = 0xA5A5A5A5A500005FuLL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = off_1400D4D58;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_DWORD *)(a1 + 600) = 0;
  *(_QWORD *)(a1 + 608) = 1000LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareRxQueue::HardwareRxQueue", a1);
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
