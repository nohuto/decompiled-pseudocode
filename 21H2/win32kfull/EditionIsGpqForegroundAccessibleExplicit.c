/*
 * XREFs of EditionIsGpqForegroundAccessibleExplicit @ 0x1C00F5CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00F5CE8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleExplicit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)IsGpqForegroundAccessibleExplicit(a1, a2, a3, a4) )
    return 1LL;
  EtwTraceUIPIInputError(a2, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 1);
  return 0LL;
}
