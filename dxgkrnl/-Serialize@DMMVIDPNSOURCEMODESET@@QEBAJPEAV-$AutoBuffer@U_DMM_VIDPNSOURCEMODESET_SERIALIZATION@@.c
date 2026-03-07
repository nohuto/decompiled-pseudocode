__int64 __fastcall DMMVIDPNSOURCEMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, _QWORD *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int8 v9; // bp
  DMMVIDPNSOURCEMODESET *v10; // rsi
  const struct DMMVIDPNSOURCEMODE *i; // rsi

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v5 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v5 = *((_QWORD *)this + 8);
    v6 = 44 * v5;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 44 * v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 64);
      v10 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v10 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v10 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
          DMMVIDPNSOURCEMODE::Serialize(i, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)(a2[4] + 4LL + 40LL * v9++));
      }
      if ( v9 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6, this, v7);
      return v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
