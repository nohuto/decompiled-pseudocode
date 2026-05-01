/*
 * XREFs of ?OnShutdownServices@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x1800D1ACC
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1803C00A0 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1803BEE90 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void TouchKeyboardExperienceTelemetryLogger::OnShutdownServices(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // rcx

  v0 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 5u )
  {
    if ( tlgKeywordOn((__int64)v0, 16LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v1,
        byte_180591BD9,
        0LL);
  }
}
