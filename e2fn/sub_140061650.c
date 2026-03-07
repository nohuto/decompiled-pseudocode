_QWORD *__fastcall sub_140061650(_QWORD *a1, int a2, __int64 (__fastcall ***a3)(PVOID P), __int64 a4, __int64 a5)
{
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx

  sub_1400612BC((__int64)a1, a2, a3, a4, a5);
  a1[68] = 0LL;
  *a1 = &off_1400D8170;
  a1[7] = off_1400D8198;
  a1[25] = off_1400D81C8;
  a1[66] = off_1400D8210;
  a1[67] = 0xA5A5A5A5A5000082uLL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::ReadFileAccessor::ReadFileAccessor", (__int64)a1);
      v8 = v7;
      if ( v7 )
      {
        sub_14005A99C(v7);
        ExFreePool(v8);
      }
    }
  }
  return a1;
}
