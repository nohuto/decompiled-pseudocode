__int64 __fastcall sub_140122790(__int64 a1, __int64 a2)
{
  char v3; // di
  __int64 v4; // r14
  unsigned int v5; // ebp
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rax
  const wchar_t *v9; // rax
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp-30h]
  _BYTE v15[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v16; // [rsp+68h] [rbp-20h]

  v3 = 0;
  v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
                    qword_1400DF6A8,
                    a1,
                    off_1400DF148);
  v5 = sub_140121C20(v4, a2);
  if ( !v5 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v6 = (const wchar_t *)&unk_1400D44E0;
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56) + 16LL))(
                                          v4 + 56,
                                          v15)
                           + 16LL);
    if ( v8 )
      v7 = v8;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v4 + 56) + 24LL))(
                                          v4 + 56,
                                          v13)
                           + 16LL);
    if ( v9 )
      v6 = v9;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(v4 + 176) + 16LL),
      2u,
      0xBu,
      0x38u,
      (__int64)&unk_1400D9408,
      v6,
      v7,
      L"_this->CreateTxQueue(txQueueInit)");
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v10 = v14;
    v3 &= ~2u;
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
  if ( (v3 & 1) != 0 )
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
  sub_140008DF0(v4, (__int64)L"_this->CreateTxQueue(txQueueInit)", 404, 100, v5);
  return v5;
}
