/*
 * XREFs of ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C01A8DE0
 * Callers:
 *     rimQueueCompleteFrame @ 0x1C01A9AEC (rimQueueCompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01A88C0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall InputTraceLogging::RIM::QueueFrame(const struct RIMDEV *a1, const struct RIMCOMPLETEFRAME *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // r11
  __int64 v6; // rcx
  int v7; // [rsp+60h] [rbp-20h] BYREF
  __int64 v8; // [rsp+68h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp-10h] BYREF
  __int64 v10; // [rsp+78h] [rbp-8h] BYREF
  int v11; // [rsp+98h] [rbp+18h] BYREF
  int v12; // [rsp+A0h] [rbp+20h] BYREF
  int v13; // [rsp+A8h] [rbp+28h] BYREF

  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v6 = *(_QWORD *)(v5 + 464);
    v11 = *(unsigned __int16 *)(v6 + 18);
    v12 = *(unsigned __int16 *)(v6 + 16);
    v13 = *(_DWORD *)(v2 + 196);
    v8 = *(_QWORD *)(v2 + 48);
    v7 = v4;
    v9 = v3;
    v10 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C028EE70,
      byte_1C025EEFA,
      v2,
      v3,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
