/*
 * XREFs of BgpFwAllocateMemory @ 0x14039BE84
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x14039BC64 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x1403AC968 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1403AE828 (RaspAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x1403BC3DC (BcpGetProgressMessages.c)
 *     BgpTxtGetRegionContext @ 0x1409F2944 (BgpTxtGetRegionContext.c)
 *     BgpFwLibraryInitialize @ 0x1409F29E8 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     BgpGxRectangleCreate @ 0x1409F32C0 (BgpGxRectangleCreate.c)
 *     ResFwpPageInBackground @ 0x1409F344C (ResFwpPageInBackground.c)
 *     TxtpAddCacheEntry @ 0x1409F45FC (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x1409F4820 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1409F4A4C (BgpDisplayCharacterGetContext.c)
 *     BgpFoInitialize @ 0x140A95E18 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x140A95F14 (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x140A96050 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140A96228 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140A963B4 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x140A96730 (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x140A96A10 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     MmAllocatePagesForMdlEx @ 0x1403547F0 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x14039C00C (BgpFwReserveAllocate.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  ULONG_PTR v3; // rbx
  ULONG v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  char *v10; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C134F0 & 0x800) == 0 )
  {
    v1 = dword_140C134F0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + a1, v4);
LABEL_7:
        if ( !PoolWithTag )
          goto LABEL_20;
        v2 = &PoolWithTag[v5];
        if ( v1 )
        {
          v9 = qword_140C135C0;
          v10 = v2 - 40;
          if ( *(__int64 **)(qword_140C135C0 + 8) != &qword_140C135C0 )
            __fastfail(3u);
          *(_QWORD *)v10 = qword_140C135C0;
          *((_QWORD *)v10 + 1) = &qword_140C135C0;
          *(_QWORD *)(v9 + 8) = v10;
          qword_140C135C0 = (__int64)(v2 - 40);
        }
        *((_DWORD *)v2 - 6) = v4;
        *((_QWORD *)v2 - 2) = v6;
        *((_QWORD *)v2 - 1) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl(v3, 0, v8);
            ExFreeHeapPool(v3);
          }
        }
        return (__int64)v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = (ULONG_PTR)PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
        else
          PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
