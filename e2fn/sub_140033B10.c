void __fastcall sub_140033B10(__int64 a1)
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
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareRxFilter::RestoreFilters", a1 - 352);
      if ( v4 )
        v2 = v4;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, a1 + 36);
  sub_1400340B4(a1 - 352, a1 + 40);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
