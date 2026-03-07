__int64 __fastcall sub_14006BEF4(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  char v4; // di
  __int64 v7; // rbx
  void *v8; // rsi
  void *v9; // rdi
  void *v10; // rax
  __int64 v11; // rax
  int v12; // edx
  void *v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 result; // rax
  _QWORD *v17; // rdi
  int v18; // edx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD v22[2]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-30h] BYREF
  volatile signed __int32 *v24; // [rsp+50h] [rbp-28h]
  __int64 v25; // [rsp+58h] [rbp-20h] BYREF
  volatile signed __int32 *v26; // [rsp+60h] [rbp-18h]

  v4 = 0;
  if ( a2 )
  {
    if ( byte_1400DF688 )
    {
      if ( (unsigned int)dword_1400DF0C0 <= 0xA )
        v22[0] = -1;
      else
        v22[0] = stru_1400DF410.Queue.ListEntry.Flink[5].Flink;
    }
    else
    {
      v22[0] = 8;
    }
    v22[1] = a4 - 1;
    v17 = (_QWORD *)(a1 + 368);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _DWORD *, _QWORD, __int64))(qword_1400DF678 + 3064))(
            qword_1400DF6A8,
            a3,
            a2,
            v22,
            0LL,
            a1 + 368);
    if ( v19 )
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        LOBYTE(v18) = 2;
        sub_1400A1CFC(
          *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
          v18,
          4,
          13,
          (__int64)&unk_1400D8CC8,
          (__int64)L"WdfCommonBufferCreateWithConfig(dmaEnabler, length, &commonBufferConfig, (0), &m_buffer)",
          v19);
      }
      return v19;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 184))(qword_1400DF6A8, *v17);
      v21 = *v17;
      *(_QWORD *)(a1 + 384) = v20;
      *(_QWORD *)(a1 + 392) = (*(__int64 (__fastcall **)(__int64, __int64))(qword_1400DF678 + 176))(
                                qword_1400DF6A8,
                                v21);
      result = 0LL;
      *(_DWORD *)(a1 + 376) = a2;
    }
  }
  else
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      v7 = a1 + 56;
      v8 = &unk_1400D44E0;
      v9 = &unk_1400D44E0;
      v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                    a1 + 56,
                                    &v25)
                     + 16LL);
      if ( v10 )
        v9 = v10;
      v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 24LL))(v7, v23);
      LOBYTE(v12) = 2;
      v13 = *(void **)(*(_QWORD *)v11 + 16LL);
      if ( v13 )
        v8 = v13;
      sub_1400A3320(
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
        v12,
        4,
        12,
        (__int64)&unk_1400D8CC8,
        (__int64)v8,
        (__int64)v9,
        (__int64)qword_1400B7720);
      v4 = 3;
    }
    if ( (v4 & 2) != 0 )
    {
      v14 = v24;
      v4 &= ~2u;
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
    if ( (v4 & 1) != 0 )
    {
      v15 = v26;
      if ( v26 )
      {
        if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
    }
    return 3221225485LL;
  }
  return result;
}
