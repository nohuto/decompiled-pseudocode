__int64 __fastcall sub_140127FC0(__int64 a1, _QWORD *a2)
{
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned int v6; // ebp
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rbx
  volatile signed __int32 *v12; // rbx
  _BYTE v14[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v15; // [rsp+58h] [rbp-30h]
  _BYTE v16[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v17; // [rsp+68h] [rbp-20h]

  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
         qword_1400DF6A8,
         a1,
         off_1400DF148);
  v5 = *(_QWORD *)v4;
  v6 = sub_140092CFC(*(_QWORD *)(*(_QWORD *)v4 + 544LL), a2);
  if ( !v6 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v7 = (const wchar_t *)&unk_1400D44E0;
    v8 = (const wchar_t *)&unk_1400D44E0;
    v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v5 + 56) + 16LL))(
                                          v5 + 56,
                                          v16)
                           + 16LL);
    if ( v9 )
      v8 = v9;
    v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v5 + 56) + 24LL))(
                                           v5 + 56,
                                           v14)
                            + 16LL);
    if ( v10 )
      v7 = v10;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(v5 + 176) + 16LL),
      2u,
      0xBu,
      0x77u,
      (__int64)&unk_1400D9408,
      v7,
      v8,
      L"_this->m_receiveScaling->SetHashSecretKey(hashSecretKey)");
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v11 = v15;
    v3 &= ~2u;
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
  if ( (v3 & 1) != 0 )
  {
    v12 = v17;
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
  sub_140009AE8(v5, (__int64)L"_this->m_receiveScaling->SetHashSecretKey(hashSecretKey)", 907, 100, v6);
  return v6;
}
