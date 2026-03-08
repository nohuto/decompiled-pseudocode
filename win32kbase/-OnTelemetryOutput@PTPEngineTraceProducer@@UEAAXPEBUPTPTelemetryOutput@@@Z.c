/*
 * XREFs of ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C00F5DF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C023B410 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::OnTelemetryOutput(
        PTPEngineTraceProducer *this,
        const struct PTPTelemetryOutput *a2)
{
  __int16 v4; // dx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  const struct PTPTelemetryOutput *v8; // [rsp+40h] [rbp-18h] BYREF
  __int16 v9; // [rsp+48h] [rbp-10h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 9LL) )
  {
    v8 = a2;
    v9 = v4 + 23;
    v11 = *((_QWORD *)this + 73);
    v10 = 1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v5,
      (unsigned int)&unk_1C029E70F,
      v6,
      v7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v8);
  }
  (*(void (__fastcall **)(_QWORD, const struct PTPTelemetryOutput *))(**((_QWORD **)this + 2) + 8LL))(
    *((_QWORD *)this + 2),
    a2);
}
