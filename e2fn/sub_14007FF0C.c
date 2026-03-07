void __fastcall sub_14007FF0C(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  int v7; // edx

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareLink::SetAutoNegotiationFlags", a1);
      if ( v6 )
        v3 = v6;
    }
  }
  v7 = *(_DWORD *)(a2 + 24) | 7;
  *(_DWORD *)(a2 + 24) = v7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 368) + 8LL) )
    *(_DWORD *)(a2 + 24) = v7 | 8;
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
}
