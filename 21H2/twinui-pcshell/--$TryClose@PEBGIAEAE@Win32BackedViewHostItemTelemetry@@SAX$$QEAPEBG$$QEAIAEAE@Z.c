/*
 * XREFs of ??$TryClose@PEBGIAEAE@Win32BackedViewHostItemTelemetry@@SAX$$QEAPEBG$$QEAIAEAE@Z @ 0x1802BA738
 * Callers:
 *     ?TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z @ 0x1802C34F0 (-TryClose@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJE@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802BA8C4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802C5ADC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

char __fastcall Win32BackedViewHostItemTelemetry::TryClose<unsigned short const *,unsigned int,unsigned char &>(
        __int64 *a1,
        _DWORD *a2,
        _BYTE *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  bool v9; // zf
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
         a1,
         _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v9 = *a3 == 0;
      LODWORD(v12) = *a2;
      v10 = *a1;
      LOBYTE(v15) = !v9;
      v14[0] = v10;
      v13 = 0x2000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_180582886,
                     (__int64)v14,
                     (__int64)&v12,
                     (__int64)&v15,
                     (__int64)&v13);
    }
  }
  return v6;
}
