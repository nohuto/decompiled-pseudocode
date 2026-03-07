void __fastcall MiLockMemoryLists(__int64 a1, __int64 a2)
{
  volatile LONG *v3; // rcx
  __int64 v5; // rsi
  __int64 *v6; // rbx
  __int64 v7; // r14
  unsigned int v8; // r15d
  __int64 i; // r12
  volatile LONG *v10; // rcx
  volatile LONG *v11; // rbx
  volatile LONG *v12; // rcx
  __int64 v13; // rsi
  volatile LONG *v14; // rbx
  __int64 v15; // r14
  volatile LONG *v16; // rbx
  __int16 v17; // cx
  unsigned int j; // ebx
  __int64 v19; // r14
  __int64 v20; // rsi
  volatile LONG *v21; // rcx
  unsigned int v22; // ebx
  volatile LONG *v23; // rsi
  volatile LONG *v24; // rcx
  unsigned int v25; // ebx
  __int64 v26; // rdi
  volatile LONG *v27; // rdi

  v3 = (volatile LONG *)(a1 + 6752);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  v5 = 8LL;
  v6 = (__int64 *)(a1 + 2496);
  v7 = 2LL;
  do
  {
    v8 = 0;
    for ( i = *v6; v8 < 3 * dword_140C6577C; ++v8 )
    {
      v10 = (volatile LONG *)(i + 88LL * v8 + 32);
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v10);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v11 = (volatile LONG *)(a1 + 2976);
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v11);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    v11 += 22;
    --v5;
  }
  while ( v5 );
  v12 = (volatile LONG *)(a1 + 3680);
  if ( a2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(v12);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 3808));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 3808));
  }
  v13 = 16LL;
  v14 = (volatile LONG *)(a1 + 3936);
  v15 = 16LL;
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v14);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    v14 += 22;
    --v15;
  }
  while ( v15 );
  v16 = (volatile LONG *)(a1 + 5344);
  do
  {
    if ( a2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v16);
    else
      ExReleaseSpinLockExclusiveFromDpcLevel(v16);
    v16 += 22;
    --v13;
  }
  while ( v13 );
  v17 = KeNumberNodes;
  for ( j = 0; j < (unsigned __int16)KeNumberNodes; ++j )
  {
    v19 = 7LL;
    v20 = 25408LL * j;
    do
    {
      v21 = (volatile LONG *)(v20 + *(_QWORD *)(a1 + 16) + 23408LL);
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v21);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v21);
      v20 += 264LL;
      --v19;
    }
    while ( v19 );
    v17 = KeNumberNodes;
  }
  v22 = 0;
  if ( v17 )
  {
    v23 = (volatile LONG *)(*(_QWORD *)(a1 + 16) + 23104LL);
    do
    {
      if ( a2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v23);
      else
        ExReleaseSpinLockExclusiveFromDpcLevel(v23);
      v23 += 6352;
      ++v22;
    }
    while ( v22 < (unsigned __int16)KeNumberNodes );
  }
  v24 = (volatile LONG *)(a1 + 17760);
  if ( a2 )
    ExAcquireSpinLockExclusiveAtDpcLevel(v24);
  else
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
  v25 = 0;
  v26 = *(_QWORD *)(a1 + 16);
  if ( KeNumberNodes )
  {
    v27 = (volatile LONG *)(v26 + 23160);
    do
    {
      if ( *((_QWORD *)v27 - 1) )
      {
        if ( a2 )
          ExAcquireSpinLockExclusiveAtDpcLevel(v27);
        else
          ExReleaseSpinLockExclusiveFromDpcLevel(v27);
      }
      v27 += 6352;
      ++v25;
    }
    while ( v25 < (unsigned __int16)KeNumberNodes );
  }
}
