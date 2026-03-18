/*
 * XREFs of GreGetObjectOwner @ 0x1C001F0C0
 * Callers:
 *     EngGetRgnData @ 0x1C0009040 (EngGetRgnData.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C002C464 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C002D828 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     EngCombineRgn @ 0x1C008E080 (EngCombineRgn.c)
 *     EngDeleteRgn @ 0x1C008E120 (EngDeleteRgn.c)
 *     EngSetRectRgn @ 0x1C008E8D0 (EngSetRectRgn.c)
 *     EngCopyRgn @ 0x1C0177A00 (EngCopyRgn.c)
 *     EngEqualRgn @ 0x1C0177A80 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0177B40 (EngGetRgnBox.c)
 *     EngIntersectRgn @ 0x1C0177BA0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C0177C40 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C0177CB0 (EngRectInRgn.c)
 *     EngSubtractRgn @ 0x1C0177D10 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0177DB0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0177E50 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0022610 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(unsigned int a1, int a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // esi^2
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = -2147483614;
  v6 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}
