void __fastcall PopEtAggregateKeyCopy(__int64 *a1, _OWORD *a2)
{
  __int64 v3; // rdx
  signed __int64 v4; // rax
  unsigned __int64 i; // rcx
  signed __int64 v6; // rtt
  __int64 v7; // r8
  signed __int64 v8; // rax
  unsigned __int64 j; // rdx
  signed __int64 v10; // rtt

  *(_OWORD *)a1 = *a2;
  *((_OWORD *)a1 + 1) = a2[1];
  v3 = *a1;
  if ( *a1 && *(_WORD *)(v3 + 24) )
  {
    _m_prefetchw((const void *)(v3 + 16));
    v4 = *(_QWORD *)(v3 + 16);
    for ( i = v4 + 1; i > 1; i = v4 + 1 )
    {
      v6 = v4;
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 16), i, v4);
      if ( v6 == v4 )
        goto LABEL_6;
    }
    if ( i != 1 )
      __fastfail(0xEu);
  }
LABEL_6:
  v7 = a1[1];
  if ( v7 )
  {
    _m_prefetchw((const void *)(v7 + 16));
    v8 = *(_QWORD *)(v7 + 16);
    for ( j = v8 + 1; j > 1; j = v8 + 1 )
    {
      v10 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16), j, v8);
      if ( v10 == v8 )
        return;
    }
    if ( j != 1 )
      __fastfail(0xEu);
  }
}
