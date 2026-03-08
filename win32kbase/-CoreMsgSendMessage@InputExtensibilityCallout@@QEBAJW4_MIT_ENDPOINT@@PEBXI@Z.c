/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0081280
 * Callers:
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C0081340 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x1C008141C (CoreMsgSend.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0159B5C (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z @ 0x1C020B420 (-MitEndpointToString@InputTraceLogging@@CAPEBDW4_MIT_ENDPOINT@@@Z.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  void *v4; // rdi
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(a1, (unsigned int)v2) )
  {
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 512LL) )
    {
      v6 = InputTraceLogging::MitEndpointToString((unsigned int)v2);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (int)&dword_1C02CA7E0,
        (__int64)&v6);
    }
    v4 = *(void **)(a1 + 40 * v2 + 32);
  }
  ExReleasePushLockSharedEx(a1 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
