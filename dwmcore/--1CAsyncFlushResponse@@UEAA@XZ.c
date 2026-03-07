void __fastcall CAsyncFlushResponse::~CAsyncFlushResponse(CAsyncFlushResponse *this)
{
  *(_QWORD *)this = &CAsyncFlushResponse::`vftable';
  ReleaseInterface<CChannelContext>((__int64 *)this + 5);
  *(_QWORD *)this = &CResponseItem::`vftable';
}
