__int64 __fastcall sub_14006BBA8(_QWORD *a1)
{
  __int64 *v2; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax

  *a1 = &off_1400D8CD8;
  v2 = 0LL;
  a1[7] = off_1400D8D00;
  a1[25] = off_1400D8D30;
  a1[44] = off_1400D8D78;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBuffer::~CommonBuffer", (__int64)a1);
      if ( v4 )
        v2 = v4;
    }
  }
  if ( a1[46] )
  {
    (*(void (__fastcall **)(__int64))(qword_1400DF678 + 1664))(qword_1400DF6A8);
    a1[46] = 0LL;
  }
  if ( v2 )
  {
    sub_14005B5AC(v2);
    ExFreePool(v2);
  }
  a1[44] = &off_1400D47C0;
  return sub_14007134C(a1);
}
