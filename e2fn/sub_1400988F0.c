__int64 __fastcall sub_1400988F0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  PVOID v8; // rcx
  _QWORD *Pool2; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  __int64 v14[2]; // [rsp+38h] [rbp-19h] BYREF
  __int64 (__fastcall **v15)(PVOID); // [rsp+48h] [rbp-9h] BYREF
  __int16 v16; // [rsp+50h] [rbp-1h]
  PVOID P; // [rsp+58h] [rbp+7h]
  __int64 v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  __int64 (__fastcall **v20)(PVOID); // [rsp+70h] [rbp+1Fh] BYREF
  __int16 v21; // [rsp+78h] [rbp+27h]
  PVOID v22; // [rsp+80h] [rbp+2Fh]
  __int64 v23; // [rsp+88h] [rbp+37h]
  __int64 v24; // [rsp+90h] [rbp+3Fh]

  v15 = &off_1400D41D0;
  v16 = 0;
  P = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  sub_1400011A8(&v15, (__int64)L"Net Adapter Rx Queue", 0x14uLL);
  v14[1] = a4[1];
  v14[0] = *a4;
  a4[1] = 0LL;
  *a4 = 0LL;
  sub_1400939C0(a1, (__int64)&v15, a2, a3, v14);
  v15 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  v18 = 0LL;
  *(_QWORD *)a1 = &off_1400DA278;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400DA2D0;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 200) = off_1400DA300;
  *(_DWORD *)(a1 + 472) = 0;
  v19 = 0LL;
  *(_QWORD *)(a1 + 448) = 0xA5A5A5A5A5000040uLL;
  *(_OWORD *)(a1 + 480) = 0LL;
  v20 = &off_1400D41D0;
  *(_OWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_OWORD *)(a1 + 520) = 0LL;
  v21 = 0;
  *(_OWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  sub_1400011A8(&v20, (__int64)L"Notification Enabled", 0x14uLL);
  sub_1400120E0(a1 + 576, (__int64)&v20);
  v8 = v22;
  *(_QWORD *)(a1 + 576) = &off_1400D5998;
  *(_QWORD *)(a1 + 584) = off_1400D59C0;
  *(_QWORD *)(a1 + 648) = 0xA5A5A5A5A5000013uLL;
  *(_DWORD *)(a1 + 656) = 0;
  v20 = &off_1400D41D0;
  if ( v8 )
    ExFreePool(v8);
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_WORD *)(a1 + 696) = 0;
  *(_BYTE *)(a1 + 698) = 0;
  *(_OWORD *)(a1 + 704) = 0LL;
  v22 = 0LL;
  *(_OWORD *)(a1 + 720) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_OWORD *)(a1 + 744) = 0LL;
  v23 = 0LL;
  *(_OWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 776) = 0LL;
  v24 = 0LL;
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
  *(_QWORD *)(a1 + 872) = 0LL;
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = 0LL;
  *(_QWORD *)(a1 + 920) = 0LL;
  *(_QWORD *)(a1 + 928) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x1000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v10 = sub_1400918DC(Pool2, (__int64)L"net_adapter::NetAdapterRxQueue::NetAdapterRxQueue", a1);
      v11 = v10;
      if ( v10 )
      {
        sub_140091BA8(v10);
        ExFreePool(v11);
      }
    }
  }
  v12 = (volatile signed __int32 *)a4[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return a1;
}
