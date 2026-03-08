/*
 * XREFs of ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01E9B10
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0088890 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::Pointer::BufferInDelayZone(const struct CPointerInputFrame *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // [rsp+58h] [rbp+10h] BYREF
  __int64 v4; // [rsp+60h] [rbp+18h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 32LL) )
  {
    v3 = *(_DWORD *)(v1 + 40);
    v4 = *(_QWORD *)(v1 + 72);
    v5 = *(_QWORD *)(v1 + 216);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (int)&dword_1C02CA7E0,
      (int)&unk_1C029B1AD,
      v1,
      v2,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3);
  }
}
