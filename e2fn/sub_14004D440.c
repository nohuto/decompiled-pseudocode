__int64 __fastcall sub_14004D440(__int64 a1)
{
  int v1; // r14d
  __int64 v3; // rbx
  __int64 v4; // r12
  void *v5; // rsi
  void *v6; // rax
  __int64 v7; // rax
  void *v8; // rdx
  void *v9; // rax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rdi
  __int64 v14; // [rsp+28h] [rbp-48h]
  void (__fastcall ***v15)(_QWORD); // [rsp+40h] [rbp-30h] BYREF
  volatile signed __int32 *v16; // [rsp+48h] [rbp-28h]
  _BYTE v17[8]; // [rsp+50h] [rbp-20h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-18h]
  _BYTE v19[8]; // [rsp+60h] [rbp-10h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-8h]

  v1 = 0;
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 496));
  v3 = *(_QWORD *)(a1 + 456);
  v4 = v3;
  if ( *(_QWORD *)(a1 + 488) )
    v4 = a1 + 448;
  for ( ; v3 != v4; v3 = *(_QWORD *)(v3 + 8) )
  {
    sub_1400A27D4(&v15, v3 + 16);
    if ( v15 )
    {
      (**v15)(v15);
    }
    else
    {
      if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
      {
        v1 |= 3u;
        v5 = &unk_1400D44E0;
        v6 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                     a1 + 56,
                                     v19)
                      + 16LL);
        if ( v6 )
          v5 = v6;
        v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v17);
        v8 = &unk_1400D44E0;
        v9 = *(void **)(*(_QWORD *)v7 + 16LL);
        if ( v9 )
          v8 = v9;
        v14 = (__int64)v8;
        LOBYTE(v8) = 2;
        sub_1400A3320(
          *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
          (_DWORD)v8,
          10,
          19,
          (__int64)&unk_1400D7418,
          v14,
          (__int64)v5,
          (__int64)qword_1400B7720);
      }
      if ( (v1 & 2) != 0 )
      {
        v10 = v18;
        v1 &= ~2u;
        if ( v18 )
        {
          if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
            if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
      }
      if ( (v1 & 1) != 0 )
      {
        v11 = v20;
        v1 &= ~1u;
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
          }
        }
      }
    }
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        v12 = v16;
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 352) + 32LL))(a1 + 352);
}
