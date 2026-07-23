/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140A948A0
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140A94B90 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140D5B35E = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
