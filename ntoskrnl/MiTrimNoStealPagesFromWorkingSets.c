/*
 * XREFs of MiTrimNoStealPagesFromWorkingSets @ 0x140633040
 * Callers:
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiQueueWorkingSetRequest @ 0x1402B8A34 (MiQueueWorkingSetRequest.c)
 */

__int64 __fastcall MiTrimNoStealPagesFromWorkingSets(__int64 a1, char a2)
{
  int v3; // edx

  if ( !byte_140C69564 )
    return 0LL;
  v3 = 0;
  if ( (a2 & 2) != 0 && *(__int64 *)(a1 + 1432) > 1 )
    v3 = 256;
  if ( (a2 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 16908) )
      v3 |= 0x200u;
  }
  if ( !v3 )
    return 0LL;
  MiQueueWorkingSetRequest(a1, v3);
  return 1LL;
}
