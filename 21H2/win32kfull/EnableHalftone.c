/*
 * XREFs of EnableHalftone @ 0x1C0132DF0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0132E7C (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C033AF88 = EngCreateSemaphore();
  if ( !qword_1C033AF88 )
    return 0LL;
  Src = 0LL;
  qword_1C033AFAC = 0LL;
  dword_1C033AFA8 = 0;
  qword_1C033AF78 = EngCreateSemaphore();
  if ( !qword_1C033AF78 )
    return 0LL;
  word_1C033AFB4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C033AFB6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
