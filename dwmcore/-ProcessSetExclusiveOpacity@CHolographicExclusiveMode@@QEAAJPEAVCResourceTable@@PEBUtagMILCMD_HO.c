/*
 * XREFs of ?ProcessSetExclusiveOpacity@CHolographicExclusiveMode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY@@@Z @ 0x1802A4B44
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusiveMode::ProcessSetExclusiveOpacity(
        CHolographicExclusiveMode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_HOLOGRAPHICEXCLUSIVEMODE_SETEXCLUSIVEOPACITY *a3)
{
  return CHolographicExclusiveMode::SetProperty(this, 1LL, 18LL, (char *)a3 + 8);
}
