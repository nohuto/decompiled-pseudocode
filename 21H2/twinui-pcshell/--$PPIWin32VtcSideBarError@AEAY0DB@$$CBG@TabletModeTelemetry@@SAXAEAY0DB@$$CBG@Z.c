/*
 * XREFs of ??$PPIWin32VtcSideBarError@AEAY0DB@$$CBG@TabletModeTelemetry@@SAXAEAY0DB@$$CBG@Z @ 0x1800D77E4
 * Callers:
 *     ?_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z @ 0x1800DA1B8 (-_ReflowItems@PPIWin32VtcLayoutOperation@@AEAAJW4APP_LAYOUT_INSERT_LOCATION@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18021A904 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@TabletModeTelemetry@@SA_NE_K@Z @ 0x180468AD8 (-IsEnabled@TabletModeTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z @ 0x180470954 (-get@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAAPEAVTabletModeTelemetry@@P6AXXZ@Z.c)
 */

char __fastcall TabletModeTelemetry::PPIWin32VtcSideBarError<unsigned short const (&)[49]>(
        __int64 a1,
        unsigned __int64 a2)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  LOBYTE(v2) = TabletModeTelemetry::IsEnabled(a1, a2);
  if ( (_BYTE)v2 )
  {
    wil::details::static_lazy<TabletModeTelemetry>::get(
      v3,
      _lambda_51d33002daa63bfc4d65f85f7f956340_::_lambda_invoker_cdecl_);
    v2 = WindowManagementLogging::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      LOBYTE(v2) = tlgKeywordOn((__int64)v2, 0x200000000000LL);
      if ( (_BYTE)v2 )
      {
        v7 = (__int64)L"There should at least be one item in the layout.";
        LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                       v4,
                       (unsigned __int8 *)dword_18059BFE1,
                       0LL,
                       v5,
                       (const WCHAR **)&v7);
      }
    }
  }
  return (char)v2;
}
