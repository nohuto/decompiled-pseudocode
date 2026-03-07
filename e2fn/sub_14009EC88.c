__int64 __fastcall sub_14009EC88(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 (__fastcall **v8)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v9; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v8 = &off_1400D41D0;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"WOL patterns event viewer logger", 0x20uLL);
  sub_140070F24(a1, (__int64)&v8, a2, 0, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v11 = 0LL;
  *(_QWORD *)a1 = &off_1400DA578;
  v12 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400DA5A0;
  *(_QWORD *)(a1 + 360) = &off_1400D41D0;
  *(_QWORD *)(a1 + 200) = off_1400DA5D0;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A50000BFuLL;
  *(_WORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 360), (__int64)L"The OS requested to wake from: ", 0x1FuLL);
  *(_QWORD *)(a1 + 400) = &off_1400D41D0;
  *(_WORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 400), (__int64)L"Driver enabled wake during S5 from: ", 0x24uLL);
  *(_QWORD *)(a1 + 440) = &off_1400D41D0;
  *(_WORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 440), (__int64)L"System wake triggered by: ", 0x1AuLL);
  *(_QWORD *)(a1 + 480) = &off_1400D41D0;
  *(_WORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 480), (__int64)L"; ", 2uLL);
  *(_QWORD *)(a1 + 520) = &off_1400D41D0;
  *(_WORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 520), (__int64)L"Magic packet", 0xCuLL);
  *(_QWORD *)(a1 + 560) = &off_1400D41D0;
  *(_WORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 560), (__int64)L"Bitmap pattern", 0xEuLL);
  *(_QWORD *)(a1 + 600) = &off_1400D41D0;
  *(_WORD *)(a1 + 608) = 0;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 632) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 600), (__int64)L"Link status change", 0x12uLL);
  *(_QWORD *)(a1 + 640) = &off_1400D41D0;
  *(_WORD *)(a1 + 648) = 0;
  *(_QWORD *)(a1 + 656) = 0LL;
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 672) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 640), (__int64)L"Packet filter", 0xDuLL);
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_BYTE *)(a1 + 696) = 1;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::WolPatternsEventViewerLogger::WolPatternsEventViewerLogger", a1);
      v6 = v5;
      if ( v5 )
      {
        sub_140073F78(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
