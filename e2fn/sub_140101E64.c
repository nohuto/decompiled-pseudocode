void __fastcall sub_140101E64(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::EvtD0ExitToS5", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  if ( *(_BYTE *)(a1 + 496) )
    sub_1400FFF9C((_QWORD *)a1);
  else
    sub_1400FF438((_QWORD *)a1);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
