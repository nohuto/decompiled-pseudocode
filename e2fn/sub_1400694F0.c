__int64 __fastcall sub_1400694F0(__int64 a1, int a2)
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
  sub_1400011A8(&v9, (__int64)L"System Power", 0xCuLL);
  LOBYTE(v4) = 1;
  sub_140070F24(a1, (unsigned int)&v9, a2, v4, 1000);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_QWORD *)a1 = &off_1400D8AC8;
  *(_QWORD *)(a1 + 56) = off_1400D8AF0;
  *(_QWORD *)(a1 + 200) = off_1400D8B20;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 352) = off_1400D8B68;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000089uLL;
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"State", 5uLL);
  sub_140069460(a1 + 384, (__int64)&v9, (__int64)L"Uninitialized");
  if ( P )
    ExFreePool(P);
  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"State", 5uLL);
  sub_140069460(a1 + 504, (__int64)&v9, (__int64)L"Uninitialized");
  if ( P )
    ExFreePool(P);
  *(_DWORD *)(a1 + 624) = 0;
  *(_BYTE *)(a1 + 628) = 0;
  *(_QWORD *)(a1 + 632) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::SystemPower", a1);
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
