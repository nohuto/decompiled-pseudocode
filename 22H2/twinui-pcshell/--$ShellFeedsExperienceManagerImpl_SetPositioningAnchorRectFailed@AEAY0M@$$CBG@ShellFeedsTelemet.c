/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed@AEAY0M@$$CBG@ShellFeedsTelemetry@@SAXAEAY0M@$$CBG@Z @ 0x1800B0A80
 * Callers:
 *     ?UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ @ 0x1800B7E78 (-UpdatePositioningAnchorRect@ShellFeedsExperienceManagerImpl@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B6964 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180264AAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_SetPositioningAnchorRectFailed<unsigned short const (&)[12]>(
        __int64 a1)
{
  const struct _tlgProvider_t *v1; // rax
  int v2; // ecx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = a1;
  v1 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v1 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v1, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v4 = 0x1000000LL;
      v5 = (__int64)L"InvalidProp";
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v2,
                     (int)&dword_18057D985,
                     (__int64)&v5,
                     (__int64)&v4);
    }
  }
  return (char)v1;
}
