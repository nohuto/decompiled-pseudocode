__int64 __fastcall sub_140101F90(__int64 a1)
{
  _QWORD *Pool2; // rax
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbx

  if ( (HIDWORD(DeviceObject->Timer) & 0x200) == 0 )
    return a1 + 20;
  if ( BYTE1(DeviceObject->Timer) < 8u )
    return a1 + 20;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
  if ( !Pool2 )
    return a1 + 20;
  v3 = sub_14000BBDC(
         Pool2,
         (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::GetLinkStatusChangeCapabilities",
         a1 - 352);
  v4 = v3;
  if ( !v3 )
    return a1 + 20;
  v5 = a1 + 20;
  sub_14000BFA4(v3);
  ExFreePool(v4);
  return v5;
}
