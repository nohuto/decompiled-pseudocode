__int64 __fastcall sub_140134C90(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 v5; // rdx
  __int64 v7; // rbx
  const wchar_t *v8; // r15
  const wchar_t *v9; // rdi
  const wchar_t *v10; // rax
  const wchar_t *v11; // rax
  volatile signed __int32 *v12; // rsi
  volatile signed __int32 *v13; // rdi
  unsigned int v15; // r14d
  const wchar_t *v16; // r15
  const wchar_t *v17; // rdi
  const wchar_t *v18; // rax
  const wchar_t *v19; // rax
  volatile signed __int32 *v20; // rsi
  volatile signed __int32 *v21; // rdi
  _BYTE v22[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-40h]
  _BYTE v26[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v27; // [rsp+78h] [rbp-30h]
  _BYTE v28[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v29; // [rsp+88h] [rbp-20h]

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, __int64))qword_1400DF848)(
            qword_1400DF700,
            v5,
            0LL,
            a2,
            a3);
    if ( v15 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = (const wchar_t *)&unk_1400D44E0;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v28)
                                + 16LL);
        if ( v18 )
          v17 = v18;
        v19 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v26)
                                + 16LL);
        if ( v19 )
          v16 = v19;
        sub_1400B41F8(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          3u,
          0xBu,
          0x11u,
          (__int64)&unk_1400D9AF0,
          v16,
          v17,
          (const wchar_t *)qword_14014EC70);
        v3 = 12;
      }
      if ( (v3 & 8) != 0 )
      {
        v20 = v27;
        v3 &= ~8u;
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
            if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 16LL))(v20);
          }
        }
      }
      if ( (v3 & 4) != 0 )
      {
        v21 = v29;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
            if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
      }
      return v15;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = a1 - 296;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = (const wchar_t *)&unk_1400D44E0;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                             a1 - 296,
                                             &v24)
                              + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, v22)
                              + 16LL);
      if ( v11 )
        v8 = v11;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x10u,
        (__int64)&unk_1400D9AF0,
        v8,
        v9,
        L"m_configuration");
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v12 = v23;
      v3 &= ~2u;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v13 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    sub_14000B1BC(a1 - 352, (__int64)L"m_configuration", 113, 108);
    return 3221225635LL;
  }
}
