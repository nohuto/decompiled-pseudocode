_QWORD *__fastcall sub_140061A18(_QWORD *a1, int a2, int a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rcx
  _QWORD *Pool2; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // rbx

  v4 = a4;
  LOBYTE(a4) = 1;
  sub_140070F24((_DWORD)a1, a2, a3, (_DWORD)a4, 1000);
  a1[47] = 0LL;
  a1[48] = 0LL;
  a1[46] = 0LL;
  *a1 = &off_1400D8328;
  a1[7] = off_1400D8350;
  a1[25] = off_1400D8380;
  a1[44] = &off_1400D83C8;
  a1[45] = 0xA5A5A5A5A50000A6uLL;
  a1[48] = v4[1];
  v4[1] = 0LL;
  v6 = a1[47];
  a1[47] = *v4;
  *v4 = v6;
  a1[49] = 0LL;
  a1[50] = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v8 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeferredProcedureCall::DeferredProcedureCall", (__int64)a1);
      v9 = v8;
      if ( v8 )
      {
        sub_14005A99C(v8);
        ExFreePool(v9);
      }
    }
  }
  v10 = (volatile signed __int32 *)v4[1];
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
