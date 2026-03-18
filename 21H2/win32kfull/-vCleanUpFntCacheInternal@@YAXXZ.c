/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00EF2F4
 * Callers:
 *     InitFNTCache @ 0x1C00E2390 (InitFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C00EE660 (GdiMultiUserFontCleanup.c)
 *     EngCloseFNTCache @ 0x1C00EF2AC (EngCloseFNTCache.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C00EF388 (vUnmapFontCacheFile.c)
 */

void vCleanUpFntCacheInternal(void)
{
  __int64 v0; // rcx

  if ( ghkeyGreInitialize )
  {
    ZwClose(ghkeyGreInitialize);
    ghkeyGreInitialize = 0LL;
  }
  v0 = qword_1C0335DA8;
  if ( qword_1C0335DA8 )
  {
    if ( *(_QWORD *)qword_1C0335DA8 )
    {
      vUnmapFontCacheFile();
      v0 = qword_1C0335DA8;
    }
    if ( *(_QWORD *)(v0 + 96) )
    {
      ZwClose(*(HANDLE *)(v0 + 96));
      v0 = qword_1C0335DA8;
      *(_QWORD *)(qword_1C0335DA8 + 96) = 0LL;
    }
    Win32FreePool(v0);
    qword_1C0335DA8 = 0LL;
  }
  dword_1C0335DA0 = 0;
  gbFntCacheClosed = 1;
}
