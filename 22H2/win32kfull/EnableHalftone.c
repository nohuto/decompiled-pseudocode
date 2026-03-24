/*
 * XREFs of EnableHalftone @ 0x1C0132A40
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0132ACC (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0339F88 = EngCreateSemaphore();
  if ( !qword_1C0339F88 )
    return 0LL;
  Src = 0LL;
  qword_1C0339FAC = 0LL;
  dword_1C0339FA8 = 0;
  qword_1C0339F78 = EngCreateSemaphore();
  if ( !qword_1C0339F78 )
    return 0LL;
  word_1C0339FB4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0339FB6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
