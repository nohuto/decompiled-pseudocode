__int64 __fastcall sub_1400950D8(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  _QWORD *Pool2; // rax
  _QWORD *v9; // rax
  void *v10; // rbx
  volatile signed __int32 *v11; // rbx
  __int64 v13[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v14)(PVOID); // [rsp+40h] [rbp-30h] BYREF
  __int16 v15; // [rsp+48h] [rbp-28h]
  PVOID P; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]

  v14 = &off_1400D41D0;
  v15 = 0;
  P = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  sub_1400011A8(&v14, (__int64)L"Net Adapter Tx Queue", 0x14uLL);
  v13[1] = a4[1];
  v13[0] = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  sub_1400939C0(a1, (__int64)&v14, a2, a3, v13);
  v14 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *(_QWORD *)a1 = &off_1400DA198;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400DA1F0;
  *(_QWORD *)(a1 + 200) = off_1400DA220;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)(a1 + 448) = 0xA5A5A5A5A5000041uLL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_WORD *)(a1 + 504) = 0;
  *(_BYTE *)(a1 + 506) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_DWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_BYTE *)(a1 + 600) = 0;
  *(_OWORD *)(a1 + 608) = 0LL;
  *(_OWORD *)(a1 + 624) = 0LL;
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_OWORD *)(a1 + 648) = 0LL;
  *(_OWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_OWORD *)(a1 + 688) = 0LL;
  *(_OWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_OWORD *)(a1 + 728) = 0LL;
  *(_OWORD *)(a1 + 744) = 0LL;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_DWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
  *(_QWORD *)(a1 + 800) = 0LL;
  *(_QWORD *)(a1 + 808) = 0LL;
  *(_QWORD *)(a1 + 816) = 0LL;
  *(_QWORD *)(a1 + 824) = 0LL;
  *(_QWORD *)(a1 + 832) = 0LL;
  *(_QWORD *)(a1 + 840) = 0LL;
  *(_QWORD *)(a1 + 848) = 0LL;
  *(_QWORD *)(a1 + 856) = 0LL;
  *(_QWORD *)(a1 + 864) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x800) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_140094FB8(Pool2, (__int64)L"net_adapter::NetAdapterTxQueue::NetAdapterTxQueue", a1);
      v10 = v9;
      if ( v9 )
      {
        sub_1400953B8(v9);
        ExFreePool(v10);
      }
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return a1;
}
