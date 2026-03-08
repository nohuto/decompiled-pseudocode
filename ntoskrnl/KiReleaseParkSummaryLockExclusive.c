/*
 * XREFs of KiReleaseParkSummaryLockExclusive @ 0x14040B264
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057BEC0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseParkSummaryLockExclusive(__int64 a1)
{
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
}
