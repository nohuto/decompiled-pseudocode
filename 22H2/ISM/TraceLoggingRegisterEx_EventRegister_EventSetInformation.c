/*
 * XREFs of TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180036EF4
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x18001EA7C (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     _anonymous_namespace_::EtwLogRegistrar::EtwLogRegistrar @ 0x18003A990 (_anonymous_namespace_--EtwLogRegistrar--EtwLogRegistrar.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(
        ULONGLONG *CallbackContext,
        unsigned __int16 *a2)
{
  GUID v3; // xmm0
  signed int v4; // eax
  unsigned int v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(GUID *)(CallbackContext[1] - 16);
  CallbackContext[6] = 0LL;
  CallbackContext[5] = (ULONGLONG)a2;
  ProviderId = v3;
  v4 = EventRegister(&ProviderId, tlgEnableCallback, CallbackContext, CallbackContext + 4);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EventSetInformation(CallbackContext[4], 2LL, CallbackContext[1], *(unsigned __int16 *)CallbackContext[1]);
  }
  return v5;
}
