/*
 * XREFs of ?ProcessProtectContent@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_PROTECTCONTENT@@@Z @ 0x18020DFE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessProtectContent(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_PROTECTCONTENT *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( ((*((unsigned __int8 *)this + 103) >> 1) & 1) != (v3 != 0) )
  {
    *((_BYTE *)this + 103) = *((_BYTE *)this + 103) & 0xFD | (v3 != 0 ? 2 : 0);
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
