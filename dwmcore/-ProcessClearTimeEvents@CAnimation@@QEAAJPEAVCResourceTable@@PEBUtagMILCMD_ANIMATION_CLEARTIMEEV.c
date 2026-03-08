/*
 * XREFs of ?ProcessClearTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_CLEARTIMEEVENTS@@@Z @ 0x18021C610
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CAnimation::ProcessClearTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_CLEARTIMEEVENTS *a3)
{
  char *v4; // rcx

  v4 = (char *)this + 152;
  *((_DWORD *)v4 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v4, 0x10u);
  *((_DWORD *)this + 46) = 0;
  return 0LL;
}
