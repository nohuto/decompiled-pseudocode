/*
 * XREFs of WmiVerifierCopyEvent @ 0x1405A57B0
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x1409E8060 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
