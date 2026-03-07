__int64 __fastcall sub_140102270(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int v5; // edi

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::GetWakePacketSize", a1 - 352);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(_DWORD *)(a1 + 160);
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
  return v5;
}
