/*
 * XREFs of BgpFwFreeMemory @ 0x140382650
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x1403812F4 (BgpFwQueryBootGraphicsInformation.c)
 *     RaspFreeMemory @ 0x140382634 (RaspFreeMemory.c)
 *     RaspScanConvert @ 0x1403827F0 (RaspScanConvert.c)
 *     BgpFwLibraryDisable @ 0x140AE91EC (BgpFwLibraryDisable.c)
 *     FopFreeMappingTable @ 0x140AE92E8 (FopFreeMappingTable.c)
 *     FopFreeFontData @ 0x140AE9314 (FopFreeFontData.c)
 *     BgpTxtDestroyRegion @ 0x140AE9904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayFade @ 0x140AE99E8 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140AEA598 (AnFwDisplayProgressIndicator.c)
 *     TxtpAddCacheEntry @ 0x140AEA9C8 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleDestroy @ 0x140AEAA70 (BgpGxRectangleDestroy.c)
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140AEB2AC (BgpTxtCreateRegion.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEB4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140AEB6E0 (BgpConsoleInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AEBA88 (BgpFwLibraryDestroy.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140AEBBF0 (ResFwpPageOutBackground.c)
 *     BgpFoDestroy @ 0x140AEBCA8 (BgpFoDestroy.c)
 *     BgConsoleDestroyInterface @ 0x140AEC504 (BgConsoleDestroyInterface.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEC564 (BgpDisplayCharacterDestroyContext.c)
 *     AnFwpDisableProgressTimer @ 0x140AEC610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AEEED4 (ResFwFreeContext.c)
 *     BgpBcInitializeCriticalMode @ 0x140B991D4 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x140B9952C (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x140B99898 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B99A68 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B99BEC (FopReadCmapTable.c)
 *     BgpFoInitialize @ 0x140B99E88 (BgpFoInitialize.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall BgpFwFreeMemory(__int64 a1)
{
  ULONG v2; // edx
  __int64 v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // r9
  __int64 v6; // rax
  struct _MDL *v7; // rcx
  struct _MDL *v8; // rbx
  ULONG v9; // ebx

  v2 = *(_DWORD *)(a1 - 24);
  if ( v2 == 1262700354 )
  {
    v9 = a1 - 24 - qword_140C709D0 - 8;
    RtlClearBits(&stru_140C709E0, v9, *(_DWORD *)(a1 - 16));
    if ( v9 < HintIndex )
      HintIndex = v9;
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
    if ( *(_QWORD *)(a1 - 16) >= 0x1000uLL )
    {
      v8 = *(struct _MDL **)(a1 - 8);
      MmUnmapLockedPages(v7, v8);
      MiFreePagesFromMdl((ULONG_PTR)v8, 0);
      v2 = 0;
      v7 = v8;
    }
    ExFreePoolWithTag(v7, v2);
  }
}
