/*
 * XREFs of ?SessionInfo@Win32k@InputTraceLogging@@SAXXZ @ 0x1C0161810
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C000D88C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 */

void InputTraceLogging::Win32k::SessionInfo(void)
{
  __int64 v0; // r8
  __int64 v1; // r9
  const char *v2; // rax
  __int64 QuadPart; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
  {
    QuadPart = gliQpcFreq.QuadPart;
    if ( gProtocolType )
    {
      if ( gProtocolType == 1 )
      {
        v2 = "ICA";
      }
      else if ( gProtocolType == 2 )
      {
        v2 = "RDP";
      }
      else if ( (unsigned __int16)gProtocolType == 0xFFFF )
      {
        v2 = "Disconnected";
      }
      else
      {
        v2 = "UNKNOWN";
      }
    }
    else
    {
      v2 = "Console";
    }
    v4 = (__int64)v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<8>>(
      (int)&dword_1C02CA7E0,
      (int)&unk_1C02944EF,
      v0,
      v1,
      (void **)&v4,
      (__int64)&QuadPart);
  }
}
