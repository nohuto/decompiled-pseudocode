void __fastcall sub_14010A1C0(__int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::OsResources::EvtReleaseHardware", a1 - 352);
      if ( v4 )
        v2 = v4;
    }
  }
  sub_1400686DC(*(_QWORD *)(a1 + 80));
  sub_14010E608(*(_QWORD *)(a1 + 32));
  if ( v2 )
  {
    sub_14005B5AC(v2);
    ExFreePool(v2);
  }
}
