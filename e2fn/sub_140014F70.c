void __fastcall sub_140014F70(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  int v5; // edx
  int v6; // edx

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLatencyToleranceReporting::Configure", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 360) + 12LL);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        sub_1400151DC(a1);
    }
    else
    {
      sub_1400151DC(a1);
      sub_140014EF8(a1);
    }
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
