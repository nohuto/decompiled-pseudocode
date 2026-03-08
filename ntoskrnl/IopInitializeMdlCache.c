/*
 * XREFs of IopInitializeMdlCache @ 0x1408367D4
 * Callers:
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  qword_140C5D2C8 = 0LL;
  result = &qword_140C5D2D0;
  qword_140C5D2E8 = 0LL;
  qword_140C5D2D8 = (__int64)&qword_140C5D2D0;
  qword_140C5D2D0 = (__int64)&qword_140C5D2D0;
  IopMcData = 3148801;
  return result;
}
