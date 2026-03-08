/*
 * XREFs of ?Channel_SetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETAPPLICATIONID@@PEBXI@Z @ 0x1800AAAC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetApplicationId@CChannelContext@@QEAAJPEBG@Z @ 0x1800AAAEC (-SetApplicationId@CChannelContext@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall CComposition::Channel_SetApplicationId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETAPPLICATIONID *a4,
        const void *a5,
        unsigned int a6)
{
  const unsigned __int16 *v7; // rdx

  v7 = (const unsigned __int16 *)((char *)a4 + 8);
  if ( a6 <= 2 )
    v7 = 0LL;
  CChannelContext::SetApplicationId(a2, v7);
  return 0LL;
}
