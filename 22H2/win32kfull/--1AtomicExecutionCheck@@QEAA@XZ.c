/*
 * XREFs of ??1AtomicExecutionCheck@@QEAA@XZ @ 0x1C01A5CC0
 * Callers:
 *     FreeTimer @ 0x1C003C040 (FreeTimer.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     NtUserKillTimer @ 0x1C011B3E0 (NtUserKillTimer.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall AtomicExecutionCheck::~AtomicExecutionCheck(AtomicExecutionCheck *this, __int64 a2, __int64 a3)
{
  AtomicExecutionCheck::Disarm(this, a2, a3);
}
