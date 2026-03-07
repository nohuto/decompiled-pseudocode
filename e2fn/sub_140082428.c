__int64 __fastcall sub_140082428(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  _QWORD *Pool2; // rax
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 (__fastcall **v15)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v16; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  v15 = &off_1400D41D0;
  v16 = 0;
  P = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1400011A8(&v15, (__int64)L"Tx", 2uLL);
  sub_14007A6F4(a1, a2, &v15, a3, a4, a5);
  v15 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)a1 = &off_1400D53F0;
  *(_QWORD *)(a1 + 56) = off_1400D5428;
  *(_QWORD *)(a1 + 200) = off_1400D5458;
  *(_QWORD *)(a1 + 496) = off_1400D54A0;
  *(_QWORD *)(a1 + 520) = 0LL;
  P = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *(_QWORD *)(a1 + 504) = 0xA5A5A5A5A500005CuLL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = off_1400D4D58;
  *(_DWORD *)(a1 + 584) = a6;
  *(_DWORD *)(a1 + 588) = a7;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 624) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v12 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareTxQueue::HardwareTxQueue", a1);
      v13 = v12;
      if ( v12 )
      {
        sub_14000BFA4(v12);
        ExFreePool(v13);
      }
    }
  }
  return a1;
}
