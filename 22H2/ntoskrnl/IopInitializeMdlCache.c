/*
 * XREFs of IopInitializeMdlCache @ 0x140836484
 * Callers:
 *     IoInitSystem @ 0x140B606E0 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *IopInitializeMdlCache()
{
  __int64 *result; // rax

  qword_140C5D748 = 0LL;
  result = &qword_140C5D750;
  qword_140C5D768 = 0LL;
  qword_140C5D758 = (__int64)&qword_140C5D750;
  qword_140C5D750 = (__int64)&qword_140C5D750;
  IopMcData = 3148801;
  return result;
}
