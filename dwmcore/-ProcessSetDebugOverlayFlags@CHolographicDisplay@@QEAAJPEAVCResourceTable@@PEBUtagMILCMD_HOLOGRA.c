/*
 * XREFs of ?ProcessSetDebugOverlayFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS@@@Z @ 0x1802A4658
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1802A4588 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetDebugOverlayFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICDISPLAY_SETDEBUGOVERLAYFLAGS *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = this + 16;
  AcquireSRWLockExclusive(this + 16);
  LODWORD(this[15].Ptr) = *((_DWORD *)a3 + 2);
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
