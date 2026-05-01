/*
 * XREFs of ??$Callback_Error@AEAY0DG@$$CBGUhresult@winrt@@PEBG@CAppBackupListenerTelemetry@@SAXAEAY0DG@$$CBG$$QEAUhresult@winrt@@$$QEAPEBG@Z @ 0x18011784C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::HandlePackageInstallEvent_::_1_::catch$23 @ 0x1801226D4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--HandlePackageI_ea_1801226D4.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801247DC (-Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802AD894 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[54],winrt::hresult,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  const struct _tlgProvider_t *v5; // rax
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a1;
  v5 = CAppBackupListenerLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v7 = *a3;
      LODWORD(v11) = *a2;
      v10 = (__int64)L"HandlePackageInstallEvent callback failed with error.";
      v9 = v7;
      v12 = 0x1000000LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v6,
                     (int)&dword_1805A0580,
                     (__int64)&v10,
                     (__int64)&v11,
                     (__int64)&v9,
                     (__int64)&v12);
    }
  }
  return (char)v5;
}
