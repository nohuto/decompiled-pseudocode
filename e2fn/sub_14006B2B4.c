__int64 __fastcall sub_14006B2B4(__int64 a1, int a2, int a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140070F24(a1, a2, a3, 1, 1000);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 368) = 0;
  *(_QWORD *)a1 = &off_1400D8C18;
  *(_QWORD *)(a1 + 56) = off_1400D8C40;
  *(_QWORD *)(a1 + 200) = off_1400D8C70;
  *(_QWORD *)(a1 + 352) = off_1400D8CB8;
  *(_DWORD *)(a1 + 372) = 2;
  *(_QWORD *)(a1 + 376) = 0xA5A5A5A5A500004AuLL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005B310(Pool2, (__int64)L"os_resources::MemoryMappedIoAccessor::MemoryMappedIoAccessor", a1);
      v6 = v5;
      if ( v5 )
      {
        sub_14005B5AC(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
