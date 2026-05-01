/*
 * XREFs of ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXPEBG@Z @ 0x1800CCD20
 * Callers:
 *     ??$Start@AEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@AEAY03$$CBG@Z @ 0x1800CC930 (--$Start@AEAY03$$CBG@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01@AEAY03$$CBG@Z.c)
 *     ??$Start@PEAG@LauncherInvokeActivity@CommonStartTelemetry@@SA?AV01@$$QEAPEAG@Z @ 0x1800CC970 (--$Start@PEAG@LauncherInvokeActivity@CommonStartTelemetry@@SA-AV01@$$QEAPEAG@Z.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011A54 (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?zInternalStart@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180011AA4 (-zInternalStart@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180077B3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1801C9278 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StartActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this,
        const unsigned __int16 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  const GUID *v8; // rcx
  DWORD v9; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v4 = LauncherTelemetryLogging::Provider();
  v5 = (__int64)v4;
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
  {
    v10 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v7 = *((_QWORD *)this + 6);
    v11 = 0LL;
    v9 = CurrentThreadId;
    if ( !*(_BYTE *)(v7 + 4) || _tlgGuidIsZero((const struct _GUID *)(v7 + 24)) )
      v8 = 0LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v5,
      byte_180591192,
      (const GUID *)(v7 + 8),
      v8,
      (__int64)&v11,
      (__int64)&v9,
      &v10);
  }
  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
