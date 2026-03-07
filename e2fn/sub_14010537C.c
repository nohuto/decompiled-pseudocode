void __fastcall sub_14010537C(__int64 a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  int v6; // ebx
  unsigned int v7; // ebx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(Pool2, (__int64)L"product_e2fn::ProductE2fnHardwareLowPowerLinkUp::Configure", a1);
      if ( v4 )
        v2 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 360);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 3604LL) | 0x1008;
  v9 = 0;
  sub_140106860(v5, &v9);
  if ( v9 )
    v7 = v6 | 0x200;
  else
    v7 = v6 & 0xFFFFFDFF;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) + 3604LL) = v7;
  _InterlockedOr(v8, 0);
  if ( v2 )
  {
    sub_14000BFA4(v2);
    ExFreePool(v2);
  }
}
