/*
 * XREFs of ?UpdateInputGlobals@Power@InputTraceLogging@@SAXW4_LINP_SOURCE@@GK@Z @ 0x1C00E009C
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0080790 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00017E4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z @ 0x1C00DFF84 (-LinpSourceToString@InputTraceLogging@@CAPEBDW4_LINP_SOURCE@@@Z.c)
 */

void InputTraceLogging::Power::UpdateInputGlobals()
{
  int v0; // r8d
  int v1; // r9d
  int v2; // r10d
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+40h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp-10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    LODWORD(v7) = v1;
    LODWORD(v5) = v0;
    v6 = (__int64)InputTraceLogging::LinpSourceToString(v2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&unk_1C029B774,
      v3,
      v4,
      (void **)&v6,
      (__int64)&v5,
      (__int64)&v7);
  }
}
