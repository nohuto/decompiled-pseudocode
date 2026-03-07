InputTraceLogging::PerfRegion *__fastcall InputTraceLogging::PerfRegion::PerfRegion(
        InputTraceLogging::PerfRegion *this,
        const char *a2,
        const struct InputTraceLogging::PerfRegion *a3)
{
  GUID *v3; // rdi
  _OWORD *v5; // rax
  __int128 v6; // xmm0
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = a2;
  v3 = (GUID *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = 0LL;
  v5 = (_OWORD *)((char *)this + 24);
  *(_OWORD *)((char *)this + 24) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( a3 )
  {
    v6 = *(_OWORD *)((char *)a3 + 8);
    *((_QWORD *)this + 5) = v5;
    *v5 = v6;
  }
  if ( (unsigned __int8)InputTraceLogging::Enabled(1LL) )
  {
    EventActivityIdControl(3u, v3);
    v9 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                        v8,
                        _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *v9 > 6u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v9, 1LL) )
      {
        v11 = *(_QWORD *)this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
          v10,
          (__int64)&v11);
      }
    }
  }
  return this;
}
