__int64 __fastcall sub_14001065C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // r14d
  __int64 v5; // rbx
  __int64 i; // rdi
  void *v9; // rbp
  void *v10; // rax
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rax
  volatile signed __int32 *v14; // rsi
  volatile signed __int32 *v15; // rsi
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[8]; // [rsp+50h] [rbp-48h] BYREF
  volatile signed __int32 *v18; // [rsp+58h] [rbp-40h]
  _BYTE v19[8]; // [rsp+60h] [rbp-38h] BYREF
  volatile signed __int32 *v20; // [rsp+68h] [rbp-30h]

  result = *(_QWORD *)(a2 + 16);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 8);
  if ( result )
  {
    result *= 3LL;
    for ( i = v5 + 4 * result; v5 != i; v5 += 12LL )
    {
      if ( *(_DWORD *)(v5 + 8) < *(_DWORD *)(a1 + 464) )
      {
        *(_BYTE *)(*(unsigned int *)(v5 + 4) + *(_QWORD *)(a3 + 8)) = *(_BYTE *)(v5 + 8);
        result = 0LL;
      }
      else
      {
        if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
        {
          v4 |= 3u;
          v9 = &unk_1400D44E0;
          v10 = *(void **)(*(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 16LL))(
                                        a1 + 56,
                                        v19)
                         + 16LL);
          if ( v10 )
            v9 = v10;
          v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(a1 + 56) + 24LL))(a1 + 56, v17);
          v12 = &unk_1400D44E0;
          v13 = *(void **)(*(_QWORD *)v11 + 16LL);
          if ( v13 )
            v12 = v13;
          v16 = (__int64)v12;
          LOBYTE(v12) = 3;
          sub_1400A6AA8(
            *(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL),
            (_DWORD)v12,
            10,
            26,
            (__int64)&unk_1400D5028,
            v16,
            (__int64)v9,
            (__int64)qword_1400B7720,
            *(_DWORD *)(v5 + 8),
            *(_DWORD *)(v5 + 4));
        }
        if ( (v4 & 2) != 0 )
        {
          v14 = v18;
          v4 &= ~2u;
          if ( v18 )
          {
            if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
              if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 16LL))(v14);
            }
          }
        }
        if ( (v4 & 1) != 0 )
        {
          v15 = v20;
          v4 &= ~1u;
          if ( v20 )
          {
            if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
            {
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
              if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 16LL))(v15);
            }
          }
        }
        result = 3221225485LL;
      }
      *(_DWORD *)v5 = result;
    }
  }
  return result;
}
