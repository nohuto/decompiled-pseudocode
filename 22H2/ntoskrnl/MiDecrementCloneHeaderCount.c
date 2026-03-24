/*
 * XREFs of MiDecrementCloneHeaderCount @ 0x140559F00
 * Callers:
 *     MiDeleteCloneDescriptor @ 0x140559F34 (MiDeleteCloneDescriptor.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     MiFreeCloneDescriptor @ 0x1408D9738 (MiFreeCloneDescriptor.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

int __fastcall MiDecrementCloneHeaderCount(__int64 a1)
{
  signed __int64 v1; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1368), 0xFFFFFFFFFFFFFFFFuLL);
  if ( v1 == 1 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 2136), 0, 0);
  return v1;
}
