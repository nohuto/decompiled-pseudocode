/*
 * XREFs of DbgkpWerDeferredWriteRoutine @ 0x140938A80
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     DbgkpWerCleanupContext @ 0x14087EEF4 (DbgkpWerCleanupContext.c)
 *     IoWriteDeferredLiveDumpData @ 0x140949354 (IoWriteDeferredLiveDumpData.c)
 */

char __fastcall DbgkpWerDeferredWriteRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTIMER *v3; // rbp
  int v4; // esi
  int v5; // eax

  DbgPrintEx(5u, 3u, "DBGK: DbgkpWerDeferredWriteRoutine entered, context 0x%p\n", (const void *)a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = *(struct _KTIMER **)(*(_QWORD *)(a1 + 120) + 16LL);
  if ( v3 )
    KiSetTimerEx((__int64)v3, -10000000LL * DbgkpWerDeferredWriteTimeoutSeconds, 0, 0, 0LL);
  v4 = IoWriteDeferredLiveDumpData(*(PVOID *)(a1 + 128));
  KeCancelTimer(v3);
  *(_QWORD *)(a1 + 128) = 0LL;
  if ( v4 >= 0 )
  {
    v5 = WerLiveKernelSubmitReport(*(_QWORD *)(a1 + 96), 0LL);
    if ( v5 >= 0 )
      *(_DWORD *)(a1 + 104) |= 1u;
    else
      DbgPrintEx(
        5u,
        0,
        "DBGK: DbgkpWerDeferredWriteRoutine: WerLiveKernelSubmitReport failed with status 0x%X\n",
        (unsigned int)v5);
  }
  else
  {
    DbgPrintEx(5u, 0, "DBGK: DbgkpWerDeferredWriteRoutine: dump write failed with status 0x%X\n", (unsigned int)v4);
  }
  DbgkpWerCleanupContext(a1);
  _InterlockedExchange(&DbgkpBusy, 0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
