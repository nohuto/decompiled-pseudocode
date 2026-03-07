_QWORD *__fastcall sub_140034FC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  char v5; // si
  __int64 v7; // rcx
  void *v10; // rsi
  void *v11; // rdi
  void *v12; // rax
  __int64 v13; // rax
  int v14; // edx
  void *v15; // rax
  volatile signed __int32 *v16; // rdi
  volatile signed __int32 *v17; // rdi
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD v22[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v23[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-40h]
  _BYTE v25[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v26; // [rsp+68h] [rbp-30h]

  v5 = 0;
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    v19 = a4[1];
    a4[1] = 0LL;
    v22[1] = v19;
    v20 = *a4;
    *a4 = 0LL;
    v22[0] = v20;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64, _QWORD *, __int64))(*(_QWORD *)(v7 + 352) + 8LL))(
      v7 + 352,
      a2,
      a3,
      v22,
      a5);
    v18 = (volatile signed __int32 *)a4[1];
    if ( !v18 )
      return a2;
    goto LABEL_21;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v10 = &unk_1400D44E0;
    v11 = &unk_1400D44E0;
    v12 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v25)
                   + 16LL);
    if ( v12 )
      v11 = v12;
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v23);
    LOBYTE(v14) = 2;
    v15 = *(void **)(*(_QWORD *)v13 + 16LL);
    if ( v15 )
      v10 = v15;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v14,
      10,
      13,
      (__int64)&unk_1400D6BF0,
      (__int64)v10,
      (__int64)v11,
      (__int64)L"m_interruptsFactory");
    v5 = 3;
  }
  if ( (v5 & 2) != 0 )
  {
    v16 = v24;
    v5 &= ~2u;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  if ( (v5 & 1) != 0 )
  {
    v17 = v26;
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
  }
  sub_14000B444(a1 - 352, (__int64)L"m_interruptsFactory", 92, 61);
  *a2 = 0LL;
  a2[1] = 0LL;
  v18 = (volatile signed __int32 *)a4[1];
  if ( v18 )
  {
LABEL_21:
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  return a2;
}
