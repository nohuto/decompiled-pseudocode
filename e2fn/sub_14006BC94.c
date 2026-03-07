__int64 __fastcall sub_14006BC94(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // di
  __int64 v6; // rbx
  void *v7; // rsi
  void *v8; // rdi
  void *v9; // rax
  __int64 v10; // rax
  int v11; // edx
  void *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 result; // rax
  _QWORD *v16; // rdi
  int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  _BYTE v21[8]; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-20h]
  __int64 v23; // [rsp+50h] [rbp-18h] BYREF
  volatile signed __int32 *v24; // [rsp+58h] [rbp-10h]

  v3 = 0;
  if ( a2 )
  {
    v16 = (_QWORD *)(a1 + 368);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(qword_1400DF678 + 168))(
            qword_1400DF6A8,
            a3,
            a2,
            0LL,
            a1 + 368);
    if ( v18 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v17) = 2;
        sub_1400A1CFC(
          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
          v17,
          4,
          11,
          (__int64)&unk_1400D8CC8,
          (__int64)L"WdfCommonBufferCreate(dmaEnabler, length, (0), &m_buffer)",
          v18);
      }
      return v18;
    }
    else
    {
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 184))(qword_1400DF6A8, *v16);
      v20 = *v16;
      *(_QWORD *)(a1 + 384) = v19;
      *(_QWORD *)(a1 + 392) = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 176))(
                                qword_1400DF6A8,
                                v20);
      result = 0LL;
      *(_DWORD *)(a1 + 376) = a2;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v6 = a1 + 56;
      v7 = &unk_1400D44E0;
      v8 = &unk_1400D44E0;
      v9 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                   a1 + 56,
                                   &v23)
                    + 16LL);
      if ( v9 )
        v8 = v9;
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 24LL))(v6, v21);
      LOBYTE(v11) = 2;
      v12 = *(void **)(*(_QWORD *)v10 + 16LL);
      if ( v12 )
        v7 = v12;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v11,
        4,
        10,
        (__int64)&unk_1400D8CC8,
        (__int64)v7,
        (__int64)v8,
        (__int64)qword_1400B7720);
      v3 = 3;
    }
    if ( (v3 & 2) != 0 )
    {
      v13 = v22;
      v3 &= ~2u;
      if ( v22 )
      {
        if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
          if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    if ( (v3 & 1) != 0 )
    {
      v14 = v24;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    return 3221225485LL;
  }
  return result;
}
