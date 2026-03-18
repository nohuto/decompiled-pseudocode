/*
 * XREFs of ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0089E94
 * Callers:
 *     InitFNTCache @ 0x1C00880A0 (InitFNTCache.c)
 *     EngCloseFNTCache @ 0x1C0089CDC (EngCloseFNTCache.c)
 *     GdiMultiUserFontCleanup @ 0x1C008AAF0 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0x1C0089F40 (vUnmapFontCacheFile.c)
 */

void __fastcall vCleanUpFntCacheInternal(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  _QWORD *v3; // rax
  void *v4; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = *(void **)(v1 + 19408);
  if ( v2 )
  {
    ZwClose(v2);
    *(_QWORD *)(v1 + 19408) = 0LL;
  }
  v3 = *(_QWORD **)(v1 + 19392);
  if ( v3 )
  {
    if ( *v3 )
      vUnmapFontCacheFile();
    v4 = *(void **)(*(_QWORD *)(v1 + 19392) + 96LL);
    if ( v4 )
    {
      ZwClose(v4);
      *(_QWORD *)(*(_QWORD *)(v1 + 19392) + 96LL) = 0LL;
    }
    Win32FreePool(*(void **)(v1 + 19392));
    *(_QWORD *)(v1 + 19392) = 0LL;
  }
  *(_DWORD *)(v1 + 19384) = 0;
  *(_BYTE *)(v1 + 19404) = 1;
}
