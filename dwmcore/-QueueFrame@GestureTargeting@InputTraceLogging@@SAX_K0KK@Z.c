/*
 * XREFs of ?QueueFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x18019CC04
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180199A00 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

void __fastcall InputTraceLogging::GestureTargeting::QueueFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF

  v8 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   a1,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    if ( tlgKeywordOn((__int64)v8, 2048LL) )
    {
      v12 = a4;
      v13 = a3;
      v14 = a2;
      v15 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        byte_18037A593,
        v10,
        v11,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
  }
}
