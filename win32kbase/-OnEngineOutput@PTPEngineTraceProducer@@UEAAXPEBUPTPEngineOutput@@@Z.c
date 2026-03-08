/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C00F5B60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C023B410 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  unsigned int v2; // r8d
  __int16 v5; // dx
  int v6; // ecx
  int v7; // r9d
  int v8; // r8d
  int v9; // r9d
  __int16 v10; // cx
  int v11; // ecx
  const struct PTPEngineOutput *v12; // [rsp+40h] [rbp-10h] BYREF
  __int16 v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+18h] BYREF

  v2 = dword_1C02C92F8;
  if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 5LL) )
  {
    v12 = a2;
    v13 = v5 + 15;
    v15 = *((_QWORD *)this + 73);
    v14 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v6,
      (unsigned int)&unk_1C029E88F,
      v2,
      v7,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v12);
    v2 = dword_1C02C92F8;
  }
  if ( *((_DWORD *)a2 + 4) && v2 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 5LL) )
  {
    v10 = *((_WORD *)a2 + 8);
    v12 = (const struct PTPEngineOutput *)((char *)a2 + 20);
    v14 = 1;
    v15 = *((_QWORD *)this + 73);
    v11 = (unsigned __int16)(96 * v10);
    v13 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v11,
      (unsigned int)&unk_1C029E90C,
      v8,
      v9,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v12);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *))this + 2))(*((_QWORD *)this + 2), a2);
}
