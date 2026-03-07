__int64 __fastcall sub_14000CB70(__int64 a1)
{
  char v2; // di
  unsigned int v3; // ebp
  void *v4; // rsi
  void *v5; // rdi
  void *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  void *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp-30h]
  _BYTE v15[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+68h] [rbp-20h]

  v2 = 0;
  v3 = sub_140047BF8(*(_QWORD *)(a1 + 144));
  if ( !v3 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v4 = &unk_1400D44E0;
    v5 = &unk_1400D44E0;
    v6 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                 a1 - 296,
                                 v15)
                  + 16LL);
    if ( v6 )
      v5 = v6;
    v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v13);
    LOBYTE(v8) = 2;
    v9 = *(void **)(*(_QWORD *)v7 + 16LL);
    if ( v9 )
      v4 = v9;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v8,
      10,
      97,
      (__int64)&unk_1400D49F8,
      (__int64)v4,
      (__int64)v5,
      (__int64)L"m_macAddress->GetPermanentMacAddress(macAddress)",
      v3);
    v2 = 3;
  }
  if ( (v2 & 2) != 0 )
  {
    v10 = v14;
    v2 &= ~2u;
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
  if ( (v2 & 1) != 0 )
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
  sub_140009850(a1 - 352, (__int64)L"m_macAddress->GetPermanentMacAddress(macAddress)", 625, 46, v3);
  return v3;
}
