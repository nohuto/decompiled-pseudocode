__int64 __fastcall sub_14008FF48(__int64 a1, __int64 a2)
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
  sub_1400011A8(&v8, (__int64)L"Net Adapter wake on LAN patterns", 0x20uLL);
  sub_140070F24(a1, (__int64)&v8, a2, 1, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_DWORD *)(a1 + 360) = 0;
  *(_QWORD *)a1 = &off_1400D9E20;
  *(_BYTE *)(a1 + 364) = 0;
  *(_QWORD *)(a1 + 56) = off_1400D9E48;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 200) = off_1400D9E78;
  *(_QWORD *)(a1 + 376) = 0LL;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A5000095uLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  sub_1400B6C40(a1 + 416, 0LL, 72LL);
  *(_DWORD *)(a1 + 420) = 0;
  *(_QWORD *)(a1 + 424) = off_1400D4D58;
  *(_QWORD *)(a1 + 456) = off_1400D4D58;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_DWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::NetAdapterWolPatterns", a1);
      v6 = v5;
      if ( v5 )
      {
        sub_140075108(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
