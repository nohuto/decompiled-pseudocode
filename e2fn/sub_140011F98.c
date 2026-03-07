__int64 __fastcall sub_140011F98(__int64 a1, int a2, int a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140082428(a1, a2, a3, (a3 << 8) + 14352, (a3 << 8) + 14360, 4, 16);
  *(_QWORD *)a1 = &off_1400D5500;
  *(_QWORD *)(a1 + 640) = 0LL;
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_QWORD *)(a1 + 56) = off_1400D5538;
  *(_QWORD *)(a1 + 200) = off_1400D5568;
  *(_QWORD *)(a1 + 496) = off_1400D55B0;
  *(_QWORD *)(a1 + 632) = 0xA5A5A5A5A5000022uLL;
  *(_OWORD *)(a1 + 656) = 0LL;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_QWORD *)(a1 + 680) = 0LL;
  *(_QWORD *)(a1 + 688) = 0LL;
  *(_WORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 700) = 0LL;
  *(_WORD *)(a1 + 708) = 0;
  *(_BYTE *)(a1 + 710) = 0;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareTxQueue::ProductE2fnHardwareTxQueue", a1);
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
