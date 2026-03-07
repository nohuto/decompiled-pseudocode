__int64 __fastcall sub_14006A9BC(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, char *a5)
{
  char v5; // di
  unsigned int v7; // eax
  char v8; // r14
  __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  void *v11; // rsi
  void *v12; // rdi
  void *v13; // rax
  __int64 v14; // rax
  int v15; // edx
  void *v16; // rax
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  _BYTE v20[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-40h]
  _BYTE v22[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+78h] [rbp-30h]

  v5 = 0;
  if ( a2 && a3 )
    v7 = a3;
  else
    v7 = 0;
  v8 = v7;
  if ( a4 )
    v9 = 2LL * *(_QWORD *)(a4 + 24) + 2;
  else
    v9 = 0LL;
  v10 = v7 + v9 + 48;
  if ( v10 <= 0xF0 )
  {
    *a5 = v10;
    return 0LL;
  }
  else
  {
    *a5 = 0;
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v11 = &unk_1400D44E0;
      v12 = &unk_1400D44E0;
      v13 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    v22)
                     + 16LL);
      if ( v13 )
        v12 = v13;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v20);
      LOBYTE(v15) = 2;
      v16 = *(void **)(*(_QWORD *)v14 + 16LL);
      if ( v16 )
        v11 = v16;
      sub_1400AEAB8(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v15,
        4,
        14,
        (__int64)&unk_1400D8BA0,
        (__int64)v11,
        (__int64)v12,
        (__int64)qword_1400B7720,
        *a5,
        v8,
        v9);
      v5 = 3;
    }
    if ( (v5 & 2) != 0 )
    {
      v17 = v21;
      v5 &= ~2u;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
    }
    if ( (v5 & 1) != 0 )
    {
      v18 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
    }
    return 3221225507LL;
  }
}
