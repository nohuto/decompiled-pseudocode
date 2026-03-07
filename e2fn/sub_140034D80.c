_QWORD *__fastcall sub_140034D80(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v3; // si
  __int64 v5; // rcx
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rdi
  volatile signed __int32 *v15; // rdi
  volatile signed __int32 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v21[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v22; // [rsp+58h] [rbp-40h]
  _BYTE v23[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-30h]

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( v5 )
  {
    v17 = a3[1];
    a3[1] = 0LL;
    v20[1] = v17;
    v18 = *a3;
    *a3 = 0LL;
    v20[0] = v18;
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *))(*(_QWORD *)(v5 + 352) + 24LL))(v5 + 352, a2, v20);
    v16 = (volatile signed __int32 *)a3[1];
    if ( !v16 )
      return a2;
    goto LABEL_21;
  }
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v8 = &unk_1400D44E0;
    v9 = &unk_1400D44E0;
    v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 16LL))(
                                  a1 - 296,
                                  v23)
                   + 16LL);
    if ( v10 )
      v9 = v10;
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 - 296) + 24LL))(a1 - 296, v21);
    LOBYTE(v12) = 2;
    v13 = *(void **)(*(_QWORD *)v11 + 16LL);
    if ( v13 )
      v8 = v13;
    sub_1400A3320(
      *(_QWORD *)(*(_QWORD *)(a1 - 176) + 16LL),
      v12,
      10,
      15,
      (__int64)&unk_1400D6BF0,
      (__int64)v8,
      (__int64)v9,
      (__int64)L"m_interruptsFactory");
    v3 = 3;
  }
  if ( (v3 & 2) != 0 )
  {
    v14 = v22;
    v3 &= ~2u;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    v15 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  sub_14000B444(a1 - 352, (__int64)L"m_interruptsFactory", 110, 61);
  *a2 = 0LL;
  a2[1] = 0LL;
  v16 = (volatile signed __int32 *)a3[1];
  if ( v16 )
  {
LABEL_21:
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return a2;
}
