__int64 __fastcall sub_14002259C(__int64 a1, int a2)
{
  unsigned __int64 v4; // rsi
  int v5; // r9d
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 (__fastcall **v10)(PVOID); // [rsp+30h] [rbp-30h] BYREF
  __int16 v11; // [rsp+38h] [rbp-28h]
  PVOID P; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  *(_QWORD *)a1 = &off_1400D6160;
  v11 = 0;
  P = 0LL;
  v10 = &off_1400D41D0;
  v13 = 0LL;
  v14 = 0LL;
  sub_1400011A8(&v10, (__int64)L"Firmware operations", 0x13uLL);
  v4 = a1 + 8;
  LOBYTE(v5) = 1;
  sub_140070F24(a1 + 8, (unsigned int)&v10, a2, v5, 1000);
  v10 = &off_1400D41D0;
  if ( P )
    ExFreePool(P);
  P = 0LL;
  *(_QWORD *)a1 = &off_1400D61E8;
  *(_QWORD *)v4 = off_1400D6278;
  *(_QWORD *)(a1 + 64) = off_1400D62A0;
  *(_QWORD *)(a1 + 208) = off_1400D62D0;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  *(_QWORD *)(a1 + 360) = 0xA5A5A5A5A5000074uLL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_WORD *)(a1 + 480) = -256;
  *(_BYTE *)(a1 + 482) = 0;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::ProductE2fnFirmware",
             v4 & -(__int64)(a1 != 0));
      v8 = v7;
      if ( v7 )
      {
        sub_140005840(v7);
        ExFreePool(v8);
      }
    }
  }
  return a1;
}
