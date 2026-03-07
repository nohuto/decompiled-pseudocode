void __fastcall KiReleaseParkSummaryLockExclusive(__int64 a1)
{
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
}
