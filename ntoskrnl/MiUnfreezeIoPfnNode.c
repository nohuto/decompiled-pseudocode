/*
 * XREFs of MiUnfreezeIoPfnNode @ 0x14062C658
 * Callers:
 *     MiDbgUnTranslatePhysicalAddress @ 0x140641E70 (MiDbgUnTranslatePhysicalAddress.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiUnfreezeIoPfnNode(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx

  v1 = *a1;
  v2 = *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1577);
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v1 + 172));
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 384));
}
