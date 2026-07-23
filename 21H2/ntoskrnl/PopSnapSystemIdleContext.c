/*
 * XREFs of PopSnapSystemIdleContext @ 0x1408F112C
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x140576810 (PopIdlePhaseWatchdogCallback.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EFD68 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopSnapSystemIdleContext(_QWORD *a1, _DWORD *a2)
{
  _OWORD *PoolWithTag; // rax
  __int64 v5; // rdx
  _OWORD *v6; // rcx
  int *v7; // rax
  __int128 v8; // xmm1
  _DWORD *v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x148uLL, 0x67696450u);
  v5 = 2LL;
  *a1 = PoolWithTag;
  v6 = PoolWithTag;
  v7 = &PopSystemIdleContext;
  do
  {
    *v6 = *(_OWORD *)v7;
    v6[1] = *((_OWORD *)v7 + 1);
    v6[2] = *((_OWORD *)v7 + 2);
    v6[3] = *((_OWORD *)v7 + 3);
    v6[4] = *((_OWORD *)v7 + 4);
    v6[5] = *((_OWORD *)v7 + 5);
    v6[6] = *((_OWORD *)v7 + 6);
    v6 += 8;
    v8 = *((_OWORD *)v7 + 7);
    v7 += 32;
    *(v6 - 1) = v8;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)v7;
  v6[1] = *((_OWORD *)v7 + 1);
  v6[2] = *((_OWORD *)v7 + 2);
  v6[3] = *((_OWORD *)v7 + 3);
  *((_QWORD *)v6 + 8) = *((_QWORD *)v7 + 8);
  *a2 = 0;
  if ( dword_140C0F334 )
  {
    v9 = &unk_140C0F25C;
    v10 = 4LL;
    do
    {
      if ( *((_BYTE *)v9 - 4) )
      {
        if ( *v9 )
        {
          if ( *v9 == 1 )
            v11 = (*(_QWORD *)(v9 - 3) - *(_QWORD *)(v9 - 5)) / 0x989680uLL;
          else
            LODWORD(v11) = -1;
        }
        else
        {
          LODWORD(v11) = 0;
        }
        if ( (unsigned int)v11 > *a2 )
          *a2 = v11;
      }
      v9 += 14;
      --v10;
    }
    while ( v10 );
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
