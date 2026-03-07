__int64 __fastcall sub_14014A538(__int64 a1)
{
  const wchar_t *v1; // rdi
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rbx
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rax
  const wchar_t *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  __int64 v18; // [rsp+40h] [rbp-68h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-60h]
  _BYTE v20[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v21; // [rsp+58h] [rbp-50h]
  _BYTE v22[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v23; // [rsp+68h] [rbp-40h]
  _BYTE v24[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v25; // [rsp+78h] [rbp-30h]

  LODWORD(v1) = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterChecksumOffload::Initialize", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 368) + 8LL))(*(_QWORD *)(a1 + 368), &v18);
  v6 = (__int64 *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 8LL))(v18, v20);
  v7 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = v6[1];
  v8 = *v6;
  v6[1] = v7;
  v9 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = v8;
  *v6 = v9;
  v10 = v21;
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( !*(_QWORD *)(a1 + 392) )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = (const wchar_t *)&unk_1400D44E0;
      v1 = (const wchar_t *)&unk_1400D44E0;
      v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                             a1 + 56,
                                             v24)
                              + 16LL);
      if ( v12 )
        v1 = v12;
      v13 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                             a1 + 56,
                                             v22)
                              + 16LL);
      if ( v13 )
        v11 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        2u,
        0xBu,
        0xBu,
        (__int64)&unk_1400DA378,
        v11,
        v1,
        L"m_callbacksLock");
      LOBYTE(v1) = 3;
    }
    if ( ((unsigned __int8)v1 & 2) != 0 )
    {
      v14 = v23;
      LOBYTE(v1) = (unsigned __int8)v1 & 0xFD;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    if ( ((unsigned __int8)v1 & 1) != 0 )
    {
      v15 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    sub_14000B1BC(a1, (__int64)L"m_callbacksLock", 77, 102);
    LODWORD(v1) = -1073741801;
  }
  v16 = v19;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  if ( v3 )
  {
    sub_140075108(v3);
    ExFreePool(v3);
  }
  return (unsigned int)v1;
}
