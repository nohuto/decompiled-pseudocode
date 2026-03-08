/*
 * XREFs of ??0CAsyncFlushResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@I@Z @ 0x1800ABF0C
 * Callers:
 *     ?Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1800ABE90 (-Channel_AsyncFlush@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMIL.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z @ 0x1800ABF98 (--0CResponseItem@@QEAA@PEAVCGlobalSurfaceManager@@@Z.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::CAsyncFlushResponse(
        CAsyncFlushResponse *this,
        struct CGlobalSurfaceManager *a2,
        struct CChannelContext *a3,
        int a4)
{
  CResponseItem::CResponseItem(this, a2);
  *((_DWORD *)this + 12) = a4;
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)a3 + 8));
  return this;
}
