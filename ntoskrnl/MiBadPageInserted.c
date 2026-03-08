/*
 * XREFs of MiBadPageInserted @ 0x14062736C
 * Callers:
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiBadPageInserted(int a1)
{
  unsigned __int16 *v1; // rbx

  if ( a1 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = MiSystemPartition;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C6CB20);
  }
  ++dword_140C67BEC;
  if ( !byte_140C67BC3 )
    byte_140C67BC3 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1688);
}
