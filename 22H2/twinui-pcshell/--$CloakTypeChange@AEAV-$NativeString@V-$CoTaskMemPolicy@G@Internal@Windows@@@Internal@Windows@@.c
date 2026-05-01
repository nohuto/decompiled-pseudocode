/*
 * XREFs of ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x1802018A0
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180051170 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x180056324 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     ?InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z @ 0x180056420 (-InitializeCloakType@CWin32ApplicationView@@AEAAJW4InitializeCloakTypeCaller@1@@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180201B38 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

_QWORD *__fastcall ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        __int64 *a1,
        _DWORD *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _QWORD *result; // rax
  _DWORD *v6; // rcx
  _QWORD *v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  WINBOOL v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v7) && v9 )
  {
    v7 = qword_180650598;
    qword_180650598[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806505B0 = (struct _tlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650598, qword_1806505B0, v4);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180650598);
  }
  result = v7;
  v6 = (_DWORD *)v7[1];
  if ( *v6 > 5u )
  {
    LODWORD(v10) = *a2;
    v8 = *a1;
    return (_QWORD *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                       (int)v6,
                       (int)&dword_1805748D1,
                       (__int64)&v8,
                       (__int64)&v10);
  }
  return result;
}
