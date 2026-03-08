/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140B93A90
 * Callers:
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140B940B4 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  unsigned int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D850DE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  LODWORD(MmVerifyDriverBufferLength) = v2;
  return result;
}
