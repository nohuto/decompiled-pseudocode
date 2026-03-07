_QWORD *__fastcall sub_14005B3A0(_QWORD *a1, int a2)
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
  sub_1400011A8(&v8, (__int64)L"OS Resources", 0xCuLL);
  sub_140070F24((_DWORD)a1, (unsigned int)&v8, a2, 0, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  a1[46] = 0LL;
  *a1 = &off_1400D7B58;
  v4 = 0LL;
  a1[47] = 0LL;
  a1[7] = off_1400D7B80;
  a1[25] = off_1400D7BB0;
  a1[44] = off_1400D7BF8;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  a1[45] = 0xA5A5A5A5A500004FuLL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[55] = 0LL;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[59] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::OsResources", (__int64)a1);
      if ( v6 )
        v4 = v6;
    }
  }
  LOBYTE(v9) = 0;
  v8 = &off_1400D41D0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400010F4(&v8, (__int64)"OsResources", 0xBuLL);
  sub_1400715AC(a1, &v8, 1024LL, 200LL);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return a1;
}
