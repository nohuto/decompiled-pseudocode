__int64 __fastcall sub_1400532C4(__int64 a1, int a2)
{
  int v4; // r9d
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 (__fastcall **v9)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v10; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]

  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"Interrupts Vector Allocator", 0x1BuLL);
  LOBYTE(v4) = 1;
  sub_140070F24(a1, (unsigned int)&v9, a2, v4, 1000);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_BYTE *)(a1 + 368) = 1;
  *(_QWORD *)a1 = &off_1400D76F0;
  *(_QWORD *)(a1 + 372) = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D7718;
  *(_QWORD *)(a1 + 200) = off_1400D7748;
  *(_QWORD *)(a1 + 352) = off_1400D7790;
  *(_BYTE *)(a1 + 380) = 1;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 8;
  *(_BYTE *)(a1 + 392) = 1;
  *(_DWORD *)(a1 + 396) = 0;
  *(_DWORD *)(a1 + 400) = 16;
  *(_BYTE *)(a1 + 404) = 1;
  *(_DWORD *)(a1 + 408) = 0;
  *(_BYTE *)(a1 + 416) = 1;
  *(_QWORD *)(a1 + 420) = 1LL;
  *(_BYTE *)(a1 + 428) = 1;
  *(_DWORD *)(a1 + 432) = 1;
  *(_DWORD *)(a1 + 436) = 8;
  *(_BYTE *)(a1 + 440) = 1;
  *(_DWORD *)(a1 + 444) = 1;
  *(_DWORD *)(a1 + 448) = 16;
  *(_BYTE *)(a1 + 452) = 1;
  *(_DWORD *)(a1 + 456) = 1;
  *(_BYTE *)(a1 + 464) = 1;
  *(_BYTE *)(a1 + 476) = 1;
  *(_DWORD *)(a1 + 484) = 8;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000025uLL;
  *(_DWORD *)(a1 + 412) = 24;
  *(_DWORD *)(a1 + 460) = 24;
  *(_QWORD *)(a1 + 468) = 2LL;
  *(_DWORD *)(a1 + 480) = 2;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_DWORD *)(a1 + 544) = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::ProductE2fnInterruptVectorAllocator",
             a1);
      v7 = v6;
      if ( v6 )
      {
        sub_14000BFA4(v6);
        ExFreePool(v7);
      }
    }
  }
  return a1;
}
