/*
 * XREFs of PfpRpShutdown @ 0x14097C464
 * Callers:
 *     PfpParametersPropagate @ 0x14097D050 (PfpParametersPropagate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     PfpRpControlRequestReset @ 0x14084C784 (PfpRpControlRequestReset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rsi
  _DWORD *v5; // r14
  _QWORD *i; // rdx
  void *v7; // r10
  _QWORD *j; // rdx
  void *v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 || (v4 = (_QWORD *)*v3, (*v3 & 1) != 0) )
  {
    v5 = (_DWORD *)(a1 + 4);
    for ( i = v3 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
          ++i )
    {
      v4 = (_QWORD *)*i;
      if ( (*i & 1) == 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v5 = (_DWORD *)(a1 + 4);
LABEL_16:
    while ( v4 )
    {
      v7 = v4;
      v11 = v4[1] & (-1LL << (*v5 & 0x1F));
      v4 = (_QWORD *)*v4;
      if ( ((unsigned __int8)v4 & 1) != 0 )
      {
        for ( j = (_QWORD *)(*(_QWORD *)(a1 + 8)
                           + 8LL
                           + 8LL
                           * ((37
                             * (BYTE6(v11)
                              + 37
                              * (BYTE5(v11)
                               + 37
                               * (BYTE4(v11)
                                + 37
                                * (BYTE3(v11)
                                 + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                             + HIBYTE(v11)) & (unsigned int)((*v5 >> 5) - 1)));
              (unsigned __int64)j < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)(unsigned int)*v5 >> 5);
              ++j )
        {
          v4 = (_QWORD *)*j;
          if ( (*j & 1) == 0 )
            goto LABEL_15;
        }
        v4 = 0LL;
      }
LABEL_15:
      ExFreePoolWithTag(v7, 0);
    }
  }
  v9 = *(void **)(a1 + 8);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *v5 = 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
