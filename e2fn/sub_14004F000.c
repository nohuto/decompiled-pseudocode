__int64 __fastcall sub_14004F000(__int64 a1, int a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 *v7; // rbx
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
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
  sub_1400011A8(&v11, (__int64)L"Interrupt Cause Register", 0x18uLL);
  LOBYTE(v4) = 1;
  sub_140070F24(a1, (unsigned int)&v11, a2, v4, 1000);
  v11 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *(_QWORD *)a1 = &off_1400D7538;
  v5 = 32LL;
  v14 = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D7560;
  *(_QWORD *)(a1 + 200) = off_1400D7590;
  *(_QWORD *)(a1 + 352) = off_1400D75D8;
  v15 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000023uLL;
  v6 = a1 + 392;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_DWORD *)(a1 + 384) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  do
  {
    *(_QWORD *)v6 = &off_1400D41D0;
    *(_WORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    v6 += 40LL;
    --v5;
  }
  while ( v5 );
  *(_QWORD *)(a1 + 1672) = &off_1400D41D0;
  *(_WORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_QWORD *)(a1 + 1704) = 0LL;
  sub_1400011A8((_QWORD *)(a1 + 1672), (__int64)L"Unknown", 7uLL);
  v7 = 0LL;
  *(_OWORD *)(a1 + 1712) = 0LL;
  *(_OWORD *)(a1 + 1728) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnInterruptCauseRegister::ProductE2fnInterruptCauseRegister",
             a1);
      if ( v9 )
        v7 = v9;
    }
  }
  sub_14005045C(a1);
  sub_14005073C(a1);
  if ( v7 )
  {
    sub_14000BFA4(v7);
    ExFreePool(v7);
  }
  return a1;
}
