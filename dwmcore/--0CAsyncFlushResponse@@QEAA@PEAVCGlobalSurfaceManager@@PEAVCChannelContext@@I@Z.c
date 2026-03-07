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
