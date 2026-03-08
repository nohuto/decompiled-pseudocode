/*
 * XREFs of KiUnparkCurrentProcessor @ 0x14057C38C
 * Callers:
 *     KeTransitionProcessorParkState @ 0x14057B3EC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402ADF80 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiUpdateThreadPriority @ 0x1403437B0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x140459B66 (KiSendHeteroRescheduleIntRequest.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14057B53C (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 */

__int64 __fastcall KiUnparkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 v3; // rbp
  __int64 v7; // rdx
  char v8; // bl
  char v9; // bl
  char v10; // bl
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 200);
  _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v3);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 0, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 112));
  v8 = *(_BYTE *)(a1 + 35) & 0xF7;
  *(_BYTE *)(a1 + 35) = v8;
  v9 = v8 & 1;
  if ( !v9 )
  {
    v13 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a2, 0LL) )
    {
      do
        KeYieldProcessorEx(&v13);
      while ( *(_QWORD *)a2 );
    }
    *(_QWORD *)(a2 + 8) ^= v3;
    _InterlockedAnd64((volatile signed __int64 *)a2, 0LL);
    *(_BYTE *)(a1 + 13243) = 1;
  }
  v10 = v9 ^ 1;
  KiUpdateThreadPriority(a1, v7, *(_QWORD *)(a1 + 24), 0, v10);
  _InterlockedIncrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  result = KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v10 && KeHeteroSystem && !KeHeteroSystemVirtual )
    return KiSendHeteroRescheduleIntRequest((_QWORD *)a1, v12);
  return result;
}
