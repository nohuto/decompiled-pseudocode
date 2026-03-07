__int64 __fastcall sub_140134940(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rdx
  __int64 v6; // rbx
  const wchar_t *v7; // rsi
  const wchar_t *v8; // rdi
  const wchar_t *v9; // rax
  const wchar_t *v10; // rax
  volatile signed __int32 *v11; // rsi
  volatile signed __int32 *v12; // rdi
  unsigned int v14; // r15d
  const wchar_t *v15; // rsi
  const wchar_t *v16; // rdi
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  volatile signed __int32 *v19; // rsi
  volatile signed __int32 *v20; // rdi
  _BYTE v21[8]; // [rsp+58h] [rbp-51h] BYREF
  volatile signed __int32 *v22; // [rsp+60h] [rbp-49h]
  _BYTE v23[8]; // [rsp+68h] [rbp-41h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-39h]
  _BYTE v25[8]; // [rsp+78h] [rbp-31h] BYREF
  volatile signed __int32 *v26; // [rsp+80h] [rbp-29h]
  _BYTE v27[8]; // [rsp+88h] [rbp-21h] BYREF
  volatile signed __int32 *v28; // [rsp+90h] [rbp-19h]
  _BYTE v29[16]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v30[2]; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE v31[38]; // [rsp+AAh] [rbp+1h] BYREF

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 )
  {
    v14 = ((__int64 (__fastcall *)(__int64, __int64, _BYTE *))qword_1400DF868)(qword_1400DF700, v4, v30);
    if ( v14 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v15 = (const wchar_t *)&unk_1400D44E0;
        v16 = (const wchar_t *)&unk_1400D44E0;
        v17 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                               a1 - 296,
                                               v27)
                                + 16LL);
        if ( v17 )
          v16 = v17;
        v18 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(
                                               a1 - 296,
                                               v25)
                                + 16LL);
        if ( v18 )
          v15 = v18;
        sub_1400A5E80(
          *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
          3u,
          0xBu,
          0x15u,
          (__int64)&unk_1400D9AF0,
          v15,
          v16,
          (const wchar_t *)qword_14014EC70);
        v2 = 12;
      }
      if ( (v2 & 8) != 0 )
      {
        v19 = v26;
        v2 &= ~8u;
        if ( v26 )
        {
          if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
            if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      if ( (v2 & 4) != 0 )
      {
        v20 = v28;
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
      return v14;
    }
    else
    {
      sub_140088B98((__int64)v29, (__int64)v31);
      sub_140088BF0(a2, (__int64)v29);
      return 0LL;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = a1 - 296;
      v7 = (const wchar_t *)&unk_1400D44E0;
      v8 = (const wchar_t *)&unk_1400D44E0;
      v9 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                            a1 - 296,
                                            v23)
                             + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = *(const wchar_t **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v21)
                              + 16LL);
      if ( v10 )
        v7 = v10;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
        2u,
        0xBu,
        0x14u,
        (__int64)&unk_1400D9AF0,
        v7,
        v8,
        L"m_configuration");
      v2 = 3;
    }
    if ( (v2 & 2) != 0 )
    {
      v11 = v22;
      v2 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    if ( (v2 & 1) != 0 )
    {
      v12 = v24;
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
    sub_14000B1BC(a1 - 352, (__int64)L"m_configuration", 162, 108);
    return 3221225635LL;
  }
}
