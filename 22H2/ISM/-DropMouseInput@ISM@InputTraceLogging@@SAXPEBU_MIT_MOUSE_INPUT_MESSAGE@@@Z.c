/*
 * XREFs of ?DropMouseInput@ISM@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B0730
 * Callers:
 *     ?ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z @ 0x1800B2044 (-ProcessMouseInputMessage@Win32kInterop@@AEAAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18008701C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall InputTraceLogging::ISM::DropMouseInput(const struct _MIT_MOUSE_INPUT_MESSAGE *a1)
{
  LPVOID v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v2 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v2 + 1), 512LL) )
  {
    v5 = *((unsigned int *)a1 + 48);
    v6 = *((_QWORD *)a1 + 5);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      byte_1801CB54C,
      v3,
      v4,
      (__int64)&v6,
      (__int64)&v5);
  }
}
