/*
 * XREFs of WmiVerifierCopyEvent @ 0x1405F9738
 * Callers:
 *     VerifierIoWMIWriteEvent @ 0x140AE1170 (VerifierIoWMIWriteEvent.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *__fastcall WmiVerifierCopyEvent(unsigned int *Src)
{
  unsigned int v1; // esi
  void *Pool2; // rax
  void *v4; // rbx

  v1 = *Src;
  Pool2 = (void *)ExAllocatePool2(64LL, *Src, 1885957463LL);
  v4 = Pool2;
  if ( Pool2 )
    memmove(Pool2, Src, v1);
  return v4;
}
