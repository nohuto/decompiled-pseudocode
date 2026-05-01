/*
 * XREFs of ??$LockScreenStateChanged@AEA_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N@Z @ 0x1800CDE28
 * Callers:
 *     ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x1803BDC98 (-OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18024B064 (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1803BEE90 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall TouchKeyboardExperienceTelemetryLogger::LockScreenStateChanged<bool &>(
        char *a1)
{
  const struct _tlgProvider_t *result; // rax
  int v3; // r9d
  char v4; // [rsp+48h] [rbp+10h] BYREF

  result = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v4 = *a1;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_180591AA3,
                                            0,
                                            v3,
                                            (__int64)&v4);
  }
  return result;
}
