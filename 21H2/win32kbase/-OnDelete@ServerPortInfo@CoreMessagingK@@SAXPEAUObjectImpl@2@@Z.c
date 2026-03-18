/*
 * XREFs of ?OnDelete@ServerPortInfo@CoreMessagingK@@SAXPEAUObjectImpl@2@@Z @ 0x1C00A90E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z @ 0x1C00A910C (-UninitializeServerPort@ServerPorts@CoreMessagingK@@SAXPEAUServerPortInfo@2@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C02410E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTempla.c)
 */

void __fastcall CoreMessagingK::ServerPortInfo::OnDelete(struct CoreMessagingK::ObjectImpl *a1)
{
  if ( (unsigned int)dword_1C028D8C0 > 5 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      a1,
      &unk_1C026675C);
  CoreMessagingK::ServerPorts::UninitializeServerPort(a1);
}
