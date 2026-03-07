_QWORD *__fastcall sub_14005C6A4(_QWORD *a1, int a2, int a3)
{
  PVOID v4; // rcx
  PVOID v5; // rcx
  _QWORD *Pool2; // rax
  _QWORD *v7; // rax
  void *v8; // rbx
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v11; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  sub_140070F24((_DWORD)a1, a2, a3, 1, 1000);
  *a1 = &off_1400D7D10;
  a1[46] = 0LL;
  a1[7] = off_1400D7D38;
  a1[47] = 0LL;
  a1[25] = off_1400D7D68;
  v10 = &off_1400D41D0;
  a1[44] = off_1400D7DB0;
  v11 = 0;
  a1[45] = 0xA5A5A5A5A5000048uLL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[55] = 0LL;
  P = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"Found IOCTLS count", 0x12uLL);
  sub_1400120E0((__int64)(a1 + 56), (__int64)&v10);
  v4 = P;
  a1[56] = &off_1400D46F8;
  a1[57] = off_1400D4720;
  a1[65] = 0xA5A5A5A5A5000012uLL;
  a1[66] = 0LL;
  a1[67] = 10LL;
  v10 = &off_1400D41D0;
  if ( v4 )
    ExFreePool(v4);
  P = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v10 = &off_1400D41D0;
  v11 = 0;
  sub_1400011A8(&v10, (__int64)L"missed IOCTLS count", 0x13uLL);
  sub_1400120E0((__int64)(a1 + 68), (__int64)&v10);
  v5 = P;
  a1[68] = &off_1400D46F8;
  a1[69] = off_1400D4720;
  a1[77] = 0xA5A5A5A5A5000012uLL;
  a1[78] = 0LL;
  a1[79] = 10LL;
  if ( v5 )
    ExFreePool(v5);
  if ( (HIDWORD(DeviceObject->Timer) & 0x20) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005C614(Pool2, (__int64)L"os_services::IoctlDispatcher::IoctlDispatcher", (__int64)a1);
      v8 = v7;
      if ( v7 )
      {
        sub_14005C8D0(v7);
        ExFreePool(v8);
      }
    }
  }
  return a1;
}
