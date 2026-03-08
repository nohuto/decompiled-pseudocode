/*
 * XREFs of ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C003AB4C
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C003B9FC (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0108704 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C0141A3E (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     NtUserLinkDpiCursor @ 0x1C01D7000 (NtUserLinkDpiCursor.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__fastcall FindDPICursor(struct tagCURSOR *a1, int a2)
{
  struct tagCURSOR *result; // rax

  for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
        result && *((_DWORD *)result + 19) != a2;
        result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
  {
    ;
  }
  return result;
}
