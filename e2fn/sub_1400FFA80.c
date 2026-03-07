void __fastcall sub_1400FFA80(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x200) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14000BBDC(
             Pool2,
             (__int64)L"product_e2fn::ProductE2fnHardwareWolPatterns::DisableWakeFromUnicastPacket",
             a1 - 352);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(a1 + 146) = 0;
  v6 = *(_QWORD *)(v5 + 8);
  if ( v6 && !*(_DWORD *)(v5 + 20) )
  {
    v7 = *(_DWORD *)(v6 + 22536);
    if ( v7 == -1 && *(_DWORD *)(*(_QWORD *)(v5 + 8) + 8LL) == -1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, 3LL);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(v5 + 8) + 22536LL) = v7 & 0xFFFFFFFB;
      _InterlockedOr(v8, 0);
    }
  }
  if ( v1 )
  {
    sub_14000BFA4(v1);
    ExFreePool(v1);
  }
}
