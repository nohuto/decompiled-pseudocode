__int64 __fastcall sub_140074E70(__int64 a1, __int64 a2)
{
  void *v4; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v6; // rax
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
  sub_1400011A8(&v8, (__int64)L"Net Adapter", 0xBuLL);
  sub_140070F24(a1, (__int64)&v8, a2, 0, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)a1 = &off_1400D9438;
  v4 = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 56) = off_1400D9460;
  *(_QWORD *)(a1 + 200) = off_1400D9490;
  *(_QWORD *)(a1 + 352) = off_1400D94D8;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A500003AuLL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = off_1400D4BE0;
  *(_QWORD *)(a1 + 592) = off_1400D4BE0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapter::NetAdapter", a1);
      if ( v6 )
        v4 = v6;
    }
  }
  LOBYTE(v9) = 0;
  v8 = &off_1400D41D0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400010F4(&v8, (__int64)"NetAdapter", 0xAuLL);
  sub_1400715AC((_QWORD *)a1, (__int64)&v8, 0x400u, 0xC8u);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  if ( v4 )
  {
    sub_140075108(v4);
    ExFreePool(v4);
  }
  return a1;
}
