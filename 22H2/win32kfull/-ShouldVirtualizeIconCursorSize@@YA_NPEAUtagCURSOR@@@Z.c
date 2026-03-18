/*
 * XREFs of ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C002BFB8
 * Callers:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C00287B8 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0028B20 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconInfo @ 0x1C002BFF0 (NtUserGetIconInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldVirtualizeIconCursorSize(struct tagCURSOR *a1)
{
  char v1; // r8

  v1 = 1;
  if ( *((_WORD *)a1 + 37) != 1 )
    return *((_WORD *)a1 + 36) == atomUSER32;
  return v1;
}
