void __fastcall sub_14007FFAC(__int64 a1, __int64 a2)
{
  __int64 *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14000BBDC(Pool2, (__int64)L"hardware_abstraction::HardwareLink::SetPauseFunctionType", a1);
      if ( v6 )
        v3 = v6;
    }
  }
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 368) + 8LL);
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          *(_DWORD *)(a2 + 20) = 4;
        else
          *(_DWORD *)(a2 + 20) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 20) = 3;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 20) = 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 20) = 1;
  }
  if ( v3 )
  {
    sub_14000BFA4(v3);
    ExFreePool(v3);
  }
}
