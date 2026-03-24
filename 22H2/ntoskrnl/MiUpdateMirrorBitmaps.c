/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x140774684
 * Callers:
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140A54728 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1407746C4 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140C4E710[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
