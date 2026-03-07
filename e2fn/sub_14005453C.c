void __fastcall sub_14005453C(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int *v5; // rcx
  __int64 v6; // r8
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnInterruptVectorAllocator::EvtD0Exit", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = dword_1400D76E0;
  v6 = 3LL;
  do
  {
    *(_DWORD *)(*v5 + *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8LL)) = 0;
    _InterlockedOr(v7, 0);
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
