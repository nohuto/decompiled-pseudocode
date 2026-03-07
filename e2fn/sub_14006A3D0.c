__int64 __fastcall sub_14006A3D0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // rbx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax

  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::GetPower", a1 - 352);
      if ( v8 )
        v4 = v8;
    }
  }
  sub_14006DB8C(*(_QWORD *)(a1 + 16), a2, a3);
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return a2;
}
