void __fastcall sub_140037160(__int64 *a1)
{
  __int64 *v1; // rsi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  unsigned int *v5; // rdi
  __int64 v6; // rbx
  unsigned int v7; // eax

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareFlowControl::Configure", (__int64)a1);
      if ( v4 )
        v1 = v4;
    }
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(a1[49] + 352) + 8LL))(a1[49] + 352) == 1 )
  {
    v5 = (unsigned int *)a1[51];
    v6 = *a1;
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1[53] + 352) + 8LL))(a1[53] + 352);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v6 + 40))(a1, v5[2], v7, *v5);
  }
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
