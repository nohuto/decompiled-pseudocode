/*
 * XREFs of ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C00CA500
 * Callers:
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0083898 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C00CA5B8 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0273E54 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTem.c)
 */

void __fastcall CoreMessagingK::ServerPorts::HandleClientDisconnect(
        struct CoreMessagingK::ServerPortInfo *a1,
        struct CoreMessagingK::ClientPortInfo *a2)
{
  struct CoreMessagingK::ClientPortInfo *v4; // rax
  struct CoreMessagingK::ClientPortInfo *v5; // rcx
  __int64 v6; // rax

  if ( (unsigned int)dword_1C02C9500 > 5 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      &unk_1C029FB53);
  v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)a1 + 5);
  v5 = 0LL;
  while ( v4 )
  {
    if ( v4 == a2 )
    {
      v6 = *((_QWORD *)a2 + 3);
      if ( v5 )
        *((_QWORD *)v5 + 3) = v6;
      else
        *((_QWORD *)a1 + 5) = v6;
      *((_QWORD *)a2 + 3) = 0LL;
      break;
    }
    v5 = v4;
    v4 = (struct CoreMessagingK::ClientPortInfo *)*((_QWORD *)v4 + 3);
  }
  ZwClose(*(HANDLE *)a2);
  *(_QWORD *)a2 = 0LL;
  CoreMessagingK::ClientPortInfo::Release(a2);
}
