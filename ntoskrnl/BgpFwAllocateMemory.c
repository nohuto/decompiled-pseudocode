/*
 * XREFs of BgpFwAllocateMemory @ 0x140383BDC
 * Callers:
 *     BcpGetProgressMessages @ 0x1403811E0 (BcpGetProgressMessages.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x1403812F4 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x140383B7C (RaspAllocateMemory.c)
 *     BgpTxtGetRegionContext @ 0x140AE970C (BgpTxtGetRegionContext.c)
 *     TxtpAddCacheEntry @ 0x140AEA9C8 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x140AEAA94 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140AEAC78 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140AEB2AC (BgpTxtCreateRegion.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEB4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140AEB6E0 (BgpConsoleInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AEBAF8 (ResFwBackgroundTransition.c)
 *     BgpBcInitializeCriticalMode @ 0x140B991D4 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x140B9952C (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x140B99898 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B99A68 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B99BEC (FopReadCmapTable.c)
 *     FopInitializeFonts @ 0x140B99D48 (FopInitializeFonts.c)
 *     BgpFoInitialize @ 0x140B99E88 (BgpFoInitialize.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     BgpFwReserveAllocate @ 0x140384344 (BgpFwReserveAllocate.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  PMDL v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *Pool2; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C0E3B0 & 0x800) == 0 )
  {
    v1 = dword_140C0E3B0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        Pool2 = (char *)ExAllocatePool2(64LL, v6, v4);
LABEL_7:
        if ( !Pool2 )
          goto LABEL_20;
        v2 = &Pool2[v5];
        if ( v1 )
        {
          v8 = qword_140C0E480;
          v9 = v2 - 40;
          if ( *(__int64 **)(qword_140C0E480 + 8) != &qword_140C0E480 )
            __fastfail(3u);
          *(_QWORD *)v9 = qword_140C0E480;
          *((_QWORD *)v9 + 1) = &qword_140C0E480;
          *(_QWORD *)(v8 + 8) = v9;
          qword_140C0E480 = (__int64)(v2 - 40);
        }
        *((_DWORD *)v2 - 6) = v4;
        *((_QWORD *)v2 - 2) = v6;
        *((_QWORD *)v2 - 1) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl((ULONG_PTR)v3, 0);
            ExFreePoolWithTag(v3, 0);
          }
        }
        return (__int64)v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          Pool2 = (char *)PagesForMdl->MappedSystemVa;
        else
          Pool2 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
