/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140A2C418
 * Callers:
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B3AF20 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140A2C318 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap((__int64)&xmmword_140C67B10[v0], 0) )
  {
    if ( (unsigned int)++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
