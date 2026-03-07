_QWORD *__fastcall sub_140050D1C(_QWORD *a1, int a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 (__fastcall **v11)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v12; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v11 = &off_1400D41D0;
  v12 = 0;
  P = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  sub_1400011A8(&v11, (__int64)L"Other interrupts dispatcher ", 0x1CuLL);
  LOBYTE(v4) = 1;
  sub_140070F24((_DWORD)a1, (unsigned int)&v11, a2, v4, 1000);
  v11 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D7618;
  v5 = 32LL;
  a1[45] = 0LL;
  a1[7] = off_1400D7640;
  a1[25] = off_1400D7670;
  a1[46] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  a1[44] = 0xA5A5A5A5A5000029uLL;
  v6 = a1 + 53;
  a1[47] = 0LL;
  a1[48] = 0LL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[52] = 0LL;
  do
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6 += 2;
    --v5;
  }
  while ( v5 );
  a1[117] = 0LL;
  sub_1400B6C40(a1 + 118, 0LL, 256LL);
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnOtherInterruptsDispatcher::ProductE2fnOtherInterruptsDispatcher",
             (__int64)a1);
      v9 = v8;
      if ( v8 )
      {
        sub_14000BFA4(v8);
        ExFreePool(v9);
      }
    }
  }
  return a1;
}
