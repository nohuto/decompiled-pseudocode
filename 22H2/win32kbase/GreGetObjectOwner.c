/*
 * XREFs of GreGetObjectOwner @ 0x1C00328C0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C000DEF0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0034600 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C003950C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     EngCombineRgn @ 0x1C014B900 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C014B9A0 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C014BAA0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C014BB20 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C014BBE0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C014BC40 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C014BCB0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C014BD50 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C014BDC0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C014BE20 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C014BEB0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C014BF50 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C014BFF0 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0031220 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
  v6 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}
