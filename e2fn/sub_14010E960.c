void __fastcall sub_14010E960(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  unsigned int v9; // edi

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBufferFactory::AdjustAlignmentRequirement", a1);
      if ( v8 )
        v4 = v8;
    }
  }
  v9 = a3 - 1;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(qword_1400DF678 + 416))(qword_1400DF6A8, a2) < v9 )
  {
    _mm_lfence();
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_1400DF678 + 424))(qword_1400DF6A8, a2, v9);
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
}
