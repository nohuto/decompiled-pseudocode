/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01C9B80
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C01C98B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  __int64 v2; // r8
  __int16 v5; // dx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v10; // cx
  __int64 v11; // rcx
  const struct PTPEngineOutput *v12; // [rsp+40h] [rbp-10h] BYREF
  __int16 v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+60h] [rbp+10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+18h] BYREF

  LODWORD(v2) = dword_1C0249170;
  if ( (unsigned int)dword_1C0249170 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 5LL) )
  {
    v12 = a2;
    v13 = v5 + 15;
    v15 = *((_QWORD *)this + 67);
    v14 = 2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v6,
      byte_1C022087F,
      v2,
      v7,
      (__int64)&v15,
      (__int64)&v14,
      (__int64 *)&v12);
    LODWORD(v2) = dword_1C0249170;
  }
  if ( *((_DWORD *)a2 + 4) && (unsigned int)v2 > 5 && tlgKeywordOn((__int64)&dword_1C0249170, 5LL) )
  {
    v10 = *((_WORD *)a2 + 8);
    v12 = (const struct PTPEngineOutput *)((char *)a2 + 20);
    v14 = 1;
    v15 = *((_QWORD *)this + 67);
    v11 = (unsigned __int16)(96 * v10);
    v13 = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v11,
      byte_1C02208BA,
      v8,
      v9,
      (__int64)&v15,
      (__int64)&v14,
      (__int64 *)&v12);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *))this + 2))(*((_QWORD *)this + 2), a2);
}
