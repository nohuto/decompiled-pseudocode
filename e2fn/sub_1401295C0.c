__int64 __fastcall sub_1401295C0(__int64 a1)
{
  char v1; // di
  __int64 *v3; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+40h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-30h]
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-20h]

  v1 = 0;
  v3 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x80u) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_1400736C0(Pool2, (__int64)L"framework::DeviceD0ExitFlows::D0ExitToS0", a1);
      if ( v5 )
        v3 = v5;
    }
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = (const wchar_t *)&unk_1400D44E0;
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                          a1 + 56,
                                          v15)
                           + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(
                                          a1 + 56,
                                          v13)
                           + 16LL);
    if ( v9 )
      v6 = v9;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
      4u,
      8u,
      0x14u,
      (__int64)&unk_1400D9628,
      v6,
      v7,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v10 = v14;
    v1 &= ~2u;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v11 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 400) + 168LL))(*(_QWORD *)(a1 + 400));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 384) + 112LL))(*(_QWORD *)(a1 + 384));
  if ( v3 )
  {
    sub_140073F78(v3);
    ExFreePool(v3);
  }
  return 0LL;
}
