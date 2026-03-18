/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140A2F168
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B49630 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140A2F068 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap((__int64)&xmmword_140C67F90[v0], 0) )
  {
    if ( (unsigned int)++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
