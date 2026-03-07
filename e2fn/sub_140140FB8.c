void __fastcall sub_140140FB8(_QWORD *a1)
{
  char v1; // di
  __int64 *v2; // rbp
  _QWORD *Pool2; // rax
  __int64 *v5; // rax
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _BYTE v12[8]; // [rsp+40h] [rbp-58h] BYREF
  volatile signed __int32 *v13; // [rsp+48h] [rbp-50h]
  _BYTE v14[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-40h]
  _DWORD v16[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v17; // [rsp+68h] [rbp-30h]

  v1 = 0;
  v2 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 0x400) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v5 = sub_140074D50(Pool2, (__int64)L"net_adapter::NetAdapterWolPatterns::ReportWakeFromPacketFilter", (__int64)a1);
      if ( v5 )
        v2 = v5;
    }
  }
  v16[0] = 24;
  v17 = 0LL;
  v16[1] = 65532;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = (const wchar_t *)&unk_1400D44E0;
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v14) + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v12) + 16LL);
    if ( v9 )
      v6 = v9;
    sub_1400A3320(
      *(_QWORD *)(a1[22] + 16LL),
      4u,
      0xBu,
      0x47u,
      (__int64)&unk_1400D9E10,
      v6,
      v7,
      (const wchar_t *)qword_14014EC70);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v10 = v13;
    v1 &= ~2u;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v11 = v15;
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  ((void (__fastcall *)(__int64, _QWORD, _DWORD *))qword_1400DF7E0)(qword_1400DF700, a1[63], v16);
  if ( v2 )
  {
    sub_140075108(v2);
    ExFreePool(v2);
  }
}
