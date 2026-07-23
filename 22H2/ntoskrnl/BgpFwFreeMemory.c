/*
 * XREFs of BgpFwFreeMemory @ 0x14039B660
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14039BC64 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x1403AD328 (RaspFreeMemory.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x1409F1470 (ResFwpPageOutBackground.c)
 *     AnFwDisplayFade @ 0x1409F1C00 (AnFwDisplayFade.c)
 *     BgpGxRectangleDestroy @ 0x1409F2290 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     ResFwBackgroundTransition @ 0x1409F3408 (ResFwBackgroundTransition.c)
 *     ResFwpPageInBackground @ 0x1409F344C (ResFwpPageInBackground.c)
 *     AnFwpDisableProgressTimer @ 0x1409F34EC (AnFwpDisableProgressTimer.c)
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 *     BgConsoleDestroyInterface @ 0x1409F3F5C (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 *     BgpTxtDestroyRegion @ 0x1409F40EC (BgpTxtDestroyRegion.c)
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 *     FopFreeFontData @ 0x1409F4294 (FopFreeFontData.c)
 *     FopFreeMappingTable @ 0x1409F4308 (FopFreeMappingTable.c)
 *     AnFwDisplayProgressIndicator @ 0x1409F4370 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x1409F45FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A95E18 (BgpFoInitialize.c)
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A96228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A963B4 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A96730 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A96A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // r9
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rbx
  __int64 v9; // r8
  ULONG v10; // ebx

  v1 = a1 - 24;
  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v10 = v1 - qword_140C50768 - 8;
    RtlClearBits(&stru_140C50778, v10, *(_DWORD *)(v1 + 8));
    if ( v10 < dword_140C50770 )
      dword_140C50770 = v10;
  }
  else
  {
    if ( v2 == 1262634818 )
    {
      v3 = a1 - 40;
      v4 = *(_QWORD *)(a1 - 40);
      if ( *(_QWORD *)(v4 + 8) != a1 - 40 || (v5 = *(_QWORD **)(v3 + 8), *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v6 = 48LL;
      *(_QWORD *)(v4 + 8) = v5;
    }
    else
    {
      v6 = 32LL;
    }
    v7 = (struct _MDL *)(a1 - v6);
    if ( *(_QWORD *)(v1 + 8) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(v1 + 16);
      MmUnmapLockedPages(v7, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0, v9);
      v7 = v8;
    }
    ExFreeHeapPool((ULONG_PTR)v7);
  }
}
