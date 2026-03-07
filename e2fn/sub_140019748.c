_QWORD *__fastcall sub_140019748(_QWORD *a1, int a2)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 (__fastcall **v8)(PVOID); // [rsp+20h] [rbp-30h] BYREF
  __int16 v9; // [rsp+28h] [rbp-28h]
  PVOID P; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]

  v8 = &off_1400D41D0;
  v9 = 0;
  P = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  sub_1400011A8(&v8, (__int64)L"E2fn MSIX Interrupts factory", 0x1CuLL);
  sub_1400196D8(a1, a2, (int)&v8);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D5AB0;
  a1[7] = off_1400D5AF0;
  a1[25] = off_1400D5B20;
  a1[44] = &off_1400D5B68;
  a1[47] = 0LL;
  a1[48] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  a1[46] = 0xA5A5A5A5A5000027uLL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[55] = off_1400D4BE0;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[59] = 0LL;
  a1[60] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnMsixInterruptsFactory::ProductE2fnMsixInterruptsFactory",
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
