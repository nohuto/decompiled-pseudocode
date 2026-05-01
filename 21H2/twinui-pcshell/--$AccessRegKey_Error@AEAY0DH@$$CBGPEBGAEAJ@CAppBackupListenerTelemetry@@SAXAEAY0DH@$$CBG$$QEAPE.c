/*
 * XREFs of ??$AccessRegKey_Error@AEAY0DH@$$CBGPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBG$$QEAPEBGAEAJ@Z @ 0x180117054
 * Callers:
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x18012113C (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?TryGetWin32Version@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBV78@PEBG@Z @ 0x180125E90 (-TryGetWin32Version@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$basi.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801247DC (-Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802AD798 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CAppBackupListenerTelemetry::AccessRegKey_Error<unsigned short const (&)[55],unsigned short const *,long &>(
        __int64 a1,
        __int64 *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r9d
  int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = CAppBackupListenerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v11 = *a2;
      LODWORD(v13) = v8;
      v10 = 0x1000000LL;
      v12[0] = a1;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v7,
                     (int)&dword_1805A05CD,
                     0,
                     (__int64)v12,
                     (__int64)&v11,
                     (__int64)&v13,
                     (__int64)&v10);
    }
  }
  return (char)v6;
}
