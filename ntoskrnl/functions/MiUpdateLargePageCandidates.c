__int64 __fastcall MiUpdateLargePageCandidates(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r10
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rdx
  volatile signed __int32 *v11; // r8
  int v12; // r10d
  unsigned __int64 v13; // rcx

  v4 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  if ( !*(_BYTE *)(v4 + 15782) )
    return 0LL;
  if ( a2 == 2 )
  {
    v5 = a1 >> 9;
    v6 = a1 >> 18;
  }
  else
  {
    if ( a2 != 1 )
      return 0LL;
    v5 = a1 >> 18;
    v6 = a1 >> 18;
  }
  if ( a3 <= 0 )
  {
    if ( a2 == 2 )
      _InterlockedExchangeAdd8((volatile signed __int8 *)(v5 + *(_QWORD *)(v4 + 16048)), 0xFFu);
    else
      _InterlockedAdd16((volatile signed __int16 *)(*(_QWORD *)(v4 + 16072) + 2 * v5), 0xFFFFu);
    return 0LL;
  }
  if ( a2 == 2 )
  {
    if ( _InterlockedExchangeAdd8((volatile signed __int8 *)(v5 + *(_QWORD *)(v4 + 16048)), 1u) == 31 )
    {
      v8 = *(_QWORD *)(v4 + 16064);
      v9 = v6 & 0x1F;
      LOBYTE(v10) = 1;
      v11 = (volatile signed __int32 *)(v8 + 4 * (v6 >> 5));
      if ( (unsigned __int64)(v9 + 1) > 0x20 )
      {
        if ( (v6 & 0x1F) == 0 )
          goto LABEL_18;
        v12 = v6 & 0x1F;
        _InterlockedOr(v11++, ((1 << (32 - v12)) - 1) << v9);
        v10 = 1LL - (unsigned int)(32 - v12);
        if ( v10 >= 0x20 )
        {
          v13 = v10 >> 5;
          v10 += -32LL * (v10 >> 5);
          do
          {
            *v11++ = -1;
            --v13;
          }
          while ( v13 );
        }
        if ( v10 )
LABEL_18:
          _InterlockedOr(v11, (1 << v10) - 1);
      }
      else
      {
        _InterlockedOr(v11, 1 << v9);
      }
      return 1LL;
    }
    return 0LL;
  }
  if ( _InterlockedExchangeAdd16((volatile signed __int16 *)(*(_QWORD *)(v4 + 16072) + 2 * v5), 1u) != 511
    || !_bittest64(&KeFeatureBits, 0x25u) )
  {
    return 0LL;
  }
  _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 16080), 1, 0);
  return 1LL;
}
