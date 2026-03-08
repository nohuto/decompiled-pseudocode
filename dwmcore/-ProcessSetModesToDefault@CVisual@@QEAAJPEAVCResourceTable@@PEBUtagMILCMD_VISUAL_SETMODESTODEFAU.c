/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800F84E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  *((_BYTE *)this + 104) |= 0x3Eu;
  v3 = *((_DWORD *)this + 26) & 0xFFF807FF;
  *(_QWORD *)((char *)this + 196) = 1LL;
  *((_DWORD *)this + 26) = v3 | 0x400;
  *(_QWORD *)((char *)this + 204) = 0LL;
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
