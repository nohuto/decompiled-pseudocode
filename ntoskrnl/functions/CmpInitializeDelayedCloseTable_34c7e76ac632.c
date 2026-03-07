__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int128 *v3; // r9
  __int64 v4; // r11
  int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // r10
  const char *v9; // rcx
  unsigned int v10; // r9d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int128 *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_140C13C08 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  _mm_lfence();
  if ( !qword_140C64810 )
  {
    v1 = __rdtsc();
    v2 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v1) << 32) | (unsigned int)v1) >> 4)) ^ 0x5A4LL;
    if ( !v2 )
      v2 = 1LL;
    qword_140C64810 = v2;
    v3 = &KeServiceDescriptorTable;
    v4 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5A4LL;
    qword_140C64818 = v4;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v5 = 64;
    v6 = v2;
    v7 = 8LL;
    do
    {
      v6 = __ROR8__(v6 - *(_QWORD *)v3, v4);
      v3 = (__int128 *)((char *)v3 + 8);
      v5 -= 8;
      --v7;
    }
    while ( v7 );
    for ( ; v5; --v5 )
    {
      v17 = *(unsigned __int8 *)v3;
      v3 = (__int128 *)((char *)v3 + 1);
      v6 = __ROR8__(v6 - v17, v4);
    }
    v8 = (_QWORD *)KeServiceDescriptorTable;
    v9 = (const char *)KeServiceDescriptorTable;
    qword_140C64828 = v6;
    v10 = 4 * xmmword_140E018D0;
    v11 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140E018D0);
    if ( (unsigned __int64)KeServiceDescriptorTable < v11 )
    {
      do
      {
        _mm_prefetch(v9, 0);
        v9 += 64;
      }
      while ( (unsigned __int64)v9 < v11 );
    }
    v12 = v2;
    if ( v10 >= 8 )
    {
      v13 = (unsigned __int64)v10 >> 3;
      do
      {
        v12 = __ROR8__(v12 - *v8++, v4);
        v10 -= 8;
        --v13;
      }
      while ( v13 );
    }
    for ( ; v10; --v10 )
    {
      v18 = *(unsigned __int8 *)v8;
      v8 = (_QWORD *)((char *)v8 + 1);
      v12 = __ROR8__(v12 - v18, v4);
    }
    qword_140C64830 = v12;
    v14 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v15 = 4LL;
    v16 = 32;
    do
    {
      v2 = __ROR8__(v2 - *(_QWORD *)v14, v4);
      v14 = (__int128 *)((char *)v14 + 8);
      v16 -= 8;
      --v15;
    }
    while ( v15 );
    for ( ; v16; --v16 )
    {
      v19 = *(unsigned __int8 *)v14;
      v14 = (__int128 *)((char *)v14 + 1);
      v2 = __ROR8__(v2 - v19, v4);
    }
    qword_140C64838 = v2;
    result = (__int64 *)(KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL);
    qword_140C64820 = (__int64)result;
  }
  return result;
}
