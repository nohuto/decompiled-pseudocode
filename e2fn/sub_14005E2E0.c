_QWORD *__fastcall sub_14005E2E0(_QWORD *a1, int a2, int a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *Pool2; // rax
  __int64 *v9; // rax
  __int64 *v10; // rbx
  volatile signed __int32 *v11; // rbx

  sub_14005E214(a1, a2, a3);
  *a1 = &off_1400D7F40;
  a1[7] = off_1400D7F70;
  a1[25] = off_1400D7FA0;
  a1[47] = off_1400D7FE8;
  a1[48] = 0xA5A5A5A5A5000087uLL;
  a1[49] = 0LL;
  a1[50] = 0LL;
  a1[51] = 0LL;
  a1[52] = 0LL;
  a1[53] = 0LL;
  a1[54] = 0LL;
  a1[54] = a4[1];
  v6 = *a4;
  a4[1] = 0LL;
  v7 = a1[53];
  a1[53] = v6;
  *a4 = v7;
  a1[55] = 0LL;
  a1[56] = 0LL;
  a1[57] = 0LL;
  a1[58] = 0LL;
  a1[60] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v9 = sub_14005A6E0(Pool2, (__int64)L"os_services::SerializedWorkItem::SerializedWorkItem", (__int64)a1);
      v10 = v9;
      if ( v9 )
      {
        sub_14005A99C(v9);
        ExFreePool(v10);
      }
    }
  }
  v11 = (volatile signed __int32 *)a4[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return a1;
}
