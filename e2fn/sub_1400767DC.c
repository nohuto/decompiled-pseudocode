_QWORD *__fastcall sub_1400767DC(_QWORD *a1, __int64 a2)
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
  sub_1400011A8(&v8, (__int64)L"Link", 4uLL);
  sub_140070F24((__int64)a1, (__int64)&v8, a2, 0, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  a1[46] = 0LL;
  *a1 = &off_1400D9560;
  a1[7] = off_1400D9590;
  a1[25] = off_1400D95C0;
  a1[44] = off_1400D9608;
  a1[47] = 0LL;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  a1[45] = 0xA5A5A5A5A5000036uLL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::Link::Link", (__int64)a1);
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
