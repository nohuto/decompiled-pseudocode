_QWORD *__fastcall sub_14000BC6C(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  _QWORD *Pool2; // rax
  _QWORD *v6; // rax
  void *v7; // rbx
  __int64 (__fastcall **v9)(PVOID); // [rsp+28h] [rbp-19h] BYREF
  __int16 v10; // [rsp+30h] [rbp-11h]
  PVOID P; // [rsp+38h] [rbp-9h]
  __int64 v12; // [rsp+40h] [rbp-1h]
  __int64 v13; // [rsp+48h] [rbp+7h]
  _BYTE v14[72]; // [rsp+50h] [rbp+Fh] BYREF

  v9 = &off_1400D41D0;
  v10 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  sub_1400011A8(&v9, (__int64)L"E2f Hardware Abstraction", 0x18uLL);
  v4 = sub_14000BF28(v14);
  sub_140077224(a1, &v9, a2, v4);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D4BE8;
  a1[7] = off_1400D4C10;
  a1[25] = off_1400D4C40;
  a1[44] = off_1400D4C88;
  a1[62] = 0LL;
  a1[63] = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  a1[61] = 0xA5A5A5A5A500001EuLL;
  a1[64] = 0LL;
  a1[65] = 0LL;
  a1[66] = 0LL;
  a1[67] = 0LL;
  a1[68] = 0LL;
  a1[69] = 0LL;
  a1[70] = 0LL;
  a1[71] = 0LL;
  a1[72] = off_1400D4BE0;
  a1[76] = off_1400D4BE0;
  a1[73] = 0LL;
  a1[74] = 0LL;
  a1[75] = 0LL;
  a1[77] = 0LL;
  a1[78] = 0LL;
  a1[79] = 0LL;
  a1[80] = 0LL;
  a1[81] = 0LL;
  a1[82] = 0LL;
  a1[83] = 0LL;
  a1[84] = 0LL;
  a1[85] = 0LL;
  a1[86] = 0LL;
  a1[87] = 0LL;
  a1[88] = 0LL;
  a1[89] = 0LL;
  a1[90] = 0LL;
  a1[91] = 0LL;
  a1[92] = 0LL;
  a1[93] = 0LL;
  a1[94] = 0LL;
  a1[95] = 0LL;
  a1[96] = 0LL;
  a1[97] = 0LL;
  a1[98] = 0LL;
  a1[99] = 0LL;
  a1[100] = 0LL;
  a1[101] = 0LL;
  a1[102] = 0LL;
  a1[103] = 0LL;
  a1[104] = 0LL;
  a1[105] = 0LL;
  a1[106] = 0LL;
  a1[107] = 0LL;
  a1[108] = 0LL;
  a1[109] = 0LL;
  a1[110] = 0LL;
  a1[111] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareAbstraction::ProductE2fnHardwareAbstraction",
             (__int64)a1);
      v7 = v6;
      if ( v6 )
      {
        sub_14000BFA4(v6);
        ExFreePool(v7);
      }
    }
  }
  return a1;
}
