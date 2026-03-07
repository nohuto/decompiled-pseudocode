__int64 __fastcall sub_140067D80(__int64 a1, int a2)
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
  sub_1400011A8(&v9, (__int64)L"Os Interrupts Pool", 0x12uLL);
  LOBYTE(v4) = 1;
  sub_140070F24(a1, (unsigned int)&v9, a2, v4, 1000);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)a1 = &off_1400D89F8;
  *(_QWORD *)(a1 + 56) = off_1400D8A20;
  *(_QWORD *)(a1 + 200) = off_1400D8A50;
  *(_QWORD *)(a1 + 352) = off_1400D8A98;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A500004EuLL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::OsInterruptsPool", a1);
      v7 = v6;
      if ( v6 )
      {
        sub_14005B5AC(v6);
        ExFreePool(v7);
      }
    }
  }
  return a1;
}
