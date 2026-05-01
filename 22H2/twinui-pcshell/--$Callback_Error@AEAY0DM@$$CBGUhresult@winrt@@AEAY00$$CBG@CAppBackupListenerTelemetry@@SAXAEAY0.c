/*
 * XREFs of ??$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x180117824
 * Callers:
 *     __lambda_ca5215f49b461d52db1d3f757407fb7b_::operator()_::_1_::catch$0 @ 0x18011B96C (__lambda_ca5215f49b461d52db1d3f757407fb7b_--operator()_--_1_--catch$0.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18012466C (-Provider@CAppBackupListenerLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802AD624 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // ecx
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a3;
  v8 = a1;
  v4 = CAppBackupListenerLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = 0x1000000LL;
      v10 = (__int64)&szAgent;
      LODWORD(v9) = *a2;
      v7[0] = (__int64)L"Developer Mode registry watcher callback failed with error.";
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v5,
                     (int)&dword_1805A04AF,
                     (__int64)v7,
                     (__int64)&v9,
                     (__int64)&v10,
                     (__int64)&v8);
    }
  }
  return (char)v4;
}
