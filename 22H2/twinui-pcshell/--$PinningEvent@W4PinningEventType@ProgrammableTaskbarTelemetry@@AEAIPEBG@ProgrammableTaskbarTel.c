/*
 * XREFs of ??$PinningEvent@W4PinningEventType@ProgrammableTaskbarTelemetry@@AEAIPEBG@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4PinningEventType@1@AEAI$$QEAPEBG@Z @ 0x180152374
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180155EAC (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800034F8 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@@details@wil@@QEAAPEAVProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@P6AXXZ@Z @ 0x18015EF0C (-get@-$static_lazy@VProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@@details@.c)
 */

char __fastcall ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::PinningEvent<enum ProgrammableTaskbarTelemetry::PinningEventType,unsigned int &,unsigned short const *>(
        _BYTE *a1,
        _BYTE *a2,
        __int64 *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider>::get(
         a1,
         _lambda_dce019728929908a9a5e0ba6021a3dcd_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v6 + 8);
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x800000000000LL);
    if ( (_BYTE)v6 )
    {
      v14 = *a3;
      LOBYTE(v15) = *a2;
      LOBYTE(v12) = *a1;
      v13 = 0x1000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_1805A43E8,
                     v9,
                     v10,
                     (__int64)&v12,
                     (__int64)&v15,
                     (const WCHAR **)&v14,
                     (__int64)&v13);
    }
  }
  return v6;
}
