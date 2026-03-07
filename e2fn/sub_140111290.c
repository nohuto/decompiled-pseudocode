__int64 __fastcall sub_140111290(_QWORD *a1, __int64 a2)
{
  char v2; // di
  __int64 *v4; // rbp
  _QWORD *Pool2; // rax
  __int64 *v7; // rax
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rax
  const wchar_t *v16; // rsi
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  _BYTE v23[8]; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-60h]
  _BYTE v25[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v26; // [rsp+58h] [rbp-50h]
  _BYTE v27[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v28; // [rsp+68h] [rbp-40h]
  _BYTE v29[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-30h]

  v2 = 0;
  v4 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v7 = sub_14005B310(Pool2, (__int64)L"os_resources::OsEventDispatcher::Initialize", (__int64)a1);
      if ( v7 )
        v4 = v7;
    }
  }
  if ( a2 )
  {
    v15 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 248))(qword_1400DF6A8, a2);
    a1[46] = v15;
    if ( v15 )
    {
      v14 = 0;
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v29)
                                + 16LL);
        if ( v18 )
          v17 = v18;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v27)
                                + 16LL);
        if ( v19 )
          v16 = v19;
        sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 4u, 0xBu, (__int64)&unk_1400D8BA0, v16, v17, L"m_deviceObject");
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v20 = v28;
        v2 &= ~8u;
        if ( v28 )
        {
          if ( _InterlockedExchangeAdd(v28 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v21 = v30;
        if ( v30 )
        {
          if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      sub_140022208((int)a1, (__int64)L"m_deviceObject", 56, 138);
      v14 = -1073741661;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v25)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v23)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(*(_QWORD *)(a1[22] + 16LL), 2u, 4u, 0xAu, (__int64)&unk_1400D8BA0, v8, v9, L"device");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v12 = v24;
      v2 &= ~2u;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v13 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B00C((int)a1, (__int64)L"device", 54, 138);
    v14 = -1073741811;
  }
  if ( v4 )
  {
    sub_14005B5AC(v4);
    ExFreePool(v4);
  }
  return v14;
}
