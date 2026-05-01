/*
 * XREFs of ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x180131F40
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$2 @ 0x18013E2D0 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$2.c)
 * Callees:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DAEC (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x180207BB8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::PinConsentPromptCompleted<bool,bool>(char *a1, char *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r8d
  int v6; // r9d
  char v7; // dl
  char v8; // [rsp+50h] [rbp+18h] BYREF
  char v9; // [rsp+58h] [rbp+20h] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v7 = *a2;
    v9 = *a1;
    v8 = v7;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1805A0E4A,
                                            v5,
                                            v6,
                                            (__int64)&v9,
                                            (__int64)&v8);
  }
  return result;
}
