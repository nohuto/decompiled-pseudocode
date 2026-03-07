void __fastcall sub_1400F4310(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLink::GetConnectionInfoBeforeD3", a1 - 352);
      if ( v6 )
        v2 = v6;
    }
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
