_QWORD *__fastcall sub_14003BA48(_QWORD *a1, int a2)
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
  sub_1400011A8(&v9, (__int64)L"Hardware operations", 0x13uLL);
  LOBYTE(v4) = 1;
  sub_140070F24((_DWORD)a1, (unsigned int)&v9, a2, v4, 1000);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D7120;
  a1[7] = off_1400D7148;
  a1[25] = off_1400D7178;
  a1[45] = 0LL;
  a1[46] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  a1[44] = 0xA5A5A5A5A50000C3uLL;
  a1[47] = 0LL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400045E8(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareNvm::ProductE2fnHardwareNvm", (__int64)a1);
      v7 = v6;
      if ( v6 )
      {
        sub_140005840(v6);
        ExFreePool(v7);
      }
    }
  }
  return a1;
}
