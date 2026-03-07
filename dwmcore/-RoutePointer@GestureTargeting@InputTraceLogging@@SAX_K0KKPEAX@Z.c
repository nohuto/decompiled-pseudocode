void __fastcall InputTraceLogging::GestureTargeting::RoutePointer(__int64 a1, __int64 a2, int a3, int a4, void *a5)
{
  _DWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+50h] [rbp-28h] BYREF
  int v14; // [rsp+54h] [rbp-24h] BYREF
  void *v15; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-10h] BYREF

  v9 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v9 > 4u )
  {
    if ( tlgKeywordOn((__int64)v9, 2048LL) )
    {
      v15 = a5;
      v13 = a4;
      v14 = a3;
      v16 = a2;
      v17 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v10,
        byte_18037A312,
        v11,
        v12,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v15);
    }
  }
}
