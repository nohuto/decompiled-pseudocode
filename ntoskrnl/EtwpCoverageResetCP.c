/*
 * XREFs of EtwpCoverageResetCP @ 0x1409E5850
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140871478 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x1402F9DD0 (EtwTelemetryCoverageReport.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1402F9EA8 (TelemetryCoverageTableLocateInternal.c)
 *     EtwpCoverageValidateCP @ 0x1402F9EFC (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageStringHashInternal @ 0x1402F9F5C (TelemetryCoverageStringHashInternal.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCoverageFlushPending @ 0x140799B84 (EtwpCoverageFlushPending.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  unsigned int v4; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  int v10; // r11d
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  __int64 v14; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // edx
  _DWORD *v18; // rcx
  int v19; // r9d
  __int64 v20; // rax
  unsigned int *v21; // rcx
  unsigned int i; // edi
  unsigned int *v23; // rax
  unsigned int v24; // r11d
  int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  v25 = 0;
  Pool2 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140C09404 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140C09400 )
      dword_140C09400 = TelemetryCoverageStringHashInternal(off_140C093F8, &v26);
    EtwTelemetryCoverageReport((__int64 *)&off_140C093F8);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((__int64 *)a2, &v25) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EtwpCoverageLock, 0LL);
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v10 )
    {
      EtwpCoverageFlushPending((int **)a1, v7, v8, v9);
      Pool2 = (_DWORD *)ExAllocatePool2(
                          256LL,
                          (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                          1450669125LL);
      if ( Pool2 )
      {
        v11 = *(_QWORD **)(a1 + 48);
        if ( v11 != (_QWORD *)(a1 + 48) )
        {
          while ( 1 )
          {
            v12 = v11[3];
            v13 = (char *)(v11 + 5);
            if ( (unsigned __int64)(v11 + 5) < v12 )
              break;
LABEL_15:
            v11 = (_QWORD *)*v11;
            if ( v11 == (_QWORD *)(a1 + 48) )
              goto LABEL_16;
          }
          while ( 1 )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( v13[v14] );
            if ( v14 == v25 && !strcmp(v13, *(const char **)a2) )
              break;
            v13 += v14 + 1;
            if ( (unsigned __int64)v13 >= v12 )
              goto LABEL_15;
          }
          memmove(v13, &v13[v25 + 1], v12 - (_QWORD)&v13[v25 + 1]);
          v16 = 0;
          v11[3] -= (unsigned int)(v25 + 1);
          v17 = 0;
          v11[4] = v11[3];
          ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
          *Internal = 0;
          --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
          v18 = *(_DWORD **)(a1 + 16);
          if ( v18[1] )
          {
            do
            {
              v19 = v18[v17 + 13];
              if ( v19 )
              {
                v20 = v16++;
                Pool2[v20] = v19;
                v18 = *(_DWORD **)(a1 + 16);
                if ( v16 >= v18[8] )
                  break;
              }
              ++v17;
            }
            while ( v17 < v18[1] );
          }
          memset(v18 + 13, 0, 4LL * (unsigned int)v18[1]);
          v21 = *(unsigned int **)(a1 + 16);
          for ( i = 0; i < v21[8]; v21 = *(unsigned int **)(a1 + 16) )
          {
            v23 = TelemetryCoverageTableLocateInternal(v21, Pool2[i++]);
            *v23 = v24;
          }
          v4 = 1;
          *(_DWORD *)(a2 + 12) = v21[6];
        }
      }
    }
  }
LABEL_16:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v4;
}
