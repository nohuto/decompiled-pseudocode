/*
 * XREFs of ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800328B8
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180032400 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003263C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801291A0 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x180032918 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180197B50 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

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
