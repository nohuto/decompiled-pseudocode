/*
 * XREFs of EtwpCoverageResetCP @ 0x1409354A4
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140771878 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     EtwTelemetryCoverageReport @ 0x140321950 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x140321A2C (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x140321A80 (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x140321B48 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     EtwpCoverageFlushPending @ 0x1406A4A30 (EtwpCoverageFlushPending.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r11d
  _QWORD *v8; // rsi
  unsigned int v9; // r13d
  unsigned __int64 v10; // rbp
  _BYTE *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  _DWORD *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int i; // esi
  unsigned int *v23; // rax
  unsigned int v24; // r11d
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  v25 = 0;
  PoolWithTag = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140C0EFF4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C0EFF0 )
      dword_140C0EFF0 = TelemetryCoverageStringHashInternal(off_140C0EFE8, &v26);
    EtwTelemetryCoverageReport((__int64 *)&off_140C0EFE8);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v25) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v7 )
    {
      EtwpCoverageFlushPending((int **)a1);
      PoolWithTag = ExAllocatePoolWithTag(
                      PagedPool,
                      (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                      0x56777445u);
      if ( PoolWithTag )
      {
        v8 = *(_QWORD **)(a1 + 48);
        if ( v8 != (_QWORD *)(a1 + 48) )
        {
          v9 = v25;
          while ( 1 )
          {
            v10 = v8[3];
            v11 = v8 + 5;
            if ( (unsigned __int64)(v8 + 5) < v10 )
              break;
LABEL_18:
            v8 = (_QWORD *)*v8;
            if ( v8 == (_QWORD *)(a1 + 48) )
              goto LABEL_19;
          }
          v12 = v25;
          while ( 1 )
          {
            v13 = -1LL;
            do
              ++v13;
            while ( v11[v13] );
            if ( v13 == v12 )
            {
              if ( !strcmp(v11, *(const char **)a2) )
              {
                memmove(v11, &v11[v25 + 1], v10 - (_QWORD)&v11[v25 + 1]);
                v8[3] -= v9 + 1;
                v15 = 0;
                v16 = 0;
                v8[4] = v8[3];
                ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
                *Internal = 0;
                --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
                v17 = *(_DWORD **)(a1 + 16);
                if ( v17[1] )
                {
                  v18 = *(_DWORD **)(a1 + 16);
                  do
                  {
                    v19 = v18[v16 + 13];
                    if ( v19 )
                    {
                      v20 = v15++;
                      PoolWithTag[v20] = v19;
                      v17 = *(_DWORD **)(a1 + 16);
                      v18 = v17;
                      if ( v15 >= v17[8] )
                        break;
                    }
                    ++v16;
                    v17 = v18;
                  }
                  while ( v16 < v18[1] );
                }
                memset(v17 + 13, 0, 4LL * (unsigned int)v17[1]);
                v21 = *(_QWORD *)(a1 + 16);
                for ( i = 0; i < *(_DWORD *)(v21 + 32); v21 = *(_QWORD *)(a1 + 16) )
                {
                  v23 = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), PoolWithTag[i++]);
                  *v23 = v24;
                }
                v4 = 1;
                *(_DWORD *)(a2 + 12) = *(_DWORD *)(v21 + 24);
                break;
              }
              v12 = v25;
            }
            v11 += v13 + 1;
            if ( (unsigned __int64)v11 >= v10 )
              goto LABEL_18;
          }
        }
      }
    }
  }
LABEL_19:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x56777445u);
  return v4;
}
