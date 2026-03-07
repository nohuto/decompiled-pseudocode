__int64 __fastcall sub_14010FFC4(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rdi
  _QWORD *Pool2; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // esi
  volatile signed __int32 *v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+38h] [rbp-20h]
  _BYTE v18[8]; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-10h]

  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v6 = sub_14005B310(Pool2, (__int64)L"os_resources::OsInterruptsPool::Initialize", (__int64)a1);
      if ( v6 )
        v3 = v6;
    }
  }
  v7 = a1[47];
  a1[46] = a2;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 8LL))(v7, &v16);
  v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 8LL))(v16, v18);
  v9 = a1[50];
  a1[50] = v8[1];
  v10 = *v8;
  v8[1] = v9;
  v11 = a1[49];
  a1[49] = v10;
  *v8 = v11;
  v12 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( a1[49] )
  {
    v13 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      sub_1400A3054(*(_QWORD *)(*((_QWORD *)P + 1) + 16LL), 2u, 4LL, 0xBu, (__int64)&unk_1400D89D0, L"m_poolLock");
    v13 = -1073741801;
  }
  v14 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( v3 )
  {
    sub_14005B5AC(v3);
    ExFreePool(v3);
  }
  return v13;
}
