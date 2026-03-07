__int64 __fastcall sub_14010C738(_QWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rbx
  volatile signed __int32 *v13; // rbx
  unsigned int v14; // ebx
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+48h] [rbp-30h]
  _BYTE v18[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+58h] [rbp-20h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x10) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005A6E0(Pool2, (__int64)L"os_services::DeferredProcedureCallFactory::Bind", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( a2 )
  {
    a1[46] = a2;
    v14 = 0;
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v18)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v16)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 5u, 0xFu, (__int64)&unk_1400D8318, v8, v9, L"device");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v17;
      v2 &= ~2u;
      if ( v17 )
      {
        if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v19;
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 155, 129);
    v14 = -1073741811;
  }
  if ( v4 )
  {
    sub_14005A99C(v4);
    ExFreePool(v4);
  }
  return v14;
}
