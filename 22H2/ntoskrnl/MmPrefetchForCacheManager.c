/*
 * XREFs of MmPrefetchForCacheManager @ 0x1406360AC
 * Callers:
 *     CcAsyncReadPrefetch @ 0x14027A1F4 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     CcFetchDataForRead @ 0x1402A10C0 (CcFetchDataForRead.c)
 * Callees:
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCcAccessLog @ 0x1403215BC (MiReturnCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x140636234 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140636824 (MiPfExecuteReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 *     MiGetCcAccessLog @ 0x1406901BC (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  signed __int64 CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r15
  PVOID *v14; // rbx
  int v15; // eax
  PVOID v16; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v12 = a5;
  v13 = **(_QWORD **)(a1 + 40);
  if ( dword_140C4E828 && a5 >= dword_140C4E82C )
    CcAccessLog = MiGetCcAccessLog(a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v13, a2, 0, a4, v12, -1, (__int64)&P) >= 0 && P )
  {
    v14 = a8;
    *((_DWORD *)P + 26) = 1;
    if ( !*v14 )
      --CurrentThread->SpecialApcDisable;
    v15 = MiPfPutPagesInTransition((__int64)P, 0LL, 1);
    v16 = P;
    if ( v15 >= 0 && *((PVOID *)P + 15) != (char *)P + 120 )
    {
      if ( CcAccessLog )
      {
        MiReturnCcAccessLog(CcAccessLog, 1);
        v16 = P;
      }
      MiPfExecuteReadList(v16, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)P = *v14;
      *v14 = P;
      return result;
    }
    if ( !*v14 )
    {
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v16 = P;
    }
    MiReleaseReadListResources(v16);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog(CcAccessLog, 0);
  return 0LL;
}
