/*
 * XREFs of ??$DeviceMetaData_Error@AEAY0DK@$$CBGH@CAppBackupListenerTelemetry@@SAXAEAY0DK@$$CBG$$QEAH@Z @ 0x180117CDC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupDeviceMetaDataAsync$_ResumeCoro$2_::_1_::catch$64 @ 0x1801205BA (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupDeviceMe_ea_1801205BA.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801247DC (-Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180267AFC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 */

char __fastcall CAppBackupListenerTelemetry::DeviceMetaData_Error<unsigned short const (&)[58],int>(
        __int64 a1,
        int *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // r9d
  int v5; // ecx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  v3 = CAppBackupListenerLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v5 = *a2;
      v9 = (__int64)L"Event-driven App DeviceMetaData Backup failed with error.";
      LODWORD(v7) = v5;
      v8 = 0x1000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v4,
                     (int)&dword_1805A03CB,
                     (__int64)&v9,
                     (__int64)&v7,
                     (__int64)&v8);
    }
  }
  return (char)v3;
}
