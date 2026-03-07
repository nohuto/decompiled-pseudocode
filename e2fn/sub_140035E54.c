__int64 __fastcall sub_140035E54(__int64 a1, int a2)
{
  __int64 *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // ebx

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::CalculateFlowControlConstant",
             a1);
      if ( v6 )
        v3 = v6;
    }
  }
  v7 = a2 - 1;
  if ( v7 && (v8 = v7 - 1) != 0 )
  {
    v9 = v8 - 1;
    if ( v9 && (v10 = v9 - 1) != 0 )
    {
      if ( v10 == 1 )
        v11 = 320;
      else
        v11 = 800;
    }
    else
    {
      v11 = 32;
    }
  }
  else
  {
    v11 = 3;
  }
  if ( v3 )
  {
    sub_140005840(v3);
    ExFreePool(v3);
  }
  return v11;
}
