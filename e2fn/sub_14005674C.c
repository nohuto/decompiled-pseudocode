_QWORD *__fastcall sub_14005674C(_QWORD *a1, int a2)
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
  sub_1400011A8(&v8, (__int64)L"Receive Control Register", 0x18uLL);
  sub_14007CA14((_DWORD)a1, (unsigned int)&v8, a2, 256, 1, 1000);
  v8 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *a1 = &off_1400D6808;
  a1[7] = off_1400D6830;
  a1[25] = off_1400D6860;
  v11 = 0LL;
  v12 = 0LL;
  a1[52] = 0xA5A5A5A5A5000080uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(
             Pool2,
             (__int64)L"e1000_hardware::E1000HardwareReceiveControlRegister::E1000HardwareReceiveControlRegister",
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
