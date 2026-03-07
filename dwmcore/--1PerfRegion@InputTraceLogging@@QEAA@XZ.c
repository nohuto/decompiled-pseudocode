void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      this,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 6u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v2, 1LL) )
    {
      v4 = *(_QWORD *)this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        v3,
        (__int64)&v4);
    }
  }
}
