/*
 * XREFs of WmiVerifierCopyEvent @ 0x1405A5AA0
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1409E9050 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  unsigned int v1; // esi
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  v1 = *Src;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *Src, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memmove(PoolWithTag, Src, v1);
  return v4;
}
