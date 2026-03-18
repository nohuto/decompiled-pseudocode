/*
 * XREFs of EnableHalftone @ 0x1C011DFA0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C011E02C (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0336428 = EngCreateSemaphore();
  if ( !qword_1C0336428 )
    return 0LL;
  Src = 0LL;
  qword_1C033644C = 0LL;
  dword_1C0336448 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0336454 = 0;
  qword_1C0336420 = EngCreateSemaphore();
  if ( !qword_1C0336420 )
    return 0LL;
  word_1C0336456 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
