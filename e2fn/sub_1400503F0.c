void __fastcall sub_1400503F0(__int64 a1)
{
  _QWORD *Pool2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rbx

  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v3 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptCauseRegister::EvtD0Exit", a1);
      v4 = v3;
      if ( v3 )
      {
        sub_14000BFA4(v3);
        ExFreePool(v4);
      }
    }
  }
}
