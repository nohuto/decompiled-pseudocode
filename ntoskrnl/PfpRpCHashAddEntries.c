/*
 * XREFs of PfpRpCHashAddEntries @ 0x1407DF6B8
 * Callers:
 *     PfpRpControlRequestUpdate @ 0x1407DF508 (PfpRpControlRequestUpdate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PfpRpCHashGrow @ 0x140839390 (PfpRpCHashGrow.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpCHashAddEntries(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 *a3,
        __int64 *a4,
        unsigned int a5)
{
  unsigned int v5; // r13d
  int v6; // ecx
  __int64 *v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned int v9; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r15
  __int64 v14; // r8
  int v15; // r9d
  int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *v20; // rax
  int v21; // r15d
  PVOID v22; // rcx
  __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  v6 = *(_DWORD *)(a2 + 8);
  P = 0LL;
  v7 = a4;
  v8 = (unsigned __int64)a4 + ((unsigned __int64)a5 << v6);
  v9 = 1 << v6;
  if ( a5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  }
  if ( (unsigned __int64)v7 < v8 )
  {
    v13 = v9;
    do
    {
      if ( (unsigned int)(2 * *(_DWORD *)(a2 + 16)) >= *(_DWORD *)(a2 + 12) )
      {
        if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a3);
        KeAbPostRelease((ULONG_PTR)a3);
        KeLeaveCriticalRegion();
        v21 = PfpRpCHashGrow(a1, a2, a3, &P);
        if ( v21 < 0 )
          goto LABEL_15;
        v13 = v9;
      }
      v14 = *v7;
      v15 = *(_DWORD *)(a2 + 12);
      if ( v15 )
      {
        v16 = *(_DWORD *)(a2 + 8);
        v17 = (unsigned int)(v15 - 1);
        v28 = *v7;
        v18 = (HIBYTE(v28)
             + 37
             * (BYTE6(v28)
              + 37
              * (BYTE5(v28)
               + 37
               * (BYTE4(v28)
                + 37 * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v14 + 11623883)))))))) & (unsigned int)(v15 - 1);
        v26 = v17;
        v19 = 0LL;
        v20 = (__int64 *)(*(_QWORD *)a2 + (v18 << v16));
        if ( *v20 )
        {
          v24 = *v20;
          do
          {
            v25 = v24;
            if ( v24 == v14 )
              break;
            if ( !v19 )
            {
              v19 = 2654435761LL * v14 + 1;
              if ( ((-79 * (_BYTE)v14) & 1) != 0 )
                v19 = 2654435761LL * v14;
            }
            v18 = v26 & (v19 + v18);
            v20 = (__int64 *)(*(_QWORD *)a2 + (v18 << v16));
            v25 = *v20;
            v24 = *v20;
          }
          while ( *v20 );
          v5 = a5;
          v13 = v9;
          if ( v25 )
            goto LABEL_9;
        }
      }
      else
      {
        v20 = 0LL;
      }
      memmove(v20, v7, v9);
      ++*(_DWORD *)(a2 + 16);
LABEL_9:
      v7 = (__int64 *)((char *)v7 + v13);
    }
    while ( (unsigned __int64)v7 < v8 );
  }
  if ( v5 )
  {
    if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a3);
    KeAbPostRelease((ULONG_PTR)a3);
    KeLeaveCriticalRegion();
  }
  v21 = 0;
LABEL_15:
  while ( 1 )
  {
    v22 = P;
    if ( !P )
      break;
    P = *(PVOID *)P;
    ExFreePoolWithTag(v22, 0);
  }
  return (unsigned int)v21;
}
