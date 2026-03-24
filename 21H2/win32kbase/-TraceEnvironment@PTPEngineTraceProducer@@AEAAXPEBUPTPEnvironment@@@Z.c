/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C01CA0FC
 * Callers:
 *     _lambda_fa6a589edf23ed69d06e62f02aabf114_::_lambda_invoker_cdecl_ @ 0x1C00CD4D0 (_lambda_fa6a589edf23ed69d06e62f02aabf114_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01CA020 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C01C9984 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const struct PTPEnvironment *v16; // [rsp+40h] [rbp-10h] BYREF
  __int16 v17; // [rsp+48h] [rbp-8h]
  int v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  if ( (unsigned int)dword_1C024A170 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C024A170, 3LL) )
    {
      v18 = 1;
      v16 = (const struct PTPEnvironment *)((char *)a2 + 412);
      v17 = 96;
      v19 = *((_QWORD *)this + 69);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
        v4,
        byte_1C0221718,
        v5,
        v6,
        (__int64)&v19,
        (__int64)&v18,
        (__int64 *)&v16);
      LODWORD(v5) = dword_1C024A170;
    }
    if ( (unsigned int)v5 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C024A170, 3LL) )
      {
        v16 = a2;
        v17 = 92;
        v19 = *((_QWORD *)this + 69);
        v18 = 2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
          v7,
          byte_1C022179B,
          v8,
          v9,
          (__int64)&v19,
          (__int64)&v18,
          (__int64 *)&v16);
        LODWORD(v8) = dword_1C024A170;
      }
      if ( (unsigned int)v8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C024A170, 3LL) )
        {
          v18 = 1;
          v16 = (const struct PTPEnvironment *)((char *)a2 + 388);
          v17 = 24;
          v19 = *((_QWORD *)this + 69);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
            v10,
            byte_1C0221896,
            v11,
            v12,
            (__int64)&v19,
            (__int64)&v18,
            (__int64 *)&v16);
          LODWORD(v11) = dword_1C024A170;
        }
        if ( (unsigned int)v11 > 5 && tlgKeywordOn((__int64)&dword_1C024A170, 3LL) )
        {
          v18 = 10;
          v16 = (const struct PTPEnvironment *)((char *)a2 + 92);
          v17 = 296;
          v19 = *((_QWORD *)this + 69);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
            v13,
            byte_1C0221817,
            v14,
            v15,
            (__int64)&v19,
            (__int64)&v18,
            (__int64 *)&v16);
        }
      }
    }
  }
}
