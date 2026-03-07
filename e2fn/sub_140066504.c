__int64 __fastcall sub_140066504(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  void (__fastcall *v5)(_QWORD); // rax

  *a1 = &off_1400D8838;
  v2 = 0LL;
  a1[7] = off_1400D8860;
  a1[25] = off_1400D8890;
  a1[44] = off_1400D88D8;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::PciConfigSpaceAccessor::~PciConfigSpaceAccessor", (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  if ( a1[53] )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[49];
    if ( v5 )
      v5(a1[47]);
  }
  if ( v2 )
  {
    sub_14005B5AC(v2);
    ExFreePool(v2);
  }
  a1[44] = &off_1400D47C0;
  return sub_14007134C(a1);
}
