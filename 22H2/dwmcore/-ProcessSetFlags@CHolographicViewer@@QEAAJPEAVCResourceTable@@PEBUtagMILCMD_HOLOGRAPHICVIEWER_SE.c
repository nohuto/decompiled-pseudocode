/*
 * XREFs of ?ProcessSetFlags@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS@@@Z @ 0x1802AC0DC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F1E8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802ABE60 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicViewer::ProcessSetFlags(
        CHolographicViewer *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICVIEWER_SETFLAGS *a3)
{
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 2);
  CHolographicViewer::OnChanged(this);
  return 0LL;
}
