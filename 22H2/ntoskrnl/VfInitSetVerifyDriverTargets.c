/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140B97CA0
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140B982C4 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  unsigned int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D852DE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  LODWORD(MmVerifyDriverBufferLength) = v2;
  return result;
}
