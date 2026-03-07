__int64 __fastcall sub_14010ED30(_QWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  char v4; // di
  __int64 *v6; // rbp
  _QWORD *Pool2; // rax
  __int64 *v11; // rax
  unsigned int v12; // r14d
  const wchar_t *v13; // rsi
  const wchar_t *v14; // rdi
  const wchar_t *v15; // rax
  const wchar_t *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v20[8]; // [rsp+58h] [rbp-40h] BYREF
  volatile signed __int32 *v21; // [rsp+60h] [rbp-38h]
  _BYTE v22[8]; // [rsp+68h] [rbp-30h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-28h]

  v4 = 0;
  v6 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v11 = sub_14005B310(Pool2, (__int64)L"os_resources::CommonBufferFactory::Initialize", (__int64)a1);
      if ( v11 )
        v6 = v11;
    }
  }
  sub_14010E960((__int64)a1, a2, a3);
  v12 = sub_14010EA38(a1, a2, a4);
  if ( v12 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v13 = (const wchar_t *)&unk_1400D44E0;
      v14 = (const wchar_t *)&unk_1400D44E0;
      v15 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v22)
                              + 16LL);
      if ( v15 )
        v14 = v15;
      v16 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v20)
                              + 16LL);
      if ( v16 )
        v13 = v16;
      sub_1400A5E80(
        *(_QWORD *)(a1[22] + 16LL),
        2u,
        4u,
        0xAu,
        (__int64)&unk_1400D88F8,
        v13,
        v14,
        L"CreateDmaEnabler(device, maxTransactionLength)");
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v17 = v21;
      v4 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v4 & 1) != 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    sub_140009704((int)a1, (__int64)L"CreateDmaEnabler(device, maxTransactionLength)", 57, 128, v12);
  }
  else
  {
    v12 = 0;
  }
  if ( v6 )
  {
    sub_14005B5AC(v6);
    ExFreePool(v6);
  }
  return v12;
}
