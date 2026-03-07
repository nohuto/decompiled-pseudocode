void *__fastcall KiInitPrcb(__int64 a1, int a2)
{
  _QWORD *v2; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  void *result; // rax

  v2 = (_QWORD *)(a1 + 32576);
  *(_DWORD *)(a1 + 32472) = 0;
  *(_DWORD *)(a1 + 32480) = 1;
  *(_DWORD *)(a1 + 33140) = 0;
  *(_QWORD *)(a1 + 33144) = 0LL;
  *(_QWORD *)(a1 + 11528) = 0LL;
  v5 = 32LL;
  do
  {
    v2[1] = v2;
    *v2 = v2;
    v2 += 2;
    --v5;
  }
  while ( v5 );
  KiInitializeSharedReadyQueue(*(_QWORD *)(a1 + 34888), a1);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 34888) + 528LL;
  KiInitializeDpcList((_QWORD *)(a1 + 13120));
  *(_QWORD *)(a1 + 13136) = 0LL;
  *(_QWORD *)(a1 + 13144) = 0LL;
  *(_DWORD *)(a1 + 13244) = 0;
  *(_BYTE *)(a1 + 13242) = 0;
  *(_DWORD *)(a1 + 13224) = KiMaximumDpcQueueDepth;
  *(_DWORD *)(a1 + 13232) = KiMinimumDpcRate;
  *(_DWORD *)(a1 + 33108) = KiAdjustDpcThreshold;
  KeInitializeDpc((PRKDPC)(a1 + 32352), (PKDEFERRED_ROUTINE)KiDpcWatchdog, 0LL);
  if ( !*(_QWORD *)(a1 + 32408) )
    *(_WORD *)(a1 + 32354) = a2 + 2048;
  *(_BYTE *)(a1 + 32353) = 2;
  KiInitializeBugcheckRecoveryProcessor(a1);
  *(_QWORD *)(a1 + 13096) = -1LL;
  *(_QWORD *)(a1 + 32456) = a1 + 32448;
  *(_QWORD *)(a1 + 32448) = a1 + 32448;
  InitializeSListHead((PSLIST_HEADER)(a1 + 13056));
  KeGetPcr()->NtTib.ArbitraryUserPointer = (void *)(a1 + 1776);
  *(_QWORD *)(a1 + 2008) = &CcBcbSpinLock;
  *(_QWORD *)(a1 + 2000) = 0LL;
  *(_QWORD *)(a1 + 1864) = &CcMasterSpinLock;
  *(_QWORD *)(a1 + 1848) = &CcVacbSpinLock;
  *(_QWORD *)(a1 + 1880) = &NonPagedPoolLock;
  *(_QWORD *)(a1 + 1896) = &IopCancelSpinLock;
  *(_QWORD *)(a1 + 1928) = &IopVpbSpinLock;
  *(_QWORD *)(a1 + 1944) = &IopDatabaseLock;
  *(_QWORD *)(a1 + 1960) = &IopCompletionLock;
  *(_QWORD *)(a1 + 1976) = &NtfsStructLock;
  *(_QWORD *)(a1 + 1992) = &AfdWorkQueueSpinLock;
  *(_QWORD *)(a1 + 1856) = 0LL;
  *(_QWORD *)(a1 + 1840) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1920) = 0LL;
  *(_QWORD *)(a1 + 1936) = 0LL;
  *(_QWORD *)(a1 + 1952) = 0LL;
  *(_QWORD *)(a1 + 1968) = 0LL;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 2032) = 0LL;
  *(_QWORD *)(a1 + 2040) = 0LL;
  *(_DWORD *)(a1 + 35296) = (3 * (_WORD)a2) & 0x3FF;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 32464) = 0LL;
  *(_DWORD *)(a1 + 32416) = 1;
  KeInitializeDpc((PRKDPC)(a1 + 35560), (PKDEFERRED_ROUTINE)KiEntropyDpcRoutine, (PVOID)(a1 + 35296));
  if ( !a2 )
  {
    KiClockPollCycle = KiClockKeepAliveCycle;
    KiReverseStallIpiLock = 0LL;
    CcBcbSpinLock = 0LL;
    CcMasterSpinLock = 0LL;
    CcVacbSpinLock = 0LL;
    IopCancelSpinLock = 0LL;
    IopCompletionLock = 0LL;
    IopDatabaseLock = 0LL;
    IopVpbSpinLock = 0LL;
    NonPagedPoolLock = 0LL;
    NtfsStructLock = 0LL;
    AfdWorkQueueSpinLock = 0LL;
    KeSleepingProcessors = 2097184;
    memset(&unk_140C415E4, 0, 0x104uLL);
  }
  KiIntSteerInitPrcb(a1);
  KeInitializeDpc((PRKDPC)(a1 + 35712), (PKDEFERRED_ROUTINE)KiAbDeferredProcessingWorker, 0LL);
  if ( !*(_QWORD *)(a1 + 35768) )
    *(_WORD *)(a1 + 35714) = a2 + 2048;
  KiInitializeSoftwareInterruptBatch((_DWORD *)(a1 + 12760));
  *(_DWORD *)(a1 + 34452) = 0;
  v6 = 5LL;
  v7 = a1 + 40636;
  do
  {
    *(_QWORD *)(v7 - 4) = 2097153LL;
    result = memset((void *)(v7 + 4), 0, 0x100uLL);
    v7 += 264LL;
    --v6;
  }
  while ( v6 );
  return result;
}
