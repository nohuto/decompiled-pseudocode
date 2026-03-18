/*
 * XREFs of GreGetObjectOwner @ 0x1C008A450
 * Callers:
 *     EngGetRgnData @ 0x1C000EEB0 (EngGetRgnData.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C004F640 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngDeleteRgn @ 0x1C008A130 (EngDeleteRgn.c)
 *     EngCombineRgn @ 0x1C008A1B0 (EngCombineRgn.c)
 *     EngSetRectRgn @ 0x1C008A2D0 (EngSetRectRgn.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     EngCopyRgn @ 0x1C016A8B0 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C016A930 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C016A9F0 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C016AA50 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C016AAF0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C016AB60 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C016ABC0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C016AC60 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C016AD00 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
  v6 = GdiHandleManager::DecodeIndex(v5, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(v5[2], v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == HIWORD(v3) )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v4;
}
