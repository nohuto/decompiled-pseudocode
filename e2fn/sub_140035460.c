__int64 __fastcall sub_140035460(_QWORD *a1)
{
  char v1; // si
  __int64 v3; // rcx
  void *v4; // r15
  void *v5; // rdi
  void *v6; // rax
  __int64 v7; // rax
  int v8; // edx
  void *v9; // rax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  unsigned int v13; // r14d
  void *v14; // r15
  void *v15; // rdi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  void *v19; // rax
  volatile signed __int32 *v20; // rdi
  volatile signed __int32 *v21; // rdi
  _BYTE v22[8]; // [rsp+50h] [rbp-68h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-60h]
  _BYTE v24[8]; // [rsp+60h] [rbp-58h] BYREF
  volatile signed __int32 *v25; // [rsp+68h] [rbp-50h]
  _BYTE v26[8]; // [rsp+70h] [rbp-48h] BYREF
  volatile signed __int32 *v27; // [rsp+78h] [rbp-40h]
  _BYTE v28[8]; // [rsp+80h] [rbp-38h] BYREF
  volatile signed __int32 *v29; // [rsp+88h] [rbp-30h]

  v1 = 0;
  v3 = a1[47];
  if ( v3 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    if ( v13 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v14 = &unk_1400D44E0;
        v15 = &unk_1400D44E0;
        v16 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v28) + 16LL);
        if ( v16 )
          v15 = v16;
        v17 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v26);
        v1 = 12;
        LOBYTE(v18) = 2;
        v19 = *(void **)(*(_QWORD *)v17 + 16LL);
        if ( v19 )
          v14 = v19;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v18,
          10,
          12,
          (__int64)&unk_1400D6BF0,
          (__int64)v14,
          (__int64)v15,
          (__int64)L"m_interruptsFactory->EvtD0Entry()",
          v13);
      }
      if ( (v1 & 8) != 0 )
      {
        v20 = v27;
        v1 &= ~8u;
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
      if ( (v1 & 4) != 0 )
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
      sub_140008DF0((int)a1, (__int64)L"m_interruptsFactory->EvtD0Entry()", 76, 61, v13);
      return v13;
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
      v4 = &unk_1400D44E0;
      v5 = &unk_1400D44E0;
      v6 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v24) + 16LL);
      if ( v6 )
        v5 = v6;
      v7 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v22);
      LOBYTE(v8) = 2;
      v9 = *(void **)(*(_QWORD *)v7 + 16LL);
      if ( v9 )
        v4 = v9;
      sub_1400A3320(
        *(_QWORD *)(a1[22] + 16LL),
        v8,
        10,
        11,
        (__int64)&unk_1400D6BF0,
        (__int64)v4,
        (__int64)v5,
        (__int64)L"m_interruptsFactory");
      v1 = 3;
    }
    if ( (v1 & 2) != 0 )
    {
      v10 = v23;
      v1 &= ~2u;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( (v1 & 1) != 0 )
    {
      v11 = v25;
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
    }
    sub_14000B444((int)a1, (__int64)L"m_interruptsFactory", 75, 61);
    return 3221225635LL;
  }
}
