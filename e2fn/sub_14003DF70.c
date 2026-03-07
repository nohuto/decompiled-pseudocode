__int64 __fastcall sub_14003DF70(_QWORD *a1)
{
  char v1; // si
  int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v14; // rdi
  unsigned int v16; // ebp
  int v17; // eax
  void *v18; // rsi
  void *v19; // rdi
  void *v20; // rax
  __int64 v21; // rax
  int v22; // edx
  void *v23; // rax
  volatile signed __int32 *v24; // rdi
  volatile signed __int32 *v25; // rdi
  _BYTE v26[8]; // [rsp+50h] [rbp-58h] BYREF
  volatile signed __int32 *v27; // [rsp+58h] [rbp-50h]
  _BYTE v28[8]; // [rsp+60h] [rbp-48h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-40h]
  _BYTE v30[8]; // [rsp+70h] [rbp-38h] BYREF
  volatile signed __int32 *v31; // [rsp+78h] [rbp-30h]
  _BYTE v32[8]; // [rsp+80h] [rbp-28h] BYREF
  volatile signed __int32 *v33; // [rsp+88h] [rbp-20h]

  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v4 = a1[47];
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 || *(_DWORD *)(v4 + 20) )
    {
      v17 = -1073741661;
      if ( *(_DWORD *)(v4 + 20) == 3 )
        v17 = -1073741130;
      v16 = v17;
      goto LABEL_30;
    }
    v6 = *(_DWORD *)(v5 + 73748);
    if ( v6 == -1 )
      break;
    if ( (v6 & 2) != 0 )
      return 0LL;
    KeStallExecutionProcessor(0x32u);
    if ( (unsigned int)++v2 >= 0x2710 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v7 = &unk_1400D44E0;
        v8 = &unk_1400D44E0;
        v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v28) + 16LL);
        if ( v9 )
          v8 = v9;
        v10 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v26);
        LOBYTE(v11) = 2;
        v12 = *(void **)(*(_QWORD *)v10 + 16LL);
        if ( v12 )
          v7 = v12;
        sub_1400A5E80(
          *(_QWORD *)(a1[22] + 16LL),
          v11,
          14,
          25,
          (__int64)&unk_1400D71D0,
          (__int64)v7,
          (__int64)v8,
          (__int64)qword_1400B7720,
          32);
        v1 = 12;
      }
      if ( (v1 & 8) != 0 )
      {
        v13 = v27;
        v1 &= ~8u;
        if ( v27 )
        {
          if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
            if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
      if ( (v1 & 4) != 0 )
      {
        v14 = v29;
        if ( v29 )
        {
          if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
            if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      return 3221225635LL;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 8) + 8LL) != -1 )
    return 0LL;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 3LL);
  v16 = -1073741130;
LABEL_30:
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    v18 = &unk_1400D44E0;
    v19 = &unk_1400D44E0;
    v20 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 16LL))(a1 + 7, v32) + 16LL);
    if ( v20 )
      v19 = v20;
    v21 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(a1[7] + 24LL))(a1 + 7, v30);
    LOBYTE(v22) = 2;
    v23 = *(void **)(*(_QWORD *)v21 + 16LL);
    if ( v23 )
      v18 = v23;
    sub_1400A5E80(
      *(_QWORD *)(a1[22] + 16LL),
      v22,
      14,
      24,
      (__int64)&unk_1400D71D0,
      (__int64)v18,
      (__int64)v19,
      (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x12014, eerdValue)",
      v16);
    v1 = 3;
  }
  if ( (v1 & 2) != 0 )
  {
    v24 = v31;
    v1 &= ~2u;
    if ( v31 )
    {
      if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
  }
  if ( (v1 & 1) != 0 )
  {
    v25 = v33;
    if ( v33 )
    {
      if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
  }
  sub_14000D660((int)a1, (__int64)L"m_mmioAccessor->ReadRegisterSafe(0x12014, eerdValue)", 196, 155, v16);
  return v16;
}
