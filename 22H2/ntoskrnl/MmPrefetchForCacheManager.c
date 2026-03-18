/*
 * XREFs of MmPrefetchForCacheManager @ 0x14073F12C
 * Callers:
 *     CcFetchDataForRead @ 0x1402621A0 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x1402BDACC (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x14030E840 (CcPerformReadAhead.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x1402DE040 (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x1402F4D30 (MiReturnCcAccessLog.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     MiReleaseReadListResources @ 0x1407213C0 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140724164 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x1407494A0 (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  _QWORD *CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r12
  PVOID *v15; // rbx
  __int64 result; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140C680E8 && a5 >= dword_140C680EC )
    CcAccessLog = (_QWORD *)MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList((_DWORD)CcAccessLog, v14, a2, a3, a4, v13, -1, 0LL, (__int64)&P) >= 0 && P )
  {
    v15 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v15 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)P, 0, 1, -1) >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog(CcAccessLog, 1);
      MiPfExecuteReadList((__int64)P, 1, 0xFFFFFFFF, a7);
      result = 1LL;
      *(_QWORD *)P = *v15;
      *v15 = P;
      return result;
    }
    if ( !*v15
      && CurrentThread->SpecialApcDisable++ == -1
      && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    MiReleaseReadListResources((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
