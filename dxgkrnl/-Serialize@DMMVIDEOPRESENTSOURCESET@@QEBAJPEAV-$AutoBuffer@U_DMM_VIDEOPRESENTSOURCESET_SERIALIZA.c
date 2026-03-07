__int64 __fastcall DMMVIDEOPRESENTSOURCESET::Serialize(__int64 a1, _QWORD *a2)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rbp
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // r14
  unsigned __int8 v10; // si
  __int64 v11; // rdi
  DMMVIDEOPRESENTSOURCE *i; // rdi
  __int64 v13; // rax

  if ( a2 )
  {
    if ( a2[4] )
      WdLogSingleEntry0(1LL);
    v5 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v5 = *(_QWORD *)(a1 + 40);
    v6 = 8 * v5 + 4;
    v7 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v6);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v9 = a1 + 24;
      v10 = 0;
      *(_BYTE *)a2[4] = *(_BYTE *)(a1 + 40);
      v11 = *(_QWORD *)(a1 + 24);
      if ( v11 != v9 )
      {
        for ( i = (DMMVIDEOPRESENTSOURCE *)(v11 - 8); i; ++v10 )
        {
          DMMVIDEOPRESENTSOURCE::Serialize(
            i,
            (struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const)(a2[4] + 4LL + 8LL * v10));
          v13 = *((_QWORD *)i + 1);
          i = (DMMVIDEOPRESENTSOURCE *)(v13 - 8);
          if ( v13 == v9 )
            i = 0LL;
        }
      }
      if ( v10 != *(_BYTE *)a2[4] )
        WdLogSingleEntry0(1LL);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v6, a1, v7);
      return v8;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
}
