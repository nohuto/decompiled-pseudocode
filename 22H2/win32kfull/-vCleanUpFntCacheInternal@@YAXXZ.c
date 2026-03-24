/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6238
 * Callers:
 *     InitFNTCache @ 0x1C00E53A0 (InitFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C00E6080 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00E61F0 (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00E62CC (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  HANDLE *v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = (HANDLE *)qword_1C0339BE8;
  if ( qword_1C0339BE8 )
  {
    if ( *(_QWORD *)qword_1C0339BE8 )
    {
      vUnmapFontCacheFile();
      v0 = (HANDLE *)qword_1C0339BE8;
    }
    if ( v0[12] )
    {
      ZwClose(v0[12]);
      v0 = (HANDLE *)qword_1C0339BE8;
      *(_QWORD *)(qword_1C0339BE8 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C0339BE8 = 0LL;
  }
  dword_1C0339BE0 = 0;
  gbFntCacheClosed = 1;
}
