/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6588
 * Callers:
 *     InitFNTCache @ 0x1C00E56F0 (InitFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C00E63D0 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00E6540 (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00E661C (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  HANDLE *v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = (HANDLE *)qword_1C033ABE8;
  if ( qword_1C033ABE8 )
  {
    if ( *(_QWORD *)qword_1C033ABE8 )
    {
      vUnmapFontCacheFile();
      v0 = (HANDLE *)qword_1C033ABE8;
    }
    if ( v0[12] )
    {
      ZwClose(v0[12]);
      v0 = (HANDLE *)qword_1C033ABE8;
      *(_QWORD *)(qword_1C033ABE8 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C033ABE8 = 0LL;
  }
  dword_1C033ABE0 = 0;
  gbFntCacheClosed = 1;
}
