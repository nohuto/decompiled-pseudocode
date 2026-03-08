/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406A3DCC
 * Callers:
 *     CcPerformReadAhead @ 0x14020B9E0 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x14020CCA4 (CcAsyncReadPrefetch.c)
 *     CcFetchDataForRead @ 0x140221EE0 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiReturnCcAccessLog @ 0x1402DC41C (MiReturnCcAccessLog.c)
 *     MiPfExecuteReadList @ 0x1406A3F98 (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406A4E80 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x14077A724 (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  if ( dword_140C67C68 && a5 >= dword_140C67C6C )
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
      MiPfExecuteReadList(P, 1LL, 0xFFFFFFFFLL, a7, 0LL);
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
    MiReleaseReadListResources(P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
