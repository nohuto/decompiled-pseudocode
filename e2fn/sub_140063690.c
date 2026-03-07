__int64 __fastcall sub_140063690(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5)
{
  __int64 *v6; // rbx
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  _QWORD v16[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005A6E0(Pool2, (__int64)L"os_services::OsTimerFactory::CreatePassiveLevelTimer", a1 - 352);
      if ( v11 )
        v6 = v11;
    }
  }
  v12 = a4[1];
  a4[1] = 0LL;
  v16[1] = v12;
  v13 = *a4;
  *a4 = 0LL;
  v16[0] = v13;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *, _DWORD, __int64))(*(_QWORD *)(a1 - 352) + 40LL))(
    a1 - 352,
    a2,
    a3,
    v16,
    0,
    a5);
  if ( v6 )
  {
    sub_14005A99C(v6);
    ExFreePool(v6);
  }
  v14 = (volatile signed __int32 *)a4[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  return a2;
}
