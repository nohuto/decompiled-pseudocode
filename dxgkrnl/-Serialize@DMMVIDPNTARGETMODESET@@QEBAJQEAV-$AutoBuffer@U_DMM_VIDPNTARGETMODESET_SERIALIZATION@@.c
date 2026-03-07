__int64 __fastcall DMMVIDPNTARGETMODESET::Serialize(DMMVIDPNSOURCEMODESET *this, _QWORD *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int8 v9; // si
  DMMVIDPNSOURCEMODESET *v10; // rdx
  const struct DMMVIDPNSOURCEMODE *i; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v5 = 1LL;
    if ( *((_QWORD *)this + 8) > 1uLL )
      v5 = *((_QWORD *)this + 8);
    v6 = 88 * v5;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 88 * v5);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 64);
      v10 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
      if ( v10 != (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
      {
        for ( i = (DMMVIDPNSOURCEMODESET *)((char *)v10 - 8); i; i = DMMVIDPNSOURCEMODESET::GetNextMode(this, i) )
        {
          v12 = a2[4];
          v13 = 10LL * v9;
          *(_DWORD *)(v12 + 8 * v13 + 8) = *((_DWORD *)i + 6);
          *(_OWORD *)(v12 + 8 * v13 + 16) = *(_OWORD *)((char *)i + 72);
          *(_OWORD *)(v12 + 8 * v13 + 32) = *(_OWORD *)((char *)i + 88);
          *(_OWORD *)(v12 + 8 * v13 + 48) = *(_OWORD *)((char *)i + 104);
          *(_QWORD *)(v12 + 8 * v13 + 64) = *((_QWORD *)i + 15);
          *(_DWORD *)(v12 + 8 * v13 + 72) = *((_DWORD *)i + 32);
          ++v9;
        }
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
