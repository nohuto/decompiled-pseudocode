_QWORD *__fastcall sub_14005E214(_QWORD *a1, int a2, int a3)
{
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rdi

  sub_140070F24((_DWORD)a1, a2, a3, 0, 1000);
  a1[45] = 0LL;
  *a1 = &off_1400D7DD8;
  a1[7] = off_1400D7E08;
  a1[25] = off_1400D7E38;
  a1[44] = 0xA5A5A5A5A5000085uLL;
  a1[46] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_14005A6E0(Pool2, (__int64)L"os_services::BaseWorkItem::BaseWorkItem", (__int64)a1);
      v6 = v5;
      if ( v5 )
      {
        sub_14005A99C(v5);
        ExFreePool(v6);
      }
    }
  }
  return a1;
}
