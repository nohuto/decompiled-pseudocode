/*
 * XREFs of GreGetObjectOwner @ 0x1C0019E80
 * Callers:
 *     EngGetRgnData @ 0x1C000D450 (EngGetRgnData.c)
 *     EngDeleteRgn @ 0x1C0019A50 (EngDeleteRgn.c)
 *     EngCombineRgn @ 0x1C0019AD0 (EngCombineRgn.c)
 *     EngSetRectRgn @ 0x1C0019BF0 (EngSetRectRgn.c)
 *     ?bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z @ 0x1C0019D64 (-bDeletePaletteInternal@XEPALOBJ@@AEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004592C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00782A0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngCopyRgn @ 0x1C0197690 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C0197710 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C01977C0 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C0197820 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C01978C0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0197930 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C0197990 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0197A30 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0197AD0 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004AE10 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(__int64 a1, int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  GdiHandleEntryDirectory **v5; // rbx
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v3 = a1;
  v4 = -2147483614;
  v5 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v6 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v5, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(v5[2], v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == HIWORD(v3) )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v4;
}
