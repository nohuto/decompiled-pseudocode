/*
 * XREFs of MiDecrementControlAreaCount @ 0x1402150F8
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1402CFCF8 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x14065745C (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  _InterlockedDecrement64(a2);
  v2 = *(_QWORD *)(a1 + 1416);
  if ( !v2 )
  {
    v2 = *(_QWORD *)(a1 + 1424);
    if ( !v2 )
      LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2416), 0, 0);
  }
  return v2;
}
