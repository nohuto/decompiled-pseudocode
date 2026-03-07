__int64 __fastcall sub_14002DE50(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int v5; // ebx
  int v6; // eax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::GetWakeReason", a1 - 352);
      if ( v4 )
        v2 = v4;
    }
  }
  if ( *(_DWORD *)(a1 + 156) )
  {
    v5 = 5;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 152);
    v5 = 1;
    if ( v6 )
    {
      v5 = 2;
      if ( (v6 & 1) == 0 )
      {
        if ( (v6 & 2) != 0 )
        {
          v5 = 3;
        }
        else if ( (v6 & 0x1C) != 0 )
        {
          v5 = 4;
        }
        else
        {
          v5 = 0;
        }
      }
    }
  }
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
  return v5;
}
