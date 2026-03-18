/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180032978
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800324F0 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x18003272C (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18012D350 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019EE5C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032A40 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18019B1E0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

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
