_QWORD *__fastcall sub_140032650(_QWORD *a1, int a2)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 (__fastcall **v8)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v9; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  __int64 v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF

  v13 = 31;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v8 = &off_1400D41D0;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"E2fn hardware Rx filter", 0x17uLL);
  sub_1400894B0((_DWORD)a1, a2, (unsigned int)&v8, (unsigned int)&v13, 128LL);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D6AF8;
  a1[7] = off_1400D6B40;
  a1[25] = off_1400D6B70;
  a1[44] = off_1400D6BB8;
  a1[57] = 0LL;
  a1[58] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  a1[56] = 0xA5A5A5A5A500007EuLL;
  a1[59] = 0LL;
  a1[60] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::ProductE2fnHardwareRxFilter",
             (__int64)a1);
      v6 = v5;
      if ( v5 )
      {
        sub_14000BFA4(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
