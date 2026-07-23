/*
 * XREFs of MiSetIdealProcessorThread @ 0x14035E380
 * Callers:
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     MiZeroInParallelWorker @ 0x140357570 (MiZeroInParallelWorker.c)
 *     MiGetPagesToZero @ 0x14054FC8C (MiGetPagesToZero.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x1402682A0 (KeQueryPriorityThread.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x140344540 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetIdealProcessorThreadEx @ 0x14035C2A8 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  unsigned int FirstSetRightGroupAffinity; // eax
  _DWORD *v6; // r9
  int v7; // esi
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-20h] BYREF

  v9 = 0;
  v1 = Affinity->Mask == 0;
  PreviousAffinity = 0LL;
  if ( v1 )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)Affinity);
  v7 = KeSetIdealProcessorThreadEx((__int64)CurrentThread, FirstSetRightGroupAffinity, (__int64)&v9, v6);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v7 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v9;
}
