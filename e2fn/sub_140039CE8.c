_QWORD *__fastcall sub_140039CE8(_QWORD *a1, __int64 a2)
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
  sub_1400011A8(&v8, (__int64)L"Hardware EEE Low-Power Idle feature", 0x23uLL);
  sub_14007E218(a1, &v8, a2);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D6FC0;
  a1[7] = off_1400D6FE8;
  a1[25] = off_1400D7018;
  a1[47] = 0LL;
  a1[48] = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  a1[46] = 0xA5A5A5A5A50000B0uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLowPowerIdle::ProductE2fnHardwareLowPowerIdle",
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
