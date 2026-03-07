__int64 __fastcall sub_14005BC20(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  _QWORD *Pool2; // rax
  __int64 *v6; // rax

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::GetPciConfigSpaceAccessor", a1 - 352);
      if ( v6 )
        v3 = v6;
    }
  }
  sub_1400A5180(a2, a1 + 48);
  if ( v3 )
  {
    sub_14005B5AC(v3);
    ExFreePool(v3);
  }
  return a2;
}
