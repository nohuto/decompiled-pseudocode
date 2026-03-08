/*
 * XREFs of ?Channel_SetDescription@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x1800F3428
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1800F346C (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801B1904 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SetDescription(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETDESCRIPTION *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // r8
  const char *v8; // rdx

  v6 = *((unsigned int *)a4 + 1);
  v8 = (char *)a4 + 8;
  if ( a6 < (int)v6 + 1 || v8[v6] )
    CComposition::FailFastOnMalformedPacket(this, 1252792891LL, 0LL);
  CChannelContext::SetOwnerProcessName(a2, v8, v6);
  return 0LL;
}
