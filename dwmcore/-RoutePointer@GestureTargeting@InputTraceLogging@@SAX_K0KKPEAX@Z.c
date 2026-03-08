/*
 * XREFs of ?RoutePointer@GestureTargeting@InputTraceLogging@@SAX_K0KKPEAX@Z @ 0x18019DE6C
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019DA94 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x180199A94 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

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
