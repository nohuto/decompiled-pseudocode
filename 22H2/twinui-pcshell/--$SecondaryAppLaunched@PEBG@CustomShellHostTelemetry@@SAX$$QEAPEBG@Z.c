/*
 * XREFs of ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1804495EC
 * Callers:
 *     ?OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18044BCE0 (-OnApplicationViewChanged@KioskPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180264AAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?get@?$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6AXXZ@Z @ 0x18044D0BC (-get@-$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6.c)
 */

char __fastcall CustomShellHostTelemetry::SecondaryAppLaunched<unsigned short const *>(__int64 *a1)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = wil::details::static_lazy<CustomShellHostTelemetry>::get(
         a1,
         _lambda_8eb819313bdb989481ce252a7c52d7b8_::_lambda_invoker_cdecl_);
  v3 = *(_DWORD **)(v2 + 8);
  if ( *v3 > 5u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v9 = *a1;
      v8 = 0x2000000LL;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v4,
                     (unsigned __int8 *)dword_1805981A0,
                     v5,
                     v6,
                     (const WCHAR **)&v9,
                     (__int64)&v8);
    }
  }
  return v2;
}
