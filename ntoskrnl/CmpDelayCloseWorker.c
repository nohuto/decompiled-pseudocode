/*
 * XREFs of CmpDelayCloseWorker @ 0x1407AB950
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpUnlockHashEntry @ 0x1407AB010 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusive @ 0x1407AB0BC (CmpLockHashEntryExclusive.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407AF820 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpDelayCloseWorker(__int64 a1)
{
  bool v1; // r12
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // edi
  _BYTE *v7; // r9
  int v8; // eax
  unsigned int v9; // ebp
  char *v10; // rsi
  unsigned int *v11; // r14
  unsigned int v12; // r15d
  ULONG_PTR *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  bool v25; // [rsp+20h] [rbp-F8h]
  __int128 v26; // [rsp+28h] [rbp-F0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-E0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-D0h] BYREF
  char v29; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v30[12]; // [rsp+88h] [rbp-90h] BYREF
  char v31; // [rsp+94h] [rbp-84h] BYREF

  v1 = a1 != 0;
  v25 = a1 != 0;
  v26 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v27 = 0LL;
  CmpInitializeThreadInfo((__int64)&v27);
  CmpAttachToRegistryProcess(&ApcState);
  CmpInitializeDelayDerefContext(&v26);
  CmpLockRegistry(v3, v2, v4, v5);
  if ( v1 )
    goto LABEL_3;
  do
  {
    _InterlockedExchange(&CmpDelayCloseWorkItemActive, 2);
    do
    {
LABEL_3:
      v6 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v7 = v30;
      do
      {
        v8 = CmpDelayedCloseElements;
        if ( CmpDelayedCloseElements <= (unsigned int)CmpDelayedCloseSize && (!v1 || !CmpDelayedCloseElements) )
          break;
        v21 = qword_140C13C08 - 224;
        if ( *(__int64 **)qword_140C13C08 == &CmpDelayedLRUListHead )
        {
          v22 = *(_QWORD **)(qword_140C13C08 + 8);
          if ( *v22 == qword_140C13C08 )
            continue;
        }
        __fastfail(3u);
        qword_140C13C08 = *(_QWORD *)(qword_140C13C08 + 8);
        *v22 = &CmpDelayedLRUListHead;
        --qword_140D552E8;
        CmpDelayedCloseElements = v8 - 1;
        *((_QWORD *)v7 - 1) = *(_QWORD *)(v21 + 32);
        *(_QWORD *)v7 = v21;
        v23 = v6++;
        v30[24 * v23 + 8] = 0;
        *((_DWORD *)v7 + 3) = *(_DWORD *)(v21 + 16);
        v7 += 24;
        *(_BYTE *)(v21 + 64) |= 4u;
        *(_QWORD *)(v21 + 224) = &v30[24 * v23 + 8];
      }
      while ( v6 < 4 );
      ExReleaseFastMutex((PFAST_MUTEX)&CmpDelayedCloseTableLock);
      v9 = 0;
      if ( v6 )
      {
        v10 = &v29;
        v11 = (unsigned int *)&v31;
        do
        {
          CmpLockHashEntryExclusive(*(_QWORD *)v10, *v11);
          v12 = v9;
          if ( v9 < v6 )
          {
            v13 = (ULONG_PTR *)(v11 - 3);
            do
            {
              if ( *((_DWORD *)v13 + 3) == *((_DWORD *)v10 + 5) && *(v13 - 1) == *(_QWORD *)v10 && !*((_BYTE *)v13 + 8) )
              {
                CmpLockKcbExclusive(*v13);
                v14 = 0LL;
                v15 = *(_QWORD *)(*v13 + 192);
                if ( v15 )
                {
                  v24 = *(_QWORD *)(v15 + 24);
                  if ( v24 )
                  {
                    v14 = *(_QWORD *)(v24 + 16);
                    CmpUnlockKcb(*v13);
                    CmpLockKcbExclusive(v14);
                    CmpLockKcbExclusive(*v13);
                  }
                }
                CmpCleanUpKcbCacheWithLock(*v13);
                CmpUnlockKcb(*v13);
                if ( v14 )
                  CmpUnlockKcb(v14);
                v30[24 * v12 + 8] = 1;
              }
              ++v12;
              v13 += 3;
            }
            while ( v12 < v6 );
          }
          CmpUnlockHashEntry(*(_QWORD **)v10, *v11);
          ++v9;
          v11 += 6;
          v10 += 24;
        }
        while ( v9 < v6 );
        v1 = v25;
      }
    }
    while ( v6 == 4 );
  }
  while ( !v1 && _InterlockedCompareExchange(&CmpDelayCloseWorkItemActive, 0, 2) != 2 );
  CmpDrainDelayDerefContext((_QWORD **)&v26);
  CmpUnlockRegistry(v17, v16, v18, v19);
  CmpDetachFromRegistryProcess(&ApcState);
  return CmCleanupThreadInfo((__int64 *)&v27);
}
