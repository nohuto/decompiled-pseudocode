/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x1402A47F0
 * Callers:
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  _QWORD v9[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-18h] BYREF

  v9[1] = 8LL;
  v9[0] = 0LL;
  v10 = 393479LL;
  v11[1] = v11;
  v11[0] = v11;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v9[0] = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(a3, a4);
  return KeWaitForGate((__int64)&v10, 18LL, 0);
}
