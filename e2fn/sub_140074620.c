void __fastcall sub_140074620(__int64 a1)
{
  __int64 *v1; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v7[13]; // [rsp+30h] [rbp-68h] BYREF

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_140073750(Pool2, (__int64)L"framework::DeviceContext::Cleanup", a1);
      if ( v4 )
        v1 = v4;
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 112LL))(*(_QWORD *)(a1 + 408));
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 4u )
  {
    v5 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v6);
    sub_140073EBC((__int64)v7, v5, (__int64)sub_140072800);
    sub_140002F34((__int64)v7, 0);
    sub_14007450C(v7);
  }
  if ( v1 )
  {
    sub_14007404C(v1);
    ExFreePool(v1);
  }
}
