/*
 * XREFs of vUnmapRemoteFonts @ 0x1C028AD20
 * Callers:
 *     FreeFileView @ 0x1C00A5C80 (FreeFileView.c)
 *     GreAddFontMemResourceEx @ 0x1C028A458 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C028A570 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z @ 0x1C00A750C (-MmUnmapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAX_K@Z.c)
 */

void __fastcall vUnmapRemoteFonts(__int64 a1)
{
  int v1; // eax
  int v3; // eax
  void *v4; // rcx
  void *v5; // rcx

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 100);
    if ( !v1 || (v3 = v1 - 1, (*(_DWORD *)(a1 + 100) = v3) == 0) )
    {
      v4 = *(void **)(a1 + 32);
      if ( v4 )
      {
        if ( *(_QWORD *)(a1 + 104) )
        {
          UmfdHostLifeTimeManager::MmUnmapViewOfSection(*(void **)(a1 + 104), *(_QWORD *)(a1 + 72));
          *(_QWORD *)(a1 + 104) = 0LL;
          v4 = *(void **)(a1 + 32);
        }
        ObfDereferenceObject(v4);
        v5 = *(void **)(a1 + 48);
        *(_QWORD *)(a1 + 32) = 0LL;
        if ( v5 )
        {
          ZwClose(v5);
          *(_QWORD *)(a1 + 48) = 0LL;
        }
      }
    }
  }
}
