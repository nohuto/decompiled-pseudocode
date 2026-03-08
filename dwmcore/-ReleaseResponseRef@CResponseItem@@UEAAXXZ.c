/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1800AC020
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800ABE90 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800AC048 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CMILRefCountBaseT<IMILRefCount>::InternalRelease(this);
}
