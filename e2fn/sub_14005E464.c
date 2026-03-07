_QWORD *__fastcall sub_14005E464(_QWORD *a1, int a2, int a3, _QWORD *a4)
{
  __int64 v6; // rcx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // rbx

  sub_14005E214(a1, a2, a3);
  a1[49] = 0LL;
  a1[50] = 0LL;
  *a1 = &off_1400D7E80;
  a1[7] = off_1400D7EB0;
  a1[25] = off_1400D7EE0;
  a1[47] = off_1400D7F28;
  a1[48] = 0xA5A5A5A5A5000086uLL;
  a1[50] = a4[1];
  a4[1] = 0LL;
  v6 = a1[49];
  a1[49] = *a4;
  *a4 = v6;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005A6E0(Pool2, (__int64)L"os_services::WorkItem::WorkItem", (__int64)a1);
      v9 = v8;
      if ( v8 )
      {
        sub_14005A99C(v8);
        ExFreePool(v9);
      }
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return a1;
}
