__int64 __fastcall PopEtEnergyTrackerCleanup(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  void *v7; // rcx
  _QWORD *v9; // rbp
  _QWORD *i; // rcx

  PopAcquireRwLockExclusive(PopEtGlobals + 16);
  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v3 = *(_QWORD **)(a1 + 8), *v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  PopReleaseRwLock(PopEtGlobals + 16);
  PopEtEnergyTrackerCleanupAggregates(a1);
  v4 = *(void **)(a1 + 56);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54456F50u);
  v5 = *(_QWORD ***)(a1 + 72);
  v6 = v5;
  while ( v6 )
  {
    v6 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_15:
    if ( !v6 )
      goto LABEL_12;
    v9 = v6;
    for ( i = v5; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == v6 )
      {
        *i = *v6;
        --*(_DWORD *)(a1 + 64);
        *v6 |= 0x8000000000000002uLL;
        v6 = i;
        goto LABEL_22;
      }
    }
    v9 = 0LL;
LABEL_22:
    PopEtAggregateKeyCleanup(v9 + 2);
    ExFreePoolWithTag(v9, 0x54456F50u);
  }
  for ( ++v5; (unsigned __int64)v5 < *(_QWORD *)(a1 + 72) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 68) >> 5); ++v5 )
  {
    v6 = *v5;
    if ( ((unsigned __int8)*v5 & 1) == 0 )
      goto LABEL_15;
  }
LABEL_12:
  v7 = *(void **)(a1 + 72);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x54456F50u);
  return PopEtAggregateKeyCleanup((_QWORD *)(a1 + 96));
}
