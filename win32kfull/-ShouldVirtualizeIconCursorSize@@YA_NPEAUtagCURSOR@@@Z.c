/*
 * XREFs of ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0060F98
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C003B9FC (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C003BA40 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
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
