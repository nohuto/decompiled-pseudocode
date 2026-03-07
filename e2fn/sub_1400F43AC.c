__int64 __fastcall sub_1400F43AC(__int64 a1, int a2, int a3)
{
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 (__fastcall **v10)(PVOID); // [rsp+40h] [rbp-30h] BYREF
  __int16 v11; // [rsp+48h] [rbp-28h]
  PVOID P; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  v10 = &off_1400D41D0;
  v11 = 0;
  P = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"E2fn Hardware Receive Scaling", 0x1DuLL);
  sub_14012E898(a1, a2, (unsigned int)&v10, 128, 1, 0LL, 1, 61);
  v10 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  *(_DWORD *)(a1 + 464) = a3;
  *(_QWORD *)a1 = &off_1400D5188;
  *(_QWORD *)(a1 + 56) = off_1400D51C0;
  *(_QWORD *)(a1 + 200) = off_1400D51F0;
  *(_QWORD *)(a1 + 352) = off_1400D5238;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  P = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  *(_QWORD *)(a1 + 456) = 0xA5A5A5A5A50000B5uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareReceiveScaling::ProductE2fnHardwareReceiveScaling",
             a1);
      v8 = v7;
      if ( v7 )
      {
        sub_14000BFA4(v7);
        ExFreePool(v8);
      }
    }
  }
  return a1;
}
