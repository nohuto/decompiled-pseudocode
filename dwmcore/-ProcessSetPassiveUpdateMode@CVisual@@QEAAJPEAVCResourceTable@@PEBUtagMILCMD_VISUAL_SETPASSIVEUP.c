/*
 * XREFs of ?ProcessSetPassiveUpdateMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETPASSIVEUPDATEMODE@@@Z @ 0x18020E288
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::ProcessSetPassiveUpdateMode(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETPASSIVEUPDATEMODE *a3)
{
  __int64 result; // rax

  result = 0LL;
  *((_BYTE *)this + 102) = *((_BYTE *)this + 102) & 0xF7 | (*((_BYTE *)a3 + 8) != 0 ? 8 : 0);
  return result;
}
