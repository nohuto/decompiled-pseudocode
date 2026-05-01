/*
 * XREFs of ??$ShellFeedsLauncher_PingFeedsEnablementEndpoint@AEBJAEAEAEB_J@ShellFeedsTelemetry@@SAXAEBJAEAEAEB_J@Z @ 0x1801088D0
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108EF8 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6984 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803C7C94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWr.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsLauncher_PingFeedsEnablementEndpoint<long const &,unsigned char &,__int64 const &>(
        int *a1,
        _BYTE *a2,
        int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  bool v10; // zf
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  bool v15; // [rsp+78h] [rbp+20h] BYREF

  v6 = FeedsMicrosoftTelemetryProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3;
      v10 = *a2 == 0;
      v13 = *a1;
      v15 = !v10;
      v12 = v9;
      v14 = 0x1000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v8,
                     (unsigned int)&unk_1805A028D,
                     v7,
                     v8,
                     (__int64)&v13,
                     (__int64)&v15,
                     (__int64)&v12,
                     (__int64)&v14);
    }
  }
  return (char)v6;
}
