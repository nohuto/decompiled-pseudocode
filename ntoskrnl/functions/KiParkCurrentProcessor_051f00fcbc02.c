__int64 __fastcall KiParkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3, char a4)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  volatile signed __int32 *v14; // rdi
  __int64 v15; // r9
  char v16; // r11
  char v18[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v22[336]; // [rsp+50h] [rbp-B0h] BYREF

  v19 = 0LL;
  v18[0] = 0;
  memset(v22, 0, sizeof(v22));
  v8 = *(_QWORD *)(a1 + 200);
  _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v8);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 1, v18);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 112));
  v10 = *(_BYTE *)(a1 + 35) | 8;
  *(_BYTE *)(a1 + 35) = v10;
  if ( (v10 & 1) == 0 )
  {
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    {
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)a2 );
    }
    *(_QWORD *)(a2 + 8) ^= v8;
    _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
  }
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    v11 = *(_QWORD *)(a1 + 8);
  KiUpdateThreadPriority(a1, v9, *(_QWORD *)(a1 + 24), 63, v11 == *(_QWORD *)(a1 + 24));
  if ( KiGroupSchedulingEnabled )
    KiTransitionSchedulingGroupGeneration((struct _KPRCB *)a1, v12, MEMORY[0xFFFFF78000000320], 1);
  v13 = 0LL;
  MmGetMinWsPagePriority();
  if ( (unsigned int)Feature_Servicing_SoftParkFixes__private_IsEnabledWithReporting(0) )
    v13 = *(_QWORD *)(a1 + 34888);
  KiFlushReadyLists(a1 + 32576, (unsigned int *)(a1 + 32472), (__int64)&v19, v13);
  *(_DWORD *)(a1 + 33140) = 0;
  *(_QWORD *)(a1 + 33144) = 0LL;
  if ( v18[0] )
  {
    v14 = *(volatile signed __int32 **)(a1 + 34888);
    v21[0] = 0;
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
        KeYieldProcessorEx(v21);
      while ( *(_QWORD *)v14 );
    }
    KiFlushSharedReadyQueueReadyLists((__int64)v14, (__int64)&v19);
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  }
  if ( !a4 && (KeGetCurrentPrcb()->DpcRequestSummary & 0x10000) == 0 && !KiIsPrcbThread(*(_QWORD *)(a1 + 8)) )
    _interlockedbittestandset((volatile signed __int32 *)(v15 + 120), 0xCu);
  KiStartRescheduleContext((__int64)v22, a3, 0LL);
  KiAdjustRescheduleContextForParking(v22, a1);
  KiSearchForNewThreadsForRescheduleContext(v22, (__int64)&v19);
  KiCommitRescheduleContext(v22, (struct _KPRCB *)a1, 1, &v19);
  _InterlockedDecrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v16 )
  {
    KiCompleteRescheduleContext(v22, a1);
    KiFlushSoftwareInterruptBatch(a1 + 12760);
  }
  return KiProcessDeferredReadyList(a1, (__int64)&v19, 2u);
}
