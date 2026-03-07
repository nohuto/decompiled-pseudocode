char __fastcall sub_140023888(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 *v5; // rdi
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  char v9; // bl
  __int64 v10; // rax

  v4 = a3;
  v5 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x2000) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_1400045E8(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnFirmware::CalculateChecksumForFirmware",
             (a1 + 8) & -(__int64)(a1 != 0));
      if ( v8 )
        v5 = v8;
    }
  }
  v9 = 0;
  if ( a2 )
  {
    if ( (_DWORD)v4 )
    {
      v10 = v4;
      do
      {
        v9 += *a2++;
        --v10;
      }
      while ( v10 );
    }
    v9 = -v9;
  }
  if ( v5 )
  {
    sub_140005840(v5);
    ExFreePool(v5);
  }
  return v9;
}
