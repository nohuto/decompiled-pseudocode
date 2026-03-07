void __fastcall sub_140033470(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rbx
  void (__fastcall ***v6)(_QWORD, __int64); // r8

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::ClearMulticastAddressList",
             (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = a1[53];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (void (__fastcall ***)(_QWORD, __int64))a1[50];
  if ( v6 )
  {
    if ( *(v6 - 1) )
    {
      (**v6)(a1[50], 3LL);
    }
    else if ( v6 != (void (__fastcall ***)(_QWORD, __int64))8 )
    {
      ExFreePool(v6 - 1);
    }
    a1[50] = 0LL;
  }
  a1[51] = 0LL;
  a1[52] = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
