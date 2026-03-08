/*
 * XREFs of ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0108B80
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0108704 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0108808 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 */

void __fastcall zzzFixupGlobalCursorWhenChanged(struct tagCURSOR **a1)
{
  if ( gpcurLogCurrent == a1[6] )
  {
    gpcurLogCurrent = 0LL;
    gpcurPhysCurrent = 0LL;
    zzzUpdateCursorImage();
  }
}
