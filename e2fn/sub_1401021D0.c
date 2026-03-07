__int64 __fastcall sub_1401021D0(__int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // ebx

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::GetWakePacketId", a1 - 352);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(_DWORD *)(a1 + 156);
  v6 = 0;
  while ( (v5 & 1) == 0 )
  {
    v5 >>= 1;
    if ( ++v6 >= 0x20 )
    {
      v6 = 0;
      break;
    }
  }
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
  return v6;
}
