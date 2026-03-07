__int64 __fastcall sub_140014614(__int64 a1, int a2)
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
  sub_1400011A8(&v9, (__int64)L"Hardware LTR (Latency Tolerance Reporting)", 0x2AuLL);
  LOBYTE(v4) = 1;
  sub_140070F24(a1, (unsigned int)&v9, a2, v4, 1000);
  v9 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *(_QWORD *)a1 = &off_1400D5658;
  *(_QWORD *)(a1 + 56) = off_1400D5680;
  *(_QWORD *)(a1 + 200) = off_1400D56B0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *(_QWORD *)(a1 + 352) = 0xA5A5A5A5A50000C0uLL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_DWORD *)(a1 + 424) = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::ProductE2fnHardwareLatencyToleranceReporting",
             a1);
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
