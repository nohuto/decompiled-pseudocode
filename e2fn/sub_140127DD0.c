__int64 __fastcall sub_140127DD0(__int64 a1, unsigned int a2, unsigned int a3)
{
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // ebp
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rdi
  const wchar_t *v11; // rax
  const wchar_t *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  _BYTE v16[8]; // [rsp+50h] [rbp-38h] BYREF
  volatile signed __int32 *v17; // [rsp+58h] [rbp-30h]
  _BYTE v18[8]; // [rsp+60h] [rbp-28h] BYREF
  volatile signed __int32 *v19; // [rsp+68h] [rbp-20h]

  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_1400DF678 + 1616))(
         qword_1400DF6A8,
         a1,
         off_1400DF148);
  v7 = *(_QWORD *)v6;
  v8 = sub_1401436D8(*(_QWORD *)(*(_QWORD *)v6 + 544LL), a2, a3);
  if ( !v8 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v9 = (const wchar_t *)&unk_1400D44E0;
    v10 = (const wchar_t *)&unk_1400D44E0;
    v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 16LL))(
                                           v7 + 56,
                                           v18)
                            + 16LL);
    if ( v11 )
      v10 = v11;
    v12 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(v7 + 56) + 24LL))(
                                           v7 + 56,
                                           v16)
                            + 16LL);
    if ( v12 )
      v9 = v12;
    sub_1400A5E80(
      *(_QWORD *)(*(_QWORD *)(v7 + 176) + 16LL),
      2u,
      0xBu,
      0x76u,
      (__int64)&unk_1400D9408,
      v9,
      v10,
      L"_this->m_receiveScaling->Enable(hashType, protocolType)");
    v5 = 3;
  }
  if ( (v5 & 2) != 0 )
  {
    v13 = v17;
    v5 &= ~2u;
    if ( v17 )
    {
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( (v5 & 1) != 0 )
  {
    v14 = v19;
    if ( v19 )
    {
      if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  sub_1400358A0(v7, (__int64)L"_this->m_receiveScaling->Enable(hashType, protocolType)", 885, 100, v8);
  return v8;
}
