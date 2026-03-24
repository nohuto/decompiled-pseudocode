/*
 * XREFs of ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x180043CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CGlobalComposition::Channel_AsyncFlush(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ASYNCFLUSH *a4)
{
  return CLegacySurfaceManager::AddAsyncFlushResponse(this, a2, *((_DWORD *)a4 + 1), (unsigned int)a4);
}
