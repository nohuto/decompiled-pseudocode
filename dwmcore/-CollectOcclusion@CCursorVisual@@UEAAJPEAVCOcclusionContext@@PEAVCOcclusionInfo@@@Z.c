/*
 * XREFs of ?CollectOcclusion@CCursorVisual@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180225480
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z @ 0x1801E3D40 (-CollectCursor@COcclusionContext@@QEAAXPEAVCCursorVisual@@@Z.c)
 *     ?IsVisible@CCursorVisual@@IEBA_NXZ @ 0x1802255C4 (-IsVisible@CCursorVisual@@IEBA_NXZ.c)
 */

__int64 __fastcall CCursorVisual::CollectOcclusion(
        CCursorVisual *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3)
{
  struct CCursorVisual *v3; // rcx
  COcclusionContext *v4; // r8

  if ( *((_BYTE *)a2 + 1206) && *((_BYTE *)this + 712) && CCursorVisual::IsVisible(this) )
    COcclusionContext::CollectCursor(v4, v3);
  return 0LL;
}
